// Class Achievements.AchievementBase
// Size: 0x40 (Inherited: 0x30)
struct UAchievementBase : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Achievements.AchievementHandler
// Size: 0x58 (Inherited: 0x38)
struct UAchievementHandler : UGameInstanceSubsystem {
	struct TArray<struct UAchievementBase*> _achievements; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class Achievements.AchievementsData
// Size: 0x78 (Inherited: 0x38)
struct UAchievementsData : UDataAsset {
	struct TArray<struct FGameEventSimpleAchievementInfo> gameEventSimpleAchievements; // 0x38(0x10)
	struct TArray<struct FScoreEventSimpleAchievementInfo> scoreEventSimpleAchievements; // 0x48(0x10)
	struct TArray<struct FGameEventClassAchievementInfo> gameEventClassAchievements; // 0x58(0x10)
	struct TArray<struct FCustomAchievementInfo> customEventClassAchievements; // 0x68(0x10)
};

// Class Achievements.AchievementUtilities
// Size: 0x30 (Inherited: 0x30)
struct UAchievementUtilities : UObject {
};

// Class Achievements.OnGameEventAchievement
// Size: 0x80 (Inherited: 0x40)
struct UOnGameEventAchievement : UAchievementBase {
	char pad_40[0x20]; // 0x40(0x20)
	struct TArray<struct FGameplayTag> _gameEvents; // 0x60(0x10)
	struct TArray<enum class EDBDScoreTypes> _scoreTypes; // 0x70(0x10)

