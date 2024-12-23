# 1 "data/scripts/pkmn_center_jack.pory"

# 2 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_Companion_Stuff::
# 3 "data/scripts/pkmn_center_jack.pory"
	msgbox gText_PkmnCenterJack_GotPokemonQuestions, MSGBOX_DEFAULT
# 4 "data/scripts/pkmn_center_jack.pory"
	multichoice 16, 0, MULTI_COMPANION_OPTIONS, 0
# 5 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 6 "data/scripts/pkmn_center_jack.pory"
	switch VAR_TEMP_1
# 7 "data/scripts/pkmn_center_jack.pory"
	case 0, Common_EventScript_PkmnCenterJack_Companion_Get_Trainer_Password
# 8 "data/scripts/pkmn_center_jack.pory"
	case 4, Common_EventScript_PkmnCenterJack
# 9 "data/scripts/pkmn_center_jack.pory"
	case MULTI_B_PRESSED, Common_EventScript_PkmnCenterJack
# 10 "data/scripts/pkmn_center_jack.pory"
	end
# 11 "data/scripts/pkmn_center_jack.pory"

# 12 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_TeachMove::
# 13 "data/scripts/pkmn_center_jack.pory"
	lock
# 14 "data/scripts/pkmn_center_jack.pory"
	faceplayer
# 15 "data/scripts/pkmn_center_jack.pory"
	bufferpartymonnick 0, 0
# 16 "data/scripts/pkmn_center_jack.pory"
	msgbox Text_IVChecker_1, MSGBOX_DEFAULT
# 17 "data/scripts/pkmn_center_jack.pory"
	specialvar VAR_RESULT, GetHpIV
# 18 "data/scripts/pkmn_center_jack.pory"
	buffernumberstring 0, VAR_RESULT
# 19 "data/scripts/pkmn_center_jack.pory"
	specialvar VAR_RESULT, GetAtkIV
# 20 "data/scripts/pkmn_center_jack.pory"
	buffernumberstring 1, VAR_RESULT
# 21 "data/scripts/pkmn_center_jack.pory"
	specialvar VAR_RESULT, GetDefIV
# 22 "data/scripts/pkmn_center_jack.pory"
	buffernumberstring 2, VAR_RESULT
# 23 "data/scripts/pkmn_center_jack.pory"
	msgbox Text_IVChecker_2, MSGBOX_DEFAULT
# 24 "data/scripts/pkmn_center_jack.pory"
	specialvar VAR_RESULT, GetSpAtkIV
# 25 "data/scripts/pkmn_center_jack.pory"
	buffernumberstring 0, VAR_RESULT
# 26 "data/scripts/pkmn_center_jack.pory"
	specialvar VAR_RESULT, GetSpDefIV
# 27 "data/scripts/pkmn_center_jack.pory"
	buffernumberstring 1, VAR_RESULT
# 28 "data/scripts/pkmn_center_jack.pory"
	specialvar VAR_RESULT, GetSpeedIV
# 29 "data/scripts/pkmn_center_jack.pory"
	buffernumberstring 2, VAR_RESULT
# 30 "data/scripts/pkmn_center_jack.pory"
	msgbox Text_IVChecker_3, MSGBOX_DEFAULT
# 31 "data/scripts/pkmn_center_jack.pory"
	release
# 32 "data/scripts/pkmn_center_jack.pory"
	end
# 33 "data/scripts/pkmn_center_jack.pory"

# 34 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_ComeBackAnytime::
# 35 "data/scripts/pkmn_center_jack.pory"
	msgbox gText_PkmnCenterJack_ComeBackAnytime, MSGBOX_DEFAULT
# 36 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 37 "data/scripts/pkmn_center_jack.pory"
    end
# 38 "data/scripts/pkmn_center_jack.pory"
	
# 39 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_NoEnoughBadges::
# 40 "data/scripts/pkmn_center_jack.pory"
	msgbox gText_PkmnCenterJack_CantTeachMoves, MSGBOX_DEFAULT
# 41 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 42 "data/scripts/pkmn_center_jack.pory"
    end
# 43 "data/scripts/pkmn_center_jack.pory"

# 44 "data/scripts/pkmn_center_jack.pory"
@Start a Random Battle	
# 45 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_StartARandomBattle::
# 46 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_MockBattle, MSGBOX_DEFAULT
# 47 "data/scripts/pkmn_center_jack.pory"
	waitmessage
# 48 "data/scripts/pkmn_center_jack.pory"
	multichoice 0, 0, MULTI_MOCK_BATTLE_OPTIONS, 0
# 49 "data/scripts/pkmn_center_jack.pory"
	switch VAR_RESULT
# 50 "data/scripts/pkmn_center_jack.pory"
    case 0, Common_EventScript_PkmnCenterJack_StartARandomBattle_Easy
# 51 "data/scripts/pkmn_center_jack.pory"
	case 1, Common_EventScript_PkmnCenterJack_StartARandomBattle_Medium
# 52 "data/scripts/pkmn_center_jack.pory"
    case 2, Common_EventScript_PkmnCenterJack_StartARandomBattle_Hard
# 53 "data/scripts/pkmn_center_jack.pory"
	case 3, Common_EventScript_PkmnCenterJack_StartARandomBattle_PSS
# 54 "data/scripts/pkmn_center_jack.pory"
	case 4, Common_EventScript_PkmnCenterJack
# 55 "data/scripts/pkmn_center_jack.pory"
	case MULTI_B_PRESSED, Common_EventScript_PkmnCenterJack
# 56 "data/scripts/pkmn_center_jack.pory"
	end
# 57 "data/scripts/pkmn_center_jack.pory"
	
