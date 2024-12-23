# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts:: @ 823BEDA
# 3 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 4 "data/maps/InsideOfTruck/scripts.pory"
	
# 5 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Starter_No_Exploit::
# 6 "data/maps/InsideOfTruck/scripts.pory"
	release
# 7 "data/maps/InsideOfTruck/scripts.pory"
	end
# 8 "data/maps/InsideOfTruck/scripts.pory"
	
# 9 "data/maps/InsideOfTruck/scripts.pory"
	
# 10 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Introduction:
# 11 "data/maps/InsideOfTruck/scripts.pory"
	.string "Welcome to Pokémon R.O.W.E.\n"
# 12 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you have any questions?$"
# 13 "data/maps/InsideOfTruck/scripts.pory"
	
# 14 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Level::
# 15 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 16 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Difficulty, MSGBOX_DEFAULT
# 17 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 18 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_LEVEL, 0
# 19 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 20 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Level_Easy
# 21 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Level_Normal
# 22 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Level_Hard
# 23 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Level
# 24 "data/maps/InsideOfTruck/scripts.pory"
	end
# 25 "data/maps/InsideOfTruck/scripts.pory"
	
# 26 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Difficulty:
# 27 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please select the difficulty level you\n"
# 28 "data/maps/InsideOfTruck/scripts.pory"
	.string "want to play on.$"
# 29 "data/maps/InsideOfTruck/scripts.pory"
	
# 30 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Level_Easy::
# 31 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 32 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Difficulty_Easy, MSGBOX_YESNO
# 33 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
# 34 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_Game_Level
# 35 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DIFFICULTY_SET
# 36 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_EASY
# 37 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Difficulty_Save
# 38 "data/maps/InsideOfTruck/scripts.pory"
	end
# 39 "data/maps/InsideOfTruck/scripts.pory"
	
# 40 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Difficulty_Easy:
# 41 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to play on {COLOR GREEN}Easy mode{COLOR DARK_GREY}?\n"
# 42 "data/maps/InsideOfTruck/scripts.pory"
	.string "This can't be changed later!$"
# 43 "data/maps/InsideOfTruck/scripts.pory"
	
# 44 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Level_Normal::
# 45 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 46 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Difficulty_Normal, MSGBOX_YESNO
# 47 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
# 48 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_Game_Level
# 49 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DIFFICULTY_SET
# 50 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_NORMAL
# 51 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Difficulty_Save
# 52 "data/maps/InsideOfTruck/scripts.pory"
	end
# 53 "data/maps/InsideOfTruck/scripts.pory"
	
# 54 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Difficulty_Normal:
# 55 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to play on {COLOR BLUE}Normal mode{COLOR DARK_GREY}?\n"
# 56 "data/maps/InsideOfTruck/scripts.pory"
	.string "This can be changed later!$"
# 57 "data/maps/InsideOfTruck/scripts.pory"
	
# 58 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Level_Hard::
# 59 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 60 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Difficulty_Hard, MSGBOX_YESNO
# 61 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
# 62 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_Game_Level
# 63 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DIFFICULTY_SET
# 64 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_HARD
# 65 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Difficulty_Save
# 66 "data/maps/InsideOfTruck/scripts.pory"
	end
# 67 "data/maps/InsideOfTruck/scripts.pory"
	
# 68 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Difficulty_Hard:
# 69 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to play on {COLOR RED}Hard mode{COLOR DARK_GREY}?\n"
# 70 "data/maps/InsideOfTruck/scripts.pory"
	.string "This can be changed later!$"
# 71 "data/maps/InsideOfTruck/scripts.pory"

# 72 "data/maps/InsideOfTruck/scripts.pory"
//No Evs Mode Start	
# 73 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evs::
# 74 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 75 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_EVS_MODE, Start_EventScript_Game_Mode_No_Evs_Disable
# 76 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evs, MSGBOX_DEFAULT
# 77 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 78 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 79 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Evs_Enable_Function
# 81 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Evs_Info
# 82 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 83 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 84 "data/maps/InsideOfTruck/scripts.pory"
	end
# 85 "data/maps/InsideOfTruck/scripts.pory"
	
# 86 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evs:
# 87 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 88 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No EVs mode{COLOR DARK_GREY}?$"
# 89 "data/maps/InsideOfTruck/scripts.pory"
	
# 90 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evs_Disable::
# 91 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 92 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evs_Disable, MSGBOX_DEFAULT
# 93 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 94 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 95 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Evs_Disable_Function
# 97 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Evs_Info
# 98 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 99 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 100 "data/maps/InsideOfTruck/scripts.pory"
	end
# 101 "data/maps/InsideOfTruck/scripts.pory"
	
# 102 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evs_Disable:
# 103 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 104 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No EVs mode{COLOR DARK_GREY}?$"
# 105 "data/maps/InsideOfTruck/scripts.pory"
	
# 106 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evs_Disable_Function::
# 107 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 108 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evs_was_Disabled, MSGBOX_DEFAULT
# 109 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_EVS_MODE
# 110 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 111 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evs
# 112 "data/maps/InsideOfTruck/scripts.pory"
	end
# 113 "data/maps/InsideOfTruck/scripts.pory"
	
# 114 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evs_Enable_Function::
# 115 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 116 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evs_was_Enabled, MSGBOX_DEFAULT
# 117 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 118 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_NO_EVS_MODE
# 119 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evs_Disable
# 120 "data/maps/InsideOfTruck/scripts.pory"
	end
# 121 "data/maps/InsideOfTruck/scripts.pory"
	
# 122 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evs_Info::
# 123 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 124 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evs_Info, MSGBOX_DEFAULT
# 125 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_EVS_MODE, Start_EventScript_Game_Mode_No_Evs_Disable
# 126 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evs
# 127 "data/maps/InsideOfTruck/scripts.pory"
	end
# 128 "data/maps/InsideOfTruck/scripts.pory"
	
# 129 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evs_Info:
# 130 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will disable EV gain for both the\n"
# 131 "data/maps/InsideOfTruck/scripts.pory"
	.string "player and enemy trainers.$"
# 132 "data/maps/InsideOfTruck/scripts.pory"
	
# 133 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evs_was_Enabled:
# 134 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No EVs mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 135 "data/maps/InsideOfTruck/scripts.pory"
	
# 136 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evs_was_Disabled:
# 137 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No EVs mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 138 "data/maps/InsideOfTruck/scripts.pory"
//
# 139 "data/maps/InsideOfTruck/scripts.pory"

# 140 "data/maps/InsideOfTruck/scripts.pory"
//Gym Shuffle Mode Start ----------------------------------------------------------------------------------------------------
# 141 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Gym_Shuffle::
# 142 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 143 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_GYM_SHUFFLE_MODE, Start_EventScript_Game_Mode_Gym_Shuffle_Disable
# 144 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Gym_Shuffle, MSGBOX_DEFAULT
# 145 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 146 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 147 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 148 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Gym_Shuffle_Enable_Function
# 149 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Gym_Shuffle_Info
# 150 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 151 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 152 "data/maps/InsideOfTruck/scripts.pory"
	end
# 153 "data/maps/InsideOfTruck/scripts.pory"
	
# 154 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Gym_Shuffle:
# 155 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 156 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Gym Shuffle mode{COLOR DARK_GREY}?$"
# 157 "data/maps/InsideOfTruck/scripts.pory"
	
# 158 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Gym_Shuffle_Disable::
# 159 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 160 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Gym_Shuffle_Disable, MSGBOX_DEFAULT
# 161 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 162 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 163 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 164 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Gym_Shuffle_Disable_Function
# 165 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Gym_Shuffle_Info
# 166 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 167 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 168 "data/maps/InsideOfTruck/scripts.pory"
	end
# 169 "data/maps/InsideOfTruck/scripts.pory"
	
# 170 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Gym_Shuffle_Disable:
# 171 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 172 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Gym Shuffle mode{COLOR DARK_GREY}?$"
# 173 "data/maps/InsideOfTruck/scripts.pory"
	
# 174 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Gym_Shuffle_Disable_Function::
# 175 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 176 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Gym_Shuffle_was_Disabled, MSGBOX_DEFAULT
# 177 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_GYM_SHUFFLE_MODE
# 178 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 179 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Gym_Shuffle
# 180 "data/maps/InsideOfTruck/scripts.pory"
	end
# 181 "data/maps/InsideOfTruck/scripts.pory"
	
# 182 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Gym_Shuffle_Enable_Function::
# 183 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 184 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Gym_Shuffle_was_Enabled, MSGBOX_DEFAULT
# 185 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 186 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_GYM_SHUFFLE_MODE
# 187 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Gym_Shuffle_Disable
# 188 "data/maps/InsideOfTruck/scripts.pory"
	end
# 189 "data/maps/InsideOfTruck/scripts.pory"
	
# 190 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Gym_Shuffle_Info::
# 191 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 192 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Gym_Shuffle_Info, MSGBOX_DEFAULT
# 193 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_GYM_SHUFFLE_MODE, Start_EventScript_Game_Mode_Gym_Shuffle_Disable
# 194 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Gym_Shuffle
# 195 "data/maps/InsideOfTruck/scripts.pory"
	end
# 196 "data/maps/InsideOfTruck/scripts.pory"
	
# 197 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Gym_Shuffle_Info:
# 198 "data/maps/InsideOfTruck/scripts.pory"
	.string "This shuffles around the locations of\n"
# 199 "data/maps/InsideOfTruck/scripts.pory"
	.string "Gyms for a different experience.$"
# 200 "data/maps/InsideOfTruck/scripts.pory"
	
# 201 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Gym_Shuffle_was_Enabled:
# 202 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Gym Shuffle mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 203 "data/maps/InsideOfTruck/scripts.pory"
	
# 204 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Gym_Shuffle_was_Disabled:
# 205 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Gym Shuffle mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 206 "data/maps/InsideOfTruck/scripts.pory"
//
# 207 "data/maps/InsideOfTruck/scripts.pory"

# 208 "data/maps/InsideOfTruck/scripts.pory"
//Double Battle Mode Start ----------------------------------------------------------------------------------------------------
# 209 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Double_Battle::
# 210 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 211 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_DOUBLE_BATTLE_MODE, Start_EventScript_Game_Mode_Double_Battle_Disable
# 212 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle, MSGBOX_DEFAULT
# 213 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 214 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 215 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Double_Battle_Enable_Function
# 217 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Double_Battle_Info
# 218 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 219 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 220 "data/maps/InsideOfTruck/scripts.pory"
	end
# 221 "data/maps/InsideOfTruck/scripts.pory"
	
# 222 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Double_Battle:
# 223 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 224 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Double Battle mode{COLOR DARK_GREY}?$"
# 225 "data/maps/InsideOfTruck/scripts.pory"
	
# 226 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Double_Battle_Disable::
# 227 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 228 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle_Disable, MSGBOX_DEFAULT
# 229 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 230 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 231 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 232 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Double_Battle_Disable_Function
# 233 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Double_Battle_Info
# 234 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 235 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 236 "data/maps/InsideOfTruck/scripts.pory"
	end
# 237 "data/maps/InsideOfTruck/scripts.pory"
	
# 238 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Double_Battle_Disable:
# 239 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 240 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Double Battle mode{COLOR DARK_GREY}?$"
# 241 "data/maps/InsideOfTruck/scripts.pory"
	
# 242 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Double_Battle_Disable_Function::
# 243 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 244 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle_was_Disabled, MSGBOX_DEFAULT
# 245 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_DOUBLE_BATTLE_MODE
# 246 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 247 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Double_Battle
# 248 "data/maps/InsideOfTruck/scripts.pory"
	end
# 249 "data/maps/InsideOfTruck/scripts.pory"
	
# 250 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Double_Battle_Enable_Function::
# 251 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 252 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle_was_Enabled, MSGBOX_DEFAULT
# 253 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 254 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DOUBLE_BATTLE_MODE
# 255 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Double_Battle_Disable
# 256 "data/maps/InsideOfTruck/scripts.pory"
	end
# 257 "data/maps/InsideOfTruck/scripts.pory"
	
# 258 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Double_Battle_Info::
# 259 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 260 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle_Info, MSGBOX_DEFAULT
# 261 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_DOUBLE_BATTLE_MODE, Start_EventScript_Game_Mode_Double_Battle_Disable
# 262 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Double_Battle
# 263 "data/maps/InsideOfTruck/scripts.pory"
	end
# 264 "data/maps/InsideOfTruck/scripts.pory"
	
# 265 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Double_Battle_Info:
# 266 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will make every battle a\n"
# 267 "data/maps/InsideOfTruck/scripts.pory"
	.string "Double Battle as long as you have\l"
# 268 "data/maps/InsideOfTruck/scripts.pory"
	.string "2 Pokémon that can battle.\p" 
# 269 "data/maps/InsideOfTruck/scripts.pory"
	.string "This mode {COLOR GREEN}can{COLOR DARK_GREY} be enabled\n"
# 270 "data/maps/InsideOfTruck/scripts.pory"
	.string "or disabled later in Slateport City.$"
