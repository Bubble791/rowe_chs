#include "global.h"

// strings
const u8 sText_Empty[] = _("");
const u8 sText_Quests[] = _("成就");
const u8 sText_QuestMenu_Begin[] = _("开始");
const u8 sText_QuestMenu_End[] = _("结束");
const u8 sText_QuestMenu_Hint[] = _("提示");
const u8 sText_QuestMenu_Progress[] = _("进度");
const u8 sText_QuestMenu_Reward[] = _("奖励");
const u8 sText_QuestMenu_Get_Reward[] = _("奖品");
const u8 sText_QuestMenu_Complete[] = _("{COLOR}{BLUE}完成");
const u8 sText_QuestMenu_Exit[] = _("退出任务菜单");
const u8 sText_QuestMenu_SelectedQuest[] = _("对此任务\n要做什么？");
const u8 sText_QuestMenu_DisplayDetails[] = _("提示: {STR_VAR_1}");
const u8 sText_QuestMenu_DisplayProgress[] = _("进度: {STR_VAR_1}/{STR_VAR_2}");
const u8 sText_QuestMenu_DisplayReward[] = _("奖励: {STR_VAR_1}\n数量: {STR_VAR_2}");
const u8 sText_QuestMenu_DisplayRewardDisabled[] = _("奖励: ?\n数量: 未知");
const u8 sText_QuestMenu_YouAlreadyHaveReward[] = _("你已经获得了这个奖品");
const u8 sText_QuestMenu_GotReward[] = _("成就完成，你获得了\n{STR_VAR_1} x{STR_VAR_2} 作为奖励。");
const u8 sText_QuestMenu_Unable_To_Get_Reward[] = _("成就完成，但无法\n获得奖励。");
const u8 sText_QuestMenu_BeginQuest[] = _("开始任务:\n{STR_VAR_1}");
const u8 sText_QuestMenu_EndQuest[] = _("取消任务:\n{STR_VAR_1}");
const u8 sText_QuestMenu_GotReward_Other[] = _("成就完成，你获得了\n你的奖励。");

//Quest Status
const u8 sText_QuestMenu_QuestNumber[] = _("{STR_VAR_1} - {STR_VAR_2}");
const u8 sText_QuestMenu_Unk[] = _("?????????");
const u8 sText_QuestMenu_Locked[] = _("状态: {COLOR}{LIGHT_RED}{SHADOW RED}已锁定");
const u8 sText_QuestMenu_Unlocked[] = _("状态: {COLOR}{LIGHT_BLUE}{SHADOW BLUE}已解锁");
const u8 sText_QuestMenu_Completed[] = _("状态: {COLOR}{LIGHT_GREEN}{SHADOW GREEN}已完成");
const u8 sText_QuestMenu_GetYourReward[] = _("{COLOR}{LIGHT_GREEN}{SHADOW GREEN}领取你的奖励！");

//Quest Difficulty
const u8 sText_QuestMenu_Difficulty_Easy[] = _("难度: {COLOR}{LIGHT_GREEN}{SHADOW GREEN}简单");
const u8 sText_QuestMenu_Difficulty_Medium[] = _("难度: {COLOR}{LIGHT_BLUE}{SHADOW BLUE}中等");
const u8 sText_QuestMenu_Difficulty_Hard[] = _("难度: {COLOR}{LIGHT_RED}{SHADOW RED}困难");
const u8 sText_QuestMenu_Difficulty_Extreme[] = _("难度: {COLOR}{LIGHT_RED}{SHADOW RED}极难");
const u8 sText_QuestMenu_Difficulty_Impossible[] = _("难度: {COLOR}{LIGHT_RED}{SHADOW RED}不可能");
const u8 sText_QuestMenu_Difficulty_Disabled[] = _("{COLOR}{LIGHT_RED}{SHADOW RED}已停用");