# 58 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_StartARandomBattle_Easy::
# 59 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_MockBattle_Easy, MSGBOX_DEFAULT
# 60 "data/scripts/pkmn_center_jack.pory"
	trainerbattle_no_intro TRAINER_NURSE_KIRSTEN, Common_PkmnCenterJack_Text_MockBattle_Defeat
# 61 "data/scripts/pkmn_center_jack.pory"
	special HealPlayerParty
# 62 "data/scripts/pkmn_center_jack.pory"
	msgbox gText_PkmnCenterJack_ComeBackAnytime, MSGBOX_DEFAULT
# 63 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 64 "data/scripts/pkmn_center_jack.pory"
    end
# 65 "data/scripts/pkmn_center_jack.pory"
	
# 66 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_StartARandomBattle_Medium::
# 67 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_MockBattle_Normal, MSGBOX_DEFAULT
# 68 "data/scripts/pkmn_center_jack.pory"
	trainerbattle_no_intro TRAINER_NURSE_SACHIKO, Common_PkmnCenterJack_Text_MockBattle_Defeat
# 69 "data/scripts/pkmn_center_jack.pory"
	special HealPlayerParty
# 70 "data/scripts/pkmn_center_jack.pory"
	msgbox gText_PkmnCenterJack_ComeBackAnytime, MSGBOX_DEFAULT
# 71 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 72 "data/scripts/pkmn_center_jack.pory"
    end
# 73 "data/scripts/pkmn_center_jack.pory"
	
# 74 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_StartARandomBattle_Hard::
# 75 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_MockBattle_Hard, MSGBOX_DEFAULT
# 76 "data/scripts/pkmn_center_jack.pory"
	trainerbattle_no_intro TRAINER_NURSE_SHERY, Common_PkmnCenterJack_Text_MockBattle_Defeat
# 77 "data/scripts/pkmn_center_jack.pory"
	special HealPlayerParty
# 78 "data/scripts/pkmn_center_jack.pory"
	msgbox gText_PkmnCenterJack_ComeBackAnytime, MSGBOX_DEFAULT
# 79 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 80 "data/scripts/pkmn_center_jack.pory"
    end
# 81 "data/scripts/pkmn_center_jack.pory"

# 82 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_StartARandomBattle_PSS::
# 83 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_MockBattle_PSS, MSGBOX_DEFAULT
# 84 "data/scripts/pkmn_center_jack.pory"
	trainerbattle_no_intro TRAINER_PSS_TRAINER, Common_PkmnCenterJack_Text_MockBattle_Defeat
# 85 "data/scripts/pkmn_center_jack.pory"
	special HealPlayerParty
# 86 "data/scripts/pkmn_center_jack.pory"
	msgbox gText_PkmnCenterJack_ComeBackAnytime, MSGBOX_DEFAULT
# 87 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 88 "data/scripts/pkmn_center_jack.pory"
    end
# 89 "data/scripts/pkmn_center_jack.pory"

# 90 "data/scripts/pkmn_center_jack.pory"
@Rate Nickname
# 91 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_NameRater_ChooseMonToRate::
# 92 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
# 93 "data/scripts/pkmn_center_jack.pory"
	special ChoosePartyMon
# 94 "data/scripts/pkmn_center_jack.pory"
	waitstate
# 95 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8004, 255
# 96 "data/scripts/pkmn_center_jack.pory"
	goto_if_ne Common_EventScript_PkmnCenterJack_NameRater_RateMonNickname
# 97 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8004, 255
# 98 "data/scripts/pkmn_center_jack.pory"
	goto_if_eq Common_EventScript_PkmnCenterJack_NameRater_DeclineNameRate
# 99 "data/scripts/pkmn_center_jack.pory"
	end
# 100 "data/scripts/pkmn_center_jack.pory"

# 101 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_NameRater_DeclineNameRate::
# 102 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_DoVisitAgain, MSGBOX_DEFAULT
# 103 "data/scripts/pkmn_center_jack.pory"
	release
# 104 "data/scripts/pkmn_center_jack.pory"
	end
# 105 "data/scripts/pkmn_center_jack.pory"

# 106 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_NameRater_RateMonNickname::
# 107 "data/scripts/pkmn_center_jack.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 108 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, SPECIES_EGG
# 109 "data/scripts/pkmn_center_jack.pory"
	goto_if_eq Common_EventScript_PkmnCenterJack_NameRater_CantRateEgg
# 110 "data/scripts/pkmn_center_jack.pory"
	special BufferMonNickname
# 111 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
# 112 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, YES
# 113 "data/scripts/pkmn_center_jack.pory"
	goto_if_eq Common_EventScript_PkmnCenterJack_NameRater_ChangeNickname
# 114 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, NO
# 115 "data/scripts/pkmn_center_jack.pory"
	goto_if_eq Common_EventScript_PkmnCenterJack_NameRater_DeclineNameRate
# 116 "data/scripts/pkmn_center_jack.pory"
	end
# 117 "data/scripts/pkmn_center_jack.pory"

# 118 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_NameRater_CantRateEgg::
# 119 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
# 120 "data/scripts/pkmn_center_jack.pory"
	release
# 121 "data/scripts/pkmn_center_jack.pory"
	end
# 122 "data/scripts/pkmn_center_jack.pory"

# 123 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_NameRater_ChangeNickname::
# 124 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
# 125 "data/scripts/pkmn_center_jack.pory"
	call Common_EventScript_NameReceivedPartyMon
# 126 "data/scripts/pkmn_center_jack.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 127 "data/scripts/pkmn_center_jack.pory"
	special BufferMonNickname
# 128 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, TRUE
# 129 "data/scripts/pkmn_center_jack.pory"
	goto_if_eq Common_EventScript_PkmnCenterJack_NameRater_NewNameDifferent