	void OnScoreTypeEvent(enum class EDBDScoreTypes scoreType, float Amount, struct AActor* Instigator, struct AActor* Target); // Function Achievements.OnGameEventAchievement.OnScoreTypeEvent // (Native|Protected) // @ game+0x4a919a0
};

// Class Achievements.AddNewPerkAchievement
// Size: 0x80 (Inherited: 0x80)
struct UAddNewPerkAchievement : UOnGameEventAchievement {
};

// Class Achievements.AwardPipsAchievement
// Size: 0x80 (Inherited: 0x80)
struct UAwardPipsAchievement : UOnGameEventAchievement {
};

// Class Achievements.CollectItemFromBasementChestAchievement
// Size: 0x88 (Inherited: 0x80)
struct UCollectItemFromBasementChestAchievement : UOnGameEventAchievement {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class Achievements.CooldownReactivationTypeAchievement
// Size: 0x90 (Inherited: 0x80)
struct UCooldownReactivationTypeAchievement : UOnGameEventAchievement {
	char pad_80[0x10]; // 0x80(0x10)
};

// Class Achievements.EscapeTypeAchievement
// Size: 0x90 (Inherited: 0x80)
struct UEscapeTypeAchievement : UOnGameEventAchievement {
	char pad_80[0x10]; // 0x80(0x10)
};

// Class Achievements.EscapeAsObsessionWithoutInjuryAchievement
// Size: 0x90 (Inherited: 0x90)
struct UEscapeAsObsessionWithoutInjuryAchievement : UEscapeTypeAchievement {
};

// Class Achievements.ExitGateOpenedAchievement
// Size: 0x80 (Inherited: 0x80)
struct UExitGateOpenedAchievement : UOnGameEventAchievement {
};

// Class Achievements.FinishGameWithCharacterPerksAchievement
// Size: 0x80 (Inherited: 0x80)
struct UFinishGameWithCharacterPerksAchievement : UOnGameEventAchievement {
};

// Class Achievements.FinishGameWithMercilessVictoryAchievement
// Size: 0x80 (Inherited: 0x80)
struct UFinishGameWithMercilessVictoryAchievement : UOnGameEventAchievement {
};

// Class Achievements.HealFromDyingAchievement
// Size: 0x80 (Inherited: 0x80)
struct UHealFromDyingAchievement : UOnGameEventAchievement {
};

// Class Achievements.K26CrowDamagedSurvivorAchievement
// Size: 0x80 (Inherited: 0x80)
struct UK26CrowDamagedSurvivorAchievement : UOnGameEventAchievement {
};

// Class Achievements.KillerDamagedSurvivorBaseAchievement
// Size: 0x80 (Inherited: 0x80)
struct UKillerDamagedSurvivorBaseAchievement : UOnGameEventAchievement {
};

// Class Achievements.KillerDamagedSurvivorHoldingItemAchievement
// Size: 0x90 (Inherited: 0x80)
struct UKillerDamagedSurvivorHoldingItemAchievement : UKillerDamagedSurvivorBaseAchievement {
	struct FName _statName; // 0x80(0x0c)
	bool _allowBaseItemsInCount; // 0x8c(0x01)
	bool _allowSpecialItemsInCount; // 0x8d(0x01)
	bool _allowCursedItemsInCount; // 0x8e(0x01)
	char pad_8F[0x1]; // 0x8f(0x01)
};

// Class Achievements.KillerDamagedSurvivorWithHasteAchievement
// Size: 0x80 (Inherited: 0x80)
struct UKillerDamagedSurvivorWithHasteAchievement : UKillerDamagedSurvivorBaseAchievement {
};

// Class Achievements.KillerDamagedSurvivorWithHinderedAchievement
// Size: 0x80 (Inherited: 0x80)
struct UKillerDamagedSurvivorWithHinderedAchievement : UKillerDamagedSurvivorBaseAchievement {
};

// Class Achievements.KillerHitSurvivorDuringGuardHuntAchievement
// Size: 0x80 (Inherited: 0x80)
struct UKillerHitSurvivorDuringGuardHuntAchievement : UOnGameEventAchievement {
};

// Class Achievements.KillerVaultDuringChaseAchievement
// Size: 0x80 (Inherited: 0x80)
struct UKillerVaultDuringChaseAchievement : UOnGameEventAchievement {
};

// Class Achievements.KONextToRaisedPalletAchievement
// Size: 0x88 (Inherited: 0x80)
struct UKONextToRaisedPalletAchievement : UOnGameEventAchievement {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class Achievements.MaxBloodpointsAllCategoriesAchievement
// Size: 0x80 (Inherited: 0x80)
struct UMaxBloodpointsAllCategoriesAchievement : UOnGameEventAchievement {
};

// Class Achievements.PickUpItemAchievement
// Size: 0xa0 (Inherited: 0x80)
struct UPickUpItemAchievement : UOnGameEventAchievement {
	struct FName _statName; // 0x80(0x0c)
	bool _triggerOnNormalItem; // 0x8c(0x01)
	bool _triggerOnSpecialItem; // 0x8d(0x01)
	bool _triggerOnCursedItem; // 0x8e(0x01)
	enum class EPlayerRole _targetPlayerRole; // 0x8f(0x01)
	char pad_90[0x10]; // 0x90(0x10)
};

// Class Achievements.ScoreCamperHealOtherAchievement
// Size: 0x80 (Inherited: 0x80)
struct UScoreCamperHealOtherAchievement : UOnGameEventAchievement {
};

// Class Achievements.ScoreCamperSurviveAchievement
// Size: 0x90 (Inherited: 0x90)
struct UScoreCamperSurviveAchievement : UEscapeTypeAchievement {
};

// Class Achievements.ScoreLevelUpAchievement
// Size: 0x80 (Inherited: 0x80)
struct UScoreLevelUpAchievement : UOnGameEventAchievement {
};

// Class Achievements.ScoreSlasherDamageGeneratorKickAchievement
// Size: 0x80 (Inherited: 0x80)
struct UScoreSlasherDamageGeneratorKickAchievement : UOnGameEventAchievement {
};

// Class Achievements.ScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement
// Size: 0x80 (Inherited: 0x80)
struct UScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement : UOnGameEventAchievement {
};

// Class Achievements.ScoreSlasherHookCamper
// Size: 0x80 (Inherited: 0x80)
struct UScoreSlasherHookCamper : UOnGameEventAchievement {
};

// Class Achievements.ScoreSlasherKillAchievement
// Size: 0x80 (Inherited: 0x80)
struct UScoreSlasherKillAchievement : UOnGameEventAchievement {
};

// Class Achievements.ScoreSlasherPowerK24HitSurvivor
// Size: 0x80 (Inherited: 0x80)
struct UScoreSlasherPowerK24HitSurvivor : UOnGameEventAchievement {
};

// Class Achievements.ScoreSlasherSacrificeSuccess
// Size: 0x80 (Inherited: 0x80)
struct UScoreSlasherSacrificeSuccess : UOnGameEventAchievement {
};

// Class Achievements.SlasherHookCamperInBasement
// Size: 0x80 (Inherited: 0x80)
struct USlasherHookCamperInBasement : UOnGameEventAchievement {
};

// Class Achievements.StartGameAchievement
// Size: 0x80 (Inherited: 0x80)
struct UStartGameAchievement : UOnGameEventAchievement {
};

// Class Achievements.SurvivorIncreaseOthersMovementSpeedWithCooldown
// Size: 0x90 (Inherited: 0x90)
struct USurvivorIncreaseOthersMovementSpeedWithCooldown : UCooldownReactivationTypeAchievement {
};

// Class Achievements.SurvivorRevealedKillerAuraAchievement
// Size: 0x98 (Inherited: 0x40)
struct USurvivorRevealedKillerAuraAchievement : UAchievementBase {
	char pad_40[0x4]; // 0x40(0x04)
	struct FGameplayTag _survivorFlagTag; // 0x44(0x0c)
	struct FGameplayTag _killerFlagTag; // 0x50(0x0c)
	struct FGameplayTag _modifierTag; // 0x5c(0x0c)
	struct FGameplayTagContainer _dontAwardIfKillerHasTags; // 0x68(0x20)
	char pad_88[0x10]; // 0x88(0x10)

	void OnLevelReadyToPlay(); // Function Achievements.SurvivorRevealedKillerAuraAchievement.OnLevelReadyToPlay // (Final|Native|Public) // @ game+0x4a91980
	void Local_OnRevealKillerAura(); // Function Achievements.SurvivorRevealedKillerAuraAchievement.Local_OnRevealKillerAura // (Final|Native|Public) // @ game+0x4a91960
};

// Class Achievements.TotalPlaytimeAchievement
// Size: 0x40 (Inherited: 0x40)
struct UTotalPlaytimeAchievement : UAchievementBase {
};