# 271 "data/maps/InsideOfTruck/scripts.pory"
	
# 272 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Double_Battle_was_Enabled:
# 273 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Double Battle mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 274 "data/maps/InsideOfTruck/scripts.pory"
	
# 275 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Double_Battle_was_Disabled:
# 276 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Double Battle mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 277 "data/maps/InsideOfTruck/scripts.pory"
//
# 278 "data/maps/InsideOfTruck/scripts.pory"

# 279 "data/maps/InsideOfTruck/scripts.pory"
//Inverse Mode Start	
# 280 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Inverse::
# 281 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 282 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_INVERSE_MODE, Start_EventScript_Game_Mode_Inverse_Disable
# 283 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Inverse, MSGBOX_DEFAULT
# 284 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 285 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 286 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 287 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Inverse_Enable_Function
# 288 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Inverse_Info
# 289 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 290 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 291 "data/maps/InsideOfTruck/scripts.pory"
	end
# 292 "data/maps/InsideOfTruck/scripts.pory"
	
# 293 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Inverse:
# 294 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 295 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Inverse mode{COLOR DARK_GREY}?$"
# 296 "data/maps/InsideOfTruck/scripts.pory"
	
# 297 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Inverse_Disable::
# 298 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 299 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Inverse_Disable, MSGBOX_DEFAULT
# 300 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 301 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 302 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 303 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Inverse_Disable_Function
# 304 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Inverse_Info
# 305 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 306 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 307 "data/maps/InsideOfTruck/scripts.pory"
	end
# 308 "data/maps/InsideOfTruck/scripts.pory"
	
# 309 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Inverse_Disable:
# 310 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 311 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Inverse mode{COLOR DARK_GREY}?$"
# 312 "data/maps/InsideOfTruck/scripts.pory"
	
# 313 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Inverse_Disable_Function::
# 314 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 315 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Inverse_was_Disabled, MSGBOX_DEFAULT
# 316 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_INVERSE_MODE
# 317 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 318 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Inverse
# 319 "data/maps/InsideOfTruck/scripts.pory"
	end
# 320 "data/maps/InsideOfTruck/scripts.pory"
	
# 321 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Inverse_Enable_Function::
# 322 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 323 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Inverse_was_Enabled, MSGBOX_DEFAULT
# 324 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 325 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_INVERSE_MODE
# 326 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Inverse_Disable
# 327 "data/maps/InsideOfTruck/scripts.pory"
	end
# 328 "data/maps/InsideOfTruck/scripts.pory"
	
# 329 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Inverse_Info::
# 330 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 331 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Inverse_Info, MSGBOX_DEFAULT
# 332 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_INVERSE_MODE, Start_EventScript_Game_Mode_Inverse_Disable
# 333 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Inverse
# 334 "data/maps/InsideOfTruck/scripts.pory"
	end
# 335 "data/maps/InsideOfTruck/scripts.pory"
	
# 336 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Inverse_Info:
# 337 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will invert the type chart in battle.\n"
# 338 "data/maps/InsideOfTruck/scripts.pory"
	.string "Example: Water attacks will be super\l"
# 339 "data/maps/InsideOfTruck/scripts.pory"
	.string "effective against a Grass-type Pokémon.$"
# 340 "data/maps/InsideOfTruck/scripts.pory"
	
# 341 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Inverse_was_Enabled:
# 342 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Inverse mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 343 "data/maps/InsideOfTruck/scripts.pory"
	
# 344 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Inverse_was_Disabled:
# 345 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Inverse mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 346 "data/maps/InsideOfTruck/scripts.pory"
//
# 347 "data/maps/InsideOfTruck/scripts.pory"

# 348 "data/maps/InsideOfTruck/scripts.pory"
//Randomized Mode Start	
# 349 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized::
# 350 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 351 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZED_MODE, Start_EventScript_Game_Mode_Randomized_Disable
# 352 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized, MSGBOX_DEFAULT
# 353 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 354 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 355 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 356 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Randomized_Enable_Function
# 357 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Randomized_Info
# 358 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 359 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 360 "data/maps/InsideOfTruck/scripts.pory"
	end
# 361 "data/maps/InsideOfTruck/scripts.pory"
	
# 362 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized:
# 363 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 364 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized mode{COLOR DARK_GREY}?$"
# 365 "data/maps/InsideOfTruck/scripts.pory"
	
# 366 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Disable::
# 367 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 368 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Disable, MSGBOX_DEFAULT
# 369 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 370 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 371 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 372 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Randomized_Disable_Function
# 373 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Randomized_Info
# 374 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 375 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 376 "data/maps/InsideOfTruck/scripts.pory"
	end
# 377 "data/maps/InsideOfTruck/scripts.pory"
	
# 378 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Disable:
# 379 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 380 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized mode{COLOR DARK_GREY}?$"
# 381 "data/maps/InsideOfTruck/scripts.pory"
	
# 382 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Disable_Function::
# 383 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 384 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_was_Disabled, MSGBOX_DEFAULT
# 385 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZED_MODE
# 386 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 387 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized
# 388 "data/maps/InsideOfTruck/scripts.pory"
	end
# 389 "data/maps/InsideOfTruck/scripts.pory"
	
# 390 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Enable_Function::
# 391 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 392 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_was_Enabled, MSGBOX_DEFAULT
# 393 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 394 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZED_MODE
# 395 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized_Disable
# 396 "data/maps/InsideOfTruck/scripts.pory"
	end
# 397 "data/maps/InsideOfTruck/scripts.pory"
	
# 398 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Info::
# 399 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 400 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Info, MSGBOX_DEFAULT
# 401 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZED_MODE, Start_EventScript_Game_Mode_Randomized_Disable
# 402 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized
# 403 "data/maps/InsideOfTruck/scripts.pory"
	end
# 404 "data/maps/InsideOfTruck/scripts.pory"
	
# 405 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Info:
# 406 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will change every trainer and wild\n"
# 407 "data/maps/InsideOfTruck/scripts.pory"
	.string "Pokémon into another random species.\l"
# 408 "data/maps/InsideOfTruck/scripts.pory"
	.string "The changes varies between each save.$"
# 409 "data/maps/InsideOfTruck/scripts.pory"
	
# 410 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_was_Enabled:
# 411 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 412 "data/maps/InsideOfTruck/scripts.pory"
	
# 413 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_was_Disabled:
# 414 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 415 "data/maps/InsideOfTruck/scripts.pory"
	
# 416 "data/maps/InsideOfTruck/scripts.pory"
//Randomized Party Mode
# 417 "data/maps/InsideOfTruck/scripts.pory"

# 418 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Party::
# 419 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 420 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NEW_GAME_PLUS, Start_EventScript_Game_Mode_NewGamePlus_Check
# 421 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_PARTY_RANDOMIZED_MODE, Start_EventScript_Game_Mode_Randomized_Party_Disable
# 422 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Party, MSGBOX_DEFAULT
# 423 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 424 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 425 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 426 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Randomized_Party_Enable_Function
# 427 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Randomized_Party_Info
# 428 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 429 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 430 "data/maps/InsideOfTruck/scripts.pory"
	end
# 431 "data/maps/InsideOfTruck/scripts.pory"
	
# 432 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Party:
# 433 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 434 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized Party mode{COLOR DARK_GREY}?$"
# 435 "data/maps/InsideOfTruck/scripts.pory"
	
# 436 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Party_Disable::
# 437 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 438 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Party_Disable, MSGBOX_DEFAULT
# 439 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 440 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 441 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 442 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Randomized_Party_Disable_Function
# 443 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Randomized_Party_Info
# 444 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 445 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 446 "data/maps/InsideOfTruck/scripts.pory"
	end
# 447 "data/maps/InsideOfTruck/scripts.pory"
	
# 448 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Party_Disable:
# 449 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 450 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized Party mode{COLOR DARK_GREY}?$"
# 451 "data/maps/InsideOfTruck/scripts.pory"
	
# 452 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Party_Disable_Function::
# 453 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 454 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Party_was_Disabled, MSGBOX_DEFAULT
# 455 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_PARTY_RANDOMIZED_MODE
# 456 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 457 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized_Party
# 458 "data/maps/InsideOfTruck/scripts.pory"
	end
# 459 "data/maps/InsideOfTruck/scripts.pory"
	
# 460 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Party_Enable_Function::
# 461 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 462 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Party_was_Enabled, MSGBOX_DEFAULT
# 463 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 464 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_PARTY_RANDOMIZED_MODE
# 465 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized_Party_Disable
# 466 "data/maps/InsideOfTruck/scripts.pory"
	end
# 467 "data/maps/InsideOfTruck/scripts.pory"
	
# 468 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Party_Info::
# 469 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 470 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Party_Info, MSGBOX_DEFAULT
# 471 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_PARTY_RANDOMIZED_MODE, Start_EventScript_Game_Mode_Randomized_Party_Disable
# 472 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized_Party
# 473 "data/maps/InsideOfTruck/scripts.pory"
	end
# 474 "data/maps/InsideOfTruck/scripts.pory"
	
# 475 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Party_Info:
# 476 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will change every trainer and wild\n"
# 477 "data/maps/InsideOfTruck/scripts.pory"
	.string "Pokémon for another random species plus\l"
# 478 "data/maps/InsideOfTruck/scripts.pory"
	.string "changing your party before each battle.\p"
# 479 "data/maps/InsideOfTruck/scripts.pory"
	.string "This {COLOR RED}may cause higher load times before\n"
# 480 "data/maps/InsideOfTruck/scripts.pory"
	.string "each battle{COLOR DARK_GREY}.$"
# 481 "data/maps/InsideOfTruck/scripts.pory"
	
# 482 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Party_was_Enabled:
# 483 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized Party mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 484 "data/maps/InsideOfTruck/scripts.pory"
	
# 485 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Party_was_Disabled:
# 486 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized Party mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 487 "data/maps/InsideOfTruck/scripts.pory"
	
# 488 "data/maps/InsideOfTruck/scripts.pory"
//
# 489 "data/maps/InsideOfTruck/scripts.pory"

# 490 "data/maps/InsideOfTruck/scripts.pory"
//Little Cup Mode Start	
# 491 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evolution::
# 492 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 493 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NEW_GAME_PLUS, Start_EventScript_Game_Mode_NewGamePlus_Check
# 494 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_EVOLUTION_MODE, Start_EventScript_Game_Mode_No_Evolution_Disable
# 495 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evolution, MSGBOX_DEFAULT
# 496 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 497 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 498 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 499 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Evolution_Enable_Function
# 500 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Evolution_Info
# 501 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 502 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 503 "data/maps/InsideOfTruck/scripts.pory"
	end
# 504 "data/maps/InsideOfTruck/scripts.pory"
	
# 505 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evolution:
# 506 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 507 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No Evolution mode{COLOR DARK_GREY}?$"
# 508 "data/maps/InsideOfTruck/scripts.pory"
	
# 509 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evolution_Disable::
# 510 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 511 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evolution_Disable, MSGBOX_DEFAULT
# 512 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 513 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 514 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 515 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Evolution_Disable_Function
# 516 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Evolution_Info
# 517 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 518 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 519 "data/maps/InsideOfTruck/scripts.pory"
	end
# 520 "data/maps/InsideOfTruck/scripts.pory"
	
# 521 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evolution_Disable:
# 522 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 523 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No Evolution mode{COLOR DARK_GREY}?$"
# 524 "data/maps/InsideOfTruck/scripts.pory"
	
# 525 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evolution_Disable_Function::
# 526 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 527 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evolution_was_Disabled, MSGBOX_DEFAULT
# 528 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_EVOLUTION_MODE
# 529 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 530 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evolution
# 531 "data/maps/InsideOfTruck/scripts.pory"
	end
# 532 "data/maps/InsideOfTruck/scripts.pory"
	
# 533 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evolution_Enable_Function::
# 534 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 535 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evolution_was_Enabled, MSGBOX_DEFAULT
# 536 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 537 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_NO_EVOLUTION_MODE
# 538 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evolution_Disable
# 539 "data/maps/InsideOfTruck/scripts.pory"
	end
# 540 "data/maps/InsideOfTruck/scripts.pory"
	
# 541 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evolution_Info::
# 542 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 543 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evolution_Info, MSGBOX_DEFAULT
# 544 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_EVOLUTION_MODE, Start_EventScript_Game_Mode_No_Evolution_Disable
# 545 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evolution
# 546 "data/maps/InsideOfTruck/scripts.pory"
	end
# 547 "data/maps/InsideOfTruck/scripts.pory"
	
# 548 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evolution_Info:
# 549 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will disable the evolutions for\n"
# 550 "data/maps/InsideOfTruck/scripts.pory"
	.string "both the player and trainers' Pokémon.$"
# 551 "data/maps/InsideOfTruck/scripts.pory"
	
# 552 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evolution_was_Enabled:
# 553 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The No Evolution mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 554 "data/maps/InsideOfTruck/scripts.pory"
	