# 130 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
# 131 "data/scripts/pkmn_center_jack.pory"
	release
# 132 "data/scripts/pkmn_center_jack.pory"
	end
# 133 "data/scripts/pkmn_center_jack.pory"

# 134 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_NameRater_NewNameDifferent::
# 135 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
# 136 "data/scripts/pkmn_center_jack.pory"
	release
# 137 "data/scripts/pkmn_center_jack.pory"
	end
# 138 "data/scripts/pkmn_center_jack.pory"

# 139 "data/scripts/pkmn_center_jack.pory"
@Move Deleter
# 140 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_MoveDeleter_ChooseMonAndMoveToForget::
# 141 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_WhichMonShouldForget, MSGBOX_DEFAULT
# 142 "data/scripts/pkmn_center_jack.pory"
	special ChoosePartyMon
# 143 "data/scripts/pkmn_center_jack.pory"
	waitstate
# 144 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8004, 255
# 145 "data/scripts/pkmn_center_jack.pory"
	goto_if_eq Common_EventScript_PkmnCenterJack_MoveDeleter_ComeAgain
# 146 "data/scripts/pkmn_center_jack.pory"
	special IsSelectedMonEgg
# 147 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, TRUE
# 148 "data/scripts/pkmn_center_jack.pory"
	goto_if_eq Common_EventScript_PkmnCenterJack_MoveDeleter_EggCantForgetMoves
# 149 "data/scripts/pkmn_center_jack.pory"
	special GetNumMovesSelectedMonHas
# 150 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, 1
# 151 "data/scripts/pkmn_center_jack.pory"
	goto_if_eq Common_EventScript_PkmnCenterJack_MoveDeleter_MonOnlyKnowsOneMove
# 152 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
# 153 "data/scripts/pkmn_center_jack.pory"
	fadescreen FADE_TO_BLACK
# 154 "data/scripts/pkmn_center_jack.pory"
	special MoveDeleterChooseMoveToForget
# 155 "data/scripts/pkmn_center_jack.pory"
	fadescreen FADE_FROM_BLACK
# 156 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8005, MAX_MON_MOVES
# 157 "data/scripts/pkmn_center_jack.pory"
	goto_if_eq Common_EventScript_PkmnCenterJack_MoveDeleter_ChooseMonAndMoveToForget
# 158 "data/scripts/pkmn_center_jack.pory"
	special BufferMoveDeleterNicknameAndMove
# 159 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 160 "data/scripts/pkmn_center_jack.pory"
	switch VAR_RESULT
# 161 "data/scripts/pkmn_center_jack.pory"
	case YES, Common_EventScript_PkmnCenterJack_MoveDeleter_TryForgetMove
# 162 "data/scripts/pkmn_center_jack.pory"
	case NO, Common_EventScript_PkmnCenterJack_MoveDeleter_ComeAgain
# 163 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 164 "data/scripts/pkmn_center_jack.pory"
	end
# 165 "data/scripts/pkmn_center_jack.pory"

# 166 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_MoveDeleter_TryForgetMove::
# 167 "data/scripts/pkmn_center_jack.pory"
	special IsLastMonThatKnowsSurf
# 168 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, TRUE
# 169 "data/scripts/pkmn_center_jack.pory"
	goto_if_eq Common_EventScript_PkmnCenterJack_MoveDeleter_LastMonWithSurf
# 170 "data/scripts/pkmn_center_jack.pory"
	special MoveDeleterForgetMove
# 171 "data/scripts/pkmn_center_jack.pory"
	playfanfare MUS_MOVE_DELETED
# 172 "data/scripts/pkmn_center_jack.pory"
	waitfanfare
# 173 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_MonHasForgottenMove, MSGBOX_DEFAULT
# 174 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 175 "data/scripts/pkmn_center_jack.pory"
	end
# 176 "data/scripts/pkmn_center_jack.pory"

# 177 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_MoveDeleter_MonOnlyKnowsOneMove::
# 178 "data/scripts/pkmn_center_jack.pory"
	special BufferMoveDeleterNicknameAndMove
# 179 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
# 180 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 181 "data/scripts/pkmn_center_jack.pory"
	end
# 182 "data/scripts/pkmn_center_jack.pory"

# 183 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_MoveDeleter_EggCantForgetMoves::
# 184 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_EggCantForgetMoves, MSGBOX_DEFAULT
# 185 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 186 "data/scripts/pkmn_center_jack.pory"
	end
# 187 "data/scripts/pkmn_center_jack.pory"

# 188 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_MoveDeleter_ComeAgain::
# 189 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_ComeAgain, MSGBOX_DEFAULT
# 190 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 191 "data/scripts/pkmn_center_jack.pory"
	end
# 192 "data/scripts/pkmn_center_jack.pory"

# 193 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_MoveDeleter_LastMonWithSurf::
# 194 "data/scripts/pkmn_center_jack.pory"
	special BufferMoveDeleterNicknameAndMove
# 195 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_PkmnCenterJack_Text_CantForgetSurf, MSGBOX_DEFAULT
# 196 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 197 "data/scripts/pkmn_center_jack.pory"
	end
# 198 "data/scripts/pkmn_center_jack.pory"
	
# 199 "data/scripts/pkmn_center_jack.pory"
//------------------------------------------------------------------------------
# 200 "data/scripts/pkmn_center_jack.pory"
	
# 201 "data/scripts/pkmn_center_jack.pory"
Common_EventScript_PkmnCenterJack_MoveReminder_ComeBackAnytime:: @ 8201452
# 202 "data/scripts/pkmn_center_jack.pory"
	msgbox gText_PkmnCenterJack_ComeBackAnytime, MSGBOX_DEFAULT
