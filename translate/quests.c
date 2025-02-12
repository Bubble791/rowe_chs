#include "global.h"

// strings
const u8 sText_Empty[] = _("");
const u8 sText_Quests[] = _("Achievement");
const u8 sText_QuestMenu_Begin[] = _("Begin");
const u8 sText_QuestMenu_End[] = _("End");
const u8 sText_QuestMenu_Hint[] = _("Hint");
const u8 sText_QuestMenu_Progress[] = _("Progress");
const u8 sText_QuestMenu_Reward[] = _("Reward");
const u8 sText_QuestMenu_Get_Reward[] = _("Prize");
const u8 sText_QuestMenu_Complete[] = _("{COLOR}{BLUE}Done");
const u8 sText_QuestMenu_Exit[] = _("Exit the Quest Menu");
const u8 sText_QuestMenu_SelectedQuest[] = _("Do what with\nthis quest?");
const u8 sText_QuestMenu_DisplayDetails[] = _("Hint: {STR_VAR_1}");
const u8 sText_QuestMenu_DisplayProgress[] = _("Progress: {STR_VAR_1}/{STR_VAR_2}");
const u8 sText_QuestMenu_DisplayReward[] = _("Reward: {STR_VAR_1}\nQuantity: {STR_VAR_2}");
const u8 sText_QuestMenu_DisplayRewardDisabled[] = _("Reward: ?\nQuantity: Unknown");
const u8 sText_QuestMenu_YouAlreadyHaveReward[] = _("You already got this prize");
const u8 sText_QuestMenu_GotReward[] = _("Achievement Completed, You got\n{STR_VAR_1} x{STR_VAR_2} as a Reward.");
const u8 sText_QuestMenu_Unable_To_Get_Reward[] = _("Achievement Completed, unable\nto get Reward.");
const u8 sText_QuestMenu_BeginQuest[] = _("Initiating Quest:\n{STR_VAR_1}");
const u8 sText_QuestMenu_EndQuest[] = _("Cancelling Quest:\n{STR_VAR_1}");
const u8 sText_QuestMenu_GotReward_Other[] = _("Achievement Completed, You got\nyour Reward.");

//Quest Status
const u8 sText_QuestMenu_QuestNumber[] = _("{STR_VAR_1} - {STR_VAR_2}");
const u8 sText_QuestMenu_Unk[] = _("?????????");
const u8 sText_QuestMenu_Locked[] = _("Status: {COLOR}{LIGHT_RED}{SHADOW RED}Locked");
const u8 sText_QuestMenu_Unlocked[] = _("Status: {COLOR}{LIGHT_BLUE}{SHADOW BLUE}Unlocked");
const u8 sText_QuestMenu_Completed[] = _("Status: {COLOR}{LIGHT_GREEN}{SHADOW GREEN}Completed");
const u8 sText_QuestMenu_GetYourReward[] = _("{COLOR}{LIGHT_GREEN}{SHADOW GREEN}Get your Reward!");

//Quest Difficulty
const u8 sText_QuestMenu_Difficulty_Easy[] = _("Difficulty: {COLOR}{LIGHT_GREEN}{SHADOW GREEN}Easy");
const u8 sText_QuestMenu_Difficulty_Medium[] = _("Difficulty: {COLOR}{LIGHT_BLUE}{SHADOW BLUE}Medium");
const u8 sText_QuestMenu_Difficulty_Hard[] = _("Difficulty: {COLOR}{LIGHT_RED}{SHADOW RED}Hard");
const u8 sText_QuestMenu_Difficulty_Extreme[] = _("Difficulty: {COLOR}{LIGHT_RED}{SHADOW RED}Extreme");
const u8 sText_QuestMenu_Difficulty_Impossible[] = _("Difficulty: {COLOR}{LIGHT_RED}{SHADOW RED}Impossible");
const u8 sText_QuestMenu_Difficulty_Disabled[] = _("{COLOR}{LIGHT_RED}{SHADOW RED}Disabled");