# 555 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evolution_was_Disabled:
# 556 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The No Evolution mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 557 "data/maps/InsideOfTruck/scripts.pory"
//
# 558 "data/maps/InsideOfTruck/scripts.pory"

# 559 "data/maps/InsideOfTruck/scripts.pory"
//No Split Mode	
# 560 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Split::
# 561 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 562 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_SPLIT_MODE, Start_EventScript_Game_Mode_No_Split_Disable
# 563 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Split MSGBOX_DEFAULT
# 564 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 565 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 566 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 567 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Split_Enable_Function
# 568 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Split_Info
# 569 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 570 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 571 "data/maps/InsideOfTruck/scripts.pory"
	end
# 572 "data/maps/InsideOfTruck/scripts.pory"
	
# 573 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Split:
# 574 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 575 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No Split mode{COLOR DARK_GREY}?$"
# 576 "data/maps/InsideOfTruck/scripts.pory"
	
# 577 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Split_Disable::
# 578 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 579 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Split_Disable, MSGBOX_DEFAULT
# 580 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 581 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 582 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 583 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Split_Disable_Function
# 584 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Split_Info
# 585 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 586 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 587 "data/maps/InsideOfTruck/scripts.pory"
	end
# 588 "data/maps/InsideOfTruck/scripts.pory"
	
# 589 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Split_Disable:
# 590 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 591 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No Split mode{COLOR DARK_GREY}?$"
# 592 "data/maps/InsideOfTruck/scripts.pory"
	
# 593 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Split_Disable_Function::
# 594 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 595 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Split_was_Disabled, MSGBOX_DEFAULT
# 596 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_SPLIT_MODE
# 597 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 598 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Split
# 599 "data/maps/InsideOfTruck/scripts.pory"
	end
# 600 "data/maps/InsideOfTruck/scripts.pory"
	
# 601 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Split_Enable_Function::
# 602 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 603 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Split_was_Enabled, MSGBOX_DEFAULT
# 604 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 605 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_NO_SPLIT_MODE
# 606 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Split_Disable
# 607 "data/maps/InsideOfTruck/scripts.pory"
	end
# 608 "data/maps/InsideOfTruck/scripts.pory"
	
# 609 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Split_Info::
# 610 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 611 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Split_Info, MSGBOX_DEFAULT
# 612 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_SPLIT_MODE, Start_EventScript_Game_Mode_No_Split_Disable
# 613 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Split
# 614 "data/maps/InsideOfTruck/scripts.pory"
	end
# 615 "data/maps/InsideOfTruck/scripts.pory"
	
# 616 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Split_Info:
# 617 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will disable the Physical and\n"
# 618 "data/maps/InsideOfTruck/scripts.pory"
	.string "Special Split added in Gen 4.$"
# 619 "data/maps/InsideOfTruck/scripts.pory"
	
# 620 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Split_was_Enabled:
# 621 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The No Split mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 622 "data/maps/InsideOfTruck/scripts.pory"
	
# 623 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Split_was_Disabled:
# 624 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The No Split mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 625 "data/maps/InsideOfTruck/scripts.pory"
//
# 626 "data/maps/InsideOfTruck/scripts.pory"

# 627 "data/maps/InsideOfTruck/scripts.pory"
//
# 628 "data/maps/InsideOfTruck/scripts.pory"

# 629 "data/maps/InsideOfTruck/scripts.pory"
//Vanilla Mode	
# 630 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Vanilla::
# 631 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 632 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_VANILLA_MODE, Start_EventScript_Game_Mode_Vanilla_Disable
# 633 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Vanilla MSGBOX_DEFAULT
# 634 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 635 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 636 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 637 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Vanilla_Enable_Function
# 638 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Vanilla_Info
# 639 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 640 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 641 "data/maps/InsideOfTruck/scripts.pory"
	end
# 642 "data/maps/InsideOfTruck/scripts.pory"
	
# 643 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Vanilla:
# 644 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 645 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Vanilla mode{COLOR DARK_GREY}?$"
# 646 "data/maps/InsideOfTruck/scripts.pory"
	
# 647 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Vanilla_Disable::
# 648 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 649 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Vanilla_Disable, MSGBOX_DEFAULT
# 650 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 651 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 652 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 653 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Vanilla_Disable_Function
# 654 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Vanilla_Info
# 655 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 656 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 657 "data/maps/InsideOfTruck/scripts.pory"
	end
# 658 "data/maps/InsideOfTruck/scripts.pory"
	
# 659 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Vanilla_Disable:
# 660 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 661 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Vanilla mode{COLOR DARK_GREY}?$"
# 662 "data/maps/InsideOfTruck/scripts.pory"
	
# 663 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Vanilla_Disable_Function::
# 664 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 665 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Vanilla_was_Disabled, MSGBOX_DEFAULT
# 666 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_VANILLA_MODE
# 667 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 668 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Vanilla
# 669 "data/maps/InsideOfTruck/scripts.pory"
	end
# 670 "data/maps/InsideOfTruck/scripts.pory"
	
# 671 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Vanilla_Enable_Function::
# 672 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 673 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Vanilla_was_Enabled, MSGBOX_DEFAULT
# 674 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 675 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_VANILLA_MODE
# 676 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Vanilla_Disable
# 677 "data/maps/InsideOfTruck/scripts.pory"
	end
# 678 "data/maps/InsideOfTruck/scripts.pory"
	
# 679 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Vanilla_Info::
# 680 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 681 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Vanilla_Info, MSGBOX_DEFAULT
# 682 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_VANILLA_MODE, Start_EventScript_Game_Mode_Vanilla_Disable
# 683 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Vanilla
# 684 "data/maps/InsideOfTruck/scripts.pory"
	end
# 685 "data/maps/InsideOfTruck/scripts.pory"
	
# 686 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Vanilla_Info:
# 687 "data/maps/InsideOfTruck/scripts.pory"
	.string "This removes the Pokémon stat\n"
# 688 "data/maps/InsideOfTruck/scripts.pory"
	.string "changes made in this game but it\l"
# 689 "data/maps/InsideOfTruck/scripts.pory"
	.string "does not work for move changes.$"
# 690 "data/maps/InsideOfTruck/scripts.pory"
	
# 691 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Vanilla_was_Enabled:
# 692 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The Vanilla mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 693 "data/maps/InsideOfTruck/scripts.pory"
	
# 694 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Vanilla_was_Disabled:
# 695 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The Vanilla mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 696 "data/maps/InsideOfTruck/scripts.pory"
//
# 697 "data/maps/InsideOfTruck/scripts.pory"

# 698 "data/maps/InsideOfTruck/scripts.pory"
	
# 699 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Default:
# 700 "data/maps/InsideOfTruck/scripts.pory"
	.string "All of the modes were disabled!$"
# 701 "data/maps/InsideOfTruck/scripts.pory"
	
# 702 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Start::
# 703 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Start_Question, MSGBOX_YESNO
# 704 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
# 705 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_Starter_Chose
# 706 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_SetSeason
# 707 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_WallClock
# 708 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_SetIntroFlags
# 709 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_Starter
# 710 "data/maps/InsideOfTruck/scripts.pory"
	end
# 711 "data/maps/InsideOfTruck/scripts.pory"
	
# 712 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Start_Question:
# 713 "data/maps/InsideOfTruck/scripts.pory"
	.string "Are you sure you want to start the\n"
# 714 "data/maps/InsideOfTruck/scripts.pory"
	.string "game with this configuration?\l"
# 715 "data/maps/InsideOfTruck/scripts.pory"
	.string "This can't be undone later.$"
# 716 "data/maps/InsideOfTruck/scripts.pory"
	
# 717 "data/maps/InsideOfTruck/scripts.pory"
Start_EvenScript_Flagset_Difficulty::
# 718 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_DIFFICULTY_SET, Start_EventScript_Give_Items
# 719 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_NORMAL
# 720 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Give_Items
# 721 "data/maps/InsideOfTruck/scripts.pory"
	end
# 722 "data/maps/InsideOfTruck/scripts.pory"
	
# 723 "data/maps/InsideOfTruck/scripts.pory"
//Setting up the Clock
# 724 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_WallClock::
# 725 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_Set_Up_Clock, MSGBOX_DEFAULT
# 726 "data/maps/InsideOfTruck/scripts.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 727 "data/maps/InsideOfTruck/scripts.pory"
	delay 30
# 728 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 729 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 730 "data/maps/InsideOfTruck/scripts.pory"
	//setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 731 "data/maps/InsideOfTruck/scripts.pory"
	//setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 732 "data/maps/InsideOfTruck/scripts.pory"
	return
# 733 "data/maps/InsideOfTruck/scripts.pory"
	end
# 734 "data/maps/InsideOfTruck/scripts.pory"
	
# 735 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_SetUpclock::
# 736 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 737 "data/maps/InsideOfTruck/scripts.pory"
	faceplayer
# 738 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetClock, MSGBOX_SIGN
# 739 "data/maps/InsideOfTruck/scripts.pory"
	end
# 740 "data/maps/InsideOfTruck/scripts.pory"

# 741 "data/maps/InsideOfTruck/scripts.pory"
//Intro Flags per Gender
# 742 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_SetIntroFlags::
# 743 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 744 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 745 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
# 746 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_SetIntroFlagsMale
# 747 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FEMALE
# 748 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_SetIntroFlagsFemale
# 749 "data/maps/InsideOfTruck/scripts.pory"
	return
# 750 "data/maps/InsideOfTruck/scripts.pory"
	end
# 751 "data/maps/InsideOfTruck/scripts.pory"

# 752 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_SetIntroFlagsMale::
# 753 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 754 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 755 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 756 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 757 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 758 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 759 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 760 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 3
# 761 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EvenScript_StoryFlagset
# 762 "data/maps/InsideOfTruck/scripts.pory"
	return
# 763 "data/maps/InsideOfTruck/scripts.pory"
	end
# 764 "data/maps/InsideOfTruck/scripts.pory"

# 765 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_SetIntroFlagsFemale::
# 766 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 767 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 768 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 769 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 770 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 771 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 772 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 3
# 773 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 774 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EvenScript_StoryFlagset
# 775 "data/maps/InsideOfTruck/scripts.pory"
	return
# 776 "data/maps/InsideOfTruck/scripts.pory"
	end
# 777 "data/maps/InsideOfTruck/scripts.pory"
	
# 778 "data/maps/InsideOfTruck/scripts.pory"
Start_EvenScript_StoryFlagset::
# 779 "data/maps/InsideOfTruck/scripts.pory"
	call Start_Flagset
# 780 "data/maps/InsideOfTruck/scripts.pory"
	setflag	  FLAG_SYS_POKEDEX_GET
# 781 "data/maps/InsideOfTruck/scripts.pory"
	setflag	  FLAG_SYS_POKEMON_GET
# 782 "data/maps/InsideOfTruck/scripts.pory"
	setflag	  FLAG_SYS_POKENAV_GET
# 783 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_SYS_B_DASH
# 784 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_SYS_NATIONAL_DEX
# 785 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_UPDATED_SAVE
# 786 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_UPDATED_SAVE_2
# 787 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_ADVENTURE_STARTED
# 788 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_SYS_NATIONAL_DEX
# 789 "data/maps/InsideOfTruck/scripts.pory"
	setflag	  FLAG_SYS_DETECTOR_MODE
# 790 "data/maps/InsideOfTruck/scripts.pory"
	setflag	  FLAG_SYS_DEXNAV_GET
# 791 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_ROUTE101_STATE, 3
# 792 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_BIRCH_LAB_STATE, 5
# 793 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_LITTLEROOT_RIVAL_STATE, 4
# 794 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 795 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_LITTLEROOT_TOWN_STATE, 4
# 796 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_LITTLEROOT_INTRO_STATE 7
# 797 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_RUSTBORO_CITY_STATE, 8
# 798 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_ROUTE104_STATE, 2
# 799 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 800 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_REGISTER_BIRCH_STATE, 2
# 801 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_ROUTE110_STATE, 1
# 802 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_ROUTE119_STATE, 1
# 803 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_PETALBURG_CITY_STATE, 3
# 804 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_PETALBURG_GYM_STATE, 6
# 805 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 806 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_BRINEY_HOUSE_STATE, 2
# 807 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_BRINEY_LOCATION, 1
# 808 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_PETALBURG_WOODS_STATE, 1
# 809 "data/maps/InsideOfTruck/scripts.pory"
	return
# 810 "data/maps/InsideOfTruck/scripts.pory"
	end
# 811 "data/maps/InsideOfTruck/scripts.pory"

# 812 "data/maps/InsideOfTruck/scripts.pory"
EventScript_FirstSave::
# 813 "data/maps/InsideOfTruck/scripts.pory"
	call_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, EventScript_ForceSave
# 814 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 815 "data/maps/InsideOfTruck/scripts.pory"
	return
# 816 "data/maps/InsideOfTruck/scripts.pory"

# 817 "data/maps/InsideOfTruck/scripts.pory"
EventScript_ForceSave::
# 818 "data/maps/InsideOfTruck/scripts.pory"
	call Common_EventScript_SaveGame