# 203 "data/scripts/pkmn_center_jack.pory"
	releaseall
# 204 "data/scripts/pkmn_center_jack.pory"
	end

Common_EventScript_PkmnCenterJack::
# 210 "data/scripts/pkmn_center_jack.pory"
	lockall
# 211 "data/scripts/pkmn_center_jack.pory"
	msgbox gText_PkmnCenterJack_GotPokemonQuestions, MSGBOX_DEFAULT
# 212 "data/scripts/pkmn_center_jack.pory"
	scrollingmultichoice SCROLLING_BLUE_NURSE_OPTIONS, 0, 0, 6, TRUE
# 213 "data/scripts/pkmn_center_jack.pory"
	switch VAR_RESULT
# 214 "data/scripts/pkmn_center_jack.pory"
	case 0, Common_EventScript_PkmnCenterJack_2
# 217 "data/scripts/pkmn_center_jack.pory"
	case 1, Common_EventScript_PkmnCenterJack_3
# 220 "data/scripts/pkmn_center_jack.pory"
	case 2, Common_EventScript_PkmnCenterJack_4
# 223 "data/scripts/pkmn_center_jack.pory"
	case 3, Common_EventScript_PkmnCenterJack_5
# 226 "data/scripts/pkmn_center_jack.pory"
	case 4, Common_EventScript_PkmnCenterJack_6
# 229 "data/scripts/pkmn_center_jack.pory"
	case 5, Common_EventScript_PkmnCenterJack_7
# 232 "data/scripts/pkmn_center_jack.pory"
	case 6, Common_EventScript_PkmnCenterJack_8
Common_EventScript_PkmnCenterJack_8:
# 234 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_ComeBackAnytime
	return

Common_EventScript_PkmnCenterJack_2:
# 215 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Change_Costume
	return

Common_EventScript_PkmnCenterJack_3:
# 218 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_StartARandomBattle
	return

Common_EventScript_PkmnCenterJack_4:
# 221 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_NameRater_ChooseMonToRate
	return

Common_EventScript_PkmnCenterJack_5:
# 224 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_6:
# 227 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_WonderTrade
	return

Common_EventScript_PkmnCenterJack_7:
# 230 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Lower_Difficulty
	return


Common_EventScript_PkmnCenterJack_Clear_Move_Tutor_Data::
# 240 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_SHOP_MONEY_TYPE, MART_MONEY_TYPE_NORMAL
# 241 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_LEVEL_UP_MOVES
# 242 "data/scripts/pkmn_center_jack.pory"
	clearflag FLAG_IS_MOVE_TUTOR
	return


Common_EventScript_PkmnCenterJack_Move_Learner::
# 247 "data/scripts/pkmn_center_jack.pory"
	call Common_EventScript_PkmnCenterJack_Clear_Move_Tutor_Data
# 248 "data/scripts/pkmn_center_jack.pory"
	msgbox gText_PkmnCenterJack_TeachMoves, MSGBOX_DEFAULT
# 249 "data/scripts/pkmn_center_jack.pory"
	scrollingmultichoice SCROLLING_BLUE_NURSE_MOVE_LEARN, 0, 0, 5, TRUE
# 250 "data/scripts/pkmn_center_jack.pory"
	switch VAR_RESULT
# 251 "data/scripts/pkmn_center_jack.pory"
	case 0, Common_EventScript_PkmnCenterJack_Move_Learner_2
# 254 "data/scripts/pkmn_center_jack.pory"
	case 1, Common_EventScript_PkmnCenterJack_Move_Learner_3
# 257 "data/scripts/pkmn_center_jack.pory"
	case 2, Common_EventScript_PkmnCenterJack_Move_Learner_4
# 260 "data/scripts/pkmn_center_jack.pory"
	case 3, Common_EventScript_PkmnCenterJack_Move_Learner_5
# 263 "data/scripts/pkmn_center_jack.pory"
	case 5, Common_EventScript_PkmnCenterJack_Move_Learner_6
Common_EventScript_PkmnCenterJack_Move_Learner_6:
# 265 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_ComeBackAnytime
	return

Common_EventScript_PkmnCenterJack_Move_Learner_2:
# 252 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_MoveDeleter_ChooseMonAndMoveToForget
	return

Common_EventScript_PkmnCenterJack_Move_Learner_3:
# 255 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_EggMoveTutor_Price
	return

Common_EventScript_PkmnCenterJack_Move_Learner_4:
# 258 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price
	return

Common_EventScript_PkmnCenterJack_Move_Learner_5:
# 261 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_TmMoveTutor_Price
	return


Common_EventScript_PkmnCenterJack_Lower_Difficulty::
# 272 "data/scripts/pkmn_center_jack.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_ne Common_EventScript_PkmnCenterJack_Lower_Difficulty_2
# 298 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Lower_Difficulty_Text_3
# 299 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack
Common_EventScript_PkmnCenterJack_Lower_Difficulty_1:
# 301 "data/scripts/pkmn_center_jack.pory"
	release
	end

Common_EventScript_PkmnCenterJack_Lower_Difficulty_2:
# 273 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Lower_Difficulty_Text_0, MSGBOX_YESNO
# 274 "data/scripts/pkmn_center_jack.pory"
	switch VAR_RESULT
# 275 "data/scripts/pkmn_center_jack.pory"
	case YES, Common_EventScript_PkmnCenterJack_Lower_Difficulty_6
# 290 "data/scripts/pkmn_center_jack.pory"
	case NO, Common_EventScript_PkmnCenterJack_Lower_Difficulty_7
# 291 "data/scripts/pkmn_center_jack.pory"
	case MULTI_B_PRESSED, Common_EventScript_PkmnCenterJack_Lower_Difficulty_7
