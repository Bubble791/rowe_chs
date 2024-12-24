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

.close