# 819 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_TEMP_0, 255
# 820 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
# 821 "data/maps/InsideOfTruck/scripts.pory"
	call_if_eq EventScript_ForceSave
# 822 "data/maps/InsideOfTruck/scripts.pory"
	return
# 823 "data/maps/InsideOfTruck/scripts.pory"
	
# 824 "data/maps/InsideOfTruck/scripts.pory"
Start_Text_Emulator_Text:
# 825 "data/maps/InsideOfTruck/scripts.pory"
	.string "Are you using a supported\n"
# 826 "data/maps/InsideOfTruck/scripts.pory"
	.string "emulator to play this game?$"
# 827 "data/maps/InsideOfTruck/scripts.pory"

# 828 "data/maps/InsideOfTruck/scripts.pory"
Start_Text_Starter_Text:
# 829 "data/maps/InsideOfTruck/scripts.pory"
	.string "What Pokémon would you like\n"
# 830 "data/maps/InsideOfTruck/scripts.pory"
	.string "as your starter Pokémon?$"
# 831 "data/maps/InsideOfTruck/scripts.pory"
	
# 832 "data/maps/InsideOfTruck/scripts.pory"
Text_Start_Pokedex::
# 833 "data/maps/InsideOfTruck/scripts.pory"
	.string "{PLAYER} obtained the Pokedex.$"
# 834 "data/maps/InsideOfTruck/scripts.pory"
	
# 835 "data/maps/InsideOfTruck/scripts.pory"
Text_Start_Lapras::
# 836 "data/maps/InsideOfTruck/scripts.pory"
	.string "{PLAYER} can now use Surf and Dive\n"
# 837 "data/maps/InsideOfTruck/scripts.pory"
	.string "thanks to the Pokeride.$"
# 838 "data/maps/InsideOfTruck/scripts.pory"
	
# 839 "data/maps/InsideOfTruck/scripts.pory"
Text_SetClock:
# 840 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please set up the clock\n"
# 841 "data/maps/InsideOfTruck/scripts.pory"
	.string "before starting.$"
# 842 "data/maps/InsideOfTruck/scripts.pory"
	
# 843 "data/maps/InsideOfTruck/scripts.pory"
Text_Set_Up_Clock:
# 844 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please set up the clock.$"
# 845 "data/maps/InsideOfTruck/scripts.pory"
	
# 846 "data/maps/InsideOfTruck/scripts.pory"
Start_NPC_Change_Mode::
# 847 "data/maps/InsideOfTruck/scripts.pory"
	end
# 848 "data/maps/InsideOfTruck/scripts.pory"
	
# 849 "data/maps/InsideOfTruck/scripts.pory"
Start_Flagset::
# 850 "data/maps/InsideOfTruck/scripts.pory"
	//Flags Start
# 851 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
# 852 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 853 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 854 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 855 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
# 856 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
# 857 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 858 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 859 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 860 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 861 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 862 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 863 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 864 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 865 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 866 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 867 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_BIRCH
# 868 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 869 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
# 870 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL
# 871 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 872 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 873 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 874 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 875 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 876 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_RIVAL
# 877 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_SCOTT
# 878 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_120_STEVEN
# 879 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_VISIBLE
# 880 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS
# 881 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 882 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 883 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 884 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 885 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 886 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 887 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 888 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 889 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA
# 890 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 891 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 892 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 893 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 894 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 895 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 896 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 897 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 898 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 899 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 900 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 901 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 902 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RECEIVED_HM08
# 903 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 904 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 905 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_ROUTE101_STATE, 3
# 906 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_BIRCH_LAB_STATE, 5
# 907 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_LITTLEROOT_RIVAL_STATE, 4
# 908 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 909 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_LITTLEROOT_TOWN_STATE, 4
# 910 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_LITTLEROOT_INTRO_STATE 7
# 911 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_RUSTBORO_CITY_STATE, 8
# 912 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_ROUTE104_STATE, 2
# 913 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 914 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_REGISTER_BIRCH_STATE, 2
# 915 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_ROUTE110_STATE, 1
# 916 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_ROUTE119_STATE, 1
# 917 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_PETALBURG_CITY_STATE, 3
# 918 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_PETALBURG_GYM_STATE, 6
# 919 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 920 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_BRINEY_HOUSE_STATE, 2
# 921 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_BRINEY_LOCATION, 1
# 922 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_PETALBURG_WOODS_STATE, 1
# 923 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 924 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 925 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 926 "data/maps/InsideOfTruck/scripts.pory"
	return
# 927 "data/maps/InsideOfTruck/scripts.pory"
	end	
# 928 "data/maps/InsideOfTruck/scripts.pory"
	
# 929 "data/maps/InsideOfTruck/scripts.pory"
Script_PokeballGet::
# 930 "data/maps/InsideOfTruck/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 931 "data/maps/InsideOfTruck/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 932 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 933 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 934 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 935 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 936 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 937 "data/maps/InsideOfTruck/scripts.pory"
	special SetUnlockedPokedexFlags
# 938 "data/maps/InsideOfTruck/scripts.pory"
	message Text_Start_Lapras
# 939 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 940 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 941 "data/maps/InsideOfTruck/scripts.pory"
	message Text_Start_Pokedex
# 942 "data/maps/InsideOfTruck/scripts.pory"
	special EnableNationalPokedex
# 943 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 944 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 945 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_Flagset
# 946 "data/maps/InsideOfTruck/scripts.pory"
	end
# 947 "data/maps/InsideOfTruck/scripts.pory"

# 948 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_NewGamePlus_Check::
# 949 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 950 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_You_Cant_Chose_this_mode, MSGBOX_DEFAULT
# 951 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
# 952 "data/maps/InsideOfTruck/scripts.pory"
	end
# 953 "data/maps/InsideOfTruck/scripts.pory"

# 954 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_NewGamePlus_Info::
# 955 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 956 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Introduction_NewGamePlus_Information, MSGBOX_DEFAULT
# 957 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Starter_Chose_NewGamePlus
# 958 "data/maps/InsideOfTruck/scripts.pory"
	end

Start_EventScript_Give_Random_Sevii_Ticket::
# 961 "data/maps/InsideOfTruck/scripts.pory"
	random 8
# 962 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 963 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Give_Random_Sevii_Ticket_2
# 966 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Give_Random_Sevii_Ticket_3
# 969 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Give_Random_Sevii_Ticket_4
# 972 "data/maps/InsideOfTruck/scripts.pory"
	case 3, Start_EventScript_Give_Random_Sevii_Ticket_5
# 975 "data/maps/InsideOfTruck/scripts.pory"
	case 4, Start_EventScript_Give_Random_Sevii_Ticket_6
# 978 "data/maps/InsideOfTruck/scripts.pory"
	case 5, Start_EventScript_Give_Random_Sevii_Ticket_7
# 981 "data/maps/InsideOfTruck/scripts.pory"
	case 6, Start_EventScript_Give_Random_Sevii_Ticket_8
# 984 "data/maps/InsideOfTruck/scripts.pory"
	case 7, Start_EventScript_Give_Random_Sevii_Ticket_9
	return

Start_EventScript_Give_Random_Sevii_Ticket_2:
# 964 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_1, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_3:
# 967 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_2, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_4:
# 970 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_3, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_5:
# 973 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_4, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_6:
# 976 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_5, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_7:
# 979 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_6, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_8:
# 982 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_7, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_9:
# 985 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_8, 1
	return


Start_EventScript_Give_Items_New_Game_Plus::
# 992 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Give_Items_New_Game_Plus_Text_0, MSGBOX_DEFAULT
# 993 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 994 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Give_Items_New_Game_Plus_Text_1, MSGBOX_SIGN
# 995 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POTION, 200
# 996 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POKE_BALL, 200
# 997 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_MAX_REPEL, 10
# 998 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_EXIOLITE, 6
# 999 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_CANDY, 6
# 1000 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_WEIGHT, 6
# 1001 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_BRACER, 6
# 1002 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_BELT, 6
# 1003 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_LENS, 6
# 1004 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_BAND, 6
# 1005 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_ANKLET, 6
# 1006 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_LUCKY_EGG, 6
# 1007 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_NUGGET, 20
# 1008 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_ACRO_BIKE
# 1009 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_WAILMER_PAIL
# 1010 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_OLD_ROD
# 1011 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_EXP_SHARE
# 1012 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SURF_TOOL
# 1013 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_DIVE_TOOL
# 1014 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_HEADBUTT_TOOL
# 1015 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1016 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	end


Start_EventScript_Give_Items::
# 1022 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Give_Items_New_Game_Plus_Text_0, MSGBOX_DEFAULT
# 1023 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1024 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Give_Items_Text_0, MSGBOX_SIGN
# 1025 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_ACRO_BIKE
# 1026 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_WAILMER_PAIL
# 1027 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_OLD_ROD
# 1028 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_EXP_SHARE
# 1029 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SURF_TOOL
# 1030 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_DIVE_TOOL
# 1031 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POTION, 5
# 1032 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POKE_BALL, 10
# 1033 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_REPEL, 5
# 1034 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_HEADBUTT_TOOL, 1
# 1036 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	end


Start_EventScript_Starter_Chose::
# 1041 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 1042 "data/maps/InsideOfTruck/scripts.pory"
	faceplayer
# 1043 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Start_EventScript_Starter_No_Exploit
# 1044 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NEW_GAME_PLUS, Start_EventScript_Starter_Chose_NewGamePlus
# 1045 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Introduction, MSGBOX_DEFAULT
# 1046 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1047 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_NEW_GAME_QUESTIONS, 0
# 1048 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1049 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Starter_Chose_3
# 1050 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Starter_Chose_4
# 1051 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Starter_Chose_5
# 1052 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Starter_Chose_6
Start_EventScript_Starter_Chose_1:
	end

Start_EventScript_Starter_Chose_3:
# 1049 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Level
	goto Start_EventScript_Starter_Chose_1

Start_EventScript_Starter_Chose_4:
# 1050 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Starter_Chose_1

Start_EventScript_Starter_Chose_5:
# 1051 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Start
	goto Start_EventScript_Starter_Chose_1

Start_EventScript_Starter_Chose_6:
# 1052 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Start
	goto Start_EventScript_Starter_Chose_1


Start_EventScript_Starter_Chose_NewGamePlus::
# 1058 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 1059 "data/maps/InsideOfTruck/scripts.pory"
	faceplayer
# 1060 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Start_EventScript_Starter_No_Exploit
# 1061 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Introduction_NewGamePlus, MSGBOX_DEFAULT
# 1062 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1063 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_NEW_GAME_PLUS_QUESTIONS, 0
# 1064 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1065 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Starter_Chose_NewGamePlus_3
# 1066 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Starter_Chose_NewGamePlus_4
# 1067 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Starter_Chose_NewGamePlus_5
# 1068 "data/maps/InsideOfTruck/scripts.pory"
	case 3, Start_EventScript_Starter_Chose_NewGamePlus_6
# 1069 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Starter_Chose_NewGamePlus_7
Start_EventScript_Starter_Chose_NewGamePlus_1:
	end

Start_EventScript_Starter_Chose_NewGamePlus_3:
# 1065 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Level
	goto Start_EventScript_Starter_Chose_NewGamePlus_1

Start_EventScript_Starter_Chose_NewGamePlus_4:
# 1066 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Starter_Chose_NewGamePlus_1

Start_EventScript_Starter_Chose_NewGamePlus_5:
# 1067 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_NewGamePlus_Info
	goto Start_EventScript_Starter_Chose_NewGamePlus_1

Start_EventScript_Starter_Chose_NewGamePlus_6:
# 1068 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Start
	goto Start_EventScript_Starter_Chose_NewGamePlus_1

Start_EventScript_Starter_Chose_NewGamePlus_7:
# 1069 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Start
	goto Start_EventScript_Starter_Chose_NewGamePlus_1


Start_EventScript_Game_Modes::
# 1075 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Modes_Text_0, MSGBOX_DEFAULT
# 1076 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1077 "data/maps/InsideOfTruck/scripts.pory"
	scrollingmultichoice SCROLLING_GAME_MODES, 0, 0, 6, TRUE
# 1078 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1079 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Modes_3
# 1080 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Modes_4
# 1081 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Modes_5
# 1082 "data/maps/InsideOfTruck/scripts.pory"
	case 3, Start_EventScript_Game_Modes_6
# 1083 "data/maps/InsideOfTruck/scripts.pory"
	case 4, Start_EventScript_Game_Modes_7
# 1084 "data/maps/InsideOfTruck/scripts.pory"
	case 5, Start_EventScript_Game_Modes_8
# 1085 "data/maps/InsideOfTruck/scripts.pory"
	case 6, Start_EventScript_Game_Modes_9
# 1086 "data/maps/InsideOfTruck/scripts.pory"
	case 7, Start_EventScript_Game_Modes_10
# 1087 "data/maps/InsideOfTruck/scripts.pory"
	case 8, Start_EventScript_Game_Modes_11
