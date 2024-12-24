.gba
.thumb

.open "rowe_eu.gba", "rowe_ch.gba", 0x08000000

// 汉化文本
.loadtable "./tools/PMRSEFRLG_charmap.txt"

.include "translate/vanilla_script.s"

.close