Common_EventScript_PkmnCenterJack_Lower_Difficulty_7:
# 293 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack
	goto Common_EventScript_PkmnCenterJack_Lower_Difficulty_1

Common_EventScript_PkmnCenterJack_Lower_Difficulty_6:
# 276 "data/scripts/pkmn_center_jack.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_HARD
	goto_if_eq Common_EventScript_PkmnCenterJack_Lower_Difficulty_9
# 282 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_EASY
# 283 "data/scripts/pkmn_center_jack.pory"
	playfanfare MUS_OBTAIN_ITEM
# 284 "data/scripts/pkmn_center_jack.pory"
	message Common_EventScript_PkmnCenterJack_Lower_Difficulty_Text_2
Common_EventScript_PkmnCenterJack_Lower_Difficulty_8:
# 286 "data/scripts/pkmn_center_jack.pory"
	waitmessage
# 287 "data/scripts/pkmn_center_jack.pory"
	waitfanfare
# 288 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack
	goto Common_EventScript_PkmnCenterJack_Lower_Difficulty_1

Common_EventScript_PkmnCenterJack_Lower_Difficulty_9:
# 277 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_NORMAL
# 278 "data/scripts/pkmn_center_jack.pory"
	playfanfare MUS_OBTAIN_ITEM
# 279 "data/scripts/pkmn_center_jack.pory"
	message Common_EventScript_PkmnCenterJack_Lower_Difficulty_Text_1
	goto Common_EventScript_PkmnCenterJack_Lower_Difficulty_8


Common_EventScript_PkmnCenterJack_Change_Costume::
# 306 "data/scripts/pkmn_center_jack.pory"
	lock
# 307 "data/scripts/pkmn_center_jack.pory"
	faceplayer
# 308 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Change_Costume_Text_0, MSGBOX_DEFAULT
# 309 "data/scripts/pkmn_center_jack.pory"
	multichoice 16, 0, MULTI_COSTUMES, 0
# 310 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 311 "data/scripts/pkmn_center_jack.pory"
	switch VAR_RESULT
# 312 "data/scripts/pkmn_center_jack.pory"
	case EMERALD_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_3
# 313 "data/scripts/pkmn_center_jack.pory"
	case RS_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_3
# 314 "data/scripts/pkmn_center_jack.pory"
	case FRLG_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_3
# 315 "data/scripts/pkmn_center_jack.pory"
	case RBY_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_3
# 321 "data/scripts/pkmn_center_jack.pory"
	case BW_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_4
# 322 "data/scripts/pkmn_center_jack.pory"
	case DP_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_4
# 335 "data/scripts/pkmn_center_jack.pory"
	case NUM_COSTUMES, Common_EventScript_PkmnCenterJack_Change_Costume_5
# 336 "data/scripts/pkmn_center_jack.pory"
	case MULTI_B_PRESSED, Common_EventScript_PkmnCenterJack_Change_Costume_5
Common_EventScript_PkmnCenterJack_Change_Costume_1:
# 340 "data/scripts/pkmn_center_jack.pory"
	releaseall
	end

Common_EventScript_PkmnCenterJack_Change_Costume_3:
# 316 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_COSTUME_NUMBER, VAR_TEMP_1
# 317 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Change_Costume_Text_1, MSGBOX_DEFAULT
# 319 "data/scripts/pkmn_center_jack.pory"
	warp MAP_LITTLEROOT_TOWN, 192, 192, 192
	goto Common_EventScript_PkmnCenterJack_Change_Costume_1

Common_EventScript_PkmnCenterJack_Change_Costume_4:
# 323 "data/scripts/pkmn_center_jack.pory"
	checkplayergender
# 324 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, GENDER_FEMALE
	goto_if_eq Common_EventScript_PkmnCenterJack_Change_Costume_7
# 329 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_COSTUME_NUMBER, VAR_TEMP_1
# 331 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Change_Costume_Text_1, MSGBOX_DEFAULT
# 332 "data/scripts/pkmn_center_jack.pory"
	warp MAP_LITTLEROOT_TOWN, 192, 192, 192
Common_EventScript_PkmnCenterJack_Change_Costume_6:
	goto Common_EventScript_PkmnCenterJack_Change_Costume_1

Common_EventScript_PkmnCenterJack_Change_Costume_5:
# 337 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Change_Costume_Text_3, MSGBOX_DEFAULT
	goto Common_EventScript_PkmnCenterJack_Change_Costume_1

Common_EventScript_PkmnCenterJack_Change_Costume_7:
# 326 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Change_Costume_Text_2, MSGBOX_DEFAULT
	goto Common_EventScript_PkmnCenterJack_Change_Costume_6


Common_EventScript_PkmnCenterJack_WonderTrade::
# 346 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_0x8008, INGAME_TRADE_SEEDOT
# 347 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 348 "data/scripts/pkmn_center_jack.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 349 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 351 "data/scripts/pkmn_center_jack.pory"
	checkitem ITEM_WONDER_CHARM, 1
# 352 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_PkmnCenterJack_WonderTrade_2
# 358 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_WonderTrade_Text_1, MSGBOX_YESNO
Common_EventScript_PkmnCenterJack_WonderTrade_1:
# 361 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, NO
	goto_if_eq Common_EventScript_PkmnCenterJack_WonderTrade_6
# 366 "data/scripts/pkmn_center_jack.pory"
	checkitem ITEM_WONDER_CHARM, 1
# 367 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_PkmnCenterJack_WonderTrade_10
Common_EventScript_PkmnCenterJack_WonderTrade_9:
# 371 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_PkmnCenterJack_WonderTrade_13
# 376 "data/scripts/pkmn_center_jack.pory"
	special ChoosePartyMon
