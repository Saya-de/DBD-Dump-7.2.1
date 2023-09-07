// Enum DBDUIViewsCore.EButtonWidgetVisibility
enum class EButtonWidgetVisibility : uint8 {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	EButtonWidgetVisibility_MAX = 3
};

// Enum DBDUIViewsCore.EAnalogCursorStickiness
enum class EAnalogCursorStickiness : uint8 {
	None = 0,
	ButtonSmall = 1,
	ButtonMedium = 2,
	ButtonLarge = 3,
	Bloodweb = 4,
	Slow = 5,
	EAnalogCursorStickiness_MAX = 6
};

// Enum DBDUIViewsCore.EChallengeReminderUpdateType
enum class EChallengeReminderUpdateType : uint8 {
	Reveal = 0,
	Swap = 1,
	EChallengeReminderUpdateType_MAX = 2
};

// Enum DBDUIViewsCore.EEditorMode
enum class EEditorMode : uint8 {
	Node = 0,
	Path = 1,
	EEditorMode_MAX = 2
};

// Enum DBDUIViewsCore.ENodeStatusChange
enum class ENodeStatusChange : uint8 {
	NodeQuestActivate = 0,
	NodeQuestPaused = 1,
	NodeQuestUnlock = 2,
	NodeRewardAvailableForClaim = 3,
	NodeQuestClaimed = 4,
	None = 5,
	ENodeStatusChange_MAX = 6
};

// Enum DBDUIViewsCore.EBackgroundProgressBarState
enum class EBackgroundProgressBarState : uint8 {
	Empty = 0,
	Quarter = 1,
	Half = 2,
	ThreeQuarters = 3,
	Full = 4,
	EBackgroundProgressBarState_MAX = 5
};

// Enum DBDUIViewsCore.EInputSwitcherDisplayRule
enum class EInputSwitcherDisplayRule : uint8 {
	Undefined = 0,
	OnlyGamepad = 1,
	OnlyKeyboard = 2,
	Always = 3,
	EInputSwitcherDisplayRule_MAX = 4
};

// Enum DBDUIViewsCore.EPlayerStatusBloodSplatterType
enum class EPlayerStatusBloodSplatterType : uint8 {
	None = 0,
	Top = 1,
	Bottom = 2,
	EPlayerStatusBloodSplatterType_MAX = 3
};

// Enum DBDUIViewsCore.EShowScrollDisplayPrompt
enum class EShowScrollDisplayPrompt : uint8 {
	DontShow = 0,
	AlwaysShow = 1,
	ShowOnMouseOver = 2,
	EShowScrollDisplayPrompt_MAX = 3
};

// Enum DBDUIViewsCore.ETooltipVerticalAlignment
enum class ETooltipVerticalAlignment : uint8 {
	Default = 0,
	Top = 1,
	Bottom = 2,
	ETooltipVerticalAlignment_MAX = 3
};

// Enum DBDUIViewsCore.ETooltipHorizontalAlignment
enum class ETooltipHorizontalAlignment : uint8 {
	Default = 0,
	Left = 1,
	Right = 2,
	ETooltipHorizontalAlignment_MAX = 3
};

// Enum DBDUIViewsCore.EDragZoneAxis
enum class EDragZoneAxis : uint8 {
	Horizontal = 0,
	Vertical = 1,
	EDragZoneAxis_MAX = 2
};

// Enum DBDUIViewsCore.EFriendItemWidgetType
enum class EFriendItemWidgetType : uint8 {
	Friend = 0,
	ViewProfile = 1,
	PendingSentRequest = 2,
	PendingReceivedRequest = 3,
	NotFriend = 4,
	Blocked = 5,
	EFriendItemWidgetType_MAX = 6
};

// Enum DBDUIViewsCore.ETooltipType
enum class ETooltipType : uint8 {
	None = 0,
	ArchiveCompendium = 1,
	ArchiveNode = 2,
	ArchiveRewardNode = 3,
	Character = 4,
	CurrencyProgression = 5,
	Customization = 6,
	Label = 7,
	Loadout = 8,
	ETooltipType_MAX = 9
};

// ScriptStruct DBDUIViewsCore.LinePair
// Size: 0x10 (Inherited: 0x00)
struct FLinePair {
	struct FVector2D Start; // 0x00(0x08)
	struct FVector2D End; // 0x08(0x08)
};

// ScriptStruct DBDUIViewsCore.OnboardingTutorialButtonViewData
// Size: 0x78 (Inherited: 0x00)
struct FOnboardingTutorialButtonViewData {
	enum class EOnboardingStepStatus StepStatus; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString stepId; // 0x08(0x10)
	struct FString tutorialId; // 0x18(0x10)
	struct FText Title; // 0x28(0x18)
	struct FText Description; // 0x40(0x18)
	struct UTexture2D* Icon; // 0x58(0x08)
	struct TArray<struct FRewardWrapperViewData> RewardsData; // 0x60(0x10)
	enum class EOnboardingTutorialButtonStyle ButtonStyle; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct DBDUIViewsCore.PendingStepData
// Size: 0x10 (Inherited: 0x00)
struct FPendingStepData {
	struct TArray<struct FOnboardingTutorialButtonViewData> updatedButtonViewData; // 0x00(0x10)
};

// ScriptStruct DBDUIViewsCore.PlayerStatusAssets
// Size: 0x18 (Inherited: 0x00)
struct FPlayerStatusAssets {
	enum class EPlayerStatusBloodSplatterType BloodSplatterType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTexture2D* BloodTexture; // 0x08(0x08)
	struct UTexture2D* iconTexture; // 0x10(0x08)
};

// ScriptStruct DBDUIViewsCore.HtmlRichTextTag
// Size: 0x50 (Inherited: 0x00)
struct FHtmlRichTextTag {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct DBDUIViewsCore.HtmlToRichTagConvertRow
// Size: 0x28 (Inherited: 0x08)
struct FHtmlToRichTagConvertRow : FTableRowBase {
	struct FString HtmlTag; // 0x08(0x10)
	struct FString RichTextTag; // 0x18(0x10)
};

// ScriptStruct DBDUIViewsCore.InputPromptDataRow
// Size: 0x50 (Inherited: 0x08)
struct FInputPromptDataRow : FTableRowBase {
	struct FText InputLabel; // 0x08(0x18)
	struct FKey InputKey; // 0x20(0x20)
	struct UTexture2D* PromptTexture; // 0x40(0x08)
	bool ShowLabel; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct DBDUIViewsCore.MilestoneTrackerEventBasedSkinViewData
// Size: 0x60 (Inherited: 0x00)
struct FMilestoneTrackerEventBasedSkinViewData {
	struct TSoftObjectPtr<UMaterialInstance> MilestoneTrackerBackground; // 0x00(0x30)
	struct TSoftObjectPtr<UMaterialInstance> MilestoneTrackerHighlightBar; // 0x30(0x30)
};

// ScriptStruct DBDUIViewsCore.TextBlockOverrideProperties
// Size: 0x48 (Inherited: 0x00)
struct FTextBlockOverrideProperties {
	bool UseColor; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSlateColor Color; // 0x08(0x28)
	bool UseOpacity; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Opacity; // 0x34(0x04)
	bool UseSize; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t Size; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct DBDUIViewsCore.TooltipWidgetData
// Size: 0x18 (Inherited: 0x08)
struct FTooltipWidgetData : FDBDTableRowBase {
	enum class ETooltipType TooltipType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UUserWidget* WidgetClass; // 0x10(0x08)
};

