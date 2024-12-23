# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts:: @ 81E7D1B
# 3 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 4 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 5 "data/maps/EverGrandeCity/scripts.pory"

# 6 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition: @ 81E7D21
# 7 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 8 "data/maps/EverGrandeCity/scripts.pory"
	end
# 9 "data/maps/EverGrandeCity/scripts.pory"
	
# 10 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CaveGuard::
# 11 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 12 "data/maps/EverGrandeCity/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 13 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 14 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
# 15 "data/maps/EverGrandeCity/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity/scripts.pory"

# 17 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign:: @ 81E7D2B
# 18 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 19 "data/maps/EverGrandeCity/scripts.pory"
	end
# 20 "data/maps/EverGrandeCity/scripts.pory"

# 21 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign:: @ 81E7D34
# 22 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 23 "data/maps/EverGrandeCity/scripts.pory"
	end
# 24 "data/maps/EverGrandeCity/scripts.pory"

# 25 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign:: @ 81E7D3D
# 26 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 27 "data/maps/EverGrandeCity/scripts.pory"
	end
# 28 "data/maps/EverGrandeCity/scripts.pory"

# 29 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande:: @ 81E7D46
# 30 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 31 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 32 "data/maps/EverGrandeCity/scripts.pory"
	end
# 33 "data/maps/EverGrandeCity/scripts.pory"

# 34 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad: @ 81E7D4F
# 35 "data/maps/EverGrandeCity/scripts.pory"
	.string "Entering Victory Road$"
# 36 "data/maps/EverGrandeCity/scripts.pory"

# 37 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague: @ 81E7D65
# 38 "data/maps/EverGrandeCity/scripts.pory"
	.string "Entering Pokémon League\n"
# 39 "data/maps/EverGrandeCity/scripts.pory"
	.string "Center Gate$"
# 40 "data/maps/EverGrandeCity/scripts.pory"

# 41 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign: @ 81E7D89
# 42 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ever Grande City\p"
# 43 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 44 "data/maps/EverGrandeCity/scripts.pory"
	.string "and Pokémon.”$"
# 45 "data/maps/EverGrandeCity/scripts.pory"
	
# 46 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MustHaveAllGymBadges: @ 82296E8
# 47 "data/maps/EverGrandeCity/scripts.pory"
	.string "Beyond this point, only those Trainers\n"
# 48 "data/maps/EverGrandeCity/scripts.pory"
	.string "who have collected all the Gym Badges\l"
# 49 "data/maps/EverGrandeCity/scripts.pory"
	.string "are permitted to enter.\p"