# 377 "data/scripts/pkmn_center_jack.pory"
	waitstate
# 378 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 380 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8004, 255
	goto_if_eq Common_EventScript_PkmnCenterJack_WonderTrade_19
Common_EventScript_PkmnCenterJack_WonderTrade_18:
# 383 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 384 "data/scripts/pkmn_center_jack.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 385 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 386 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, VAR_0x8009
# 387 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 388 "data/scripts/pkmn_center_jack.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 389 "data/scripts/pkmn_center_jack.pory"
	special CreateInGameWonderTradePokemon
# 390 "data/scripts/pkmn_center_jack.pory"
	special DoInGameTradeScene
# 391 "data/scripts/pkmn_center_jack.pory"
	waitstate
# 392 "data/scripts/pkmn_center_jack.pory"
	special DestroyFollower
# 393 "data/scripts/pkmn_center_jack.pory"
	bufferspeciesname 0, VAR_0x8009
# 394 "data/scripts/pkmn_center_jack.pory"
	playse SE_SHOP
# 396 "data/scripts/pkmn_center_jack.pory"
	checkitem ITEM_WONDER_CHARM, 1
# 397 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_PkmnCenterJack_WonderTrade_22
Common_EventScript_PkmnCenterJack_WonderTrade_21:
# 401 "data/scripts/pkmn_center_jack.pory"
	clearflag FLAG_FOLLOWER_IS_ENABLED
# 402 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_WonderTrade_Text_3, MSGBOX_DEFAULT
Common_EventScript_PkmnCenterJack_WonderTrade_12:
# 404 "data/scripts/pkmn_center_jack.pory"
	checkitem ITEM_WONDER_CHARM, 1
# 405 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_PkmnCenterJack_WonderTrade_16
Common_EventScript_PkmnCenterJack_WonderTrade_5:
# 409 "data/scripts/pkmn_center_jack.pory"
	release
	end

Common_EventScript_PkmnCenterJack_WonderTrade_2:
# 353 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_SHOP_MONEY_TYPE, MART_MONEY_TYPE_BATTLE_POINTS
# 354 "data/scripts/pkmn_center_jack.pory"
	showmoneybox 0, 0, 0
# 355 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_WonderTrade_Text_0, MSGBOX_YESNO
	goto Common_EventScript_PkmnCenterJack_WonderTrade_1

Common_EventScript_PkmnCenterJack_WonderTrade_6:
# 362 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_WonderTrade_Cancel
	goto Common_EventScript_PkmnCenterJack_WonderTrade_5

Common_EventScript_PkmnCenterJack_WonderTrade_10:
# 368 "data/scripts/pkmn_center_jack.pory"
	checkmoney WONDER_TRADE_PRICE, 0
	goto Common_EventScript_PkmnCenterJack_WonderTrade_9

Common_EventScript_PkmnCenterJack_WonderTrade_13:
# 372 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_WonderTrade_Text_2, MSGBOX_DEFAULT
# 373 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_SHOP_MONEY_TYPE, 0
	goto Common_EventScript_PkmnCenterJack_WonderTrade_12

Common_EventScript_PkmnCenterJack_WonderTrade_16:
# 406 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
	goto Common_EventScript_PkmnCenterJack_WonderTrade_5

Common_EventScript_PkmnCenterJack_WonderTrade_19:
# 381 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_WonderTrade_Cancel
	goto Common_EventScript_PkmnCenterJack_WonderTrade_18

Common_EventScript_PkmnCenterJack_WonderTrade_22:
# 398 "data/scripts/pkmn_center_jack.pory"
	removemoney WONDER_TRADE_PRICE, 0
	goto Common_EventScript_PkmnCenterJack_WonderTrade_21


Common_EventScript_PkmnCenterJack_WonderTrade_Cancel::
# 414 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_WonderTrade_Cancel_Text_0, MSGBOX_DEFAULT
# 415 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
# 416 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack
	return


Common_EventScript_PkmnCenterJack_EggMoveTutor_Price::
# 422 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_EGG_MOVES
# 423 "data/scripts/pkmn_center_jack.pory"
	setflag FLAG_IS_MOVE_TUTOR
# 424 "data/scripts/pkmn_center_jack.pory"
	compare VAR_NUM_BADGES, 6
	goto_if_ge Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_1
# 449 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_Text_2, MSGBOX_DEFAULT
# 450 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_1:
# 425 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_SHOP_MONEY_TYPE, MART_MONEY_TYPE_BATTLE_POINTS
# 426 "data/scripts/pkmn_center_jack.pory"
	showmoneybox 0, 0, 0
# 427 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_Text_0, MSGBOX_YESNO
# 428 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_4
# 444 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
# 445 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_4:
# 430 "data/scripts/pkmn_center_jack.pory"
	checkmoney 4, 0
# 431 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_7
# 437 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
# 438 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_Text_1, MSGBOX_DEFAULT
# 439 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_7:
# 432 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
# 433 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon
	return


Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon::
# 455 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_0, MSGBOX_DEFAULT
# 456 "data/scripts/pkmn_center_jack.pory"
	special ChooseMonForMoveRelearner
# 457 "data/scripts/pkmn_center_jack.pory"
	waitstate
# 458 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8004, 255
	goto_if_eq Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_1
# 462 "data/scripts/pkmn_center_jack.pory"
	special IsSelectedMonEgg
# 463 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_4
# 468 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_7
# 473 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_3, MSGBOX_DEFAULT
# 474 "data/scripts/pkmn_center_jack.pory"
	special TeachMoveRelearnerMove
# 475 "data/scripts/pkmn_center_jack.pory"
	waitstate