# 1088 "data/maps/InsideOfTruck/scripts.pory"
	case 9, Start_EventScript_Game_Modes_12
# 1089 "data/maps/InsideOfTruck/scripts.pory"
	case 10, Start_EventScript_Game_Modes_13
# 1090 "data/maps/InsideOfTruck/scripts.pory"
	case 11, Start_EventScript_Game_Modes_14
# 1091 "data/maps/InsideOfTruck/scripts.pory"
	case 12, Start_EventScript_Game_Modes_15
# 1092 "data/maps/InsideOfTruck/scripts.pory"
	case 13, Start_EventScript_Game_Modes_16
# 1093 "data/maps/InsideOfTruck/scripts.pory"
	case 14, Start_EventScript_Game_Modes_17
# 1094 "data/maps/InsideOfTruck/scripts.pory"
	case 15, Start_EventScript_Game_Modes_18
# 1095 "data/maps/InsideOfTruck/scripts.pory"
	case 16, Start_EventScript_Game_Modes_19
# 1096 "data/maps/InsideOfTruck/scripts.pory"
	case 17, Start_EventScript_Game_Modes_20
# 1097 "data/maps/InsideOfTruck/scripts.pory"
	case 18, Start_EventScript_Game_Modes_20
# 1098 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes_20
Start_EventScript_Game_Modes_1:
	end

Start_EventScript_Game_Modes_3:
# 1079 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Grindless_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_4:
# 1080 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evs
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_5:
# 1081 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Scalemon_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_6:
# 1082 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Gym_Shuffle
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_7:
# 1083 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Inverse
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_8:
# 1084 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_9:
# 1085 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_True_Random_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_10:
# 1086 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized_Party
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_11:
# 1087 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Double_Battle
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_12:
# 1088 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evolution
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_13:
# 1089 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Random_Type_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_14:
# 1090 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Random_Ability_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_15:
# 1091 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Third_Type_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_16:
# 1092 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Old_STAB_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_17:
# 1093 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Split
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_18:
# 1094 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Mega_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_19:
# 1095 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Vanilla
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_20:
# 1099 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Save
	goto Start_EventScript_Game_Modes_1


Start_EventScript_Chose_Starter::
# 1107 "data/maps/InsideOfTruck/scripts.pory"
	generateStarters
# 1108 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_CHOSING_STARTER
# 1109 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_STARTER_POKEMON, 0
# 1110 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_PARTY_RANDOMIZED_MODE, Start_EventScript_Chose_Starter_4
Start_EventScript_Chose_Starter_3:
# 1138 "data/maps/InsideOfTruck/scripts.pory"
	givemon SPECIES_NONE, 10, ITEM_NONE
# 1139 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1140 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_Starter_Text_2, MSGBOX_DEFAULT
# 1141 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1142 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
Start_EventScript_Chose_Starter_1:
# 1144 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1145 "data/maps/InsideOfTruck/scripts.pory"
	special DisableLegendaryMons
# 1146 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1147 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_CHOSING_STARTER
# 1148 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EvenScript_Flagset_Difficulty
	end

Start_EventScript_Chose_Starter_2:
# 1111 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_Starter_Text_0, MSGBOX_DEFAULT
# 1112 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1113 "data/maps/InsideOfTruck/scripts.pory"
	scrollingmultichoice SCROLLING_SET_STARTERS, 0, 0, 6, FALSE
# 1114 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1127 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Chose_Starter_9
# 1128 "data/maps/InsideOfTruck/scripts.pory"
	case 9, Start_EventScript_Chose_Starter_9
# 1116 "data/maps/InsideOfTruck/scripts.pory"
	showmonpic SPECIES_NONE, 10, 3
# 1117 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_Starter_Text_1, MSGBOX_YESNO
# 1118 "data/maps/InsideOfTruck/scripts.pory"
	hidemonpic
# 1119 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_Starter_11
Start_EventScript_Chose_Starter_10:
# 1122 "data/maps/InsideOfTruck/scripts.pory"
	givemon SPECIES_NONE, 10, ITEM_NONE
# 1123 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1124 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1125 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_Starter_Text_2, MSGBOX_DEFAULT
	goto Start_EventScript_Chose_Starter_1

Start_EventScript_Chose_Starter_4:
# 1110 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_TRUE_RANDOM_MODE, Start_EventScript_Chose_Starter_2
	goto Start_EventScript_Chose_Starter_3

Start_EventScript_Chose_Starter_9:
# 1129 "data/maps/InsideOfTruck/scripts.pory"
	givemon SPECIES_NONE, 10, ITEM_NONE
# 1130 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1131 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1132 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_Starter_Text_2, MSGBOX_DEFAULT
# 1133 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Start_EventScript_Chose_Starter_1

Start_EventScript_Chose_Starter_11:
# 1120 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_Starter
	goto Start_EventScript_Chose_Starter_10


Start_EventScript_Chose_City::
# 1154 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_0, MSGBOX_DEFAULT
# 1155 "data/maps/InsideOfTruck/scripts.pory"
	scrollingmultichoice SCROLLING_SET_STARTING_TOWNS, 0, 0, 6, FALSE
# 1156 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1157 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Chose_City_3
# 1174 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Chose_City_4
# 1185 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Chose_City_5
# 1196 "data/maps/InsideOfTruck/scripts.pory"
	case 3, Start_EventScript_Chose_City_6
# 1207 "data/maps/InsideOfTruck/scripts.pory"
	case 4, Start_EventScript_Chose_City_7
# 1218 "data/maps/InsideOfTruck/scripts.pory"
	case 5, Start_EventScript_Chose_City_8
# 1228 "data/maps/InsideOfTruck/scripts.pory"
	case 6, Start_EventScript_Chose_City_9
# 1239 "data/maps/InsideOfTruck/scripts.pory"
	case 7, Start_EventScript_Chose_City_10
# 1249 "data/maps/InsideOfTruck/scripts.pory"
	case 8, Start_EventScript_Chose_City_11
# 1260 "data/maps/InsideOfTruck/scripts.pory"
	case 9, Start_EventScript_Chose_City_12
# 1270 "data/maps/InsideOfTruck/scripts.pory"
	case 10, Start_EventScript_Chose_City_13
# 1280 "data/maps/InsideOfTruck/scripts.pory"
	case 11, Start_EventScript_Chose_City_14
# 1290 "data/maps/InsideOfTruck/scripts.pory"
	case 12, Start_EventScript_Chose_City_15
# 1300 "data/maps/InsideOfTruck/scripts.pory"
	case 13, Start_EventScript_Chose_City_16
# 1310 "data/maps/InsideOfTruck/scripts.pory"
	case 14, Start_EventScript_Chose_City_17
# 1320 "data/maps/InsideOfTruck/scripts.pory"
	case 15, Start_EventScript_Chose_City_18
# 1330 "data/maps/InsideOfTruck/scripts.pory"
	case 16, Start_EventScript_Chose_City_19
# 1340 "data/maps/InsideOfTruck/scripts.pory"
	case 17, Start_EventScript_Chose_City_20
# 1350 "data/maps/InsideOfTruck/scripts.pory"
	case 18, Start_EventScript_Chose_City_21
# 1360 "data/maps/InsideOfTruck/scripts.pory"
	case 19, Start_EventScript_Chose_City_22
# 1370 "data/maps/InsideOfTruck/scripts.pory"
	case 20, Start_EventScript_Chose_City_23
# 1380 "data/maps/InsideOfTruck/scripts.pory"
	case 21, Start_EventScript_Chose_City_24
# 1390 "data/maps/InsideOfTruck/scripts.pory"
	case 22, Start_EventScript_Chose_City_25
# 1400 "data/maps/InsideOfTruck/scripts.pory"
	case 23, Start_EventScript_Chose_City_26
# 1410 "data/maps/InsideOfTruck/scripts.pory"
	case 24, Start_EventScript_Chose_City_27
Start_EventScript_Chose_City_1:
	end

Start_EventScript_Chose_City_3:
# 1159 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_1, MSGBOX_YESNO
# 1160 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_29
Start_EventScript_Chose_City_28:
# 1163 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1164 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 1165 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Start_EventScript_Chose_City_101
# 1170 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 24, 9
# 1171 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
Start_EventScript_Chose_City_100:
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_4:
# 1176 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_2, MSGBOX_YESNO
# 1177 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_32
Start_EventScript_Chose_City_31:
# 1180 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1181 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 1182 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_OLDALE_TOWN, 255, 14, 8
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_5:
# 1187 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_3, MSGBOX_YESNO
# 1188 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_35
Start_EventScript_Chose_City_34:
# 1191 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1192 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 1193 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_PETALBURG_CITY, 255, 20, 17
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_6:
# 1198 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_4, MSGBOX_YESNO
# 1199 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_38
Start_EventScript_Chose_City_37:
# 1202 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1203 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 1204 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_RUSTBORO_CITY, 255, 16, 39
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_7:
# 1209 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_5, MSGBOX_YESNO
# 1210 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_41
Start_EventScript_Chose_City_40:
# 1213 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1214 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 1215 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_DEWFORD_TOWN, 255, 2, 11
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_8:
# 1220 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_6, MSGBOX_YESNO
# 1221 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_44
Start_EventScript_Chose_City_43:
# 1224 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1225 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 1226 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SLATEPORT_CITY, 255, 19, 20
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_9:
# 1230 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_7, MSGBOX_YESNO
# 1231 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_47
Start_EventScript_Chose_City_46:
# 1234 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1235 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 1236 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_MAUVILLE_CITY, 255, 34, 6
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_10:
# 1241 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_8, MSGBOX_YESNO
# 1242 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_50
Start_EventScript_Chose_City_49:
# 1245 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1246 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
# 1247 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_VERDANTURF_TOWN, 255, 22, 4
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_11:
# 1251 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_9, MSGBOX_YESNO
# 1252 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_53
Start_EventScript_Chose_City_52:
# 1255 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1256 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 1257 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FALLARBOR_TOWN, 255, 14, 8
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_12:
# 1262 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_10, MSGBOX_YESNO
# 1263 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_56
Start_EventScript_Chose_City_55:
# 1266 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1267 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 1268 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LAVARIDGE_TOWN, 255, 9, 7
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_13:
# 1272 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_11, MSGBOX_YESNO
# 1273 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_59
Start_EventScript_Chose_City_58:
# 1276 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1277 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 1278 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FORTREE_CITY, 255, 5, 7
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_14:
# 1282 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_12, MSGBOX_YESNO
# 1283 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_62
Start_EventScript_Chose_City_61:
# 1286 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1287 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 1288 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LILYCOVE_CITY, 255, 24, 15
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_15:
# 1292 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_13, MSGBOX_YESNO
# 1293 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_65
Start_EventScript_Chose_City_64:
# 1296 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1297 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 1298 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_MOSSDEEP_CITY, 255, 28, 17
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_16:
# 1302 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_14, MSGBOX_YESNO
# 1303 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_68
Start_EventScript_Chose_City_67:
# 1306 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1307 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 1308 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY, 255, 43, 32
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_17:
# 1312 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_14, MSGBOX_YESNO
# 1313 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_71
Start_EventScript_Chose_City_70:
# 1316 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1317 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
# 1318 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_PACIFIDLOG_TOWN, 255, 8, 16
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_18:
# 1322 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_15, MSGBOX_YESNO
# 1323 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_74
Start_EventScript_Chose_City_73:
# 1326 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1327 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 1328 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_EVER_GRANDE_CITY, 255, 27, 49
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_19:
# 1332 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_16, MSGBOX_YESNO
# 1333 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_77
Start_EventScript_Chose_City_76:
# 1336 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_1, 1
# 1337 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_ONE_ISLAND
# 1338 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_ONE_ISLAND, 255, 14, 6
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_20:
# 1342 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_17, MSGBOX_YESNO
# 1343 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_80
Start_EventScript_Chose_City_79:
# 1346 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_2, 1
# 1347 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_TWO_ISLAND
# 1348 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_TWO_ISLAND, 255, 21, 8
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_21:
# 1352 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_18, MSGBOX_YESNO
# 1353 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_83
Start_EventScript_Chose_City_82:
# 1356 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_3, 1
# 1357 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_THREE_ISLAND
# 1358 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_THREE_ISLAND, 255, 14, 28
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_22:
# 1362 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_19, MSGBOX_YESNO
# 1363 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_86
Start_EventScript_Chose_City_85:
# 1366 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_4, 1
# 1367 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FOUR_ISLAND
# 1368 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FOUR_ISLAND, 255, 18, 21
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_23:
# 1372 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_20, MSGBOX_YESNO
# 1373 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_89
Start_EventScript_Chose_City_88:
# 1376 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_5, 1
# 1377 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FIVE_ISLAND
# 1378 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FIVE_ISLAND, 255, 29, 16
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_24:
# 1382 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_21, MSGBOX_YESNO
# 1383 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_92
Start_EventScript_Chose_City_91:
# 1386 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_6, 1
# 1387 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SIX_ISLAND
# 1388 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SIX_ISLAND, 255, 11, 12
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_25:
# 1392 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_22, MSGBOX_YESNO
# 1393 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_95
Start_EventScript_Chose_City_94:
# 1396 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_7, 1
# 1397 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
# 1398 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SEVEN_ISLAND, 255, 12, 4
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_26:
# 1402 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_23, MSGBOX_YESNO
# 1403 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_98
Start_EventScript_Chose_City_97:
# 1406 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_8, 1
# 1407 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_EIGHT_ISLAND
# 1408 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_EIGHT_ISLAND, 255, 24, 25
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_27:
# 1412 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City_Surprise
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_29:
# 1161 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_28

