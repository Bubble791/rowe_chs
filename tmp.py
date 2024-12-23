import os

text = """arm-none-eabi-ld  -T ld_script.txt -o build/rom.elf
arm-none-eabi-ld: warning: cannot find entry symbol Start; not setting start address
arm-none-eabi-ld: build/data/event_scripts.o: in function `FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter':
(script_data+0x26145): undefined reference to `gStringVar4'
arm-none-eabi-ld: build/data/event_scripts.o: in function `VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter':
(script_data+0x27b5f): undefined reference to `gStringVar4'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom':
(script_data+0x2f42a): undefined reference to `gStringVar4'
arm-none-eabi-ld: build/data/event_scripts.o: in function `RustboroCity_DevonCorp_2F_EventScript_WhatFossil':
(script_data+0x37c73): undefined reference to `SCROLLING_SET_FOSSILS'
arm-none-eabi-ld: (script_data+0x37c8a): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer':
(script_data+0x4f831): undefined reference to `gStringVar4'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Game_Modes':
(script_data+0x65be1): undefined reference to `SCROLLING_GAME_MODES'
arm-none-eabi-ld: (script_data+0x65bf8): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_Starter':
(script_data+0x65d98): undefined reference to `VAR_STARTER_POKEMON'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_Starter_2':
(script_data+0x65ddf): undefined reference to `SCROLLING_SET_STARTERS'
arm-none-eabi-ld: (script_data+0x65df6): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City':
(script_data+0x65e95): undefined reference to `SCROLLING_SET_STARTING_TOWNS'
arm-none-eabi-ld: (script_data+0x65eac): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City_85':
(script_data+0x662e7): undefined reference to `HEAL_LOCATION_FOUR_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City_88':
(script_data+0x6630f): undefined reference to `HEAL_LOCATION_FIVE_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City_91':
(script_data+0x66337): undefined reference to `HEAL_LOCATION_SIX_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City_94':
(script_data+0x6635f): undefined reference to `HEAL_LOCATION_SEVEN_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City_97':
(script_data+0x66387): undefined reference to `HEAL_LOCATION_EIGHT_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City_Surprise_22':
(script_data+0x66748): undefined reference to `HEAL_LOCATION_FOUR_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City_Surprise_23':
(script_data+0x6675d): undefined reference to `HEAL_LOCATION_FIVE_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City_Surprise_24':
(script_data+0x66772): undefined reference to `HEAL_LOCATION_SIX_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City_Surprise_25':
(script_data+0x66787): undefined reference to `HEAL_LOCATION_SEVEN_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_Chose_City_Surprise_26':
(script_data+0x6679c): undefined reference to `HEAL_LOCATION_EIGHT_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_SetSeason':
(script_data+0x66e10): undefined reference to `SCROLLING_SEASONS'
arm-none-eabi-ld: (script_data+0x66e27): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_SetSeason_3':
(script_data+0x66e73): undefined reference to `VAR_CURRENT_SEASON'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_SetSeason_4':
(script_data+0x66e88): undefined reference to `VAR_CURRENT_SEASON'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_SetSeason_5':
(script_data+0x66e9d): undefined reference to `VAR_CURRENT_SEASON'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Start_EventScript_SetSeason_6':
(script_data+0x66eb2): undefined reference to `VAR_CURRENT_SEASON'
arm-none-eabi-ld: build/data/event_scripts.o: in function `BattleFrontier_BattleTowerBattleRoom_EventScript_OpponentEnter':
(script_data+0x6dcd2): undefined reference to `gStringVar4'
arm-none-eabi-ld: build/data/event_scripts.o: in function `BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter':
(script_data+0x751b3): undefined reference to `gStringVar4'
arm-none-eabi-ld: (script_data+0x751d3): undefined reference to `gStringVar4'
arm-none-eabi-ld: build/data/event_scripts.o: in function `BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoOpponentIntrosLink':
(script_data+0x751fa): undefined reference to `gStringVar4'
arm-none-eabi-ld: (script_data+0x7521a): undefined reference to `gStringVar4'
arm-none-eabi-ld: build/data/event_scripts.o:(script_data+0x77f6c): more undefined references to `gStringVar4' follow
arm-none-eabi-ld: build/data/event_scripts.o: in function `ThreeIsland_BondBridge_EventScript_Meg':
(script_data+0x9f81b): undefined reference to `OneIsland_KindleRoad_Text_MariaIntro'
arm-none-eabi-ld: (script_data+0x9f81f): undefined reference to `OneIsland_KindleRoad_Text_MariaDefeat'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_StartARandomBattle_Easy':
(script_data+0xa0626): undefined reference to `TRAINER_NURSE_KIRSTEN'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_StartARandomBattle_Medium':
(script_data+0xa0645): undefined reference to `TRAINER_NURSE_SACHIKO'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_StartARandomBattle_Hard':
(script_data+0xa0664): undefined reference to `TRAINER_NURSE_SHERY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack':
(script_data+0xa080d): undefined reference to `SCROLLING_BLUE_NURSE_OPTIONS'
arm-none-eabi-ld: (script_data+0xa0824): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_Clear_Move_Tutor_Data':
(script_data+0xa08a6): undefined reference to `VAR_SHOP_MONEY_TYPE'
arm-none-eabi-ld: (script_data+0xa08a8): undefined reference to `MART_MONEY_TYPE_NORMAL'
arm-none-eabi-ld: (script_data+0xa08ab): undefined reference to `VAR_PARTY_MENU_TUTOR_STATE'
arm-none-eabi-ld: (script_data+0xa08ad): undefined reference to `MOVE_TUTOR_LEVEL_UP_MOVES'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_Move_Learner':
(script_data+0xa08c3): undefined reference to `SCROLLING_BLUE_NURSE_MOVE_LEARN'
arm-none-eabi-ld: (script_data+0xa08da): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_WonderTrade_2':
(script_data+0xa0b51): undefined reference to `VAR_SHOP_MONEY_TYPE'
arm-none-eabi-ld: (script_data+0xa0b53): undefined reference to `MART_MONEY_TYPE_BATTLE_POINTS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_WonderTrade_10':
(script_data+0xa0b71): undefined reference to `WONDER_TRADE_PRICE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_WonderTrade_13':
(script_data+0xa0b84): undefined reference to `VAR_SHOP_MONEY_TYPE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_WonderTrade_22':
(script_data+0xa0ba0): undefined reference to `WONDER_TRADE_PRICE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_EggMoveTutor_Price':
(script_data+0xa0bbc): undefined reference to `VAR_PARTY_MENU_TUTOR_STATE'
arm-none-eabi-ld: (script_data+0xa0bbe): undefined reference to `MOVE_TUTOR_EGG_MOVES'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_1':
(script_data+0xa0bdd): undefined reference to `VAR_SHOP_MONEY_TYPE'
arm-none-eabi-ld: (script_data+0xa0bdf): undefined reference to `MART_MONEY_TYPE_BATTLE_POINTS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price':
(script_data+0xa0caf): undefined reference to `VAR_PARTY_MENU_TUTOR_STATE'
arm-none-eabi-ld: (script_data+0xa0cb1): undefined reference to `MOVE_TUTOR_MOVES'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_1':
(script_data+0xa0cd0): undefined reference to `VAR_SHOP_MONEY_TYPE'
arm-none-eabi-ld: (script_data+0xa0cd2): undefined reference to `MART_MONEY_TYPE_BATTLE_POINTS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_TmMoveTutor_Price':
(script_data+0xa0da2): undefined reference to `VAR_PARTY_MENU_TUTOR_STATE'
arm-none-eabi-ld: (script_data+0xa0da4): undefined reference to `MOVE_TUTOR_TM_MOVES'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_1':
(script_data+0xa0dc3): undefined reference to `VAR_SHOP_MONEY_TYPE'
arm-none-eabi-ld: (script_data+0xa0dc5): undefined reference to `MART_MONEY_TYPE_BATTLE_POINTS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_FlyingTaxi_2':
(script_data+0xa184f): undefined reference to `VAR_SHOP_MONEY_TYPE'
arm-none-eabi-ld: (script_data+0xa1851): undefined reference to `MART_MONEY_TYPE_BATTLE_POINTS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_FlyingTaxi_12':
(script_data+0xa18a0): undefined reference to `FLYING_TAXIS_PRICE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_FlyingTaxi_14':
(script_data+0xa18b3): undefined reference to `VAR_SHOP_MONEY_TYPE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_FlyingTaxi_18':
(script_data+0xa18c0): undefined reference to `FLYING_TAXIS_PRICE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `LilycoveCity_Harbor_EventScript_Ferry_Location_Select':
(script_data+0xa18fe): undefined reference to `SCROLLING_LILYCOVE_HARBOR_AFTER_LEAGUE_OPTIONS'
arm-none-eabi-ld: (script_data+0xa1915): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `LilycoveCity_Harbor_EventScript_Ferry_Location_Select_2':
(script_data+0xa1925): undefined reference to `SCROLLING_LILYCOVE_HARBOR_BEFORE_LEAGUE_OPTIONS'
arm-none-eabi-ld: (script_data+0xa193c): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_Colress':
(script_data+0xa19cb): undefined reference to `VAR_VISITED_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_Colress_First_Encounter_ChooseIsland':
(script_data+0xa1b14): undefined reference to `SCROLLING_SEVII_TICKET'
arm-none-eabi-ld: (script_data+0xa1b2b): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_Colress_First_Encounter_ChooseIsland_11':
(script_data+0xa1d53): undefined reference to `VAR_VISITED_SEVII'
arm-none-eabi-ld: (script_data+0xa1d58): undefined reference to `VAR_VISITED_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_Colress_First_Encounter_ChooseIsland_17':
(script_data+0xa1d9b): undefined reference to `VAR_VISITED_SEVII'
arm-none-eabi-ld: (script_data+0xa1da0): undefined reference to `VAR_VISITED_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_Colress_First_Encounter_ChooseIsland_23':
(script_data+0xa1de3): undefined reference to `VAR_VISITED_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o:(script_data+0xa1de8): more undefined references to `VAR_VISITED_SEVII' follow
arm-none-eabi-ld: build/data/event_scripts.o: in function `SlateportCity_Harbor_EventScript_Ferry_Location_Select':
(script_data+0xa21c3): undefined reference to `SCROLLING_SLATEPORT_HARBOR_AFTER_LEAGUE_OPTIONS'
arm-none-eabi-ld: (script_data+0xa21da): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SlateportCity_Harbor_EventScript_Ferry_Location_Select_2':
(script_data+0xa21ea): undefined reference to `SCROLLING_SLATEPORT_HARBOR_BEFORE_LEAGUE_OPTIONS'
arm-none-eabi-ld: (script_data+0xa2201): undefined reference to `ScriptMenu_ScrollingMultichoice'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Evenscript_WarpUsingFerry_35':
(script_data+0xa24a6): undefined reference to `HEAL_LOCATION_FOUR_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Evenscript_WarpUsingFerry_39':
(script_data+0xa24bb): undefined reference to `HEAL_LOCATION_FIVE_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Evenscript_WarpUsingFerry_43':
(script_data+0xa24d0): undefined reference to `HEAL_LOCATION_SIX_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Evenscript_WarpUsingFerry_47':
(script_data+0xa24e5): undefined reference to `HEAL_LOCATION_SEVEN_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Evenscript_WarpUsingFerry_51':
(script_data+0xa24fa): undefined reference to `HEAL_LOCATION_EIGHT_ISLAND'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Falkner_Battle_New':
(script_data+0xa6f80): undefined reference to `TRAINER_LEADER_FALKNER'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Falkner_Battle_New_2':
(script_data+0xa6f8b): undefined reference to `TRAINER_LEADER_FALKNER'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Falkner_Battle_New_5':
(script_data+0xa6f9a): undefined reference to `TRAINER_LEADER_FALKNER'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Bugsy_Battle_New':
(script_data+0xa726c): undefined reference to `TRAINER_LEADER_BUGSY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Bugsy_Battle_New_2':
(script_data+0xa7277): undefined reference to `TRAINER_LEADER_BUGSY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Bugsy_Battle_New_5':
(script_data+0xa7286): undefined reference to `TRAINER_LEADER_BUGSY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Whitney_Battle_New':
(script_data+0xa7558): undefined reference to `TRAINER_LEADER_WHITNEY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Whitney_Battle_New_2':
(script_data+0xa7563): undefined reference to `TRAINER_LEADER_WHITNEY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Whitney_Battle_New_5':
(script_data+0xa7572): undefined reference to `TRAINER_LEADER_WHITNEY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Morty_Battle_New':
(script_data+0xa7844): undefined reference to `TRAINER_LEADER_MORTY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Morty_Battle_New_2':
(script_data+0xa784f): undefined reference to `TRAINER_LEADER_MORTY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Morty_Battle_New_5':
(script_data+0xa785e): undefined reference to `TRAINER_LEADER_MORTY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Chuck_Battle_New':
(script_data+0xa7b5f): undefined reference to `TRAINER_LEADER_CHUCK'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Chuck_Battle_New_2':
(script_data+0xa7b6a): undefined reference to `TRAINER_LEADER_CHUCK'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Chuck_Battle_New_5':
(script_data+0xa7b79): undefined reference to `TRAINER_LEADER_CHUCK'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Jasmine_Battle_New':
(script_data+0xa7e4b): undefined reference to `TRAINER_LEADER_JASMINE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Jasmine_Battle_New_2':
(script_data+0xa7e56): undefined reference to `TRAINER_LEADER_JASMINE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Jasmine_Battle_New_5':
(script_data+0xa7e65): undefined reference to `TRAINER_LEADER_JASMINE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Pryce_Battle_New':
(script_data+0xa8137): undefined reference to `TRAINER_LEADER_PRYCE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Pryce_Battle_New_2':
(script_data+0xa8142): undefined reference to `TRAINER_LEADER_PRYCE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Pryce_Battle_New_5':
(script_data+0xa8151): undefined reference to `TRAINER_LEADER_PRYCE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Clair_Battle_New':
(script_data+0xa8423): undefined reference to `TRAINER_LEADER_CLAIR'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Clair_Battle_New_2':
(script_data+0xa842e): undefined reference to `TRAINER_LEADER_CLAIR'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_Eventscript_Gym_Leader_Clair_Battle_New_5':
(script_data+0xa843d): undefined reference to `TRAINER_LEADER_CLAIR'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_SetGymTrainers_11':
(script_data+0xa8678): undefined reference to `TRAINER_BIRD_KEEPER_ROD'
arm-none-eabi-ld: (script_data+0xa867b): undefined reference to `TRAINER_BIRD_KEEPER_ABE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_SetGymTrainers_12':
(script_data+0xa8683): undefined reference to `TRAINER_TWINS_AMY_AND_MAY'
arm-none-eabi-ld: (script_data+0xa8686): undefined reference to `TRAINER_BUG_CATCHER_BENNY'
arm-none-eabi-ld: (script_data+0xa8689): undefined reference to `TRAINER_BUG_CATCHER_AL'
arm-none-eabi-ld: (script_data+0xa868c): undefined reference to `TRAINER_BUG_CATCHER_JOSH'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_SetGymTrainers_13':
(script_data+0xa8694): undefined reference to `TRAINER_BEAUTY_VICTORIA'
arm-none-eabi-ld: (script_data+0xa8697): undefined reference to `TRAINER_BEAUTY_SAMANTHA'
arm-none-eabi-ld: (script_data+0xa869a): undefined reference to `TRAINER_LASS_CARRIE'
arm-none-eabi-ld: (script_data+0xa869d): undefined reference to `TRAINER_LASS_BRIDGET'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_SetGymTrainers_14':
(script_data+0xa86a5): undefined reference to `TRAINER_SAGE_JEFFREY'
arm-none-eabi-ld: (script_data+0xa86a8): undefined reference to `TRAINER_SAGE_PING'
arm-none-eabi-ld: (script_data+0xa86ab): undefined reference to `TRAINER_MEDIUM_MARTHA'
arm-none-eabi-ld: (script_data+0xa86ae): undefined reference to `TRAINER_MEDIUM_GRACE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_SetGymTrainers_15':
(script_data+0xa86b6): undefined reference to `TRAINER_BLACKBELT_YOSHI'
arm-none-eabi-ld: (script_data+0xa86b9): undefined reference to `TRAINER_BLACKBELT_LAO'
arm-none-eabi-ld: (script_data+0xa86bc): undefined reference to `TRAINER_BLACKBELT_NOB'
arm-none-eabi-ld: (script_data+0xa86bf): undefined reference to `TRAINER_BLACKBELT_LUNG'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_SetGymTrainers_17':
(script_data+0xa86cc): undefined reference to `TRAINER_SKIER_ROXANNE'
arm-none-eabi-ld: (script_data+0xa86cf): undefined reference to `TRAINER_SKIER_CLARISSA'
arm-none-eabi-ld: (script_data+0xa86d2): undefined reference to `TRAINER_BOARDER_RONALD'
arm-none-eabi-ld: (script_data+0xa86d5): undefined reference to `TRAINER_BOARDER_BRAD'
arm-none-eabi-ld: (script_data+0xa86d8): undefined reference to `TRAINER_BOARDER_DOUGLAS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_SetGymTrainers_18':
(script_data+0xa86e0): undefined reference to `TRAINER_COOLTRAINERM_CODY'
arm-none-eabi-ld: (script_data+0xa86e3): undefined reference to `TRAINER_COOLTRAINERF_FRAN'
arm-none-eabi-ld: (script_data+0xa86e6): undefined reference to `TRAINER_COOLTRAINERM_PAUL'
arm-none-eabi-ld: (script_data+0xa86e9): undefined reference to `TRAINER_COOLTRAINERM_MIKE'
arm-none-eabi-ld: (script_data+0xa86ec): undefined reference to `TRAINER_COOLTRAINERF_LOLA'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_ClearGymTrainers_11':
(script_data+0xa887d): undefined reference to `TRAINER_BIRD_KEEPER_ROD'
arm-none-eabi-ld: (script_data+0xa8880): undefined reference to `TRAINER_BIRD_KEEPER_ABE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_ClearGymTrainers_12':
(script_data+0xa8888): undefined reference to `TRAINER_TWINS_AMY_AND_MAY'
arm-none-eabi-ld: (script_data+0xa888b): undefined reference to `TRAINER_BUG_CATCHER_BENNY'
arm-none-eabi-ld: (script_data+0xa888e): undefined reference to `TRAINER_BUG_CATCHER_AL'
arm-none-eabi-ld: (script_data+0xa8891): undefined reference to `TRAINER_BUG_CATCHER_JOSH'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_ClearGymTrainers_13':
(script_data+0xa8899): undefined reference to `TRAINER_BEAUTY_VICTORIA'
arm-none-eabi-ld: (script_data+0xa889c): undefined reference to `TRAINER_BEAUTY_SAMANTHA'
arm-none-eabi-ld: (script_data+0xa889f): undefined reference to `TRAINER_LASS_CARRIE'
arm-none-eabi-ld: (script_data+0xa88a2): undefined reference to `TRAINER_LASS_BRIDGET'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_ClearGymTrainers_14':
(script_data+0xa88aa): undefined reference to `TRAINER_SAGE_JEFFREY'
arm-none-eabi-ld: (script_data+0xa88ad): undefined reference to `TRAINER_SAGE_PING'
arm-none-eabi-ld: (script_data+0xa88b0): undefined reference to `TRAINER_MEDIUM_MARTHA'
arm-none-eabi-ld: (script_data+0xa88b3): undefined reference to `TRAINER_MEDIUM_GRACE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_ClearGymTrainers_15':
(script_data+0xa88bb): undefined reference to `TRAINER_BLACKBELT_YOSHI'
arm-none-eabi-ld: (script_data+0xa88be): undefined reference to `TRAINER_BLACKBELT_LAO'
arm-none-eabi-ld: (script_data+0xa88c1): undefined reference to `TRAINER_BLACKBELT_NOB'
arm-none-eabi-ld: (script_data+0xa88c4): undefined reference to `TRAINER_BLACKBELT_LUNG'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_ClearGymTrainers_17':
(script_data+0xa88d1): undefined reference to `TRAINER_SKIER_ROXANNE'
arm-none-eabi-ld: (script_data+0xa88d4): undefined reference to `TRAINER_SKIER_CLARISSA'
arm-none-eabi-ld: (script_data+0xa88d7): undefined reference to `TRAINER_BOARDER_RONALD'
arm-none-eabi-ld: (script_data+0xa88da): undefined reference to `TRAINER_BOARDER_BRAD'
arm-none-eabi-ld: (script_data+0xa88dd): undefined reference to `TRAINER_BOARDER_DOUGLAS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_ClearGymTrainers_18':
(script_data+0xa88e5): undefined reference to `TRAINER_COOLTRAINERM_CODY'
arm-none-eabi-ld: (script_data+0xa88e8): undefined reference to `TRAINER_COOLTRAINERF_FRAN'
arm-none-eabi-ld: (script_data+0xa88eb): undefined reference to `TRAINER_COOLTRAINERM_PAUL'
arm-none-eabi-ld: (script_data+0xa88ee): undefined reference to `TRAINER_COOLTRAINERM_MIKE'
arm-none-eabi-ld: (script_data+0xa88f1): undefined reference to `TRAINER_COOLTRAINERF_LOLA'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_Meadow_EventScript_Rocket1':
(script_data+0xaeeae): undefined reference to `TRAINER_TEAM_ROCKET_GRUNT_49'
arm-none-eabi-ld: (script_data+0xaeebc): undefined reference to `FiveIsland_Meadow_Text_Rocket1PostBattle'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_Meadow_EventScript_Rocket2':
(script_data+0xaeec5): undefined reference to `TRAINER_TEAM_ROCKET_GRUNT_50'
arm-none-eabi-ld: (script_data+0xaeed3): undefined reference to `FiveIsland_Meadow_Text_Rocket2PostBattle'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_Meadow_EventScript_Rocket3':
(script_data+0xaeedc): undefined reference to `TRAINER_TEAM_ROCKET_GRUNT_51'
arm-none-eabi-ld: (script_data+0xaeeea): undefined reference to `FiveIsland_Meadow_Text_Rocket3PostBattle'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_RocketWarehouse_EventScript_Admin1':
(script_data+0xaeef3): undefined reference to `TRAINER_TEAM_ROCKET_ADMIN'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_RocketWarehouse_EventScript_Grunt1':
(script_data+0xaef0a): undefined reference to `TRAINER_TEAM_ROCKET_GRUNT_42'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_RocketWarehouse_EventScript_Grunt2':
(script_data+0xaef21): undefined reference to `TRAINER_TEAM_ROCKET_GRUNT_47'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_RocketWarehouse_EventScript_Grunt3':
(script_data+0xaef38): undefined reference to `TRAINER_TEAM_ROCKET_GRUNT_48'
arm-none-eabi-ld: build/data/event_scripts.o: in function `FiveIsland_RocketWarehouse_EventScript_Gideon':
(script_data+0xaef4f): undefined reference to `TRAINER_SCIENTIST_GIDEON'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_Entrance_EventScript_Mason':
(script_data+0xaef66): undefined reference to `TRAINER_MASON_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_Entrance_EventScript_Madeline':
(script_data+0xaef7d): undefined reference to `TRAINER_MADELINE_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_Entrance_EventScript_Nicolas':
(script_data+0xaef94): undefined reference to `TRAINER_NICOLAS_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_Entrance_EventScript_Eve':
(script_data+0xaefab): undefined reference to `TRAINER_EVE_AND_JON_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_Entrance_EventScript_Jon':
(script_data+0xaefc2): undefined reference to `TRAINER_EVE_AND_JON_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_Entrance_EventScript_Miah':
(script_data+0xaefd9): undefined reference to `TRAINER_MIAH_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_EventScript_Lex':
(script_data+0xaeff0): undefined reference to `TRAINER_LEX_AND_NYA_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_EventScript_Nya':
(script_data+0xaf007): undefined reference to `TRAINER_LEX_AND_NYA_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_EventScript_Jackson':
(script_data+0xaf027): undefined reference to `TRAINER_JACKSON_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_EventScript_Katelyn':
(script_data+0xaf03e): undefined reference to `TRAINER_KATELYN_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_EventScript_Evan':
(script_data+0xaf055): undefined reference to `TRAINER_EVAN_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_EventScript_Cyndy':
(script_data+0xaf06c): undefined reference to `TRAINER_CYNDY_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_EventScript_Leroy':
(script_data+0xaf083): undefined reference to `TRAINER_LEROY_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SevenIsland_SevaultCanyon_EventScript_Michelle':
(script_data+0xaf09a): undefined reference to `TRAINER_MICHELLE_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_RuinValley_EventScript_Daryl':
(script_data+0xaf0b1): undefined reference to `TRAINER_DARYL_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_RuinValley_EventScript_Stanly':
(script_data+0xaf0c8): undefined reference to `TRAINER_STANLY_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_RuinValley_EventScript_Foster':
(script_data+0xaf0df): undefined reference to `TRAINER_FOSTER_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_RuinValley_EventScript_Larry':
(script_data+0xaf0f6): undefined reference to `TRAINER_LARRY_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_RuinValley_EventScript_Hector':
(script_data+0xaf10d): undefined reference to `TRAINER_HECTOR_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Riley':
(script_data+0xaf124): undefined reference to `TRAINER_RILEY_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Allison':
(script_data+0xaf13b): undefined reference to `TRAINER_ALLISON_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Jonah':
(script_data+0xaf152): undefined reference to `TRAINER_JONAH_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Dalia':
(script_data+0xaf169): undefined reference to `TRAINER_DALIA_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Nash':
(script_data+0xaf180): undefined reference to `TRAINER_NASH_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Joana':
(script_data+0xaf197): undefined reference to `TRAINER_JOANA_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Garret':
(script_data+0xaf1ae): undefined reference to `TRAINER_GARRET_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Bethany':
(script_data+0xaf1c5): undefined reference to `TRAINER_BETHANY_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Cordell':
(script_data+0xaf1dc): undefined reference to `TRAINER_CORDELL_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Vance':
(script_data+0xaf1f3): undefined reference to `TRAINER_VANCE_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Layton':
(script_data+0xaf20a): undefined reference to `TRAINER_LAYTON_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_PatternBush_EventScript_Marcy':
(script_data+0xaf221): undefined reference to `TRAINER_MARCY_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `SixIsland_GreenPath_EventScript_Jaclyn':
(script_data+0xaf238): undefined reference to `TRAINER_JACLYN_SEVII'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Bird_Keeper_Rod':
(script_data+0xaf24f): undefined reference to `TRAINER_BIRD_KEEPER_ROD'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Bird_Keeper_Abe':
(script_data+0xaf266): undefined reference to `TRAINER_BIRD_KEEPER_ABE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Twins_Amy':
(script_data+0xaf27d): undefined reference to `TRAINER_TWINS_AMY_AND_MAY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Twins_May':
(script_data+0xaf294): undefined reference to `TRAINER_TWINS_AMY_AND_MAY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Bug_Catcher_Al':
(script_data+0xaf2ab): undefined reference to `TRAINER_BUG_CATCHER_AL'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Bug_Catcher_Josh':
(script_data+0xaf2c2): undefined reference to `TRAINER_BUG_CATCHER_JOSH'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Beauty_Victoria':
(script_data+0xaf2d9): undefined reference to `TRAINER_BEAUTY_VICTORIA'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Beauty_Samantha':
(script_data+0xaf2f0): undefined reference to `TRAINER_BEAUTY_SAMANTHA'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Lass_Carrie':
(script_data+0xaf307): undefined reference to `TRAINER_LASS_CARRIE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Lass_Bridget':
(script_data+0xaf31e): undefined reference to `TRAINER_LASS_BRIDGET'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Sage_Jeffrey':
(script_data+0xaf335): undefined reference to `TRAINER_SAGE_JEFFREY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Sage_Ping':
(script_data+0xaf34c): undefined reference to `TRAINER_SAGE_PING'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Medium_Martha':
(script_data+0xaf363): undefined reference to `TRAINER_MEDIUM_MARTHA'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Medium_Grace':
(script_data+0xaf37a): undefined reference to `TRAINER_MEDIUM_GRACE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_BlackBelt_Yoshi':
(script_data+0xaf391): undefined reference to `TRAINER_BLACKBELT_YOSHI'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_BlackBelt_Lao':
(script_data+0xaf3a8): undefined reference to `TRAINER_BLACKBELT_LAO'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_BlackBelt_Nob':
(script_data+0xaf3bf): undefined reference to `TRAINER_BLACKBELT_NOB'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_BlackBelt_Lung':
(script_data+0xaf3d6): undefined reference to `TRAINER_BLACKBELT_LUNG'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Skier_Roxxane':
(script_data+0xaf3ed): undefined reference to `TRAINER_SKIER_ROXANNE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Skier_Clarissa':
(script_data+0xaf404): undefined reference to `TRAINER_SKIER_CLARISSA'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Boarder_Ronald':
(script_data+0xaf41b): undefined reference to `TRAINER_BOARDER_RONALD'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Boarder_Brad':
(script_data+0xaf432): undefined reference to `TRAINER_BOARDER_BRAD'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Boarder_Douglass':
(script_data+0xaf449): undefined reference to `TRAINER_BOARDER_DOUGLAS'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Cooltrainer_Cody':
(script_data+0xaf460): undefined reference to `TRAINER_COOLTRAINERM_CODY'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Cooltrainer_Fran':
(script_data+0xaf477): undefined reference to `TRAINER_COOLTRAINERF_FRAN'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Cooltrainer_Paul':
(script_data+0xaf48e): undefined reference to `TRAINER_COOLTRAINERM_PAUL'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Cooltrainer_Mike':
(script_data+0xaf4a5): undefined reference to `TRAINER_COOLTRAINERM_MIKE'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Sevii_Gym_Trainers_EventScript_Cooltrainer_Lola':
(script_data+0xaf4bc): undefined reference to `TRAINER_COOLTRAINERF_LOLA'
arm-none-eabi-ld: build/data/event_scripts.o: in function `Common_EventScript_FindItem':
(script_data+0xd33df): undefined reference to `GetObjectEventTrainerRangeFromTemplate'
arm-none-eabi-ld: build/data/event_scripts.o: in function `EventScript_RepelWoreOff_AskAnother':
(script_data+0xe6a76): undefined reference to `TryDrawRepelMenu'
arm-none-eabi-ld: build/data/event_scripts.o: in function `EventScript_RepelWoreOff_Chose':
(script_data+0xe6a92): undefined reference to `HandleRepelMenuChoice'
arm-none-eabi-ld: (script_data+0xe6aa4): undefined reference to `gText_PlayerUsedVar2'
arm-none-eabi-ld: build/data/event_scripts.o: in function `EventScript_LureWoreOff_AskAnother':
(script_data+0xe6af8): undefined reference to `TryDrawLureMenu'
arm-none-eabi-ld: build/data/event_scripts.o: in function `EventScript_LureWoreOff_Chose':
(script_data+0xe6b14): undefined reference to `HandleLureMenuChoice'
arm-none-eabi-ld: (script_data+0xe6b26): undefined reference to `gText_PlayerUsedVar2'
arm-none-eabi-ld: build/data/event_scripts.o: in function `EventScript_Follower':
(script_data+0x10aaa6): undefined reference to `ScrFunc_bufferlivemonspeciesname'
arm-none-eabi-ld: (script_data+0x10aaac): undefined reference to `ScrFunc_playfirstmoncry'
arm-none-eabi-ld: (script_data+0x10aab1): undefined reference to `ScrFunc_getfolloweraction'
arm-none-eabi-ld: (script_data+0x10aac2): undefined reference to `ScrFunc_bufferlivemonspeciesname'
arm-none-eabi-ld: build/data/event_scripts.o: in function `EventScript_FollowerFly':
(script_data+0x10aaf6): undefined reference to `ScrFunc_followerfly'
make: *** [Makefile:72: rom.gba] Error 1"""

table = []
for i in text.split("\n"):
    if "undefined reference to" in i:
        textdata = i.split("`")[1].replace("'","")
        if textdata not in table:
            table.append(textdata)

for index, i in enumerate(table):
    print(f"#define {i} {index}")