# 1 "data/maps/Route115/scripts.pory"

# 2 "data/maps/Route115/scripts.pory"
Route115_MapScripts:: @ 81F2920
# 3 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route115_OnLoad
# 4 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_OnTransition
# 5 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_OnFrame
# 6 "data/maps/Route115/scripts.pory"
	.byte 0
# 7 "data/maps/Route115/scripts.pory"

# 8 "data/maps/Route115/scripts.pory"
Route115_OnLoad: @ 81F2930
# 9 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST
# 10 "data/maps/Route115/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute115West
# 11 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST
# 12 "data/maps/Route115/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute115East
# 13 "data/maps/Route115/scripts.pory"
	end
# 14 "data/maps/Route115/scripts.pory"

# 15 "data/maps/Route115/scripts.pory"
Route115_OnTransition: @ 81F2947
# 16 "data/maps/Route115/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 17 "data/maps/Route115/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_HideMapNamePopup
# 18 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST
# 19 "data/maps/Route115/scripts.pory"
	call_if_eq AbnormalWeather_StartGroudonWeather
# 20 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST
# 21 "data/maps/Route115/scripts.pory"
	call_if_eq AbnormalWeather_StartGroudonWeather
# 22 "data/maps/Route115/scripts.pory"
	end
# 23 "data/maps/Route115/scripts.pory"

# 24 "data/maps/Route115/scripts.pory"
Route115_OnFrame: @ 81F2969
# 25 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 26 "data/maps/Route115/scripts.pory"
	.2byte 0
# 27 "data/maps/Route115/scripts.pory"

# 28 "data/maps/Route115/scripts.pory"
Route115_EventScript_Woman:: @ 81F2973
# 29 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
# 30 "data/maps/Route115/scripts.pory"
	end
# 31 "data/maps/Route115/scripts.pory"

# 32 "data/maps/Route115/scripts.pory"
Route115_EventScript_RouteSignRustboro:: @ 81F297C
# 33 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
# 34 "data/maps/Route115/scripts.pory"
	end
# 35 "data/maps/Route115/scripts.pory"

# 36 "data/maps/Route115/scripts.pory"
Route115_EventScript_MeteorFallsSign:: @ 81F2985
# 37 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
# 38 "data/maps/Route115/scripts.pory"
	end
# 39 "data/maps/Route115/scripts.pory"

# 40 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy:: @ 81F298E
# 41 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
# 42 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 43 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
# 44 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_EventScript_RematchTimothy
# 45 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
# 46 "data/maps/Route115/scripts.pory"
	release
# 47 "data/maps/Route115/scripts.pory"
	end
# 48 "data/maps/Route115/scripts.pory"

# 49 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterTimothy:: @ 81F29BA
# 50 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 51 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 53 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
# 54 "data/maps/Route115/scripts.pory"
	release
# 55 "data/maps/Route115/scripts.pory"
	end
# 56 "data/maps/Route115/scripts.pory"

# 57 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchTimothy:: @ 81F29D9
# 58 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 59 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route115/scripts.pory"
	end
# 61 "data/maps/Route115/scripts.pory"

# 62 "data/maps/Route115/scripts.pory"
Route115_EventScript_Koichi:: @ 81F29F0
# 63 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 64 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route115/scripts.pory"
	end
# 66 "data/maps/Route115/scripts.pory"

# 67 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob:: @ 81F2A07
# 68 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat, Route115_EventScript_RegisterNob
# 69 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 70 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
# 71 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_EventScript_RematchNob
# 72 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 73 "data/maps/Route115/scripts.pory"
	release
# 74 "data/maps/Route115/scripts.pory"
	end
# 75 "data/maps/Route115/scripts.pory"

# 76 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob:: @ 81F2A33
# 77 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 78 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 80 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 81 "data/maps/Route115/scripts.pory"
	release
# 82 "data/maps/Route115/scripts.pory"
	end
# 83 "data/maps/Route115/scripts.pory"

# 84 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob:: @ 81F2A52
# 85 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 86 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 87 "data/maps/Route115/scripts.pory"
	end
# 88 "data/maps/Route115/scripts.pory"

# 89 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy:: @ 81F2A69
# 90 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 91 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 92 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
# 93 "data/maps/Route115/scripts.pory"
	goto_if_eq Route115_EventScript_RematchCyndy
# 94 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 95 "data/maps/Route115/scripts.pory"
	release
# 96 "data/maps/Route115/scripts.pory"
	end
# 97 "data/maps/Route115/scripts.pory"

# 98 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy:: @ 81F2A95
# 99 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 100 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 102 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 103 "data/maps/Route115/scripts.pory"
	release
# 104 "data/maps/Route115/scripts.pory"
	end
# 105 "data/maps/Route115/scripts.pory"

# 106 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy:: @ 81F2AB4
# 107 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 108 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route115/scripts.pory"
	end
# 110 "data/maps/Route115/scripts.pory"

# 111 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector:: @ 81F2ACB
# 112 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 113 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route115/scripts.pory"
	end
# 115 "data/maps/Route115/scripts.pory"

# 116 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra:: @ 81F2AE2
# 117 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 118 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route115/scripts.pory"
	end
# 120 "data/maps/Route115/scripts.pory"

# 121 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden:: @ 81F2AF9
# 122 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 123 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route115/scripts.pory"
	end
# 125 "data/maps/Route115/scripts.pory"

# 126 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix:: @ 81F2B10
# 127 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
# 128 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route115/scripts.pory"
	end
# 130 "data/maps/Route115/scripts.pory"

# 131 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene:: @ 81F2B27
# 132 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 133 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route115/scripts.pory"
	end
# 135 "data/maps/Route115/scripts.pory"

# 136 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene:: @ 81F2B3E
# 137 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
# 138 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route115/scripts.pory"
	end
# 140 "data/maps/Route115/scripts.pory"

# 141 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear: @ 81F2B55
# 142 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 143 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 144 "data/maps/Route115/scripts.pory"
	.string "You never know when wild Pokémon will\n"
# 145 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 146 "data/maps/Route115/scripts.pory"

# 147 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro: @ 81F2BC9
# 148 "data/maps/Route115/scripts.pory"
	.string "Route 115\n"
# 149 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} Rustboro City$"
# 150 "data/maps/Route115/scripts.pory"

# 151 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign: @ 81F2BE3
# 152 "data/maps/Route115/scripts.pory"
	.string "Meteor Falls\n"
# 153 "data/maps/Route115/scripts.pory"
	.string "Fallarbor Town through here$"
