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


.org 0x09A7A200
.importobj "build/translate/battle_message.o"

.org 0x8184358
    .word gBattleStringsTable

.org 0x8184434
    .word gBattleStringsTable

.org 0x818447c
    .word gBattleStringsTable

.org 0x8184518
    .word gBattleStringsTable

.org 0x81846fc
    .word gBattleStringsTable

.org 0x818477c
    .word gBattleStringsTable

.org 0x81847c4
    .word gBattleStringsTable

.org 0x818480c
    .word gBattleStringsTable

.org 0x8184840
    .word gBattleStringsTable

.org 0x818486c
    .word gBattleStringsTable

.org 0x8184eb4
    .word gBattleStringsTable

.org 0x8184f94
    .word gBattleStringsTable

.org 0x8184fdc
    .word gBattleStringsTable

.org 0x8185074
    .word gBattleStringsTable

.org 0x81850f4
    .word gBattleStringsTable

.org 0x8185134
    .word gBattleStringsTable

.org 0x8185248
    .word gBattleStringsTable

.org 0x81852b4
    .word gBattleStringsTable

.org 0x81852fc
    .word gBattleStringsTable

.org 0x8185348
    .word gBattleStringsTable

.org 0x8185380
    .word gBattleStringsTable

.org 0x81853b0
    .word gBattleStringsTable

.org 0x81941a4
    .word gBattleStringsTable

.org 0x8195180
    .word gBattleStringsTable

.close