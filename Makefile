TOOLCHAIN := $(DEVKITARM)
MODERN := 1

LD_SCRIPT := ld_script.txt

export PATH := $(TOOLCHAIN)/bin:$(PATH)
PREFIX := arm-none-eabi-
OBJCOPY := $(PREFIX)objcopy
export CC := $(PREFIX)gcc
export AS := $(PREFIX)as
export CPP := $(PREFIX)cpp
export LD := $(PREFIX)ld

ASFLAGS := -mcpu=arm7tdmi --defsym MODERN=0
CPPFLAGS := -iquote include -Wno-trigraphs -DMODERN=$(MODERN)
CFLAGS := -mthumb -mno-thumb-interwork -mcpu=arm7tdmi -mtune=arm7tdmi -mno-long-calls -march=armv4t -O2 -fira-loop-pressure -fipa-pta

MODERNCC := $(PREFIX)gcc
PATH_MODERNCC := PATH="$(PATH)" $(MODERNCC)
CC1              = $(shell $(PATH_MODERNCC) --print-prog-name=cc1) -quiet

SHELL := /bin/bash -o pipefail

ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE :=
endif

OBJDUMP := $(PREFIX)objdump
PERL := perl

PREPROC 		:= tools/preproc/preproc$(EXE)
SCRIPT 			:= tools/poryscript/poryscript$(EXE)
SCANINC 		:= tools/scaninc/scaninc$(EXE)

OBJ_DIR := build
DATA_ASM_SUBDIR = data
DATA_ASM_BUILDDIR = $(OBJ_DIR)/$(DATA_ASM_SUBDIR)

DATA_ASM_SRCS := $(wildcard $(DATA_ASM_SUBDIR)/*.s)
DATA_ASM_OBJS := $(patsubst $(DATA_ASM_SUBDIR)/%.s,$(DATA_ASM_BUILDDIR)/%.o,$(DATA_ASM_SRCS))

OBJS     := $(DATA_ASM_OBJS)
OBJS_REL := $(patsubst $(OBJ_DIR)/%,%,$(OBJS))

TRANSLATE_C_SUBDIR = translate
TRANSLATE_C_BUILDDIR = $(OBJ_DIR)/$(TRANSLATE_C_SUBDIR)

TRANSLATE_C_SRCS := $(wildcard $(TRANSLATE_C_SUBDIR)/*.c)
TRANSLATE_C_OBJS := $(patsubst $(TRANSLATE_C_SUBDIR)/%.c,$(TRANSLATE_C_BUILDDIR)/%.o,$(TRANSLATE_C_SRCS))

SUBDIRS  := $(sort $(dir $(OBJS)))
SUBDIRS	+= $(sort $(dir $(TRANSLATE_C_OBJS)))

AUTO_GEN_TARGETS :=

$(shell mkdir -p $(SUBDIRS))

MAKEFLAGS += --no-print-directory

# Clear the default suffixes
.SUFFIXES:
# Don't delete intermediate files
.SECONDARY:
# Delete files that weren't built properly
.DELETE_ON_ERROR:

# Secondary expansion is required for dependency variables in object rules.
.SECONDEXPANSION:

.PHONY: all clean build

#all: build/rom.elf
all: build

clean:
	rm -f $(patsubst %.pory,%.inc,$(shell find data/ -type f -name '*.pory'))

%.s: ;
%.pory: ;

data/%.inc: data/%.pory; $(SCRIPT) -i $< -o $@ -fc tools/poryscript/font_config.json -cc tools/poryscript/command_config.json

$(DATA_ASM_BUILDDIR)/%.o: data_dep = $(shell $(SCANINC) -I include -I "" $(DATA_ASM_SUBDIR)/$*.s)

$(DATA_ASM_BUILDDIR)/%.o: $(DATA_ASM_SUBDIR)/%.s $$(data_dep)
	$(PREPROC) $< charmap.txt | $(CPP) -I include | $(AS) $(ASFLAGS) -o $@

build/rom.elf: $(OBJS)
	$(LD) -Map rom.map -T ld_script.txt -o build/rom.elf
	@$(OBJDUMP) -t build/rom.elf | sort -u | grep -E "^0[2389]" | $(PERL) -p -e 's/^(\w{8}) (\w).{6} \S+\t(\w{8}) (\S+)$$/\1 \2 \3 \4/g' > rom.sym

$(TRANSLATE_C_BUILDDIR)/%.o: $(TRANSLATE_C_SUBDIR)/%.c
	$(CPP) $(CPPFLAGS) $< | $(PREPROC) $< charmap.txt -i | $(CC1) $(CFLAGS) -o - - | cat - <(echo -e ".text\n\t.align\t2, 0") | $(AS) $(ASFLAGS) -o $@ -

build: $(TRANSLATE_C_OBJS)
	./tools/armips.exe main.s