const struct Achievements sAchievementsData[MAX_ACHIEVEMENTS_NUM] =
{
    [ACHIEVEMENT_FIRST_BADGE] = 
    {
        .name              = _("The Start of the Journey"),
        .desc              = _("Win your first Gym Badge"),
        .hint              = _("Badge"),
        .rewardName        = _(""),
        .rewardType        = REWARD_TYPE_OTHER,
        .reward            = REWARD_TYPE_BP,
        .reward_qty        = 10,
        .difficulty        = QUEST_DIFFICULTY_EASY,
        .completedVar      = VAR_NUM_BADGES,
        .varCompletedValue = 1,
    },
    [ACHIEVEMENT_FOURTH_BADGE] = 
    {
        .name              = _("Get 4 Badges"),
        .desc              = _("Defeat 4 Different Gym Leaders."),
        .hint              = _("Four"),
        .rewardName        = _(""),
        .rewardType        = REWARD_TYPE_OTHER,
        .reward            = REWARD_TYPE_BP,
        .reward_qty        = 20,
        .difficulty        = QUEST_DIFFICULTY_EASY,
        .completedVar      = VAR_NUM_BADGES,
        .varCompletedValue = 4,
    },
    [ACHIEVEMENT_EIGHT_BADGE] = 
    {
        .name              = _("Half way there"),
        .desc              = _("Defeat 8 Different Gym Leaders."),
        .hint              = _("Eight"),
        .rewardName        = _(""),
        .rewardType        = REWARD_TYPE_OTHER,
        .reward            = REWARD_TYPE_BP,
        .reward_qty        = 50,
        .difficulty        = QUEST_DIFFICULTY_MEDIUM,
        .completedVar      = VAR_NUM_BADGES,
        .varCompletedValue = 8,
    },
    [ACHIEVEMENT_FINAL_BADGE] = 
    {
        .name          = _("Ready for Victory"),
        .desc          = _("Defeat every Gym Leader in Hoenn."),
        .hint          = _("Eight"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_BP,
        .reward_qty    = 100,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_DEFEATED_ALL_GYMS,
    },
    [ACHIEVEMENT_SEVII_1_COMPLETE] = 
    {
        .name          = _("Sevii Research 1"),
        .desc          = _("Find Colress at the end of Sevii 1."),
        .hint          = _("One Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_EASY,
        .completedFlag = FLAG_GOT_SEVII_TICKET_1,
    },
    [ACHIEVEMENT_SEVII_2_COMPLETE] = 
    {
        .name          = _("Sevii Research 2"),
        .desc          = _("Find Colress at the end of Sevii 2."),
        .hint          = _("Two Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_EASY,
        .completedFlag = FLAG_GOT_SEVII_TICKET_2,
    },
    [ACHIEVEMENT_SEVII_3_COMPLETE] = 
    {
        .name          = _("Sevii Research 3"),
        .desc          = _("Find Colress at the end of Sevii 2."),
        .hint          = _("Three Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_3,
    },
    [ACHIEVEMENT_SEVII_4_COMPLETE] = 
    {
        .name          = _("Sevii Research 4"),
        .desc          = _("Find Colress at the end of Sevii 4."),
        .hint          = _("Four Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_4,
    },
    [ACHIEVEMENT_SEVII_5_COMPLETE] = 
    {
        .name          = _("Sevii Research 5"),
        .desc          = _("Find Colress at the end of Sevii 5."),
        .hint          = _("Five Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_5,
    },
    [ACHIEVEMENT_SEVII_6_COMPLETE] = 
    {
        .name          = _("Sevii Research 6"),
        .desc          = _("Find Colress at the end of Sevii 6."),
        .hint          = _("Six Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_6,
    },
    [ACHIEVEMENT_SEVII_7_COMPLETE] = 
    {
        .name          = _("Sevii Research 7"),
        .desc          = _("Find Colress at the end of Sevii 7."),
        .hint          = _("Seven Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_7,
    },
    [ACHIEVEMENT_SEVII_8_COMPLETE] = 
    {
        .name          = _("Sevii Research 8"),
        .desc          = _("Find Colress at the end of Sevii 8."),
        .hint          = _("Eight Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_8,
    },
    [ACHIEVEMENT_DEFEAT_WALLY] = 
    {
        .name            = _("Frail Boy"),
        .desc            = _("Defeat the Pokémon Trainer Wally in\nthe Victory Road."),
        .hint            = _("Green Hair"),
        .rewardName      = _(""),
        .rewardType      = REWARD_TYPE_OTHER,
        .reward          = REWARD_TYPE_TRAINER_EXP,
        .reward_qty      = 1000,
        .difficulty      = QUEST_DIFFICULTY_MEDIUM,
        .defeatedTrainer = TRAINER_WALLY_VR_1,
    },
    [ACHIEVEMENT_DEFEAT_WALLACE] = 
    {
        .name          = _("Hoenn Champion"),
        .desc          = _("Enter the Hall of Fame for the first\ntime."),
        .hint          = _("Champion"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 2500,
        .difficulty    = QUEST_DIFFICULTY_HARD,
        .completedFlag = FLAG_SYS_GAME_CLEAR,
    },
    [ACHIEVEMENT_DEFEAT_RAYQUAZA] = 
    {
        .name          = _("Fry HIGHER"),
        .desc          = _("Defeat or Catch the Sky High Pokémon\nRayquaza."),
        .hint          = _("Sky High"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_BP,
        .reward_qty    = 50,
        .difficulty    = QUEST_DIFFICULTY_HARD,
        .completedFlag = FLAG_ENABLE_POST_RAYQUAZA_CONTENT,
    },
    [ACHIEVEMENT_COMPLETE_TRADES] = 
    {
        .name       = _("Trader"),
        .desc       = _("Complete All the in-game trades not counting wonder trade."),
        .hint       = _("Trade"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_ELECTIRIZER,
        .reward_qty = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_FOSSILS] = 
    {
        .name       = _("Fossil Hunter"),
        .desc       = _("Catch and Register every fossil\nin your Pokedex."),
        .hint       = _("Fossil"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_AERODACTYLITE,
        .reward_qty = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_MAX_HAPPINESS] = 
    {
        .name       = _("Friendly Trainer"),
        .desc       = _("Have 6 Pokemon with Max\nHappiness."),
        .hint       = _("Friendship"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 100,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_STEP_COUNT] = 
    {
        .name       = _("I need new Shoes"),
        .desc       = _("Max out your step count."),
        .hint       = _("Steps"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 100,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_150_EVOS] = 
    {
        .name       = _("Evolving Master"),
        .desc       = _("Evolve 150 Pokemon."),
        .hint       = _("Evo"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_DUSK_STONE,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_VISIT_ALL_OF_HOENN] = 
    {
        .name       = _("Seasoned Traveler"),
        .desc       = _("Visit every city in Hoenn."),
        .hint       = _("Map"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_FLYING_GEM,
        .reward_qty  = 6,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_VISIT_ALL_OF_SEVII] = 
    {
        .name       = _("Ferry enthusiast"),
        .desc       = _("Get all the Sevii Tickets."),
        .hint       = _("Sevii"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_WATER_GEM,
        .reward_qty = 6,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_GET_777_20_TIMES] = 
    {
        .name       = _("JACKPOT"),
        .desc       = _("Match three 7 in the slot machines\n20 times."),
        .hint       = _("Seven"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 7777,
        .difficulty = QUEST_DIFFICULTY_EXTREME,
    },
    [ACHIEVEMENT_GET_LOTTERY] = 
    {
        .name       = _("Big Prize"),
        .desc       = _("Win the Lottery for the first time."),
        .hint       = _("Lottery"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_SHOCK_DRIVE,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EXTREME,
    },
    [ACHIEVEMENT_GET_6_GREEN_SHINIES] = 
    {
        .name       = _("That thing's green"),
        .desc       = _("Get a green Shiny."),
        .hint       = _("Green"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_GREEN_SHARD,
        .reward_qty  = 12,
        .difficulty = QUEST_DIFFICULTY_HARD,
    },
    [ACHIEVEMENT_GET_5_SHINIES] = 
    {
        .name       = _("Shiny Hunter"),
        .desc       = _("Have 5 Shiny Pokemon in your party."),
        .hint       = _("Sparkle"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_PLANT_50_BERRIES] = 
    {
        .name       = _("A farmer's life"),
        .desc       = _("Plant 50 Berries."),
        .hint       = _("Berry"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_ENIGMA_BERRY,
        .reward_qty  = 10,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_DEXNAV_500_TIMES] = 
    {
        .name       = _("Detective"),
        .desc       = _("Use the Dexnav 500 times."),
        .hint       = _("Dexnav"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_RAINY_WEATHER_50_TIMES] = 
    {
        .name       = _("I need an Umbrella"),
        .desc       = _("Get in a rainy weather 50 times."),
        .hint       = _("Rain"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_UTILITY_UMBRELLA,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_DAYCARE_50_TIMES] = 
    {
        .name       = _("Caretaker"),
        .desc       = _("Use the daycare 50 times."),
        .hint       = _("Daycare"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 5,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_CLOCK_75_TIMES] = 
    {
        //.name       = _("The concept of time is scary"),
        .name       = _("Time is a scary thing"),
        .desc       = _("Check the clock 75 times."),
        .hint       = _("Clock"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_WIN_25_POKEMON_CONTESTS] = 
    {
        .name       = _("True Coordinator"),
        .desc       = _("Win 25 Pokémon Contests."),
        .hint       = _("Contest"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LATIASITE,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CAPTURE_50_FISHED_MONS] = 
    {
        .name       = _("One with the Rod"),
        .desc       = _("Fish and Capture 25 Pokémon."),
        .hint       = _("Fish"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_SAFARI_ZONE_50_TIMES] = 
    {
        .name       = _("Rock or Bait"),
        .desc       = _("Go to the Safari Zone 50 times."),
        .hint       = _("Safari"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_STRUGGLE_20_TIMES] = 
    {
        .name       = _("Out of PP"),
        .desc       = _("Use struggle 20 times."),
        .hint       = _("PP"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CATCH_75_MONS] = 
    {
        .name       = _("Gotta catch 'em all! 1"),
        .desc       = _("Catch 75 Pokemon."),
        .hint       = _("Catch"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CATCH_150_MONS] = 
    {
        .name       = _("Gotta catch 'em all! 2"),
        .desc       = _("Catch 150 Pokemon."),
        .hint       = _("Catch"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CATCH_500_MONS] = 
    {
        .name       = _("Gotta catch 'em all! 3"),
        .desc       = _("Catch 500 Pokemon."),
        .hint       = _("Catch"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_LOTERY_MATCH_1] =
    {
        .name       = _("Lucky Number 1"),
        .desc       = _("Match 2 number in the Lottery."),
        .hint       = _("Lottery"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_LOTERY_MATCH_2] =
    {
        .name       = _("Lucky Number 2"),
        .desc       = _("Match 3 number in the Lottery."),
        .hint       = _("Lottery"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_LOTERY_MATCH_3] =
    {
        .name       = _("Lucky Number 3"),
        .desc       = _("Match 4 number in the Lottery."),
        .hint       = _("Lottery"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_LOTERY_MATCH_4] =
    {
        .name       = _("Lucky Number 4"),
        .desc       = _("Hit the Jackpot prize."),
        .hint       = _("Jackpot"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_START_30_MOCK_BATTLES_NORMAL] = 
    {
        .name       = _("Battle Enthusiast"),
        .desc       = _("Start 30 Normal Mock Battles."),
        .hint       = _("Mock"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DO_2500_DAMAGE] = 
    {
        .name       = _("Powerful"),
        .desc       = _("Do 2500 Damage in a single hit."),
        .hint       = _("Damage"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DO_7500_DAMAGE] = 
    {
        .name       = _("Unstoppable"),
        .desc       = _("Do 7500 Damage in a single hit."),
        .hint       = _("Damage"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DO_12500_DAMAGE] = 
    {
        .name       = _("Overkill"),
        .desc       = _("Do 12500 Damage in a single hit."),
        .hint       = _("Damage"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_UPDATE_YOUR_GAME_5_TIMES] = 
    {
        .name       = _("Here we go Again"),
        .desc       = _("Update your game 5 times."),
        .hint       = _("Update"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_YEAR_OLD_SAVE] = 
    {
        .name       = _("Happy Birthday!"),
        .desc       = _("Have a Year old Save File."),
        .hint       = _("Year"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_30_TRENDS] = 
    {
        .name       = _("Trendy"),
        .desc       = _("Start 30 Trends."),
        .hint       = _("Trend"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_MAKE_30_POKEBLOCKS] = 
    {
        .name       = _("Blockhead"),
        .desc       = _("Start 30 Trends."),
        .hint       = _("Blocks"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_SCANNER_QUEST] = 
    {
        .name       = _("Sea-man"),
        .desc       = _("Gave the scanner to Capt. Stern."),
        .hint       = _("Scanner"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DEFEAT_RED_AND_STEVEN] = 
    {
        .name       = _("Pokémon Master"),
        .desc       = _("Defeat the Pokémon Master Red and the\nEx-Champion Steven."),
        .hint       = _("Master"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_SILVER_SYMBOLS] = 
    {
        .name       = _("Silver Symbols"),
        .desc       = _("Get all the Silver Symbols in the\nBattle Frontier."),
        .hint       = _("Silver"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_SHINY_TITLESCREEN] = 
    {
        .name       = _("Ambition"),
        .desc       = _("Get a Shiny Rayquaza at the Title Screen."),
        .hint       = _("Nobunaga"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_50_MOCK_BATTLES_HARD] = 
    {
        .name       = _("Hard Battler"),
        .desc       = _("Fight 50 Hard Mock battles."),
        .hint       = _("Mock"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_POKERUS] = 
    {
        .name       = _("Virus Detected"),
        .desc       = _("Get Pokerus atleast once."),
        .hint       = _("Pokerus"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_NEW_GAME_PLUS] = 
    {
        .name       = _("Two times the fun"),
        .desc       = _("Start a New Game+ Save."),
        .hint       = _("Plus"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_MENU_AT_3AM] = 
    {
        .name       = _("Spooky Time"),
        .desc       = _("Open this menu at 3AM."),
        .hint       = _("Ghost"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_WIN_MOCK_BATTLE_WITH_ONLY_METRONOME] = 
    {
        .name       = _("Luck's on my Side"),
        .desc       = _("Win a Hard Mock Battle with a Party of 6\nPokémon that only know Metronome."),
        .hint       = _("Metronome"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_TM_COLLECTION] = 
    {
        .name       = _("Double Platinum"),
        .desc       = _("Complete your TM Collection."),
        .hint       = _("Discs"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_GOLD_SYMBOLS] = 
    {
        .name       = _("Gold Symbols"),
        .desc       = _("Get all the Gold Symbols in the\nBattle Frontier."),
        .hint       = _("Gold"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_POKEDEX] = 
    {
        .name       = _("Complete Researcher"),
        .desc       = _("Complete your Pokedex."),
        .hint       = _("Dex"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
    [ACHIEVEMENT_DEFEAT_ARCEUS] = 
    {
        .name       = _("The last challenge"),
        .desc       = _("Defeat or Catch the Alpha Pokémon \nArceus."),
        .hint       = _("Alpha"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
    [ACHIEVEMENT_COMPLETE_ALL_ACHIVEMENTS] = 
    {
        .name       = _("My deepest apologies"),
        .desc       = _("Complete every mission in the game."),
        .hint       = _("The End"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
    [NUM_ACHIEVEMENTS] = 
    {
        .name       = _("Disabled Quest"),
        .desc       = _("This Quest is Disabled."),
        .hint       = _("Wait"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
};