const struct Achievements sAchievementsData[MAX_ACHIEVEMENTS_NUM] =
{
    [ACHIEVEMENT_FIRST_BADGE] = 
    {
        .name              = _("旅程的开始"),
        .desc              = _("赢得你的第一个道馆徽章。"),
        .hint              = _("徽章"),
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
        .name              = _("获得4枚徽章"),
        .desc              = _("击败4位不同的道馆馆主。"),
        .hint              = _("4"),
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
        .name              = _("到一半了"),
        .desc              = _("击败8位不同的道馆馆主。"),
        .hint              = _("8"),
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
        .name          = _("准备迎接胜利"),
        .desc          = _("击败丰缘的所有道馆馆主。"),
        .hint          = _("8"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_BP,
        .reward_qty    = 100,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_DEFEATED_ALL_GYMS,
    },
    [ACHIEVEMENT_SEVII_1_COMPLETE] = 
    {
        .name          = _("七之岛研究 1"),
        .desc          = _("在七之岛找到阿克罗玛 1。"),
        .hint          = _("第1岛"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_EASY,
        .completedFlag = FLAG_GOT_SEVII_TICKET_1,
    },
    [ACHIEVEMENT_SEVII_2_COMPLETE] = 
    {
        .name          = _("七之岛研究 2"),
        .desc          = _("在七之岛找到阿克罗玛 2。"),
        .hint          = _("第2岛"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_EASY,
        .completedFlag = FLAG_GOT_SEVII_TICKET_2,
    },
    [ACHIEVEMENT_SEVII_3_COMPLETE] = 
    {
        .name          = _("七之岛研究 3"),
        .desc          = _("在七之岛找到阿克罗玛 3。"),
        .hint          = _("第3岛"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_3,
    },
    [ACHIEVEMENT_SEVII_4_COMPLETE] = 
    {
        .name          = _("七之岛研究 4"),
        .desc          = _("在七之岛找到阿克罗玛 4。"),
        .hint          = _("第4岛"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_4,
    },
    [ACHIEVEMENT_SEVII_5_COMPLETE] = 
    {
        .name          = _("七之岛研究 5"),
        .desc          = _("在七之岛找到阿克罗玛 5。"),
        .hint          = _("第5岛"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_5,
    },
    [ACHIEVEMENT_SEVII_6_COMPLETE] = 
    {
        .name          = _("七之岛研究 6"),
        .desc          = _("在七之岛找到阿克罗玛 6。"),
        .hint          = _("第6岛"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_6,
    },
    [ACHIEVEMENT_SEVII_7_COMPLETE] = 
    {
        .name          = _("七之岛研究 7"),
        .desc          = _("在七之岛找到阿克罗玛 7。"),
        .hint          = _("第7岛"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_7,
    },
    [ACHIEVEMENT_SEVII_8_COMPLETE] = 
    {
        .name          = _("七之岛研究 8"),
        .desc          = _("在七之岛找到阿克罗玛 8。"),
        .hint          = _("第8岛"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_8,
    },
    [ACHIEVEMENT_DEFEAT_WALLY] = 
    {
        .name            = _("虚弱的男孩"),
        .desc            = _("在冠军之路\n击败宝可梦训练家小光。"),
        .hint            = _("绿头发"),
        .rewardName      = _(""),
        .rewardType      = REWARD_TYPE_OTHER,
        .reward          = REWARD_TYPE_TRAINER_EXP,
        .reward_qty      = 1000,
        .difficulty      = QUEST_DIFFICULTY_MEDIUM,
        .defeatedTrainer = TRAINER_WALLY_VR_1,
    },
    [ACHIEVEMENT_DEFEAT_WALLACE] = 
    {
        .name          = _("丰缘冠军"),
        .desc          = _("首次进入冠军殿堂。"),
        .hint          = _("冠军"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 2500,
        .difficulty    = QUEST_DIFFICULTY_HARD,
        .completedFlag = FLAG_SYS_GAME_CLEAR,
    },
    [ACHIEVEMENT_DEFEAT_RAYQUAZA] = 
    {
        .name          = _("飞得更高"),
        .desc          = _("击败或捕捉天空宝可梦\n烈空坐。"),
        .hint          = _("天空宝可梦"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_BP,
        .reward_qty    = 50,
        .difficulty    = QUEST_DIFFICULTY_HARD,
        .completedFlag = FLAG_ENABLE_POST_RAYQUAZA_CONTENT,
    },
    [ACHIEVEMENT_COMPLETE_TRADES] = 
    {
        .name       = _("交易者"),
        .desc       = _("完成游戏内所有交换\n不包括奇迹交换。"),
        .hint       = _("交换"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_ELECTIRIZER,
        .reward_qty = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_FOSSILS] = 
    {
        .name       = _("化石猎人"),
        .desc       = _("捕捉并登记所有化石宝可梦\n到你的图鉴中。"),
        .hint       = _("化石"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_AERODACTYLITE,
        .reward_qty = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_MAX_HAPPINESS] = 
    {
        .name       = _("友好训练家"),
        .desc       = _("拥有6只\n满亲密度宝可梦。"),
        .hint       = _("亲密度"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 100,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_STEP_COUNT] = 
    {
        .name       = _("我需要新鞋"),
        .desc       = _("步数达到最大值。"),
        .hint       = _("步数"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 100,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_150_EVOS] = 
    {
        .name       = _("进化大师"),
        .desc       = _("进化150只宝可梦。"),
        .hint       = _("进化"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_DUSK_STONE,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_VISIT_ALL_OF_HOENN] = 
    {
        .name       = _("经验丰富的旅行者"),
        .desc       = _("访问丰缘地区的\n每一个城市。"),
        .hint       = _("地图"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_FLYING_GEM,
        .reward_qty  = 6,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_VISIT_ALL_OF_SEVII] = 
    {
        .name       = _("渡轮爱好者"),
        .desc       = _("收集七之岛的所有船票。"),
        .hint       = _("七之岛"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_WATER_GEM,
        .reward_qty = 6,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_GET_777_20_TIMES] = 
    {
        .name       = _("中大奖"),
        .desc       = _("在老虎机中\n摇到三个7共20次。"),
        .hint       = _("7"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 7777,
        .difficulty = QUEST_DIFFICULTY_EXTREME,
    },
    [ACHIEVEMENT_GET_LOTTERY] = 
    {
        .name       = _("大奖得主"),
        .desc       = _("首次赢得彩票。"),
        .hint       = _("彩票"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_SHOCK_DRIVE,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EXTREME,
    },
    [ACHIEVEMENT_GET_6_GREEN_SHINIES] = 
    {
        .name       = _("那是绿色的"),
        .desc       = _("获得绿色的\n闪光宝可梦。"),
        .hint       = _("绿色"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_GREEN_SHARD,
        .reward_qty  = 12,
        .difficulty = QUEST_DIFFICULTY_HARD,
    },
    [ACHIEVEMENT_GET_5_SHINIES] = 
    {
        .name       = _("闪光猎人"),
        .desc       = _("队伍中有5只\n闪光宝可梦。"),
        .hint       = _("5只闪光"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_PLANT_50_BERRIES] = 
    {
        .name       = _("农夫的生活"),
        .desc       = _("种植50个树果。"),
        .hint       = _("树果"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_ENIGMA_BERRY,
        .reward_qty  = 10,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_DEXNAV_500_TIMES] = 
    {
        .name       = _("侦探"),
        .desc       = _("使用Dexnav 500次。"),
        .hint       = _("Dexnav"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_RAINY_WEATHER_50_TIMES] = 
    {
        .name       = _("我需要一把伞"),
        .desc       = _("经历50次雨天。"),
        .hint       = _("雨天"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_UTILITY_UMBRELLA,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_DAYCARE_50_TIMES] = 
    {
        .name       = _("保育员"),
        .desc       = _("使用饲育屋50次。"),
        .hint       = _("饲育屋"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 5,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_CLOCK_75_TIMES] = 
    {
        //.name       = _("The concept of time is scary"),
        .name       = _("时间是个可怕的东西"),
        .desc       = _("查看75次时钟。"),
        .hint       = _("时钟"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_WIN_25_POKEMON_CONTESTS] = 
    {
        .name       = _("真正协调者"),
        .desc       = _("赢得25场华丽大赛。"),
        .hint       = _("竞赛"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LATIASITE,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CAPTURE_50_FISHED_MONS] = 
    {
        .name       = _("与钓竿融为一体"),
        .desc       = _("钓鱼并捕捉25只宝可梦。"),
        .hint       = _("钓鱼"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_SAFARI_ZONE_50_TIMES] = 
    {
        .name       = _("岩石或诱饵"),
        .desc       = _("前往野生原野区50次。"),
        .hint       = _("原野区"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_STRUGGLE_20_TIMES] = 
    {
        .name       = _("耗尽PP"),
        .desc       = _("使用挣扎20次。"),
        .hint       = _("PP"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CATCH_75_MONS] = 
    {
        .name       = _("得全部抓住它们！ 1"),
        .desc       = _("捕捉75只宝可梦。"),
        .hint       = _("捕捉"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CATCH_150_MONS] = 
    {
        .name       = _("得全部抓住它们！ 2"),
        .desc       = _("捕捉150只宝可梦。"),
        .hint       = _("捕捉"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CATCH_500_MONS] = 
    {
        .name       = _("得全部抓住它们！ 3"),
        .desc       = _("捕捉500只宝可梦。"),
        .hint       = _("捕捉"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_LOTERY_MATCH_1] =
    {
        .name       = _("幸运数字 1"),
        .desc       = _("在彩票中\n匹配2个数字。"),
        .hint       = _("彩票"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_LOTERY_MATCH_2] =
    {
        .name       = _("幸运数字 2"),
        .desc       = _("在彩票中\n匹配3个数字。"),
        .hint       = _("彩票"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_LOTERY_MATCH_3] =
    {
        .name       = _("幸运数字 3"),
        .desc       = _("在彩票中\n匹配4个数字。"),
        .hint       = _("彩票"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_LOTERY_MATCH_4] =
    {
        .name       = _("幸运数字 4"),
        .desc       = _("中得头奖。"),
        .hint       = _("头奖"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_START_30_MOCK_BATTLES_NORMAL] = 
    {
        .name       = _("战斗爱好者"),
        .desc       = _("开始30场\n普通模拟战斗。"),
        .hint       = _("模拟"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DO_2500_DAMAGE] = 
    {
        .name       = _("强大力量"),
        .desc       = _("在一次攻击中\n造成2500点伤害。"),
        .hint       = _("伤害"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DO_7500_DAMAGE] = 
    {
        .name       = _("无可阻挡"),
        .desc       = _("在一次攻击中\n造成7500点伤害。"),
        .hint       = _("伤害"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DO_12500_DAMAGE] = 
    {
        .name       = _("过度杀戮"),
        .desc       = _("在一次攻击中\n造成12500点伤害。"),
        .hint       = _("伤害"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_UPDATE_YOUR_GAME_5_TIMES] = 
    {
        .name       = _("再来一次"),
        .desc       = _("更新你的游戏5次。"),
        .hint       = _("更新"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_YEAR_OLD_SAVE] = 
    {
        .name       = _("生日快乐！"),
        .desc       = _("拥有一个\n已保存一年的存档。"),
        .hint       = _("年"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_30_TRENDS] = 
    {
        .name       = _("潮流达人"),
        .desc       = _("引领30次潮流。"),
        .hint       = _("潮流"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_MAKE_30_POKEBLOCKS] = 
    {
        .name       = _("方块大师"),
        .desc       = _("制作30个\n宝可方块。"),
        .hint       = _("方块"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_SCANNER_QUEST] = 
    {
        .name       = _("海员"),
        .desc       = _("将扫描仪\n交给楠木馆长。"),
        .hint       = _("扫描仪"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DEFEAT_RED_AND_STEVEN] = 
    {
        .name       = _("宝可梦大师"),
        .desc       = _("击败宝可梦大师赤红\n和前冠军大吾。"),
        .hint       = _("大师"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_SILVER_SYMBOLS] = 
    {
        .name       = _("银色印记"),
        .desc       = _("在对战开拓区\n获得所有银色印记。"),
        .hint       = _("银色"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_SHINY_TITLESCREEN] = 
    {
        .name       = _("雄心壮志"),
        .desc       = _("在标题屏幕\n获得黑色裂空座。"),
        .hint       = _("信长"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_50_MOCK_BATTLES_HARD] = 
    {
        .name       = _("硬派对战者"),
        .desc       = _("进行50场\n高难度模拟对战。"),
        .hint       = _("模拟"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_POKERUS] = 
    {
        .name       = _("病毒检测"),
        .desc       = _("至少感染一次\n宝可梦病毒。"),
        .hint       = _("病毒"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_NEW_GAME_PLUS] = 
    {
        .name       = _("双倍乐趣"),
        .desc       = _("开始新游戏+存档。"),
        .hint       = _("加"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_MENU_AT_3AM] = 
    {
        .name       = _("诡异时刻"),
        .desc       = _("在凌晨3点打开菜单。"),
        .hint       = _("鬼魂"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_WIN_MOCK_BATTLE_WITH_ONLY_METRONOME] = 
    {
        .name       = _("幸运之神"),
        .desc       = _("用只会随机招式的6只宝可梦\n赢得一场高难度模拟对战。"),
        .hint       = _("随机招式"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_TM_COLLECTION] = 
    {
        .name       = _("双白金奖"),
        .desc       = _("收集所有招式机器。"),
        .hint       = _("磁碟"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_GOLD_SYMBOLS] = 
    {
        .name       = _("金色印记"),
        .desc       = _("在对战开拓区\n获得所有金色印记。"),
        .hint       = _("金色"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_POKEDEX] = 
    {
        .name       = _("完成研究员"),
        .desc       = _("完成你的宝可梦图鉴。"),
        .hint       = _("图鉴"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
    [ACHIEVEMENT_DEFEAT_ARCEUS] = 
    {
        .name       = _("最后的挑战"),
        .desc       = _("击败或捕捉宝可梦\n阿尔宙斯。"),
        .hint       = _("阿尔宙斯"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
    [ACHIEVEMENT_COMPLETE_ALL_ACHIVEMENTS] = 
    {
        .name       = _("我深表歉意"),
        .desc       = _("完成所有成就。"),
        .hint       = _("结束"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
    [NUM_ACHIEVEMENTS] = 
    {
        .name       = _("已停用成就"),
        .desc       = _("此成就已停用。"),
        .hint       = _("等待"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
};
