.gba
.thumb

.open "newrom/rowe2.2.1(字库).gba", "rowe2.2.1_ch.gba", 0x08000000

// 汉化文本
.loadtable "./tools/PMRSEFRLG_charmap.txt"

.include "new_version_translate/vanilla_script.s"
// .include "new_version_translate/eng_text.s"

// 宠物名字
.org 0x083F1BC4
.importobj "build/translate/species_name.o"

// 技能名字
.org 0x083f7A93
.importobj "build/translate/move_name.o"

.org 0x083FDFCB
.importobj "build/translate/ability_name.o"

// 技能介绍
// 表格地址E22FC4
.org 0x09A65C00
.importobj "build/translate/move_des.o"
.importobj "build/translate/battle_message.o"
.importobj "build/translate/ability_des.o"

.org 0x80f4388
    .word gMoveDescriptionPointers

.org 0x80f440c
    .word gMoveDescriptionPointers

.org 0x80f4488
    .word gMoveDescriptionPointers

.org 0x80f44f0
    .word gMoveDescriptionPointers

.org 0x8210114
    .word gMoveDescriptionPointers

.org 0x821f118
    .word gMoveDescriptionPointers

.org 0x8184014
    .word gBattleStringsTable

.org 0x81840f0
    .word gBattleStringsTable

.org 0x8184138
    .word gBattleStringsTable

.org 0x81841d4
    .word gBattleStringsTable

.org 0x81843b8
    .word gBattleStringsTable

.org 0x8184438
    .word gBattleStringsTable

.org 0x8184480
    .word gBattleStringsTable

.org 0x81844c8
    .word gBattleStringsTable

.org 0x81844fc
    .word gBattleStringsTable

.org 0x8184528
    .word gBattleStringsTable

.org 0x8184b70
    .word gBattleStringsTable

.org 0x8184c50
    .word gBattleStringsTable

.org 0x8184c98
    .word gBattleStringsTable

.org 0x8184d30
    .word gBattleStringsTable

.org 0x8184db0
    .word gBattleStringsTable

.org 0x8184df0
    .word gBattleStringsTable

.org 0x8184f04
    .word gBattleStringsTable

.org 0x8184f70
    .word gBattleStringsTable

.org 0x8184fb8
    .word gBattleStringsTable

.org 0x8185004
    .word gBattleStringsTable

.org 0x818503c
    .word gBattleStringsTable

.org 0x818506c
    .word gBattleStringsTable

.org 0x8193e60
    .word gBattleStringsTable

.org 0x8194e3c
    .word gBattleStringsTable

.org 0x80001c4
    .word gAbilityDescriptionPointers

.org 0x80f58c0
    .word gAbilityDescriptionPointers

.org 0x820cdc4
    .word gAbilityDescriptionPointers

.close