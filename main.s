.gba
.thumb

.open "rowe_eu.gba", "rowe_ch.gba", 0x08000000

// 汉化文本
.loadtable "./tools/PMRSEFRLG_charmap.txt"

.include "translate/vanilla_script.s"
.include "translate/eng_text.s"

// 宠物名字
.org 0x083f0554
.importobj "build/translate/species_name.o"

// 技能名字
.org 0x083f6423
.importobj "build/translate/move_name.o"

// 技能介绍
.org 0x08E51A18
.area 0xA980
.importobj "build/translate/move_des.o"
.endarea

.org 0x080F47D4
    .word gMoveDescriptionPointers

.org 0x080F4858
    .word gMoveDescriptionPointers

.org 0x080F48D4
    .word gMoveDescriptionPointers

.org 0x080F493C
    .word gMoveDescriptionPointers

.org 0x082101F0
    .word gMoveDescriptionPointers

.org 0x0821F1F0
    .word gMoveDescriptionPointers


.close