Start_EventScript_Chose_City_32:
# 1178 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_31

Start_EventScript_Chose_City_35:
# 1189 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_34

Start_EventScript_Chose_City_38:
# 1200 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_37

Start_EventScript_Chose_City_41:
# 1211 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_40

Start_EventScript_Chose_City_44:
# 1222 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_43

Start_EventScript_Chose_City_47:
# 1232 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_46

Start_EventScript_Chose_City_50:
# 1243 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_49

Start_EventScript_Chose_City_53:
# 1253 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_52

Start_EventScript_Chose_City_56:
# 1264 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_55

Start_EventScript_Chose_City_59:
# 1274 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_58

Start_EventScript_Chose_City_62:
# 1284 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_61

Start_EventScript_Chose_City_65:
# 1294 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_64

Start_EventScript_Chose_City_68:
# 1304 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_67

Start_EventScript_Chose_City_71:
# 1314 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_70

Start_EventScript_Chose_City_74:
# 1324 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_73

Start_EventScript_Chose_City_77:
# 1334 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_76

Start_EventScript_Chose_City_80:
# 1344 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_79

Start_EventScript_Chose_City_83:
# 1354 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_82

Start_EventScript_Chose_City_86:
# 1364 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_85

Start_EventScript_Chose_City_89:
# 1374 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_88

Start_EventScript_Chose_City_92:
# 1384 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_91

Start_EventScript_Chose_City_95:
# 1394 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_94

Start_EventScript_Chose_City_98:
# 1404 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_97

Start_EventScript_Chose_City_101:
# 1166 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 15, 9
# 1167 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto Start_EventScript_Chose_City_100


Start_EventScript_Chose_City_Surprise::
# 1419 "data/maps/InsideOfTruck/scripts.pory"
	random 24
# 1420 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1422 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Chose_City_Surprise_3
# 1435 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Chose_City_Surprise_4
# 1442 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Chose_City_Surprise_5
# 1449 "data/maps/InsideOfTruck/scripts.pory"
	case 3, Start_EventScript_Chose_City_Surprise_6
# 1456 "data/maps/InsideOfTruck/scripts.pory"
	case 4, Start_EventScript_Chose_City_Surprise_7
# 1463 "data/maps/InsideOfTruck/scripts.pory"
	case 5, Start_EventScript_Chose_City_Surprise_8
# 1469 "data/maps/InsideOfTruck/scripts.pory"
	case 6, Start_EventScript_Chose_City_Surprise_9
# 1476 "data/maps/InsideOfTruck/scripts.pory"
	case 7, Start_EventScript_Chose_City_Surprise_10
# 1482 "data/maps/InsideOfTruck/scripts.pory"
	case 8, Start_EventScript_Chose_City_Surprise_11
# 1489 "data/maps/InsideOfTruck/scripts.pory"
	case 9, Start_EventScript_Chose_City_Surprise_12
# 1495 "data/maps/InsideOfTruck/scripts.pory"
	case 10, Start_EventScript_Chose_City_Surprise_13
# 1501 "data/maps/InsideOfTruck/scripts.pory"
	case 11, Start_EventScript_Chose_City_Surprise_14
# 1507 "data/maps/InsideOfTruck/scripts.pory"
	case 12, Start_EventScript_Chose_City_Surprise_15
# 1513 "data/maps/InsideOfTruck/scripts.pory"
	case 13, Start_EventScript_Chose_City_Surprise_16
# 1519 "data/maps/InsideOfTruck/scripts.pory"
	case 14, Start_EventScript_Chose_City_Surprise_17
# 1525 "data/maps/InsideOfTruck/scripts.pory"
	case 15, Start_EventScript_Chose_City_Surprise_18
# 1531 "data/maps/InsideOfTruck/scripts.pory"
	case 16, Start_EventScript_Chose_City_Surprise_19
# 1537 "data/maps/InsideOfTruck/scripts.pory"
	case 17, Start_EventScript_Chose_City_Surprise_20
# 1543 "data/maps/InsideOfTruck/scripts.pory"
	case 18, Start_EventScript_Chose_City_Surprise_21
# 1549 "data/maps/InsideOfTruck/scripts.pory"
	case 19, Start_EventScript_Chose_City_Surprise_22
# 1555 "data/maps/InsideOfTruck/scripts.pory"
	case 20, Start_EventScript_Chose_City_Surprise_23
# 1561 "data/maps/InsideOfTruck/scripts.pory"
	case 21, Start_EventScript_Chose_City_Surprise_24
# 1567 "data/maps/InsideOfTruck/scripts.pory"
	case 22, Start_EventScript_Chose_City_Surprise_25
# 1573 "data/maps/InsideOfTruck/scripts.pory"
	case 23, Start_EventScript_Chose_City_Surprise_26
Start_EventScript_Chose_City_Surprise_3:
# 1424 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 1425 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Start_EventScript_Chose_City_Surprise_32
# 1430 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 24, 9
# 1431 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
Start_EventScript_Chose_City_Surprise_31:
Start_EventScript_Chose_City_Surprise_1:
	end

Start_EventScript_Chose_City_Surprise_4:
# 1437 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1438 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 1439 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_OLDALE_TOWN, 255, 14, 8
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_5:
# 1444 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1445 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 1446 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_PETALBURG_CITY, 255, 20, 17
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_6:
# 1451 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1452 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 1453 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_RUSTBORO_CITY, 255, 16, 39
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_7:
# 1458 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1459 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 1460 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_DEWFORD_TOWN, 255, 2, 11
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_8:
# 1465 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1466 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 1467 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SLATEPORT_CITY, 255, 19, 20
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_9:
# 1471 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1472 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 1473 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_MAUVILLE_CITY, 255, 22, 6
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_10:
# 1478 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1479 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
# 1480 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_VERDANTURF_TOWN, 255, 16, 4
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_11:
# 1484 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1485 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 1486 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FALLARBOR_TOWN, 255, 14, 8
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_12:
# 1491 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1492 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 1493 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LAVARIDGE_TOWN, 255, 9, 7
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_13:
# 1497 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1498 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 1499 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FORTREE_CITY, 255, 5, 7
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_14:
# 1503 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1504 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 1505 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LILYCOVE_CITY, 255, 24, 15
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_15:
# 1509 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1510 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 1511 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_MOSSDEEP_CITY, 255, 28, 17
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_16:
# 1515 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1516 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 1517 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY, 255, 43, 32
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_17:
# 1521 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1522 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
# 1523 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_PACIFIDLOG_TOWN, 255, 8, 16
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_18:
# 1527 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1528 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 1529 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_EVER_GRANDE_CITY, 255, 27, 49
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_19:
# 1533 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_1, 1
# 1534 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_ONE_ISLAND
# 1535 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_ONE_ISLAND, 255, 14, 6
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_20:
# 1539 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_2, 1
# 1540 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_TWO_ISLAND
# 1541 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_TWO_ISLAND, 255, 21, 8
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_21:
# 1545 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_3, 1
# 1546 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_THREE_ISLAND
# 1547 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_THREE_ISLAND, 255, 14, 28
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_22:
# 1551 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_4, 1
# 1552 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FOUR_ISLAND
# 1553 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FOUR_ISLAND, 255, 18, 21
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_23:
# 1557 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_5, 1
# 1558 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FIVE_ISLAND
# 1559 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FIVE_ISLAND, 255, 29, 16
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_24:
# 1563 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_6, 1
# 1564 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SIX_ISLAND
# 1565 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SIX_ISLAND, 255, 11, 12
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_25:
# 1569 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_7, 1
# 1570 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
# 1571 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SEVEN_ISLAND, 255, 12, 4
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_26:
# 1575 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_8, 1
# 1576 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_EIGHT_ISLAND
# 1577 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SEVEN_ISLAND, 255, 24, 25
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_27:
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_28:
# 1426 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 15, 9
# 1427 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto Start_EventScript_Chose_City_Surprise_27

Start_EventScript_Chose_City_Surprise_29:
# 1430 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 24, 9
# 1431 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	goto Start_EventScript_Chose_City_Surprise_27

# 1425 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Start_EventScript_Chose_City_Surprise_28
	goto Start_EventScript_Chose_City_Surprise_29

Start_EventScript_Chose_City_Surprise_32:
# 1426 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 15, 9
# 1427 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto Start_EventScript_Chose_City_Surprise_31


Start_EventScript_Game_Mode_Random_Type_Mode::
# 1598 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1600 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_TYPE_RANDOMIZER_MODE, Start_EventScript_Game_Mode_Random_Type_Mode_2
# 1606 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Type_Mode_Text_1, MSGBOX_DEFAULT
# 1607 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1608 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Random_Type_Mode_1:
# 1611 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1612 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Random_Type_Mode_7
# 1626 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Random_Type_Mode_8
# 1629 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Random_Type_Mode_9
# 1630 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Random_Type_Mode_9
Start_EventScript_Game_Mode_Random_Type_Mode_5:
# 1635 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Random_Type_Mode
	end

Start_EventScript_Game_Mode_Random_Type_Mode_2:
# 1601 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Type_Mode_Text_0, MSGBOX_DEFAULT
# 1602 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1603 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Random_Type_Mode_1

Start_EventScript_Game_Mode_Random_Type_Mode_7:
# 1613 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_TYPE_RANDOMIZER_MODE, Start_EventScript_Game_Mode_Random_Type_Mode_11
# 1620 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1621 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Type_Mode_Text_3, MSGBOX_DEFAULT
# 1622 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1623 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_TYPE_RANDOMIZER_MODE
Start_EventScript_Game_Mode_Random_Type_Mode_10:
	goto Start_EventScript_Game_Mode_Random_Type_Mode_5

Start_EventScript_Game_Mode_Random_Type_Mode_8:
# 1627 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Type_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Random_Type_Mode_5

Start_EventScript_Game_Mode_Random_Type_Mode_9:
# 1631 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Random_Type_Mode_5

Start_EventScript_Game_Mode_Random_Type_Mode_11:
# 1614 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1615 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Type_Mode_Text_2, MSGBOX_DEFAULT
# 1616 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1617 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_TYPE_RANDOMIZER_MODE
	goto Start_EventScript_Game_Mode_Random_Type_Mode_10


Start_EventScript_Game_Mode_Random_Ability_Mode::
# 1641 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1643 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_ABILITY_RANDOMIZER_MODE, Start_EventScript_Game_Mode_Random_Ability_Mode_2
# 1649 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Ability_Mode_Text_1, MSGBOX_DEFAULT
# 1650 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1651 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Random_Ability_Mode_1:
# 1654 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1655 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Random_Ability_Mode_7
# 1669 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Random_Ability_Mode_8
# 1672 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Random_Ability_Mode_9
# 1673 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Random_Ability_Mode_9
Start_EventScript_Game_Mode_Random_Ability_Mode_5:
# 1678 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Random_Ability_Mode
	end

Start_EventScript_Game_Mode_Random_Ability_Mode_2:
# 1644 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Ability_Mode_Text_0, MSGBOX_DEFAULT
# 1645 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1646 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Random_Ability_Mode_1

Start_EventScript_Game_Mode_Random_Ability_Mode_7:
# 1656 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_ABILITY_RANDOMIZER_MODE, Start_EventScript_Game_Mode_Random_Ability_Mode_11
# 1663 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1664 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Ability_Mode_Text_3, MSGBOX_DEFAULT
# 1665 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1666 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_ABILITY_RANDOMIZER_MODE
Start_EventScript_Game_Mode_Random_Ability_Mode_10:
	goto Start_EventScript_Game_Mode_Random_Ability_Mode_5

Start_EventScript_Game_Mode_Random_Ability_Mode_8:
# 1670 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Ability_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Random_Ability_Mode_5

Start_EventScript_Game_Mode_Random_Ability_Mode_9:
# 1674 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Random_Ability_Mode_5

Start_EventScript_Game_Mode_Random_Ability_Mode_11:
# 1657 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1658 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Ability_Mode_Text_2, MSGBOX_DEFAULT
# 1659 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1660 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ABILITY_RANDOMIZER_MODE
	goto Start_EventScript_Game_Mode_Random_Ability_Mode_10


