// Enum DBDUIViewInterfaces.EOriginWidgetState
enum class EOriginWidgetState : uint8 {
	None = 0,
	CurrencyPurchase = 1,
	Store = 2,
	Archives = 3,
	Gameplay = 4,
	MilestonePoints = 5,
	EOriginWidgetState_MAX = 6
};

// Enum DBDUIViewInterfaces.EArchiveTomeMenuState
enum class EArchiveTomeMenuState : uint8 {
	QuestMap = 0,
	Journal = 1,
	EArchiveTomeMenuState_MAX = 2
};

// Enum DBDUIViewInterfaces.EOnboardingMenuState
enum class EOnboardingMenuState : uint8 {
	Tutorial = 0,
	GameManual = 1,
	EOnboardingMenuState_MAX = 2
};

// Enum DBDUIViewInterfaces.EArchivePathStatus
enum class EArchivePathStatus : uint8 {
	Closed = 0,
	Available = 1,
	Completed = 2,
	EArchivePathStatus_MAX = 3
};

// Enum DBDUIViewInterfaces.ETierType
enum class ETierType : uint8 {
	None = 0,
	Bonus = 1,
	ETierType_MAX = 2
};

// Enum DBDUIViewInterfaces.EArchiveTomeType
enum class EArchiveTomeType : uint8 {
	CurrentTome = 0,
	PastTome = 1,
	EventTome = 2,
	EArchiveTomeType_MAX = 3
};

// Enum DBDUIViewInterfaces.EEventEntryPopupTabState
enum class EEventEntryPopupTabState : uint8 {
	Event = 0,
	Collection = 1,
	Store = 2,
	EEventEntryPopupTabState_MAX = 3
};

// Enum DBDUIViewInterfaces.EGameManualMenuState
enum class EGameManualMenuState : uint8 {
	Categories = 0,
	Topics = 1,
	EGameManualMenuState_MAX = 2
};

// Enum DBDUIViewInterfaces.ESingleHookState
enum class ESingleHookState : uint8 {
	EMPTY = 0,
	UNHOOKED = 1,
	HOOKED = 2,
	DISCONNECTED = 3,
	ESingleHookState_MAX = 4
};

// Enum DBDUIViewInterfaces.EAimingCrosshairState
enum class EAimingCrosshairState : uint8 {
	Hidden = 0,
	NoTarget = 1,
	Cooldown = 2,
	Assimilating = 3,
	Teleporting = 4,
	ProgressPaused = 5,
	LockedOut = 6,
	EAimingCrosshairState_MAX = 7
};

// Enum DBDUIViewInterfaces.EHudStatusEffectAlertViewType
enum class EHudStatusEffectAlertViewType : uint8 {
	Unhandled = 0,
	Perk = 1,
	Item = 2,
	Addon = 3,
	EHudStatusEffectAlertViewType_MAX = 4
};

// Enum DBDUIViewInterfaces.EInteractionPromptType
enum class EInteractionPromptType : uint8 {
	PressButton = 0,
	MashButton = 1,
	HoldButton = 2,
	AlternateTwoButtons = 3,
	WiggleThumbstick = 4,
	MovementAxes = 5,
	MovementKeys = 6,
	EInteractionPromptType_MAX = 7
};

// Enum DBDUIViewInterfaces.EMilestoneTrackerItemState
enum class EMilestoneTrackerItemState : uint8 {
	Unlocked = 0,
	InProgress = 1,
	Locked = 2,
	EMilestoneTrackerItemState_MAX = 3
};

// Enum DBDUIViewInterfaces.ETestBuildFlagPosition
enum class ETestBuildFlagPosition : uint8 {
	Hud = 0,
	ETestBuildFlagPosition_MAX = 1
};

// ScriptStruct DBDUIViewInterfaces.ArchiveNodeGraphViewData
// Size: 0xf0 (Inherited: 0x00)
struct FArchiveNodeGraphViewData {
	struct FName ID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FArchiveNodeViewData ViewData; // 0x10(0xb8)
	struct FVector2D position; // 0xc8(0x08)
	struct TArray<struct FName> Neighbors; // 0xd0(0x10)
	struct TArray<int32_t> PathIndices; // 0xe0(0x10)
};