# 476 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8004, 0
	goto_if_eq Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_10
# 480 "data/scripts/pkmn_center_jack.pory"
	playse SE_SHOP
# 481 "data/scripts/pkmn_center_jack.pory"
	removemoney 4, 0
# 482 "data/scripts/pkmn_center_jack.pory"
	call Common_EventScript_PkmnCenterJack_Clear_Move_Tutor_Data
# 483 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_4, MSGBOX_DEFAULT
# 484 "data/scripts/pkmn_center_jack.pory"
	releaseall
	end

Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_1:
# 459 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_4:
# 464 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_1, MSGBOX_DEFAULT
# 465 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_7:
# 469 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_2, MSGBOX_DEFAULT
	return

Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_10:
# 477 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon
	return


Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price::
# 495 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_MOVES
# 496 "data/scripts/pkmn_center_jack.pory"
	setflag FLAG_IS_MOVE_TUTOR
# 497 "data/scripts/pkmn_center_jack.pory"
	compare VAR_NUM_BADGES, 9
	goto_if_ge Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_1
# 522 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_Text_1, MSGBOX_DEFAULT
# 523 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_1:
# 498 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_SHOP_MONEY_TYPE, MART_MONEY_TYPE_BATTLE_POINTS
# 499 "data/scripts/pkmn_center_jack.pory"
	showmoneybox 0, 0, 0
# 500 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_Text_0, MSGBOX_YESNO
# 501 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_4
# 517 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
# 518 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_4:
# 503 "data/scripts/pkmn_center_jack.pory"
	checkmoney 6, 0
# 504 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_7
# 510 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
# 511 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_Text_1, MSGBOX_DEFAULT
# 512 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_7:
# 505 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
# 506 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon
	return


Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon::
# 528 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_0, MSGBOX_DEFAULT
# 529 "data/scripts/pkmn_center_jack.pory"
	special ChooseMonForMoveRelearner
# 530 "data/scripts/pkmn_center_jack.pory"
	waitstate
# 531 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8004, 255
	goto_if_eq Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon_1
# 535 "data/scripts/pkmn_center_jack.pory"
	special IsSelectedMonEgg
# 536 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon_4
# 541 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon_7
# 546 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_3, MSGBOX_DEFAULT
# 547 "data/scripts/pkmn_center_jack.pory"
	special TeachMoveRelearnerMove
# 548 "data/scripts/pkmn_center_jack.pory"
	waitstate
# 549 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8004, 0
	goto_if_eq Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon_10
# 553 "data/scripts/pkmn_center_jack.pory"
	playse SE_SHOP
# 554 "data/scripts/pkmn_center_jack.pory"
	removemoney 6, 0
# 555 "data/scripts/pkmn_center_jack.pory"
	call Common_EventScript_PkmnCenterJack_Clear_Move_Tutor_Data
# 556 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_4, MSGBOX_DEFAULT
# 557 "data/scripts/pkmn_center_jack.pory"
	releaseall
	end

Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon_1:
# 532 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon_4:
# 537 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_1, MSGBOX_DEFAULT
# 538 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon_7:
# 542 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_2, MSGBOX_DEFAULT
	return

Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon_10:
# 550 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_TutorMoveTutor_ChooseMon
	return


Common_EventScript_PkmnCenterJack_TmMoveTutor_Price::
# 568 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_PARTY_MENU_TUTOR_STATE, MOVE_TUTOR_TM_MOVES
# 569 "data/scripts/pkmn_center_jack.pory"
	setflag FLAG_IS_MOVE_TUTOR
# 570 "data/scripts/pkmn_center_jack.pory"
	compare VAR_NUM_BADGES, 12
	goto_if_ge Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_1
# 595 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_Text_1, MSGBOX_DEFAULT
# 596 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_1:
# 571 "data/scripts/pkmn_center_jack.pory"
	setvar VAR_SHOP_MONEY_TYPE, MART_MONEY_TYPE_BATTLE_POINTS
# 572 "data/scripts/pkmn_center_jack.pory"
	showmoneybox 0, 0, 0
# 573 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_Text_0, MSGBOX_YESNO
# 574 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_4
# 590 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
# 591 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_4:
# 576 "data/scripts/pkmn_center_jack.pory"
	checkmoney 8, 0
# 577 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_7
# 583 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
# 584 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_Text_1, MSGBOX_DEFAULT
# 585 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_7:
# 578 "data/scripts/pkmn_center_jack.pory"
	hidemoneybox
# 579 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon
	return


Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon::
# 601 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_0, MSGBOX_DEFAULT
# 602 "data/scripts/pkmn_center_jack.pory"
	special ChooseMonForMoveRelearner
# 603 "data/scripts/pkmn_center_jack.pory"
	waitstate
# 604 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8004, 255
	goto_if_eq Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon_1
# 608 "data/scripts/pkmn_center_jack.pory"
	special IsSelectedMonEgg
# 609 "data/scripts/pkmn_center_jack.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon_4
# 614 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8005, 0
	goto_if_eq Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon_7
# 619 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_3, MSGBOX_DEFAULT
# 620 "data/scripts/pkmn_center_jack.pory"
	special TeachMoveRelearnerMove
# 621 "data/scripts/pkmn_center_jack.pory"
	waitstate
# 622 "data/scripts/pkmn_center_jack.pory"
	compare VAR_0x8004, 0
	goto_if_eq Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon_10
# 626 "data/scripts/pkmn_center_jack.pory"
	playse SE_SHOP
# 627 "data/scripts/pkmn_center_jack.pory"
	removemoney 8, 0
# 628 "data/scripts/pkmn_center_jack.pory"
	call Common_EventScript_PkmnCenterJack_Clear_Move_Tutor_Data