Start_EventScript_Game_Mode_Third_Type_Mode::
# 1684 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1686 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_THIRD_TYPE_MODE, Start_EventScript_Game_Mode_Third_Type_Mode_2
# 1692 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Third_Type_Mode_Text_1, MSGBOX_DEFAULT
# 1693 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1694 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Third_Type_Mode_1:
# 1697 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1698 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Third_Type_Mode_7
# 1712 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Third_Type_Mode_8
# 1715 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Third_Type_Mode_9
# 1716 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Third_Type_Mode_9
Start_EventScript_Game_Mode_Third_Type_Mode_5:
# 1721 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Third_Type_Mode
	end

Start_EventScript_Game_Mode_Third_Type_Mode_2:
# 1687 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Third_Type_Mode_Text_0, MSGBOX_DEFAULT
# 1688 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1689 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Third_Type_Mode_1

Start_EventScript_Game_Mode_Third_Type_Mode_7:
# 1699 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_THIRD_TYPE_MODE, Start_EventScript_Game_Mode_Third_Type_Mode_11
# 1706 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1707 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Third_Type_Mode_Text_3, MSGBOX_DEFAULT
# 1708 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1709 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_THIRD_TYPE_MODE
Start_EventScript_Game_Mode_Third_Type_Mode_10:
	goto Start_EventScript_Game_Mode_Third_Type_Mode_5

Start_EventScript_Game_Mode_Third_Type_Mode_8:
# 1713 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Third_Type_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Third_Type_Mode_5

Start_EventScript_Game_Mode_Third_Type_Mode_9:
# 1717 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Third_Type_Mode_5

Start_EventScript_Game_Mode_Third_Type_Mode_11:
# 1700 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1701 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Third_Type_Mode_Text_2, MSGBOX_DEFAULT
# 1702 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1703 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_THIRD_TYPE_MODE
	goto Start_EventScript_Game_Mode_Third_Type_Mode_10


Start_EventScript_Game_Mode_No_Mega_Mode::
# 1727 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1729 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_NO_MEGA_MODE, Start_EventScript_Game_Mode_No_Mega_Mode_2
# 1735 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_No_Mega_Mode_Text_1, MSGBOX_DEFAULT
# 1736 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1737 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_No_Mega_Mode_1:
# 1740 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1741 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_No_Mega_Mode_7
# 1755 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Mega_Mode_8
# 1758 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_No_Mega_Mode_9
# 1759 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_No_Mega_Mode_9
Start_EventScript_Game_Mode_No_Mega_Mode_5:
# 1764 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Mega_Mode
	end

Start_EventScript_Game_Mode_No_Mega_Mode_2:
# 1730 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_No_Mega_Mode_Text_0, MSGBOX_DEFAULT
# 1731 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1732 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_No_Mega_Mode_1

Start_EventScript_Game_Mode_No_Mega_Mode_7:
# 1742 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_NO_MEGA_MODE, Start_EventScript_Game_Mode_No_Mega_Mode_11
# 1749 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1750 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_No_Mega_Mode_Text_3, MSGBOX_DEFAULT
# 1751 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1752 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_MEGA_MODE
Start_EventScript_Game_Mode_No_Mega_Mode_10:
	goto Start_EventScript_Game_Mode_No_Mega_Mode_5

Start_EventScript_Game_Mode_No_Mega_Mode_8:
# 1756 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_No_Mega_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_No_Mega_Mode_5

Start_EventScript_Game_Mode_No_Mega_Mode_9:
# 1760 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_No_Mega_Mode_5

Start_EventScript_Game_Mode_No_Mega_Mode_11:
# 1743 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1744 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_No_Mega_Mode_Text_2, MSGBOX_DEFAULT
# 1745 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1746 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_NO_MEGA_MODE
	goto Start_EventScript_Game_Mode_No_Mega_Mode_10


Start_EventScript_Game_Mode_Old_STAB_Mode::
# 1770 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1772 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_OLD_STAB_MODE, Start_EventScript_Game_Mode_Old_STAB_Mode_2
# 1778 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Old_STAB_Mode_Text_1, MSGBOX_DEFAULT
# 1779 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1780 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Old_STAB_Mode_1:
# 1783 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1784 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Old_STAB_Mode_7
# 1798 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Old_STAB_Mode_8
# 1801 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Old_STAB_Mode_9
# 1802 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Old_STAB_Mode_9
Start_EventScript_Game_Mode_Old_STAB_Mode_5:
# 1807 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Old_STAB_Mode
	end

Start_EventScript_Game_Mode_Old_STAB_Mode_2:
# 1773 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Old_STAB_Mode_Text_0, MSGBOX_DEFAULT
# 1774 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1775 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Old_STAB_Mode_1

Start_EventScript_Game_Mode_Old_STAB_Mode_7:
# 1785 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_OLD_STAB_MODE, Start_EventScript_Game_Mode_Old_STAB_Mode_11
# 1792 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1793 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Old_STAB_Mode_Text_3, MSGBOX_DEFAULT
# 1794 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1795 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_OLD_STAB_MODE
Start_EventScript_Game_Mode_Old_STAB_Mode_10:
	goto Start_EventScript_Game_Mode_Old_STAB_Mode_5

Start_EventScript_Game_Mode_Old_STAB_Mode_8:
# 1799 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Old_STAB_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Old_STAB_Mode_5

Start_EventScript_Game_Mode_Old_STAB_Mode_9:
# 1803 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Old_STAB_Mode_5

Start_EventScript_Game_Mode_Old_STAB_Mode_11:
# 1786 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1787 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Old_STAB_Mode_Text_2, MSGBOX_DEFAULT
# 1788 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1789 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_OLD_STAB_MODE
	goto Start_EventScript_Game_Mode_Old_STAB_Mode_10


Start_EventScript_Game_Mode_True_Random_Mode::
# 1813 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1815 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_TRUE_RANDOM_MODE, Start_EventScript_Game_Mode_True_Random_Mode_2
# 1821 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_True_Random_Mode_Text_1, MSGBOX_DEFAULT
# 1822 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1823 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_True_Random_Mode_1:
# 1826 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1827 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_True_Random_Mode_7
# 1842 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_True_Random_Mode_8
# 1845 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_True_Random_Mode_9
# 1846 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_True_Random_Mode_9
Start_EventScript_Game_Mode_True_Random_Mode_5:
# 1851 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_True_Random_Mode
	end

Start_EventScript_Game_Mode_True_Random_Mode_2:
# 1816 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_True_Random_Mode_Text_0, MSGBOX_DEFAULT
# 1817 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1818 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_True_Random_Mode_1

Start_EventScript_Game_Mode_True_Random_Mode_7:
# 1828 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_TRUE_RANDOM_MODE, Start_EventScript_Game_Mode_True_Random_Mode_11
# 1836 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1837 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_True_Random_Mode_Text_3, MSGBOX_DEFAULT
# 1838 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1839 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_TRUE_RANDOM_MODE
Start_EventScript_Game_Mode_True_Random_Mode_10:
	goto Start_EventScript_Game_Mode_True_Random_Mode_5

Start_EventScript_Game_Mode_True_Random_Mode_8:
# 1843 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_True_Random_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_True_Random_Mode_5

Start_EventScript_Game_Mode_True_Random_Mode_9:
# 1847 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_True_Random_Mode_5

Start_EventScript_Game_Mode_True_Random_Mode_11:
# 1829 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1830 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_True_Random_Mode_Text_2, MSGBOX_DEFAULT
# 1831 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1832 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_TRUE_RANDOM_MODE
# 1833 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZED_MODE
	goto Start_EventScript_Game_Mode_True_Random_Mode_10


Start_EventScript_Game_Mode_Grindless_Mode::
# 1857 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1859 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_GRINDLESS_MODE, Start_EventScript_Game_Mode_Grindless_Mode_2
# 1865 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Grindless_Mode_Text_1, MSGBOX_DEFAULT
# 1866 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1867 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Grindless_Mode_1:
# 1870 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1871 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Grindless_Mode_7
# 1885 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Grindless_Mode_8
# 1888 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Grindless_Mode_9
# 1889 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Grindless_Mode_9
Start_EventScript_Game_Mode_Grindless_Mode_5:
# 1894 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Grindless_Mode
	end

Start_EventScript_Game_Mode_Grindless_Mode_2:
# 1860 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Grindless_Mode_Text_0, MSGBOX_DEFAULT
# 1861 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1862 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Grindless_Mode_1

Start_EventScript_Game_Mode_Grindless_Mode_7:
# 1872 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_GRINDLESS_MODE, Start_EventScript_Game_Mode_Grindless_Mode_11
# 1879 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1880 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Grindless_Mode_Text_3, MSGBOX_DEFAULT
# 1881 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1882 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_GRINDLESS_MODE
Start_EventScript_Game_Mode_Grindless_Mode_10:
	goto Start_EventScript_Game_Mode_Grindless_Mode_5

Start_EventScript_Game_Mode_Grindless_Mode_8:
# 1886 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Grindless_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Grindless_Mode_5

Start_EventScript_Game_Mode_Grindless_Mode_9:
# 1890 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Grindless_Mode_5

Start_EventScript_Game_Mode_Grindless_Mode_11:
# 1873 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1874 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Grindless_Mode_Text_2, MSGBOX_DEFAULT
# 1875 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1876 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_GRINDLESS_MODE
	goto Start_EventScript_Game_Mode_Grindless_Mode_10


Start_EventScript_Game_Mode_Scalemon_Mode::
# 1900 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1902 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_SCALEMON_MODE, Start_EventScript_Game_Mode_Scalemon_Mode_2
# 1908 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Scalemon_Mode_Text_1, MSGBOX_DEFAULT
# 1909 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1910 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Scalemon_Mode_1:
# 1913 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1914 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Scalemon_Mode_7
# 1928 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Scalemon_Mode_8
# 1931 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Scalemon_Mode_9
# 1932 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Scalemon_Mode_9
Start_EventScript_Game_Mode_Scalemon_Mode_5:
# 1937 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Scalemon_Mode
	end

Start_EventScript_Game_Mode_Scalemon_Mode_2:
# 1903 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Scalemon_Mode_Text_0, MSGBOX_DEFAULT
# 1904 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1905 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Scalemon_Mode_1

Start_EventScript_Game_Mode_Scalemon_Mode_7:
# 1915 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_SCALEMON_MODE, Start_EventScript_Game_Mode_Scalemon_Mode_11
# 1922 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1923 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Scalemon_Mode_Text_3, MSGBOX_DEFAULT
# 1924 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1925 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_SCALEMON_MODE
Start_EventScript_Game_Mode_Scalemon_Mode_10:
	goto Start_EventScript_Game_Mode_Scalemon_Mode_5

Start_EventScript_Game_Mode_Scalemon_Mode_8:
# 1929 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Scalemon_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Scalemon_Mode_5

Start_EventScript_Game_Mode_Scalemon_Mode_9:
# 1933 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Scalemon_Mode_5

Start_EventScript_Game_Mode_Scalemon_Mode_11:
# 1916 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1917 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Scalemon_Mode_Text_2, MSGBOX_DEFAULT
# 1918 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1919 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SCALEMON_MODE
	goto Start_EventScript_Game_Mode_Scalemon_Mode_10


Start_EventScript_Difficulty_Save::
# 1942 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1943 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1944 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Difficulty_Save_Text_0, MSGBOX_DEFAULT
# 1945 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Starter_Chose
	end


Start_EventScript_Game_Modes_were_Saved::
# 1950 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1951 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1952 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Modes_were_Saved_Text_0, MSGBOX_DEFAULT
# 1953 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Starter_Chose
	end


Start_EventScript_Game_Mode_Save::
# 1958 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Save_Text_0, MSGBOX_DEFAULT
# 1959 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1960 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_SAVE, 0
# 1961 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1962 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Save_3
# 1965 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Save_4
# 1968 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Save_5
# 1972 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
Start_EventScript_Game_Mode_Save_1:
	end

Start_EventScript_Game_Mode_Save_3:
# 1963 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Save_1

Start_EventScript_Game_Mode_Save_4:
# 1966 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes_were_Saved
	goto Start_EventScript_Game_Mode_Save_1

Start_EventScript_Game_Mode_Save_5:
# 1969 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes_Default
	goto Start_EventScript_Game_Mode_Save_1


EventScript_PkmnCenterNurseDifficulty_Save::
# 1979 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1980 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1981 "data/maps/InsideOfTruck/scripts.pory"
	msgbox EventScript_PkmnCenterNurseDifficulty_Save_Text_0, MSGBOX_DEFAULT
# 1982 "data/maps/InsideOfTruck/scripts.pory"
	goto EventScript_PkmnCenterNurse_Goodbye
	end


Start_EventScript_Game_Modes_Default::
# 1987 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1988 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Default, MSGBOX_DEFAULT
# 1989 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1990 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_SCALEMON_MODE
# 1991 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_GRINDLESS_MODE
# 1992 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_VANILLA_MODE
# 1993 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_SPLIT_MODE
# 1994 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_EVOLUTION_MODE
# 1995 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_DOUBLE_BATTLE_MODE
# 1996 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_EVS_MODE
# 1997 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_PARTY_RANDOMIZED_MODE
# 1998 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZED_MODE
# 1999 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_INVERSE_MODE
# 2000 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	end