// ScriptStruct DBDUIViewInterfaces.ArchiveNodeViewData
// Size: 0xb8 (Inherited: 0x00)
struct FArchiveNodeViewData {
	enum class EArchiveNodeType Type; // 0x00(0x01)
	enum class EStoryNodeState Status; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText Title; // 0x08(0x18)
	struct FText Subtitle; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
	struct FString DebugInfo; // 0x50(0x10)
	struct FString IconPath; // 0x60(0x10)
	struct TArray<struct FArchiveNodeObjectiveViewData> Objectives; // 0x70(0x10)
	struct TArray<struct FRewardWrapperViewData> Rewards; // 0x80(0x10)
	struct TArray<struct FText> VignetteTitles; // 0x90(0x10)
	enum class EPlayerRole Role; // 0xa0(0x01)
	bool IsImageReward; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString VignetteId; // 0xa8(0x10)
};

// ScriptStruct DBDUIViewInterfaces.RewardWrapperViewData
// Size: 0x3a8 (Inherited: 0x00)
struct FRewardWrapperViewData {
	enum class ERewardType RewardType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FCharacterRewardViewData CharacterRewardViewData; // 0x08(0xf0)
	struct FCurrencyProgressionRewardViewData CurrencyProgressionRewardViewData; // 0xf8(0x130)
	struct FCustomizationRewardViewData CustomizationRewardViewData; // 0x228(0x180)
};

// ScriptStruct DBDUIViewInterfaces.RewardViewData
// Size: 0x30 (Inherited: 0x00)
struct FRewardViewData {
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x00(0x30)
};

// ScriptStruct DBDUIViewInterfaces.CustomizationRewardViewData
// Size: 0x180 (Inherited: 0x30)
struct FCustomizationRewardViewData : FRewardViewData {
	struct FName CustomizationId; // 0x30(0x0c)
	struct FName OutfitId; // 0x3c(0x0c)
	enum class EItemRarity Rarity; // 0x48(0x01)
	bool IsOwned; // 0x49(0x01)
	bool IsBuyable; // 0x4a(0x01)
	bool IsEquipped; // 0x4b(0x01)
	bool IsUnbreakable; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FCustomizationTooltipViewData TooltipData; // 0x50(0x118)
	bool IsEnabled; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TArray<struct FPriceTagViewData> PriceTagData; // 0x170(0x10)
};

