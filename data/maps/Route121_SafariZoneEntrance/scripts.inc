# 1 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 2 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_MapScripts:: @ 822BBBB
# 3 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route121_SafariZoneEntrance_OnFrame
# 4 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.byte 0
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 6 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_OnFrame: @ 822BBC1
# 7 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, Route121_SafariZoneEntrance_EventScript_ExitSafariZone
# 8 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.2byte 0
# 9 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 10 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_ExitSafariZone:: @ 822BBCB
# 11 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 12 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_ExitSafariZone
# 13 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 15 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 16 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 17 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 18 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_ExitSafariZone: @ 822BBDD
# 19 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_up
# 20 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 21 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 22 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 23 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 24 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 25 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 26 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 27 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 28 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 29 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_WelcomeAttendant:: @ 822BBE6
# 30 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeToSafariZone, MSGBOX_NPC
# 31 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 32 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 33 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_InfoAttendant:: @ 822BBEF
# 34 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lock
# 35 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	faceplayer
# 36 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeFirstTime, MSGBOX_YESNO
# 37 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
# 38 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_FirstTimeInfo
# 39 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
# 40 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
# 41 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 42 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 43 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_FirstTimeInfo:: @ 822BC0E
# 44 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_FirstTimeInfo, MSGBOX_DEFAULT
# 45 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
# 46 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 47 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 48 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger:: @ 822BC18
# 49 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 50 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkitem ITEM_SAFARI_PASS, 1
# 51 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, 0
# 52 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TalkToEntranceAttendant
# 53 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setflag FLAG_HIDE_SAFARI_ZONE_WORKER_WITHOUT_PASS
# 54 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_HasSafariPass
# 55 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 56 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 57 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_HasSafariPass:: @ 822BC18
# 58 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_set FLAG_SHOWN_SAFARI_PASS Route121_SafariZoneEntrance_EventScript_End
# 59 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 60 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_HasSafariPass, MSGBOX_DEFAULT
# 62 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 63 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setflag FLAG_SHOWN_SAFARI_PASS
# 64 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 65 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 66 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_End:: @ 822BC18
# 67 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 69 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TalkToEntranceAttendant:: @ 822BC18
# 70 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 71 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 72 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	showmoneybox 0, 0, 0
# 74 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
# 75 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
# 76 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
# 77 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
# 78 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 79 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 80 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 81 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone:: @ 822BC48
# 82 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE, 1
# 83 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, 0
# 84 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_NoPokeblockCase
# 85 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	call Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon
# 86 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkmoney 500, 0
# 87 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, 0
# 88 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_NotEnoughMoney
# 89 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playse SE_SHOP
# 90 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
# 91 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	removemoney 500, 0
# 92 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	updatemoneybox 0, 0
# 93 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
# 94 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
# 96 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitfanfare
# 97 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 98 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 99 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 100 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_EnterSafariZone
# 101 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special EnterSafariMode
# 103 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 2
# 104 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 105 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	warp MAP_SAFARI_ZONE_SOUTH, 255, 32, 33
# 106 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 107 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 108 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 109 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon:: @ 822BCBF
# 110 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	getpartysize
# 111 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 112 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_ne Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
# 113 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 114 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, 1
# 115 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
# 116 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
# 117 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 118 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 119 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 120 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon:: @ 822BCE9
# 121 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	return
# 122 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 123 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_NoPokeblockCase:: @ 822BCEA
# 124 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
# 125 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 126 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 127 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 128 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_NotEnoughMoney:: @ 822BCF8
# 129 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 130 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 131 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 132 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 133 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter:: @ 822BD06
# 134 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 135 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 136 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkitem ITEM_SAFARI_PASS, 1
# 137 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, 1
# 138 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter2
# 139 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_BackAwayFromCounter
# 140 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 142 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 143 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	
# 144 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter2:: @ 822BD06
# 145 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 147 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 148 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 149 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_BackAwayFromCounter: @ 822BD16
# 150 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 151 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 152 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 153 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_EnterSafariZone: @ 822BD18
# 154 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 155 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 156 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 157 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 158 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 159 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 160 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_down
# 161 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	delay_16
# 162 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 163 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 164 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TrainerTipSign:: @ 822BD21
# 165 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_TrainerTip, MSGBOX_SIGN
# 166 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
