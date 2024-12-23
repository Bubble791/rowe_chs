# 1 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
.set LOCALID_STAIR_GUARD, 2
# 3 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_MapScripts:: @ 8211245
# 5 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition: @ 821124B
# 9 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 11 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_BlockStairs:: @ 8211255
# 12 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GUARD, 14, 2
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype LOCALID_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	return
# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee:: @ 8211261
# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 18 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright:: @ 821127F
# 26 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered:: @ 8211289
# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard:: @ 8211293
# 36 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 38 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 41 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome:: @ 82112BA
# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed:: @ 82112C4
# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 52 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter:: @ 82112CE
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 55 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	message gText_HowMayIServeYou
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmessage
# 58 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM40, RustboroCity_DevonCorp_1F_EventScript_Greeter2
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	pokemart RustboroCity_DevonCorp_1F_EventScript_Ballmart
# 60 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	
# 64 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter2::
# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	pokemart RustboroCity_DevonCorp_1F_EventScript_Ballmart2
# 66 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Ballmart:
# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_POKE_BALL_SEAL
# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL_SEAL
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL_SEAL
# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_PREMIER_BALL_SEAL
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_LUXURY_BALL_SEAL
# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_HEAL_BALL_SEAL
# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_TIMER_BALL_SEAL
# 78 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_REPEAT_BALL_SEAL
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_NET_BALL_SEAL
# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DIVE_BALL_SEAL
# 81 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_NONE
# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 84 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Ballmart2:
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_POKE_BALL_SEAL
# 87 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL_SEAL
# 88 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL_SEAL
# 89 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_PREMIER_BALL_SEAL
# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_LUXURY_BALL_SEAL
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_HEAL_BALL_SEAL
# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_TIMER_BALL_SEAL
# 93 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_REPEAT_BALL_SEAL
# 94 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_NET_BALL_SEAL
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DIVE_BALL_SEAL
# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_LURE_BALL_SEAL
# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_LEVEL_BALL_SEAL
# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_MOON_BALL_SEAL
# 99 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_HEAVY_BALL_SEAL
# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FAST_BALL_SEAL
# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FRIEND_BALL_SEAL
# 102 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_LOVE_BALL_SEAL
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DREAM_BALL_SEAL
# 104 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 106 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 107 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 109 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 111 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 113 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 114 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 116 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
# 117 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 118 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 120 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 121 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_EXIOLITE
# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_EVIOLITE
# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_EVERSTONE
# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte ITEM_NONE
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 127 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 128 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 129 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp:: @ 82112F5
# 130 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 132 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 133 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 134 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed:: @ 82112FF
# 135 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 136 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 137 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 138 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay:: @ 8211309
# 140 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 141 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 142 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 143 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay:: @ 8211312
# 144 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 145 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 146 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 147 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp: @ 821131B
# 148 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hello and welcome to the Devon\n"
# 149 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Corporation.\p"
# 150 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We're proud producers of items and\n"
# 151 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "medicine that enhance your life.$"
# 152 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 153 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed: @ 821138B
# 154 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "One of our research staff stupidly\n"
# 155 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "got robbed of an important parcel.$"
# 156 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 157 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct: @ 82113D1
# 158 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, those Running Shoes!\n"
# 159 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "They're one of our products!\p"
# 160 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It makes me happy when I see someone\n"
# 161 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "using something we made.$"
# 162 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 163 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright: @ 8211446
# 164 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "That stolen parcel…\p"
# 165 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Well, sure it's important, but it's not\n"
# 166 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "anything that anyone can use.\p"
# 167 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "In my estimation, that robber must not\n"
# 168 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "have been very bright.$"
# 169 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 170 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered: @ 82114DE
# 171 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It sounds like they've recovered\n"
# 172 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the ripped-off Devon Goods.$"
# 173 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 174 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter: @ 821151B
# 175 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'm sorry, only authorized people\n"
# 176 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "are allowed to enter here.$"
# 177 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 178 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed: @ 8211558
# 179 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It's beyond stupid.\n"
# 180 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "How could we get robbed?$"
# 181 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 182 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere: @ 8211585
# 183 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hi, there!\n"
# 184 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You're always welcome here!$"
# 185 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 186 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay: @ 82115AC
# 187 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Samples of rocks and metal are\n"
# 188 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "displayed in the glass case.\p"
# 189 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with some writing\n"
# 190 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "on it…\p"
# 191 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Devon Corporation got its start as\n"
# 192 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "a producer of stones from quarries.\p"
# 193 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“The company also produced iron from\n"
# 194 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "filings in the sand.\p"
# 195 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“From that humble start as a producer\n"
# 196 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "of raw materials, Devon developed.\p"
# 197 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Devon is now a manufacturer of a wide\n"
# 198 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "range of industrial products.”$"
# 199 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 200 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay: @ 8211722
# 201 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prototypes and test products fill\n"
# 202 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the glass display case.\p"
# 203 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with a description…\p"
# 204 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“In addition to industrial products,\n"
# 205 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Devon now markets sundries and\l"
# 206 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "pharmaceuticals for better lifestyles.\p"
# 207 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Recently, Devon has begun marketing\n"
# 208 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "tools for Pokémon Trainers, including\l"
# 209 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Poké Balls and Pokénav systems.”$"
