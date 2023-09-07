// ScriptStruct Achievements.CustomAchievementInfo
// Size: 0x08 (Inherited: 0x00)
struct FCustomAchievementInfo {
	struct UAchievementBase* achievement; // 0x00(0x08)
};

// ScriptStruct Achievements.GameEventClassAchievementInfo
// Size: 0x08 (Inherited: 0x00)
struct FGameEventClassAchievementInfo {
	struct UOnGameEventAchievement* achievement; // 0x00(0x08)
};

// ScriptStruct Achievements.ScoreEventSimpleAchievementInfo
// Size: 0x20 (Inherited: 0x00)
struct FScoreEventSimpleAchievementInfo {
	struct TArray<enum class EDBDScoreTypes> scoreTypes; // 0x00(0x10)
	struct TArray<struct FName> profileStats; // 0x10(0x10)
};

// ScriptStruct Achievements.GameEventSimpleAchievementInfo
// Size: 0x20 (Inherited: 0x00)
struct FGameEventSimpleAchievementInfo {
	struct TArray<struct FGameplayTag> gameEvents; // 0x00(0x10)
	struct TArray<struct FName> profileStats; // 0x10(0x10)
};