Start_EventScript_SetSeason::
# 2005 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_GYM_MONS
# 2006 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_0, MSGBOX_DEFAULT
# 2007 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 2008 "data/maps/InsideOfTruck/scripts.pory"
	scrollingmultichoice SCROLLING_SEASONS, 0, 0, 5, FALSE
# 2009 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 2010 "data/maps/InsideOfTruck/scripts.pory"
	case SEASON_SPRING, Start_EventScript_SetSeason_3
# 2015 "data/maps/InsideOfTruck/scripts.pory"
	case SEASON_SUMMER, Start_EventScript_SetSeason_4
# 2020 "data/maps/InsideOfTruck/scripts.pory"
	case SEASON_AUTUMN, Start_EventScript_SetSeason_5
# 2025 "data/maps/InsideOfTruck/scripts.pory"
	case SEASON_WINTER, Start_EventScript_SetSeason_6
# 2030 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_SetSeason_7
Start_EventScript_SetSeason_7:
# 2032 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_5
# 2033 "data/maps/InsideOfTruck/scripts.pory"
	return
Start_EventScript_SetSeason_1:
	return

Start_EventScript_SetSeason_3:
# 2011 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_CURRENT_SEASON, SEASON_SPRING
# 2012 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_DISABLE_AUTOMATIC_SEASON
# 2013 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_1
	goto Start_EventScript_SetSeason_1

Start_EventScript_SetSeason_4:
# 2016 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_CURRENT_SEASON, SEASON_SUMMER
# 2017 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_DISABLE_AUTOMATIC_SEASON
# 2018 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_2
	goto Start_EventScript_SetSeason_1

Start_EventScript_SetSeason_5:
# 2021 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_CURRENT_SEASON, SEASON_AUTUMN
# 2022 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_DISABLE_AUTOMATIC_SEASON
# 2023 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_3
	goto Start_EventScript_SetSeason_1

Start_EventScript_SetSeason_6:
# 2026 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_CURRENT_SEASON, SEASON_WINTER
# 2027 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_DISABLE_AUTOMATIC_SEASON
# 2028 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_4
	goto Start_EventScript_SetSeason_1


Start_EventScript_Give_Items_New_Game_Plus_Text_0:
# 992 "data/maps/InsideOfTruck/scripts.pory"
	.string "Take these items, too.$"

Start_EventScript_Give_Items_New_Game_Plus_Text_1:
# 994 "data/maps/InsideOfTruck/scripts.pory"
	.string "{PLAYER} received a LOT of special\n"
	.string "items!$"

Start_EventScript_Give_Items_Text_0:
# 1024 "data/maps/InsideOfTruck/scripts.pory"
	.string "{PLAYER} received a Bike, Wailmer Pail,\n"
	.string "Old Rod, Exp.Share, Surfboard, Diving\l"
	.string "Kit, a Sevii Island Ticket and the\l"
	.string "essentials to start it's Pokémon\l"
	.string "Adventure!$"

Start_EventScript_Game_Modes_Text_0:
# 1075 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please select the modes you want to\n"
	.string "use. Most of them {COLOR RED}CAN NOT{COLOR DARK_GREY} be disabled\l"
	.string "later.$"

Start_EventScript_Chose_Starter_Text_0:
# 1111 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please choose your starter Pokémon$"

Start_EventScript_Chose_Starter_Text_1:
# 1117 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want the {STR_VAR_2}\n"
	.string "Pokemon {STR_VAR_1} as your\l"
	.string "Starter Pokemon?$"

Start_EventScript_Chose_Starter_Text_2:
# 1125 "data/maps/InsideOfTruck/scripts.pory"
	.string "{PLAYER} received a {STR_VAR_1}!$"

Start_EventScript_Chose_City_Text_0:
# 1154 "data/maps/InsideOfTruck/scripts.pory"
	.string "What location would you like to start\n"
	.string "in?$"

Start_EventScript_Chose_City_Text_1:
# 1159 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Littleroot\n"
	.string "Town?$"

Start_EventScript_Chose_City_Text_2:
# 1176 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Oldale Town?$"

Start_EventScript_Chose_City_Text_3:
# 1187 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Petalburg City?$"

Start_EventScript_Chose_City_Text_4:
# 1198 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Rustboro City?$"

Start_EventScript_Chose_City_Text_5:
# 1209 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Dewford Town?$"

Start_EventScript_Chose_City_Text_6:
# 1220 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Slateport Town?$"

Start_EventScript_Chose_City_Text_7:
# 1230 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Mauville City?$"

Start_EventScript_Chose_City_Text_8:
# 1241 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Verdanturf\n"
	.string "Town?$"

Start_EventScript_Chose_City_Text_9:
# 1251 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Fallarbor Town?$"

Start_EventScript_Chose_City_Text_10:
# 1262 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Lavaridge Town?$"

Start_EventScript_Chose_City_Text_11:
# 1272 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Fortree City?$"

Start_EventScript_Chose_City_Text_12:
# 1282 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Lilycove City?$"

Start_EventScript_Chose_City_Text_13:
# 1292 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Mossdeep City?$"

Start_EventScript_Chose_City_Text_14:
# 1302 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Sootopolis\n"
	.string "City?$"

Start_EventScript_Chose_City_Text_15:
# 1322 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Evergrade City?$"

Start_EventScript_Chose_City_Text_16:
# 1332 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in One Island?$"

Start_EventScript_Chose_City_Text_17:
# 1342 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Two Island?$"

Start_EventScript_Chose_City_Text_18:
# 1352 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Three Island?$"

Start_EventScript_Chose_City_Text_19:
# 1362 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Four Island?$"

Start_EventScript_Chose_City_Text_20:
# 1372 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Five Island?$"

Start_EventScript_Chose_City_Text_21:
# 1382 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Six Island?$"

Start_EventScript_Chose_City_Text_22:
# 1392 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Seven Island?$"

Start_EventScript_Chose_City_Text_23:
# 1402 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Eight Island?$"

Start_EventScript_Game_Mode_Random_Type_Mode_Text_0:
# 1601 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Random Type\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Random_Type_Mode_Text_1:
# 1606 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Random Type\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Random_Type_Mode_Text_2:
# 1615 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Random Type Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Random_Type_Mode_Text_3:
# 1621 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Random Type Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Random_Type_Mode_Text_4:
# 1627 "data/maps/InsideOfTruck/scripts.pory"
	.string "This Randomizes every Pokemon Type.$"

Start_EventScript_Game_Mode_Random_Ability_Mode_Text_0:
# 1644 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Random\n"
	.string "Ability Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Random_Ability_Mode_Text_1:
# 1649 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Random\n"
	.string "Ability Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Random_Ability_Mode_Text_2:
# 1658 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Random Ability Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Random_Ability_Mode_Text_3:
# 1664 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Random Ability Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Random_Ability_Mode_Text_4:
# 1670 "data/maps/InsideOfTruck/scripts.pory"
	.string "This Randomizes every Pokemon Ability.$"

Start_EventScript_Game_Mode_Third_Type_Mode_Text_0:
# 1687 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Third Type\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Third_Type_Mode_Text_1:
# 1692 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Third Type\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Third_Type_Mode_Text_2:
# 1701 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Third Type Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Third_Type_Mode_Text_3:
# 1707 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Third Type Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Third_Type_Mode_Text_4:
# 1713 "data/maps/InsideOfTruck/scripts.pory"
	.string "This gives every Pokémon a random third\n"
	.string "type.$"

Start_EventScript_Game_Mode_No_Mega_Mode_Text_0:
# 1730 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}No Mega Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_No_Mega_Mode_Text_1:
# 1735 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}No Mega\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_No_Mega_Mode_Text_2:
# 1744 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}No Mega Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_No_Mega_Mode_Text_3:
# 1750 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}No Mega Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_No_Mega_Mode_Text_4:
# 1756 "data/maps/InsideOfTruck/scripts.pory"
	.string "This disables mega evolution.$"

Start_EventScript_Game_Mode_Old_STAB_Mode_Text_0:
# 1773 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Old STAB\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Old_STAB_Mode_Text_1:
# 1778 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Old STAB\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Old_STAB_Mode_Text_2:
# 1787 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Old STAB Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Old_STAB_Mode_Text_3:
# 1793 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Old STAB Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Old_STAB_Mode_Text_4:
# 1799 "data/maps/InsideOfTruck/scripts.pory"
	.string "This uses the vanilla games STAB\n"
	.string "calculation and disables the monotype\l"
	.string "boost.$"

Start_EventScript_Game_Mode_True_Random_Mode_Text_0:
# 1816 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}True Random\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_True_Random_Mode_Text_1:
# 1821 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}True Random\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_True_Random_Mode_Text_2:
# 1830 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}True Random Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_True_Random_Mode_Text_3:
# 1837 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}True Random Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_True_Random_Mode_Text_4:
# 1843 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will fully randomize every Pokemon\n"
	.string "in the wild or used by trainers, you can\l"
	.string "probably get all the first stages in\l"
	.string "just one route with this, this also\l"
	.string "disables the dexnav.$"

Start_EventScript_Game_Mode_Grindless_Mode_Text_0:
# 1860 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Grindless\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Grindless_Mode_Text_1:
# 1865 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Grindless\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Grindless_Mode_Text_2:
# 1874 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Grindless Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Grindless_Mode_Text_3:
# 1880 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Grindless Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Grindless_Mode_Text_4:
# 1886 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will let you set the EVs from the\n"
	.string "summary screen, remove Levels and\l"
	.string "balance stats using the number of\l"
	.string "badges you have, this also affects\l"
	.string "enemy mons and enemy trainers so it is\l"
	.string "balanced for both$"

Start_EventScript_Game_Mode_Scalemon_Mode_Text_0:
# 1903 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Scalemon\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Scalemon_Mode_Text_1:
# 1908 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Scalemon\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Scalemon_Mode_Text_2:
# 1917 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Scalemon Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Scalemon_Mode_Text_3:
# 1923 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Scalemon Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Scalemon_Mode_Text_4:
# 1929 "data/maps/InsideOfTruck/scripts.pory"
	.string "In Scalemon Mode, every Pokemon's\n"
	.string "stats, barring HP, are scaled to give\l"
	.string "them a BST as close to a certain BST\l"
	.string "depending on your badge count, with all\l"
	.string "recalculated stats being rounded down.$"

Start_EventScript_Difficulty_Save_Text_0:
# 1944 "data/maps/InsideOfTruck/scripts.pory"
	.string "The difficulty was saved!$"

Start_EventScript_Game_Modes_were_Saved_Text_0:
# 1952 "data/maps/InsideOfTruck/scripts.pory"
	.string "The modes were saved!$"

Start_EventScript_Game_Mode_Save_Text_0:
# 1958 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to save this\n"
	.string "configuration?$"

EventScript_PkmnCenterNurseDifficulty_Save_Text_0:
# 1981 "data/maps/InsideOfTruck/scripts.pory"
	.string "The changes were saved!$"

Start_EventScript_SetSeason_Text_0:
# 2006 "data/maps/InsideOfTruck/scripts.pory"
	.string "Before starting, please chose the\n"
	.string "season you like the best.$"

Start_EventScript_SetSeason_Text_1:
# 2013 "data/maps/InsideOfTruck/scripts.pory"
	.string "You will play in Spring!$"

Start_EventScript_SetSeason_Text_2:
# 2018 "data/maps/InsideOfTruck/scripts.pory"
	.string "You will play in Summer!$"

Start_EventScript_SetSeason_Text_3:
# 2023 "data/maps/InsideOfTruck/scripts.pory"
	.string "You will play in Autumn!$"

Start_EventScript_SetSeason_Text_4:
# 2028 "data/maps/InsideOfTruck/scripts.pory"
	.string "You will play in Winter!$"

Start_EventScript_SetSeason_Text_5:
# 2032 "data/maps/InsideOfTruck/scripts.pory"
	.string "The season will update according to the\n"
	.string "real time!$"

Game_Start_Text_Introduction_NewGamePlus::
# 1583 "data/maps/InsideOfTruck/scripts.pory"
	.string "I'm Glad to see you again, Welcome to\n"
	.string "New Game+. Do you have any Question?$"

Game_Start_Text_Game_Modes_You_Cant_Chose_this_mode::
# 1587 "data/maps/InsideOfTruck/scripts.pory"
	.string "You can't chose this mode in a New Game\n"
	.string "Plus run.$"

Game_Start_Text_Introduction_NewGamePlus_Information::
# 1591 "data/maps/InsideOfTruck/scripts.pory"
	.string "New Game Plus is a mode that lets you\n"
	.string "create a new save file while keeping all\l"
	.string "your Pokemon, Items, Achievements and\l"
	.string "Money.\p"
	.string "It also has some special features like\n"
	.string "trainers scaling to your level and\l"
	.string "Pokémon numbers, you also get a\l"
	.string "boosted experience depending on the\l"
	.string "number of times you have beaten the\l"
	.string "game and started a New Game plus save,\l"
	.string "the game becomes a little more\l"
	.string "difficult and finally it removes some of\l"
	.string "the caps used in the game.$"