# 629 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_4, MSGBOX_DEFAULT
# 630 "data/scripts/pkmn_center_jack.pory"
	releaseall
	end

Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon_1:
# 605 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon_4:
# 610 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_1, MSGBOX_DEFAULT
# 611 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_Move_Learner
	return

Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon_7:
# 615 "data/scripts/pkmn_center_jack.pory"
	msgbox Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_2, MSGBOX_DEFAULT
	return

Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon_10:
# 623 "data/scripts/pkmn_center_jack.pory"
	goto Common_EventScript_PkmnCenterJack_TM_TutorMoveTutor_ChooseMon
	return


Common_EventScript_PkmnCenterJack_Lower_Difficulty_Text_0:
# 273 "data/scripts/pkmn_center_jack.pory"
	.string "Do you want to lower the difficulty?$"

Common_EventScript_PkmnCenterJack_Lower_Difficulty_Text_1:
# 279 "data/scripts/pkmn_center_jack.pory"
	.string "The difficulty became Normal.$"

Common_EventScript_PkmnCenterJack_Lower_Difficulty_Text_2:
# 284 "data/scripts/pkmn_center_jack.pory"
	.string "The difficulty became Easy.$"

Common_EventScript_PkmnCenterJack_Lower_Difficulty_Text_3:
# 298 "data/scripts/pkmn_center_jack.pory"
	.string "You are already in the lowest\n"
	.string "difficulty!$"

Common_EventScript_PkmnCenterJack_Change_Costume_Text_0:
# 308 "data/scripts/pkmn_center_jack.pory"
	.string "What outfit do you want to use today?$"

Common_EventScript_PkmnCenterJack_Change_Costume_Text_1:
# 317 "data/scripts/pkmn_center_jack.pory"
	.string "Come this way so you can change your\n"
	.string "outfit$"

Common_EventScript_PkmnCenterJack_Change_Costume_Text_2:
# 326 "data/scripts/pkmn_center_jack.pory"
	.string "Sorry but this costume has not been\n"
	.string "added to the game yet.$"

Common_EventScript_PkmnCenterJack_Change_Costume_Text_3:
# 337 "data/scripts/pkmn_center_jack.pory"
	.string "Come back anytime you want to change\n"
	.string "outfits!$"

Common_EventScript_PkmnCenterJack_WonderTrade_Text_0:
# 355 "data/scripts/pkmn_center_jack.pory"
	.string "Do you want to try Wonder Trading, its\n"
	.string "only 5BP per try?$"

Common_EventScript_PkmnCenterJack_WonderTrade_Text_1:
# 358 "data/scripts/pkmn_center_jack.pory"
	.string "Do you want to try Wonder Trading?, its\n"
	.string "free for you$"

Common_EventScript_PkmnCenterJack_WonderTrade_Text_2:
# 372 "data/scripts/pkmn_center_jack.pory"
	.string "But it seems you can't afford wonder\n"
	.string "trading right now.\p"
	.string "Please come back when you have atleast\n"
	.string "5BP.$"

Common_EventScript_PkmnCenterJack_WonderTrade_Text_3:
# 402 "data/scripts/pkmn_center_jack.pory"
	.string "Please take care of your new Pokémon.$"

Common_EventScript_PkmnCenterJack_WonderTrade_Cancel_Text_0:
# 414 "data/scripts/pkmn_center_jack.pory"
	.string "All right. Let me know if you want to\n"
	.string "give it a try.$"

Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_Text_0:
# 427 "data/scripts/pkmn_center_jack.pory"
	.string "Learning an Egg move will cost you 4\n"
	.string "Battle Points, do you want to continue?$"

Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_Text_1:
# 438 "data/scripts/pkmn_center_jack.pory"
	.string "It seems like you don't have enough\n"
	.string "Battle Points!$"

Common_EventScript_PkmnCenterJack_EggMoveTutor_Price_Text_2:
# 449 "data/scripts/pkmn_center_jack.pory"
	.string "Sorry, you need 6 badges to use this\n"
	.string "service!$"

Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_0:
# 455 "data/scripts/pkmn_center_jack.pory"
	.string "Which Pokémon should I teach a move?$"

Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_1:
# 464 "data/scripts/pkmn_center_jack.pory"
	.string "Sorry, I can't teach moves to an Egg!$"

Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_2:
# 469 "data/scripts/pkmn_center_jack.pory"
	.string "Sorry, this Pokémon can't learn any\n"
	.string "Tutor Move!$"

Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_3:
# 473 "data/scripts/pkmn_center_jack.pory"
	.string "Which move should I teach it?$"

Common_EventScript_PkmnCenterJack_Egg_TutorMoveTutor_ChooseMon_Text_4:
# 483 "data/scripts/pkmn_center_jack.pory"
	.string "Your Pokémon was able to learn the move\n"
	.string "successfuly, please continue to use\l"
	.string "our services!$"

Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_Text_0:
# 500 "data/scripts/pkmn_center_jack.pory"
	.string "Learning a Tutor move will cost you 6\n"
	.string "Battle Points, do you want to continue?$"

Common_EventScript_PkmnCenterJack_TutorMoveTutor_Price_Text_1:
# 522 "data/scripts/pkmn_center_jack.pory"
	.string "Sorry, you need 9 badges to use this\n"
	.string "service!$"

Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_Text_0:
# 573 "data/scripts/pkmn_center_jack.pory"
	.string "Learning a TM move will cost you 8\n"
	.string "Battle Points, do you want to continue?$"

Common_EventScript_PkmnCenterJack_TmMoveTutor_Price_Text_1:
# 595 "data/scripts/pkmn_center_jack.pory"
	.string "Sorry, you need 12 badges to use this\n"
	.string "service!$"