// ScriptStruct DBDUIViewInterfaces.PriceTagViewData
// Size: 0x18 (Inherited: 0x00)
struct FPriceTagViewData {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ECurrencyType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Amount; // 0x0c(0x04)
	int32_t DiscountValue; // 0x10(0x04)
	bool IsAffordable; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct DBDUIViewInterfaces.CustomizationTooltipViewData
// Size: 0x118 (Inherited: 0x00)
struct FCustomizationTooltipViewData {
	struct FText DisplayName; // 0x00(0x18)
	struct FText ParentName; // 0x18(0x18)
	struct FText RarityPartInfo; // 0x30(0x18)
	struct FText CollectionDisplayName; // 0x48(0x18)
	struct FText Description; // 0x60(0x18)
	struct FText RoleCategoryInfo; // 0x78(0x18)
	enum class EOriginWidgetState CustomizationOriginState; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FText CustomizationOriginInfo; // 0x98(0x18)
	bool IsLocked; // 0xb0(0x01)
	bool IsUnbreakable; // 0xb1(0x01)
	bool IsEquipped; // 0xb2(0x01)
	bool IsBuyable; // 0xb3(0x01)
	bool IsOwned; // 0xb4(0x01)
	bool IsOutfitPart; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	struct FText OutfitInfoText; // 0xb8(0x18)
	enum class EPlayerRole AssociatedRole; // 0xd0(0x01)
	enum class EItemRarity Rarity; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct TArray<struct FPriceTagViewData> Prices; // 0xd8(0x10)
	bool IsEnabled; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FText CustomizationDisabledMessage; // 0xf0(0x18)
	struct FString EventBannerLabel; // 0x108(0x10)
};

// ScriptStruct DBDUIViewInterfaces.CurrencyProgressionRewardViewData
// Size: 0x130 (Inherited: 0x30)
struct FCurrencyProgressionRewardViewData : FRewardViewData {
	enum class ECurrencyType CurrencyType; // 0x30(0x01)
	enum class EProgressionType ProgressionType; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t Amount; // 0x34(0x04)
	bool IsAffordable; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TSoftObjectPtr<UMaterialInterface> RewardBackgroundMaterial; // 0x40(0x30)
	struct FCurrencyProgressionTooltipViewData TooltipData; // 0x70(0xc0)
};

// ScriptStruct DBDUIViewInterfaces.CurrencyProgressionTooltipViewData
// Size: 0xc0 (Inherited: 0x00)
struct FCurrencyProgressionTooltipViewData {
	bool IsCurrency; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<UMaterialInterface> TooltipHeaderMaterial; // 0x38(0x30)
	struct FText EventName; // 0x68(0x18)
	struct FText EventDescription; // 0x80(0x18)
	struct FText EventTimer; // 0x98(0x18)
	struct TArray<struct FCurrencyExpirationLabelViewData> ExpirationData; // 0xb0(0x10)
};

// ScriptStruct DBDUIViewInterfaces.CurrencyExpirationLabelViewData
// Size: 0x20 (Inherited: 0x00)
struct FCurrencyExpirationLabelViewData {
	int32_t Amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText ExpirationDate; // 0x08(0x18)
};

// ScriptStruct DBDUIViewInterfaces.CharacterRewardViewData
// Size: 0xf0 (Inherited: 0x30)
struct FCharacterRewardViewData : FRewardViewData {
	struct FName ItemId; // 0x30(0x0c)
	bool IsOwned; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t Level; // 0x40(0x04)
	int32_t Prestige; // 0x44(0x04)
	struct FCharacterTooltipViewData TooltipData; // 0x48(0xa0)
	bool IsEnabled; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// ScriptStruct DBDUIViewInterfaces.CharacterTooltipViewData
// Size: 0xa0 (Inherited: 0x00)
struct FCharacterTooltipViewData {
	struct FText DisplayName; // 0x00(0x18)
	struct FText Biography; // 0x18(0x18)
	struct FText DLCTitle; // 0x30(0x18)
	struct FText PackId; // 0x48(0x18)
	struct FText PackTitle; // 0x60(0x18)
	int32_t Level; // 0x78(0x04)
	int32_t Prestige; // 0x7c(0x04)
	bool IsUnlocked; // 0x80(0x01)
	bool IsNewInStore; // 0x81(0x01)
	bool IsOwned; // 0x82(0x01)
	bool IsAvailableInStore; // 0x83(0x01)
	bool IsDLCPurchasable; // 0x84(0x01)
	enum class ECharacterDifficulty Difficulty; // 0x85(0x01)
	bool IsEnabled; // 0x86(0x01)
	char pad_87[0x1]; // 0x87(0x01)
	struct FText CharacterDisabledMessage; // 0x88(0x18)
};

// ScriptStruct DBDUIViewInterfaces.ArchiveNodeObjectiveViewData
// Size: 0x28 (Inherited: 0x00)
struct FArchiveNodeObjectiveViewData {
	struct FText Description; // 0x00(0x18)
	int32_t CurrentProgress; // 0x18(0x04)
	int32_t MaxProgress; // 0x1c(0x04)
	enum class EQuestProgressionType ProgressionType; // 0x20(0x01)
	bool IsCommunityObjective; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct DBDUIViewInterfaces.TabWidgetData
// Size: 0x80 (Inherited: 0x00)
struct FTabWidgetData {
	int32_t Key; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Title; // 0x08(0x18)
	bool HasNotification; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x28(0x30)
	bool ForcesIconSize; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FVector2D IconSize; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString AnalyticsName; // 0x68(0x10)
	bool IsKillSwitchEnabled; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct DBDUIViewInterfaces.BaseLoadoutPartViewData
// Size: 0x58 (Inherited: 0x00)
struct FBaseLoadoutPartViewData {
	struct FName ItemId; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<UTexture2D> iconTexture; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	enum class EItemRarity Rarity; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct DBDUIViewInterfaces.AddonViewData
// Size: 0x68 (Inherited: 0x58)
struct FAddonViewData : FBaseLoadoutPartViewData {
	float Cooldown; // 0x58(0x04)
	enum class EStatusEffectType StatusEffectType; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t StackCount; // 0x60(0x04)
	enum class ELoadoutPartState LoadoutPartState; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct DBDUIViewInterfaces.ArchiveChallengeReminderViewData
// Size: 0xd0 (Inherited: 0x00)
struct FArchiveChallengeReminderViewData {
	struct FArchiveNodeViewData NodeViewData; // 0x00(0xb8)
	struct FText TomeSourceSubtitle; // 0xb8(0x18)
};

// ScriptStruct DBDUIViewInterfaces.CompendiumButtonData
// Size: 0x70 (Inherited: 0x00)
struct FCompendiumButtonData {
	struct FString tomeId; // 0x00(0x10)
	struct FText TomeTitle; // 0x10(0x18)
	bool IsMastered; // 0x28(0x01)
	bool IsActive; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t VolumeIndex; // 0x2c(0x04)
	struct TArray<struct UArchiveStoryLevelViewData*> TomeLevels; // 0x30(0x10)
	struct TSoftObjectPtr<UTexture2D> StoryBookMarkTexture; // 0x40(0x30)
};

// ScriptStruct DBDUIViewInterfaces.ArchiveMapPathViewData
// Size: 0x2c (Inherited: 0x00)
struct FArchiveMapPathViewData {
	struct FVector2D StartPositon; // 0x00(0x08)
	struct FVector2D EndPositon; // 0x08(0x08)
	struct FName StartNodeId; // 0x10(0x0c)
	struct FName EndNodeId; // 0x1c(0x0c)
	enum class EArchivePathStatus Status; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct DBDUIViewInterfaces.ArchiveRewardNodeTooltipViewData
// Size: 0x128 (Inherited: 0x00)
struct FArchiveRewardNodeTooltipViewData {
	struct FString NodeDebugInfo; // 0x00(0x10)
	struct FCustomizationTooltipViewData CustomizationTooltipViewData; // 0x10(0x118)
};

// ScriptStruct DBDUIViewInterfaces.ArchivesVignetteViewData
// Size: 0x60 (Inherited: 0x00)
struct FArchivesVignetteViewData {
	struct FString VignetteId; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Subtitle; // 0x28(0x18)
	int32_t LastShownProgressValue; // 0x40(0x04)
	int32_t CurrentProgress; // 0x44(0x04)
	int32_t MaxProgress; // 0x48(0x04)
	int32_t CinematicsNumber; // 0x4c(0x04)
	struct TArray<struct FArchivesVignetteEntryViewData> Entries; // 0x50(0x10)
};

// ScriptStruct DBDUIViewInterfaces.ArchivesVignetteEntryViewData
// Size: 0x70 (Inherited: 0x00)
struct FArchivesVignetteEntryViewData {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	bool IsRead; // 0x30(0x01)
	bool HasAudio; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TSoftObjectPtr<UTexture2D> RewardImage; // 0x38(0x30)
	float PreviewTextureOffset; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct DBDUIViewInterfaces.ArchivesPastTomeViewData
// Size: 0x70 (Inherited: 0x00)
struct FArchivesPastTomeViewData {
	struct FString tomeId; // 0x00(0x10)
	struct FText TomeTitle; // 0x10(0x18)
	bool HasActiveNode; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t VolumeIndex; // 0x2c(0x04)
	struct TArray<struct UArchiveStoryLevelViewData*> TomeLevels; // 0x30(0x10)
	struct TSoftObjectPtr<UTexture2D> StoryBookMarkTexture; // 0x40(0x30)
};

// ScriptStruct DBDUIViewInterfaces.ArchivesRiftGenericViewData
// Size: 0x20 (Inherited: 0x00)
struct FArchivesRiftGenericViewData {
	struct FDateTime EndDate; // 0x00(0x08)
	int32_t currentTier; // 0x08(0x04)
	int32_t MaxTier; // 0x0c(0x04)
	int32_t CurrentStars; // 0x10(0x04)
	int32_t StarsPerTiers; // 0x14(0x04)
	bool OwnPass; // 0x18(0x01)
	bool ShowBonusTierTooltip; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct DBDUIViewInterfaces.ArchiveRiftTierRewardsViewData
// Size: 0x30 (Inherited: 0x00)
struct FArchiveRiftTierRewardsViewData {
	int32_t tier; // 0x00(0x04)
	enum class ETierType TierType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float TierProgress; // 0x08(0x04)
	bool IsPremiumUnlocked; // 0x0c(0x01)
	bool IsCurrentTier; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FRewardWrapperViewData> FreeRewards; // 0x10(0x10)
	struct TArray<struct FRewardWrapperViewData> PremiumRewards; // 0x20(0x10)
};

// ScriptStruct DBDUIViewInterfaces.ArchivesRiftUnlockSequenceData
// Size: 0x0c (Inherited: 0x00)
struct FArchivesRiftUnlockSequenceData {
	int32_t currentTier; // 0x00(0x04)
	int32_t previousTier; // 0x04(0x04)
	bool IsPremiumUnlocked; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct DBDUIViewInterfaces.EditorInterfaces
// Size: 0x30 (Inherited: 0x00)
struct FEditorInterfaces {
	struct TScriptInterface<IArchiveQuestMapViewInterface> QuestMapInterface; // 0x00(0x10)
	struct TScriptInterface<IArchiveLevelProgressionViewInterface> LevelProgressionInterface; // 0x10(0x10)
	struct TScriptInterface<IArchiveEditorViewInterface> EditorInterface; // 0x20(0x10)
};

// ScriptStruct DBDUIViewInterfaces.ChallengeTrackerViewData
// Size: 0x40 (Inherited: 0x00)
struct FChallengeTrackerViewData {
	struct FText ChallengeTitle; // 0x00(0x18)
	struct FArchiveNodeObjectiveViewData ProgressionData; // 0x18(0x28)
};

// ScriptStruct DBDUIViewInterfaces.CurrencyLabelViewData
// Size: 0x100 (Inherited: 0x00)
struct FCurrencyLabelViewData {
	enum class ECurrencyType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x08(0x30)
	int32_t Amount; // 0x38(0x04)
	bool PlayBonusAnimation; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FCurrencyProgressionTooltipViewData TooltipData; // 0x40(0xc0)
};

// ScriptStruct DBDUIViewInterfaces.CustomizationItemOriginViewData
// Size: 0x30 (Inherited: 0x00)
struct FCustomizationItemOriginViewData {
	enum class EOriginWidgetState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FText> Args; // 0x08(0x10)
	struct FPriceTagViewData CurrencyData; // 0x18(0x18)
};

// ScriptStruct DBDUIViewInterfaces.CustomizationItemPreviewAreaViewData
// Size: 0x198 (Inherited: 0x00)
struct FCustomizationItemPreviewAreaViewData {
	struct FCustomizationRewardViewData PreviewItem; // 0x00(0x180)
	struct TArray<struct FCustomizationRewardViewData> ItemsData; // 0x180(0x10)
	bool IsOutfit; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
};

// ScriptStruct DBDUIViewInterfaces.DailyRitualViewData
// Size: 0x78 (Inherited: 0x00)
struct FDailyRitualViewData {
	struct FString Key; // 0x00(0x10)
	struct FString Title; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct TSoftObjectPtr<UTexture2D> iconTexture; // 0x30(0x30)
	enum class EDailyRitualState RitualState; // 0x60(0x01)
	bool IsNew; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32_t TextProgress; // 0x64(0x04)
	int32_t TextThreshold; // 0x68(0x04)
	float BarProgress; // 0x6c(0x04)
	float BarThreshold; // 0x70(0x04)
	int32_t BloodpointsReward; // 0x74(0x04)
};

// ScriptStruct DBDUIViewInterfaces.DisplayStandViewData
// Size: 0x38 (Inherited: 0x00)
struct FDisplayStandViewData {
	struct FAnchorData Anchors; // 0x00(0x28)
	float PositionX; // 0x28(0x04)
	float PositionY; // 0x2c(0x04)
	float SizeX; // 0x30(0x04)
	float SizeY; // 0x34(0x04)
};

// ScriptStruct DBDUIViewInterfaces.EventEntryPopupSkinUIData
// Size: 0x210 (Inherited: 0x08)
struct FEventEntryPopupSkinUIData : FTableRowBase {
	struct FLinearColor ScrollBarColor; // 0x08(0x10)
	struct TSoftObjectPtr<UTexture2D> EventImage; // 0x18(0x30)
	struct TSoftObjectPtr<UTexture2D> PreviewAreaBackground; // 0x48(0x30)
	struct FLinearColor BaseColor; // 0x78(0x10)
	struct TSoftObjectPtr<UMaterialInstance> BackgroundTexture; // 0x88(0x30)
	struct TSoftObjectPtr<UTexture2D> BackgroundCenterImage; // 0xb8(0x30)
	struct TSoftObjectPtr<UMaterialInstance> TabMaterialInstance; // 0xe8(0x30)
	bool IsUsingBackgroundTexture; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct TSoftObjectPtr<UMaterialInstance> TitleBannerMaterial; // 0x120(0x30)
	struct TSoftObjectPtr<UTexture2D> TitleIcon; // 0x150(0x30)
	struct TSoftObjectPtr<UMaterialInstance> HeaderBackgroundMaterial; // 0x180(0x30)
	struct TSoftObjectPtr<UMaterialInstance> MilestoneTrackerBackground; // 0x1b0(0x30)
	struct TSoftObjectPtr<UMaterialInstance> MilestoneTrackerHighlightBar; // 0x1e0(0x30)
};

// ScriptStruct DBDUIViewInterfaces.PopupButtonViewData
// Size: 0x80 (Inherited: 0x00)
struct FPopupButtonViewData {
	struct FText label; // 0x00(0x18)
	struct FKey Key; // 0x18(0x20)
	char pad_38[0x48]; // 0x38(0x48)
};

// ScriptStruct DBDUIViewInterfaces.StatusEffectAlertViewData
// Size: 0x1b0 (Inherited: 0x00)
struct FStatusEffectAlertViewData {
	struct FString StatusEffectName; // 0x00(0x10)
	struct TSoftObjectPtr<UTexture2D> StatusEffectIcon; // 0x10(0x30)
	enum class EStatusEffectType StatusEffectType; // 0x40(0x01)
	enum class EHudStatusEffectAlertViewType SourceViewType; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FPerkViewData PerkViewData; // 0x48(0x70)
	struct FItemViewData ItemViewData; // 0xb8(0x90)
	struct FAddonViewData AddonViewData; // 0x148(0x68)
};

// ScriptStruct DBDUIViewInterfaces.ItemViewData
// Size: 0x90 (Inherited: 0x58)
struct FItemViewData : FBaseLoadoutPartViewData {
	bool IsEnergyTypeValid; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float EnergyLevel; // 0x5c(0x04)
	int32_t Count; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FKey InputKey; // 0x68(0x20)
	bool ShowKeyPrompt; // 0x88(0x01)
	bool IsLimitedItem; // 0x89(0x01)
	bool IsAvailable; // 0x8a(0x01)
	bool IsSpecialItem; // 0x8b(0x01)
	bool IsCursedItem; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// ScriptStruct DBDUIViewInterfaces.PerkViewData
// Size: 0x70 (Inherited: 0x58)
struct FPerkViewData : FBaseLoadoutPartViewData {
	int32_t Level; // 0x58(0x04)
	float Cooldown; // 0x5c(0x04)
	enum class EStatusEffectType StatusEffectType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t StackCount; // 0x64(0x04)
	bool IsRechargeable; // 0x68(0x01)
	bool IsRechargeableActive; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// ScriptStruct DBDUIViewInterfaces.ScoreAlertViewData
// Size: 0x20 (Inherited: 0x00)
struct FScoreAlertViewData {
	enum class EDBDScoreCategory scoreType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Title; // 0x08(0x10)
	int32_t ScoreValue; // 0x18(0x04)
	float Progress; // 0x1c(0x04)
};

// ScriptStruct DBDUIViewInterfaces.HudEventProgressionViewData
// Size: 0x10 (Inherited: 0x00)
struct FHudEventProgressionViewData {
	int32_t ProgressBanked; // 0x00(0x04)
	int32_t ProgressPending; // 0x04(0x04)
	int32_t ProgressCapacity; // 0x08(0x04)
	int32_t ProgressMax; // 0x0c(0x04)
};

// ScriptStruct DBDUIViewInterfaces.HudObjectivesViewData
// Size: 0x0c (Inherited: 0x00)
struct FHudObjectivesViewData {
	enum class EPlayerTeam playerTeam; // 0x00(0x01)
	bool isHatchOpen; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t nbGeneratorsLeft; // 0x04(0x04)
	int32_t requiredActivatedGeneratorCount; // 0x08(0x04)
};

// ScriptStruct DBDUIViewInterfaces.InteractionProgressViewData
// Size: 0x70 (Inherited: 0x00)
struct FInteractionProgressViewData {
	struct FString Message; // 0x00(0x10)
	struct FString SecondaryMessage; // 0x10(0x10)
	enum class EBarColor BarColor; // 0x20(0x01)
	enum class EBarColor ChargeBarColor; // 0x21(0x01)
	bool ShowIcon; // 0x22(0x01)
	bool ShowIconCharge; // 0x23(0x01)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftObjectPtr<UTexture2D> ItemIcon; // 0x28(0x30)
	struct TArray<struct FStatusEffectViewData> Proficiencies; // 0x58(0x10)
	float PermanentProgress; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct DBDUIViewInterfaces.StatusEffectViewData
// Size: 0x50 (Inherited: 0x00)
struct FStatusEffectViewData {
	struct FName ID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<UTexture2D> iconTexture; // 0x10(0x30)
	enum class EStatusEffectType StatusEffectType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t Level; // 0x44(0x04)
	float Percentage; // 0x48(0x04)
	bool PlayIntroAnimation; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct DBDUIViewInterfaces.InteractionPromptViewData
// Size: 0xb0 (Inherited: 0x00)
struct FInteractionPromptViewData {
	struct FName ID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Message; // 0x10(0x10)
	enum class EInteractionPromptType Type; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FKey InputKey1; // 0x28(0x20)
	struct FKey InputKey2; // 0x48(0x20)
	struct FKey InputKey3; // 0x68(0x20)
	struct FKey InputKey4; // 0x88(0x20)
	bool PlaceInCenter; // 0xa8(0x01)
	bool IsAvailable; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
};

// ScriptStruct DBDUIViewInterfaces.ItemBundleViewData
// Size: 0x160 (Inherited: 0x00)
struct FItemBundleViewData {
	struct FItemViewData Item; // 0x00(0x90)
	struct FAddonViewData addon1; // 0x90(0x68)
	struct FAddonViewData addon2; // 0xf8(0x68)
};

// ScriptStruct DBDUIViewInterfaces.KillerStatusDataMapping
// Size: 0x28 (Inherited: 0x08)
struct FKillerStatusDataMapping : FDBDTableRowBase {
	struct FGameplayTag killer; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct UKillerStatusData* ViewDataClass; // 0x18(0x08)
	struct UObject* WidgetClass; // 0x20(0x08)
};

// ScriptStruct DBDUIViewInterfaces.LoadoutTooltipData
// Size: 0x90 (Inherited: 0x00)
struct FLoadoutTooltipData {
	struct FName ItemId; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText ParentDisplayName; // 0x28(0x18)
	struct FText Description; // 0x40(0x18)
	int32_t Level; // 0x58(0x04)
	enum class EItemRarity Rarity; // 0x5c(0x01)
	bool IsLocked; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	struct FText EventName; // 0x60(0x18)
	struct FString EventId; // 0x78(0x10)
	bool IsPastEvent; // 0x88(0x01)
	enum class EInventoryItemType ItemType; // 0x89(0x01)
	enum class EItemAvailability Availability; // 0x8a(0x01)
	char pad_8B[0x5]; // 0x8b(0x05)
};

// ScriptStruct DBDUIViewInterfaces.MatchResultViewData
// Size: 0x08 (Inherited: 0x00)
struct FMatchResultViewData {
	bool IsSlasher; // 0x00(0x01)
	enum class EGameState SurvivorResult; // 0x01(0x01)
	enum class EKillerMatchResult KillerResult; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Duration; // 0x04(0x04)
};

// ScriptStruct DBDUIViewInterfaces.MilestoneTrackerItemViewData
// Size: 0x188 (Inherited: 0x00)
struct FMilestoneTrackerItemViewData {
	int32_t EventPoints; // 0x00(0x04)
	enum class EMilestoneTrackerItemState State; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FCustomizationRewardViewData RewardData; // 0x08(0x180)
};

// ScriptStruct DBDUIViewInterfaces.MilestoneTrackerViewData
// Size: 0x18 (Inherited: 0x00)
struct FMilestoneTrackerViewData {
	struct TArray<struct FMilestoneTrackerItemViewData> MilestoneRewardsList; // 0x00(0x10)
	int32_t UserMilestonePointData; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DBDUIViewInterfaces.MilestoneTrackerUpdateItemViewData
// Size: 0x190 (Inherited: 0x00)
struct FMilestoneTrackerUpdateItemViewData {
	int32_t index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMilestoneTrackerItemViewData updatedViewData; // 0x08(0x188)
};

// ScriptStruct DBDUIViewInterfaces.NotifTutorialPopupViewData
// Size: 0x80 (Inherited: 0x00)
struct FNotifTutorialPopupViewData {
	struct FString Title; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x20(0x30)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x50(0x30)
};

// ScriptStruct DBDUIViewInterfaces.OfferingViewData
// Size: 0x60 (Inherited: 0x58)
struct FOfferingViewData : FBaseLoadoutPartViewData {
	int32_t StackCount; // 0x58(0x04)
	enum class EItemAvailability Availability; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct DBDUIViewInterfaces.OnboardingStepViewData
// Size: 0x28 (Inherited: 0x00)
struct FOnboardingStepViewData {
	struct FString stepId; // 0x00(0x10)
	enum class EOnboardingStepStatus Status; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FOnboardingTutorialViewData> Tutorials; // 0x18(0x10)
};

// ScriptStruct DBDUIViewInterfaces.OnboardingTutorialViewData
// Size: 0x78 (Inherited: 0x00)
struct FOnboardingTutorialViewData {
	struct FString tutorialId; // 0x00(0x10)
	bool COMPLETED; // 0x10(0x01)
	bool MainRewardClaimed; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FRewardWrapperViewData> MainRewards; // 0x18(0x10)
	struct TArray<struct FRewardWrapperViewData> AlternativeRewards; // 0x28(0x10)
	enum class EOnboardingTutorialType TutorialType; // 0x38(0x01)
	enum class EOnboardingTutorialButtonStyle ButtonStyle; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FText DisplayName; // 0x40(0x18)
	struct FText Description; // 0x58(0x18)
	struct UTexture2D* Icon; // 0x70(0x08)
};

// ScriptStruct DBDUIViewInterfaces.PlayerStatusViewData
// Size: 0x48 (Inherited: 0x00)
struct FPlayerStatusViewData {
	struct FString playerName; // 0x00(0x10)
	struct UTexture2D* PlayerPortraitIcon; // 0x10(0x08)
	struct UTexture2D* PlayerPortraitIconOverride; // 0x18(0x08)
	enum class EPlayerStatus PlayerStatusState; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float TimerProgress; // 0x24(0x04)
	bool IsDeepWound; // 0x28(0x01)
	bool IsBroken; // 0x29(0x01)
	bool IsBot; // 0x2a(0x01)
	bool IsLocalPlayerAKiller; // 0x2b(0x01)
	enum class EObsessionUIState ObsessionState; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t DrainStage; // 0x30(0x04)
	enum class EConnectionQuality ConnectionQualityStatus; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UKillerStatusData* KillerStatusData; // 0x38(0x08)
	float CampProgress; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct DBDUIViewInterfaces.PowerBundleViewData
// Size: 0x158 (Inherited: 0x00)
struct FPowerBundleViewData {
	struct FPowerViewData Power; // 0x00(0x88)
	struct FAddonViewData addon1; // 0x88(0x68)
	struct FAddonViewData addon2; // 0xf0(0x68)
};

// ScriptStruct DBDUIViewInterfaces.PowerViewData
// Size: 0x88 (Inherited: 0x58)
struct FPowerViewData : FBaseLoadoutPartViewData {
	struct FKey InputKey; // 0x58(0x20)
	bool IsRechargeable; // 0x78(0x01)
	bool IsActivated; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	int32_t Count; // 0x7c(0x04)
	float ProgressValue; // 0x80(0x04)
	bool ShowKeyPrompt; // 0x84(0x01)
	bool IsCountDisplayForced; // 0x85(0x01)
	bool IsAvailable; // 0x86(0x01)
	char pad_87[0x1]; // 0x87(0x01)
};

// ScriptStruct DBDUIViewInterfaces.RankBannerData
// Size: 0x20 (Inherited: 0x00)
struct FRankBannerData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct DBDUIViewInterfaces.SkillCheckViewData
// Size: 0x58 (Inherited: 0x00)
struct FSkillCheckViewData {
	struct FKey InputKey; // 0x00(0x20)
	struct FKey InputKey2; // 0x20(0x20)
	float HitAreaStart; // 0x40(0x04)
	float HitAreaLength; // 0x44(0x04)
	float BonusAreaStart; // 0x48(0x04)
	float BonusAreaLength; // 0x4c(0x04)
	bool IsHexed; // 0x50(0x01)
	bool IsSpectating; // 0x51(0x01)
	bool IsReversed; // 0x52(0x01)
	bool IsMirrored; // 0x53(0x01)
	bool IsInsane; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct DBDUIViewInterfaces.StartSequenceViewData
// Size: 0x28 (Inherited: 0x00)
struct FStartSequenceViewData {
	struct FString ThemeName; // 0x00(0x10)
	struct FString MapName; // 0x10(0x10)
	enum class EThemeColorId ThemeColorId; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DBDUIViewInterfaces.TemplateViewData
// Size: 0x01 (Inherited: 0x00)
struct FTemplateViewData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct DBDUIViewInterfaces.TutorialObjectivesViewData
// Size: 0x170 (Inherited: 0x00)
struct FTutorialObjectivesViewData {
	struct FString Description; // 0x00(0x10)
	struct FInteractionPromptViewData PrimaryInteractionPromptViewData; // 0x10(0xb0)
	struct FInteractionPromptViewData SecondaryInteractionPromptViewData; // 0xc0(0xb0)
};

