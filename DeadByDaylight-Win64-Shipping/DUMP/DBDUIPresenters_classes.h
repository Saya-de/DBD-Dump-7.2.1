// Class DBDUIPresenters.UIComponent
// Size: 0x30 (Inherited: 0x30)
struct UUIComponent : UObject {
};

// Class DBDUIPresenters.Presenter
// Size: 0xd0 (Inherited: 0x30)
struct UPresenter : UUIComponent {
	bool _overrideWidgetInstantiationPhase; // 0x30(0x01)
	enum class EPresenterPhase _widgetInstantiationPhase; // 0x31(0x01)
	bool RequestPresentationAtBeginPlay; // 0x32(0x01)
	enum class ESlateVisibility InitialVisibility; // 0x33(0x01)
	int32_t _widgetZOrder; // 0x34(0x04)
	struct UUserWidget* _widget; // 0x38(0x08)
	struct UPresenterParentInfo* _parentInfo; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
	struct TSet<struct FString> _ignoredPresentationRequirementFunctions; // 0x58(0x50)
	struct TArray<struct UPresenterRequirementFunction*> _presentationRequirementFunctions; // 0xa8(0x10)
	char pad_B8[0x18]; // 0xb8(0x18)

	bool ShouldPresent(); // Function DBDUIPresenters.Presenter.ShouldPresent // (Final|Native|Private|Const) // @ game+0x469f2f0
	void OnContextSectionChanged(enum class EContext Context); // Function DBDUIPresenters.Presenter.OnContextSectionChanged // (Native|Protected) // @ game+0x469dc00
	bool IsPlayerStateReady(); // Function DBDUIPresenters.Presenter.IsPlayerStateReady // (Final|Native|Protected|Const) // @ game+0x469d9a0
	bool IsGameStateReady(); // Function DBDUIPresenters.Presenter.IsGameStateReady // (Final|Native|Protected|Const) // @ game+0x469d8e0
	bool IsContextReady(); // Function DBDUIPresenters.Presenter.IsContextReady // (Final|Native|Private|Const) // @ game+0x469d8b0
};

// Class DBDUIPresenters.HudPresenter
// Size: 0x108 (Inherited: 0xd0)
struct UHudPresenter : UPresenter {
	enum class EHudParentContainerType HudParentContainer; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct ADBDPlayer* _pendingCharacter; // 0xd8(0x08)
	struct ADBDPlayer* _presentedCharacter; // 0xe0(0x08)
	struct ADBDSpectator* _spectatorPawn; // 0xe8(0x08)
	char pad_F0[0x8]; // 0xf0(0x08)
	struct UHudScreen* _hudScreen; // 0xf8(0x08)
	struct UCoreHudRootWidget* _rootWidget; // 0x100(0x08)

	void OnPawnUnpossessed(struct APawn* Pawn); // Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed // (Final|Native|Private) // @ game+0x469e9b0
	void OnPawnPossessed(struct APawn* Pawn); // Function DBDUIPresenters.HudPresenter.OnPawnPossessed // (Final|Native|Private) // @ game+0x469e920
	void OnLocallyObservedChanged(); // Function DBDUIPresenters.HudPresenter.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x469d9d0
	bool IsPendingPawnReady(); // Function DBDUIPresenters.HudPresenter.IsPendingPawnReady // (Final|Native|Private|Const) // @ game+0x469d970
	bool IsHudReady(); // Function DBDUIPresenters.HudPresenter.IsHudReady // (Final|Native|Private) // @ game+0x469d910
};

// Class DBDUIPresenters.AimingCrosshairPresenter
// Size: 0x130 (Inherited: 0x108)
struct UAimingCrosshairPresenter : UHudPresenter {
	struct UUserWidget* AimingCrosshairWidgetClass; // 0x108(0x08)
	char pad_110[0x20]; // 0x110(0x20)
};

// Class DBDUIPresenters.SubPresenter
// Size: 0x68 (Inherited: 0x30)
struct USubPresenter : UObject {
	char pad_30[0x38]; // 0x30(0x38)

	void OnPresenterStopAsyncOperation(); // Function DBDUIPresenters.SubPresenter.OnPresenterStopAsyncOperation // (Native|Public) // @ game+0x46a27c0
	void OnPresenterStartAsyncOperation(); // Function DBDUIPresenters.SubPresenter.OnPresenterStartAsyncOperation // (Native|Public) // @ game+0x46a27a0
};

// Class DBDUIPresenters.ArchiveCompendiumSubPresenter
// Size: 0xe8 (Inherited: 0x68)
struct UArchiveCompendiumSubPresenter : USubPresenter {
	struct TScriptInterface<IArchiveCompendiumViewInterface> _archiveCompendiumWidget; // 0x68(0x10)
	char pad_78[0x70]; // 0x78(0x70)

	void OnTomeSelected(struct FString tomeId); // Function DBDUIPresenters.ArchiveCompendiumSubPresenter.OnTomeSelected // (Final|Native|Protected) // @ game+0x4698900
};

// Class DBDUIPresenters.ArchiveQuestMapSubPresenter
// Size: 0x260 (Inherited: 0x68)
struct UArchiveQuestMapSubPresenter : USubPresenter {
	char pad_68[0x150]; // 0x68(0x150)
	struct TScriptInterface<IArchiveQuestMapViewInterface> _archiveQuestMapWidget; // 0x1b8(0x10)
	struct TScriptInterface<IArchiveLevelProgressionViewInterface> _archiveLevelProgressionWidget; // 0x1c8(0x10)
	char pad_1D8[0x58]; // 0x1d8(0x58)
	struct TArray<enum class EArchivesStoryLevelStatus> _storyLevelStatusCache; // 0x230(0x10)
	char pad_240[0x20]; // 0x240(0x20)

	void UpdateTomeLevels(); // Function DBDUIPresenters.ArchiveQuestMapSubPresenter.UpdateTomeLevels // (Final|Native|Private) // @ game+0x4698aa0
	void OnTomeMapCreated(); // Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeMapCreated // (Final|Native|Private) // @ game+0x46988e0
	void OnTomeLevelRewardAnimationDone(); // Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeLevelRewardAnimationDone // (Final|Native|Private) // @ game+0x46988c0
	void OnQuestNodeUnhovered(enum class EPlayerRole Role); // Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeUnhovered // (Final|Native|Private) // @ game+0x4698310
	void OnQuestNodeHovered(enum class EPlayerRole Role); // Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeHovered // (Final|Native|Private) // @ game+0x4698290
	void OnNodeSelected(struct FName& NodeId, enum class EPlayerRole Role, struct FVector2D& position); // Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnNodeSelected // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x4697f20
	void OnLevelSelected(int32_t levelIndex); // Function DBDUIPresenters.ArchiveQuestMapSubPresenter.OnLevelSelected // (Final|Native|Private) // @ game+0x4697890
	void NavigateToNextLevelAfterUnlock(); // Function DBDUIPresenters.ArchiveQuestMapSubPresenter.NavigateToNextLevelAfterUnlock // (Final|Native|Private) // @ game+0x4696ef0
	void GetCurrentLevel(); // Function DBDUIPresenters.ArchiveQuestMapSubPresenter.GetCurrentLevel // (Final|Native|Private) // @ game+0x4696e70
};

// Class DBDUIPresenters.ArchiveEditorSubPresenter
// Size: 0x288 (Inherited: 0x260)
struct UArchiveEditorSubPresenter : UArchiveQuestMapSubPresenter {
	char pad_260[0x18]; // 0x260(0x18)
	struct TScriptInterface<IArchiveEditorViewInterface> _archiveEditorWidget; // 0x278(0x10)

	void OnSaveTomeGraph(struct TArray<struct FArchiveNodeGraphViewData>& nodeList); // Function DBDUIPresenters.ArchiveEditorSubPresenter.OnSaveTomeGraph // (Final|Native|Private|HasOutParms) // @ game+0x4698620
};

// Class DBDUIPresenters.ArchiveImageViewerPresenter
// Size: 0x160 (Inherited: 0xd0)
struct UArchiveImageViewerPresenter : UPresenter {
	struct UUserWidget* ArchiveImageViewerWidgetClass; // 0xd0(0x08)
	char pad_D8[0x88]; // 0xd8(0x88)

	void OnTextVisibilityChanged(); // Function DBDUIPresenters.ArchiveImageViewerPresenter.OnTextVisibilityChanged // (Final|Native|Private) // @ game+0x4698880
	void OnImageViewerVoiceOverPlayed(); // Function DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverPlayed // (Final|Native|Private) // @ game+0x4697810
	void OnImageViewerVoiceOverAutoplay(bool autoplay); // Function DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverAutoplay // (Final|Native|Private) // @ game+0x46976f0
	void OnBackAction(); // Function DBDUIPresenters.ArchiveImageViewerPresenter.OnBackAction // (Final|Native|Private) // @ game+0x4697120
	void OnArchivesVoiceOverPlayed(bool Playing); // Function DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverPlayed // (Final|Native|Private) // @ game+0x4696fc0
	void OnArchivesVoiceOverAutoplay(bool autoplay); // Function DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverAutoplay // (Final|Native|Private) // @ game+0x4696f30
	bool CanShowFullScreenMode(); // Function DBDUIPresenters.ArchiveImageViewerPresenter.CanShowFullScreenMode // (Final|Native|Private|Const) // @ game+0x4696d50
};

// Class DBDUIPresenters.ArchiveJournalSubPresenter
// Size: 0x140 (Inherited: 0x68)
struct UArchiveJournalSubPresenter : USubPresenter {
	char pad_68[0x38]; // 0x68(0x38)
	struct TScriptInterface<IArchiveJournalViewInterface> _archiveJournalWidget; // 0xa0(0x10)
	char pad_B0[0x90]; // 0xb0(0x90)

	void OnVignetteSelected(struct FString VignetteId); // Function DBDUIPresenters.ArchiveJournalSubPresenter.OnVignetteSelected // (Final|Native|Private) // @ game+0x46989a0
	void OnShowImageViewer(); // Function DBDUIPresenters.ArchiveJournalSubPresenter.OnShowImageViewer // (Final|Native|Private) // @ game+0x46987b0
	void OnPlayCinematic(int32_t index); // Function DBDUIPresenters.ArchiveJournalSubPresenter.OnPlayCinematic // (Final|Native|Private) // @ game+0x4698040
	void OnImageViewerVoiceOverPlayed(); // Function DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverPlayed // (Final|Native|Private) // @ game+0x4697830
	void OnImageViewerVoiceOverAutoplay(bool autoplay); // Function DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverAutoplay // (Final|Native|Private) // @ game+0x4697780
	void OnEntrySelected(int32_t entryIndex); // Function DBDUIPresenters.ArchiveJournalSubPresenter.OnEntrySelected // (Final|Native|Private) // @ game+0x4697640
	void OnClickPlayButton(int32_t entryIndex); // Function DBDUIPresenters.ArchiveJournalSubPresenter.OnClickPlayButton // (Final|Native|Private) // @ game+0x4697360
	void OnAutoplayChanged(bool autoplayActive, int32_t entryIndex); // Function DBDUIPresenters.ArchiveJournalSubPresenter.OnAutoplayChanged // (Final|Native|Private) // @ game+0x4697050
};

// Class DBDUIPresenters.ArchiveMenuPresenter
// Size: 0x198 (Inherited: 0xd0)
struct UArchiveMenuPresenter : UPresenter {
	struct UUserWidget* ArchiveMenuWidgetClass; // 0xd0(0x08)
	struct UArchiveTomeSubPresenter* _archiveTomeSubPresenter; // 0xd8(0x08)
	struct UArchiveRiftSubPresenter* _archiveRiftSubPresenter; // 0xe0(0x08)
	struct UArchiveCompendiumSubPresenter* _archiveCompendiumSubPresenter; // 0xe8(0x08)
	struct USubPresenter* _activeSubPresenter; // 0xf0(0x08)
	char pad_F8[0xa0]; // 0xf8(0xa0)

	void OnSlotSelectorClosed(); // Function DBDUIPresenters.ArchiveMenuPresenter.OnSlotSelectorClosed // (Final|Native|Private) // @ game+0x4698860
	void OnShowImageViewer(bool voiceOverIsPlaying); // Function DBDUIPresenters.ArchiveMenuPresenter.OnShowImageViewer // (Final|Native|Private) // @ game+0x46987d0
	void OnMenuTabSelected(enum class EArchiveMenuState menuState, bool alreadySelected); // Function DBDUIPresenters.ArchiveMenuPresenter.OnMenuTabSelected // (Final|Native|Private) // @ game+0x4697920
	void OnInfoClicked(); // Function DBDUIPresenters.ArchiveMenuPresenter.OnInfoClicked // (Final|Native|Private) // @ game+0x4697850
	void OnHideImageViewer(); // Function DBDUIPresenters.ArchiveMenuPresenter.OnHideImageViewer // (Final|Native|Private) // @ game+0x46976d0
	void OnChallengeReminderSlotSelected(enum class EPlayerRole Role); // Function DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderSlotSelected // (Final|Native|Private) // @ game+0x4697220
	void OnChallengeReminderClicked(enum class EPlayerRole Role); // Function DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderClicked // (Final|Native|Private) // @ game+0x46971a0
	void OnBackAction(); // Function DBDUIPresenters.ArchiveMenuPresenter.OnBackAction // (Final|Native|Private) // @ game+0x4697140
};

// Class DBDUIPresenters.BasePopupPresenter
// Size: 0x110 (Inherited: 0xd0)
struct UBasePopupPresenter : UPresenter {
	enum class EContext ObservedContext; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct UUserWidget* PopupWidgetClass; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct UBasePopupViewData* _viewData; // 0xe8(0x08)
	char pad_F0[0x20]; // 0xf0(0x20)

	void OnContextLeave(enum class EContext Context); // Function DBDUIPresenters.BasePopupPresenter.OnContextLeave // (Final|Native|Protected) // @ game+0x4697540
	void OnContextEnter(enum class EContext Context); // Function DBDUIPresenters.BasePopupPresenter.OnContextEnter // (Final|Native|Protected) // @ game+0x46974c0
	bool IsContextEntered(); // Function DBDUIPresenters.BasePopupPresenter.IsContextEntered // (Final|Native|Protected|Const) // @ game+0x4696e90
};

// Class DBDUIPresenters.GenericPopupPresenter
// Size: 0x160 (Inherited: 0x110)
struct UGenericPopupPresenter : UBasePopupPresenter {
	char pad_110[0x50]; // 0x110(0x50)

	void OnBack(); // Function DBDUIPresenters.GenericPopupPresenter.OnBack // (Native|Protected) // @ game+0x469db00
	void OnAppResumed(bool isAppResumed); // Function DBDUIPresenters.GenericPopupPresenter.OnAppResumed // (Final|Native|Protected) // @ game+0x469da70
	void OnAction(enum class EPopupButtonType popupAction); // Function DBDUIPresenters.GenericPopupPresenter.OnAction // (Native|Protected) // @ game+0x469d9f0
};

// Class DBDUIPresenters.ArchivePassPurchasePopupPresenter
// Size: 0x160 (Inherited: 0x160)
struct UArchivePassPurchasePopupPresenter : UGenericPopupPresenter {
};

// Class DBDUIPresenters.ArchivePresenterHelper
// Size: 0x30 (Inherited: 0x30)
struct UArchivePresenterHelper : UObject {
};

// Class DBDUIPresenters.ArchiveRiftSubPresenter
// Size: 0x188 (Inherited: 0x68)
struct UArchiveRiftSubPresenter : USubPresenter {
	char pad_68[0x60]; // 0x68(0x60)
	struct TScriptInterface<IArchiveRiftViewInterface> _archiveRiftWidget; // 0xc8(0x10)
	char pad_D8[0xb0]; // 0xd8(0xb0)

	void OnToggleOutfitDisplay(); // Function DBDUIPresenters.ArchiveRiftSubPresenter.OnToggleOutfitDisplay // (Final|Native|Private) // @ game+0x46988a0
	void OnRewardItemClicked(struct FName ItemId); // Function DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardItemClicked // (Final|Native|Private) // @ game+0x4698560
	void OnRewardCurrencyClicked(enum class ECurrencyType CurrencyType); // Function DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardCurrencyClicked // (Final|Native|Private) // @ game+0x4698450
	void OnClickPurchaseTiers(); // Function DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchaseTiers // (Final|Native|Private) // @ game+0x4697410
	void OnClickPurchasePremiumPass(); // Function DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchasePremiumPass // (Final|Native|Private) // @ game+0x46973f0
	void OnBonusTierTooltipShown(); // Function DBDUIPresenters.ArchiveRiftSubPresenter.OnBonusTierTooltipShown // (Final|Native|Private) // @ game+0x4697180
};

// Class DBDUIPresenters.ArchiveTierPurchasePopupPresenter
// Size: 0x1c0 (Inherited: 0x160)
struct UArchiveTierPurchasePopupPresenter : UGenericPopupPresenter {
	char pad_160[0x60]; // 0x160(0x60)

	void OnConfirmPurchase(int32_t tiersToPurchaseNumber); // Function DBDUIPresenters.ArchiveTierPurchasePopupPresenter.OnConfirmPurchase // (Final|Native|Protected) // @ game+0x4697430
};

// Class DBDUIPresenters.ArchiveTomeSubPresenter
// Size: 0xf8 (Inherited: 0x68)
struct UArchiveTomeSubPresenter : USubPresenter {
	char pad_68[0x30]; // 0x68(0x30)
	struct UArchiveQuestMapSubPresenter* _archiveQuestMapSubPresenter; // 0x98(0x08)
	struct UArchiveEditorSubPresenter* _archiveEditorSubPresenter; // 0xa0(0x08)
	struct UArchiveJournalSubPresenter* _archiveJournalSubPresenter; // 0xa8(0x08)
	struct USubPresenter* _activeSubPresenter; // 0xb0(0x08)
	struct TScriptInterface<IArchiveTomeViewInterface> _archiveTomeWidget; // 0xb8(0x10)
	struct UMaterialInterface* _archiveSideNavSkinMaterial; // 0xc8(0x08)
	char pad_D0[0x28]; // 0xd0(0x28)

	void OnMenuTabSelected(enum class EArchiveTomeMenuState menuState); // Function DBDUIPresenters.ArchiveTomeSubPresenter.OnMenuTabSelected // (Final|Native|Public) // @ game+0x46979f0
	void OnEditorWidgetSwitchComplete(); // Function DBDUIPresenters.ArchiveTomeSubPresenter.OnEditorWidgetSwitchComplete // (Final|Native|Private) // @ game+0x4032ad0
};

// Class DBDUIPresenters.ChallengeTrackerPresenter
// Size: 0x1a8 (Inherited: 0x108)
struct UChallengeTrackerPresenter : UHudPresenter {
	struct UUserWidget* ChallengeTrackerWidgetClass; // 0x108(0x08)
	float ReadingTimeDelaySec; // 0x110(0x04)
	char pad_114[0x94]; // 0x114(0x94)

	void OnWidgetProgressingDone(); // Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetProgressingDone // (Final|Native|Private) // @ game+0x4698a80
	void OnWidgetOpeningDone(); // Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetOpeningDone // (Final|Native|Private) // @ game+0x4698a60
	void OnWidgetClosingDone(); // Function DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetClosingDone // (Final|Native|Private) // @ game+0x4698a40
	void OnReadingTimeDelayDone(); // Function DBDUIPresenters.ChallengeTrackerPresenter.OnReadingTimeDelayDone // (Final|Native|Private) // @ game+0x4698390
	void OnQuestEventRepetitionValueChanged(int32_t value, struct FString questEventIdTracked); // Function DBDUIPresenters.ChallengeTrackerPresenter.OnQuestEventRepetitionValueChanged // (Final|Native|Private) // @ game+0x4698160
	void BindToQuestRepetitionEvents(); // Function DBDUIPresenters.ChallengeTrackerPresenter.BindToQuestRepetitionEvents // (Final|Native|Private) // @ game+0x4696d30
};

// Class DBDUIPresenters.ContextObserver
// Size: 0xa0 (Inherited: 0x30)
struct UContextObserver : UUIComponent {
	enum class EContextSection ObservedContextSection; // 0x30(0x01)
	char pad_31[0x6f]; // 0x31(0x6f)
};

// Class DBDUIPresenters.CreditsPresenter
// Size: 0xe8 (Inherited: 0xd0)
struct UCreditsPresenter : UPresenter {
	struct UUserWidget* CreditsScreenWidgetClass; // 0xd0(0x08)
	char pad_D8[0x10]; // 0xd8(0x10)

	void OnBackAction(); // Function DBDUIPresenters.CreditsPresenter.OnBackAction // (Final|Native|Private) // @ game+0x4697160
	void Credits_ScrollToName(struct FString Name, float Delay); // Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToName // (Final|Exec|Native|Public) // @ game+0x4696d80
	void Credits_ScrollToEnd(); // Function DBDUIPresenters.CreditsPresenter.Credits_ScrollToEnd // (Final|Exec|Native|Public) // @ game+0x4032ad0
};

// Class DBDUIPresenters.DailyRitualsPopupPresenter
// Size: 0x180 (Inherited: 0x160)
struct UDailyRitualsPopupPresenter : UGenericPopupPresenter {
	char pad_160[0x20]; // 0x160(0x20)

	void OnRitualsSyncErrorEvent(); // Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsSyncErrorEvent // (Final|Native|Protected|Const) // @ game+0x4032ad0
	void OnRitualsFetchedEvent(); // Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsFetchedEvent // (Final|Native|Protected|Const) // @ game+0x4698600
	void OnRemoveRitual(struct FString ID); // Function DBDUIPresenters.DailyRitualsPopupPresenter.OnRemoveRitual // (Final|Native|Protected) // @ game+0x46983b0
	void OnClaimRitual(struct FString ID); // Function DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimRitual // (Final|Native|Protected) // @ game+0x46972c0
	void OnClaimAllRituals(); // Function DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimAllRituals // (Final|Native|Protected) // @ game+0x46972a0
};

// Class DBDUIPresenters.DirectionalMinigamePresenter
// Size: 0x130 (Inherited: 0x108)
struct UDirectionalMinigamePresenter : UHudPresenter {
	struct UUserWidget* DirectionalMinigameWidgetClass; // 0x108(0x08)
	char pad_110[0x20]; // 0x110(0x20)

	void OnMinigameStart(struct TArray<enum class EDirectionalInputKey> Sequence, int32_t currentIndex); // Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameStart // (Final|Native|Private) // @ game+0x4697df0
	void OnMinigameInit(struct FDirectionalMiniGameDefinition miniGameDefinition); // Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameInit // (Final|Native|Private|Const) // @ game+0x4697ce0
	void OnMinigameEnterKey(enum class EDirectionalInputKey enteredKey, int32_t enteredIndex, bool isCorrect, int32_t currentIndex); // Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnterKey // (Final|Native|Private) // @ game+0x4697b80
	void OnMinigameEnd(enum class EDirectionalMinigameResult Result); // Function DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnd // (Final|Native|Private) // @ game+0x4697b00
};

// Class DBDUIPresenters.DisplayStandPresenter
// Size: 0x138 (Inherited: 0xd0)
struct UDisplayStandPresenter : UPresenter {
	struct UUserWidget* CoreDisplayStandWidgetClass; // 0xd0(0x08)
	enum class EContext ObservedContext; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FName DisplayStandName; // 0xdc(0x0c)
	struct FAnchorData DragZoneLayoutData; // 0xe8(0x28)
	float DragZonePositionX; // 0x110(0x04)
	float DragZonePositionY; // 0x114(0x04)
	float DragZoneSizeX; // 0x118(0x04)
	float DragZoneSizeY; // 0x11c(0x04)
	char pad_120[0x18]; // 0x120(0x18)

	void OnDisplayStandRotation(float distance); // Function DBDUIPresenters.DisplayStandPresenter.OnDisplayStandRotation // (Final|Native|Public) // @ game+0x46975c0
	bool IsContextEntered(); // Function DBDUIPresenters.DisplayStandPresenter.IsContextEntered // (Final|Native|Private|Const) // @ game+0x4696ec0
};

// Class DBDUIPresenters.EventEntryRewardsSubPresenter
// Size: 0xd0 (Inherited: 0x68)
struct UEventEntryRewardsSubPresenter : USubPresenter {
	struct TScriptInterface<IEventCollectionViewInterface> _tabWidget; // 0x68(0x10)
	struct TArray<struct FCustomizationRewardViewData> _rewardsGridData; // 0x78(0x10)
	struct TArray<struct FCustomizationRewardViewData> _previewAreaRewardsData; // 0x88(0x10)
	struct UEventEntryPopupPresenter* _parentPresenter; // 0x98(0x08)
	char pad_A0[0x30]; // 0xa0(0x30)

	void OnRewardGridItemClicked(int32_t selectedIndex); // Function DBDUIPresenters.EventEntryRewardsSubPresenter.OnRewardGridItemClicked // (Final|Native|Protected) // @ game+0x46984d0
	void OnPreviewAreaItemClicked(int32_t selectedIndex); // Function DBDUIPresenters.EventEntryRewardsSubPresenter.OnPreviewAreaItemClicked // (Final|Native|Protected) // @ game+0x46980d0
	void OnInstructionButtonClicked(); // Function DBDUIPresenters.EventEntryRewardsSubPresenter.OnInstructionButtonClicked // (Final|Native|Protected) // @ game+0x4697870
};

// Class DBDUIPresenters.EventEntryCollectionSubPresenter
// Size: 0xe0 (Inherited: 0xd0)
struct UEventEntryCollectionSubPresenter : UEventEntryRewardsSubPresenter {
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class DBDUIPresenters.EventEntryEventSubPresenter
// Size: 0x88 (Inherited: 0x68)
struct UEventEntryEventSubPresenter : USubPresenter {
	struct TScriptInterface<IEventInfoViewInterface> _eventTabWidget; // 0x68(0x10)
	struct UEventTabViewData* _viewData; // 0x78(0x08)
	struct UEventEntryPopupPresenter* _parentPresenter; // 0x80(0x08)

	void OnArchiveButtonClicked(); // Function DBDUIPresenters.EventEntryEventSubPresenter.OnArchiveButtonClicked // (Final|Native|Protected) // @ game+0x4696f10
};

// Class DBDUIPresenters.EventEntryPopupPresenter
// Size: 0x1e0 (Inherited: 0x160)
struct UEventEntryPopupPresenter : UGenericPopupPresenter {
	char pad_160[0x18]; // 0x160(0x18)
	struct UEventEntryEventSubPresenter* _eventSubPresenter; // 0x178(0x08)
	struct UEventEntryCollectionSubPresenter* _collectionSubPresenter; // 0x180(0x08)
	struct UEventEntryStoreSubPresenter* _storeSubPresenter; // 0x188(0x08)
	struct USubPresenter* _activeSubPresenter; // 0x190(0x08)
	char pad_198[0x48]; // 0x198(0x48)

	void OnSelectedTabChanged(int32_t Key); // Function DBDUIPresenters.EventEntryPopupPresenter.OnSelectedTabChanged // (Final|Native|Private) // @ game+0x4698720
	void OnMilestoneTrackerItemClicked(int32_t selectedIndex); // Function DBDUIPresenters.EventEntryPopupPresenter.OnMilestoneTrackerItemClicked // (Final|Native|Private) // @ game+0x4697a70
};

// Class DBDUIPresenters.EventEntryStoreSubPresenter
// Size: 0xe0 (Inherited: 0xd0)
struct UEventEntryStoreSubPresenter : UEventEntryRewardsSubPresenter {
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class DBDUIPresenters.EventObjectiveItemPresenter
// Size: 0x148 (Inherited: 0x108)
struct UEventObjectiveItemPresenter : UHudPresenter {
	char pad_108[0x8]; // 0x108(0x08)
	struct UUserWidget* CoreHudEventObjectiveItemWidgetClass; // 0x110(0x08)
	char pad_118[0x30]; // 0x118(0x30)
};

// Class DBDUIPresenters.ExamplePresenter
// Size: 0x148 (Inherited: 0x108)
struct UExamplePresenter : UHudPresenter {
	struct UUserWidget* ExampleWidgetClass; // 0x108(0x08)
	char pad_110[0x38]; // 0x110(0x38)

	void OnButtonClick(); // Function DBDUIPresenters.ExamplePresenter.OnButtonClick // (Final|Native|Private) // @ game+0x469db40
};

// Class DBDUIPresenters.ExternalEffectsPresenter
// Size: 0x120 (Inherited: 0x108)
struct UExternalEffectsPresenter : UHudPresenter {
	struct UUserWidget* CoreExternalEffectsWidgetClass; // 0x108(0x08)
	char pad_110[0x10]; // 0x110(0x10)

	void OnShowExternalEffect(struct FExternalEffectData& Data); // Function DBDUIPresenters.ExternalEffectsPresenter.OnShowExternalEffect // (Final|Native|Protected|HasOutParms) // @ game+0x469edd0
	void OnHideExternalEffect(struct FName ItemId, enum class EExternalEffectSource ExternalEffectSource); // Function DBDUIPresenters.ExternalEffectsPresenter.OnHideExternalEffect // (Final|Native|Protected) // @ game+0x469e270
};

// Class DBDUIPresenters.FearMarketPopupPresenter
// Size: 0x160 (Inherited: 0x160)
struct UFearMarketPopupPresenter : UGenericPopupPresenter {
};

// Class DBDUIPresenters.FocusHandler
// Size: 0x48 (Inherited: 0x30)
struct UFocusHandler : UUIComponent {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class DBDUIPresenters.GenericTextInputPopupPresenter
// Size: 0x1d0 (Inherited: 0x160)
struct UGenericTextInputPopupPresenter : UGenericPopupPresenter {
	char pad_160[0x70]; // 0x160(0x70)
};

// Class DBDUIPresenters.FriendSearchPopupPresenter
// Size: 0x220 (Inherited: 0x1d0)
struct UFriendSearchPopupPresenter : UGenericTextInputPopupPresenter {
	char pad_1D0[0x50]; // 0x1d0(0x50)
};

// Class DBDUIPresenters.GameManualSubPresenter
// Size: 0x78 (Inherited: 0x68)
struct UGameManualSubPresenter : USubPresenter {
	struct TScriptInterface<IGameManualViewInterface> _gameManualWidget; // 0x68(0x10)

	void OnCategoryCategoryEntered(enum class EHelpType categoryType); // Function DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered // (Final|Native|Private) // @ game+0x469db60
};

// Class DBDUIPresenters.GenericRefreshingPopupPresenter
// Size: 0x180 (Inherited: 0x160)
struct UGenericRefreshingPopupPresenter : UGenericPopupPresenter {
	float DefaultRefreshingIntervalsTime; // 0x160(0x04)
	float DefaultTimeoutTime; // 0x164(0x04)
	char pad_168[0x18]; // 0x168(0x18)
};

// Class DBDUIPresenters.GlobalLoadingSpinnerPresenter
// Size: 0xe8 (Inherited: 0xd0)
struct UGlobalLoadingSpinnerPresenter : UPresenter {
	struct UUserWidget* GlobalLoadSpinnerWidgetClass; // 0xd0(0x08)
	char pad_D8[0x10]; // 0xd8(0x10)
};

// Class DBDUIPresenters.PresenterParentInfo
// Size: 0x38 (Inherited: 0x30)
struct UPresenterParentInfo : UObject {
	struct UPresenterParentWidget* ParentClass; // 0x30(0x08)
};

// Class DBDUIPresenters.GridPresenterParentInfo
// Size: 0x60 (Inherited: 0x38)
struct UGridPresenterParentInfo : UPresenterParentInfo {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FMargin Padding; // 0x3c(0x10)
	struct FVector2D Nudge; // 0x4c(0x08)
	uint32_t row; // 0x54(0x04)
	uint32_t Column; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class DBDUIPresenters.PresenterParentWidget
// Size: 0x298 (Inherited: 0x298)
struct UPresenterParentWidget : UUserWidget {
};

// Class DBDUIPresenters.GridPresenterParentWidget
// Size: 0x2a0 (Inherited: 0x298)
struct UGridPresenterParentWidget : UPresenterParentWidget {
	struct UGridPanel* Container; // 0x298(0x08)
};

// Class DBDUIPresenters.HudEndGameScenarioPresenter
// Size: 0x148 (Inherited: 0x108)
struct UHudEndGameScenarioPresenter : UHudPresenter {
	struct UUserWidget* EndGameCollapseBarWidgetClass; // 0x108(0x08)
	char pad_110[0x38]; // 0x110(0x38)
};

// Class DBDUIPresenters.HudEventProgressionPresenter
// Size: 0x140 (Inherited: 0x108)
struct UHudEventProgressionPresenter : UHudPresenter {
	struct UUserWidget* CoreHudEventProgressionWidgetClass; // 0x108(0x08)
	char pad_110[0x30]; // 0x110(0x30)

	void OnEventProgressPendingChanged(int32_t value, enum class EVoidEnergyChangeReason reasonEnergyChanged); // Function DBDUIPresenters.HudEventProgressionPresenter.OnEventProgressPendingChanged // (Final|Native|Private) // @ game+0x469e070
	void OnEventProgressionDataInitialized(struct FEventProgressionData& EventProgressionData); // Function DBDUIPresenters.HudEventProgressionPresenter.OnEventProgressionDataInitialized // (Final|Native|Private|HasOutParms) // @ game+0x469e140
	void OnEventProgressBankedChanged(int32_t value); // Function DBDUIPresenters.HudEventProgressionPresenter.OnEventProgressBankedChanged // (Final|Native|Private) // @ game+0x469dfe0
};

// Class DBDUIPresenters.HudMatchResultPresenter
// Size: 0x120 (Inherited: 0x108)
struct UHudMatchResultPresenter : UHudPresenter {
	struct UUserWidget* MatchResultWidgetClass; // 0x108(0x08)
	char pad_110[0x10]; // 0x110(0x10)

	void StartEndGameSequence(); // Function DBDUIPresenters.HudMatchResultPresenter.StartEndGameSequence // (Final|Native|Private) // @ game+0x469f440
	void ShowEndSequence(float Duration, bool IsSlasher, int32_t matchResult); // Function DBDUIPresenters.HudMatchResultPresenter.ShowEndSequence // (Final|Native|Private) // @ game+0x469f320
	void OnMatchResultFadeOutCompleted(); // Function DBDUIPresenters.HudMatchResultPresenter.OnMatchResultFadeOutCompleted // (Final|Native|Private) // @ game+0x469e6d0
	void NotifyInParadiseOrEscaped(); // Function DBDUIPresenters.HudMatchResultPresenter.NotifyInParadiseOrEscaped // (Final|Native|Private) // @ game+0x469d9d0
};

// Class DBDUIPresenters.HudObjectivesPresenter
// Size: 0x160 (Inherited: 0x108)
struct UHudObjectivesPresenter : UHudPresenter {
	struct UUserWidget* CoreHudObjectivesWidgetClass; // 0x108(0x08)
	char pad_110[0x50]; // 0x110(0x50)
};

// Class DBDUIPresenters.HudPeekingPromptsPresenter
// Size: 0x138 (Inherited: 0x108)
struct UHudPeekingPromptsPresenter : UHudPresenter {
	struct UUserWidget* LeaningArrowsWidgetClass; // 0x108(0x08)
	char pad_110[0x28]; // 0x110(0x28)

	void UpdatePeekingState(enum class ELeanState potentialLeanState); // Function DBDUIPresenters.HudPeekingPromptsPresenter.UpdatePeekingState // (Final|Native|Private) // @ game+0x469f460
	void HandleBestPlayerInteractionsChanged(); // Function DBDUIPresenters.HudPeekingPromptsPresenter.HandleBestPlayerInteractionsChanged // (Final|Native|Private) // @ game+0x469d870
	bool CanPlayerLean(); // Function DBDUIPresenters.HudPeekingPromptsPresenter.CanPlayerLean // (Final|Native|Private|Const) // @ game+0x469d7a0
};

// Class DBDUIPresenters.HudSpectatePresenter
// Size: 0x158 (Inherited: 0x108)
struct UHudSpectatePresenter : UHudPresenter {
	struct UUserWidget* CoreSpectateBarWidget; // 0x108(0x08)
	char pad_110[0x48]; // 0x110(0x48)

	void OnPreviousPlayerTriggered(); // Function DBDUIPresenters.HudSpectatePresenter.OnPreviousPlayerTriggered // (Final|Native|Private) // @ game+0x469eb10
	void OnPlayerGameStateChanged(struct ADBDPlayerState* DBDPlayerState, enum class EGameState newGameState); // Function DBDUIPresenters.HudSpectatePresenter.OnPlayerGameStateChanged // (Final|Native|Private) // @ game+0x469ea40
	void OnNextPlayerTriggered(); // Function DBDUIPresenters.HudSpectatePresenter.OnNextPlayerTriggered // (Final|Native|Private) // @ game+0x469e7f0
	void OnLeaveTriggered(); // Function DBDUIPresenters.HudSpectatePresenter.OnLeaveTriggered // (Final|Native|Private) // @ game+0x469e380
};

// Class DBDUIPresenters.HudTutorialObjectivesPresenter
// Size: 0x178 (Inherited: 0x108)
struct UHudTutorialObjectivesPresenter : UHudPresenter {
	struct UUserWidget* TutorialObjectivesWidgetClass; // 0x108(0x08)
	char pad_110[0x68]; // 0x110(0x68)

	bool IsInTutorial(); // Function DBDUIPresenters.HudTutorialObjectivesPresenter.IsInTutorial // (Final|Native|Private|Const) // @ game+0x469d940
};

// Class DBDUIPresenters.LightSensitivityPresenter
// Size: 0xf8 (Inherited: 0xd0)
struct ULightSensitivityPresenter : UPresenter {
	struct UUserWidget* LightSensitivityScreenWidgetClass; // 0xd0(0x08)
	float AutoCompleteTime; // 0xd8(0x04)
	char pad_DC[0x1c]; // 0xdc(0x1c)

	void OnContinue(); // Function DBDUIPresenters.LightSensitivityPresenter.OnContinue // (Final|Native|Private) // @ game+0x469dc80
	void OnCompletedFadeOut(); // Function DBDUIPresenters.LightSensitivityPresenter.OnCompletedFadeOut // (Final|Native|Private) // @ game+0x469dbe0
};

// Class DBDUIPresenters.LoadoutMenuPopupPresenter
// Size: 0x1a0 (Inherited: 0x160)
struct ULoadoutMenuPopupPresenter : UGenericPopupPresenter {
	char pad_160[0x10]; // 0x160(0x10)
	struct TArray<struct ULoadoutMenuPopupViewData*> _loadoutPopupSlotData; // 0x170(0x10)
	struct TArray<struct ULoadoutMenuPopupViewData*> _loadoutPopupInventoryData; // 0x180(0x10)
	char pad_190[0x10]; // 0x190(0x10)

	struct ULoadoutMenuPopupViewData* SetLoadoutPopupViewData(struct FInventorySlotData& SlotData, enum class EPlayerRole PlayerRole); // Function DBDUIPresenters.LoadoutMenuPopupPresenter.SetLoadoutPopupViewData // (Final|Native|Private|HasOutParms) // @ game+0x469f160
	void OnSelectedCharacterChanged(int32_t selectedCharacterIndex); // Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnSelectedCharacterChanged // (Final|Native|Private) // @ game+0x469ec90
	void OnLoadoutMenuSlotIsSelected(enum class ELoadoutSlot slotSelected); // Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuSlotIsSelected // (Final|Native|Private) // @ game+0x469e630
	void OnLoadoutMenuPresetSelected(int32_t presetId, enum class ELoadoutSlot slotSelected); // Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuPresetSelected // (Final|Native|Private) // @ game+0x469e560
	void OnLoadoutMenuPresetClicked(int32_t presetId, enum class ELoadoutSlot slotSelected); // Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuPresetClicked // (Final|Native|Private) // @ game+0x469e490
	void OnLoadoutMenuInventorySlotClick(enum class ELoadoutSlot itemIndex, struct FName ItemId); // Function DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuInventorySlotClick // (Final|Native|Private) // @ game+0x469e3a0
};

// Class DBDUIPresenters.NewActiveTomePopupPresenter
// Size: 0x180 (Inherited: 0x160)
struct UNewActiveTomePopupPresenter : UGenericPopupPresenter {
	char pad_160[0x20]; // 0x160(0x20)

	void OnRiftButtonClicked(); // Function DBDUIPresenters.NewActiveTomePopupPresenter.OnRiftButtonClicked // (Final|Native|Private) // @ game+0x469eb70
	void OnCurrentTomeButtonClicked(); // Function DBDUIPresenters.NewActiveTomePopupPresenter.OnCurrentTomeButtonClicked // (Final|Native|Private) // @ game+0x469dfc0
};

// Class DBDUIPresenters.OnboardingMenuPresenter
// Size: 0x108 (Inherited: 0xd0)
struct UOnboardingMenuPresenter : UPresenter {
	struct UUserWidget* OnboardingMenuWidgetClass; // 0xd0(0x08)
	struct UOnboardingTutorialSubPresenter* _onboardingTutorialSubPresenter; // 0xd8(0x08)
	struct UGameManualSubPresenter* _gameManualSubPresenter; // 0xe0(0x08)
	struct USubPresenter* _activeSubPresenter; // 0xe8(0x08)
	char pad_F0[0x18]; // 0xf0(0x18)

	void OnSetUIEnabled(bool Enabled); // Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled // (Final|Native|Private) // @ game+0x469ed20
	void OnSettingsAction(); // Function DBDUIPresenters.OnboardingMenuPresenter.OnSettingsAction // (Final|Native|Private) // @ game+0x469edb0
	void OnQuitGameAction(); // Function DBDUIPresenters.OnboardingMenuPresenter.OnQuitGameAction // (Final|Native|Private) // @ game+0x469eb30
	void OnMenuTabSelectedAgain(enum class EOnboardingMenuState menuState); // Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain // (Final|Native|Private) // @ game+0x469e770
	void OnMenuTabSelected(enum class EOnboardingMenuState menuState); // Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected // (Final|Native|Private) // @ game+0x469e6f0
	void OnFirstOnboardingStepsDone(bool isFirstStepsDone); // Function DBDUIPresenters.OnboardingMenuPresenter.OnFirstOnboardingStepsDone // (Final|Native|Private) // @ game+0x469e1e0
	void OnChangeAccountAction(); // Function DBDUIPresenters.OnboardingMenuPresenter.OnChangeAccountAction // (Final|Native|Private) // @ game+0x4032ad0
	void OnBackAction(); // Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction // (Final|Native|Private) // @ game+0x469db20
};

// Class DBDUIPresenters.OnboardingTutorialSubPresenter
// Size: 0xc8 (Inherited: 0x68)
struct UOnboardingTutorialSubPresenter : USubPresenter {
	struct TScriptInterface<IOnboardingTutorialViewInterface> _onboardingTutorialWidget; // 0x68(0x10)
	char pad_78[0x50]; // 0x78(0x50)

	void OnSelectTutorial(struct FString stepId, struct FString tutorialId); // Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial // (Final|Native|Private) // @ game+0x469eb90
};

// Class DBDUIPresenters.PawnObserver
// Size: 0x70 (Inherited: 0x30)
struct UPawnObserver : UUIComponent {
	char pad_30[0x40]; // 0x30(0x40)

	void OnPawnControllerSet(struct APawn* Pawn, struct AController* OldController, struct AController* NewController); // Function DBDUIPresenters.PawnObserver.OnPawnControllerSet // (Final|Native|Private) // @ game+0x469e810
	void OnLocallyObservedChanged(); // Function DBDUIPresenters.PawnObserver.OnLocallyObservedChanged // (Final|Native|Public) // @ game+0x469e6b0
};

// Class DBDUIPresenters.PingStatusPresenter
// Size: 0x140 (Inherited: 0x108)
struct UPingStatusPresenter : UHudPresenter {
	struct UUserWidget* PingStatusWidgetClass; // 0x108(0x08)
	char pad_110[0x30]; // 0x110(0x30)
};

// Class DBDUIPresenters.PlayerProfilePresenter
// Size: 0x108 (Inherited: 0xd0)
struct UPlayerProfilePresenter : UPresenter {
	struct UUserWidget* CorePlayerProfileWidgetClass; // 0xd0(0x08)
	int32_t _filter; // 0xd8(0x04)
	int32_t _currencyFilter; // 0xdc(0x04)
	char pad_E0[0x28]; // 0xe0(0x28)

	void ShowPlayerProfile(); // Function DBDUIPresenters.PlayerProfilePresenter.ShowPlayerProfile // (Final|Native|Private) // @ game+0x469e360
	void RefreshWallet(); // Function DBDUIPresenters.PlayerProfilePresenter.RefreshWallet // (Final|Native|Private) // @ game+0x469f140
	void OnWalletUpdated(struct TArray<struct FShopWalletUpdate>& walletUpdates); // Function DBDUIPresenters.PlayerProfilePresenter.OnWalletUpdated // (Final|Native|Private|HasOutParms) // @ game+0x469f070
	void OnUpdatePlayerProfileFilter(struct TArray<enum class EPlayerProfileFilter>& Filters); // Function DBDUIPresenters.PlayerProfilePresenter.OnUpdatePlayerProfileFilter // (Final|Native|Private|HasOutParms) // @ game+0x469efc0
	void OnUpdatePlayerProfileCurrencyFilter(struct TArray<enum class ECurrencyType>& currencyFilters); // Function DBDUIPresenters.PlayerProfilePresenter.OnUpdatePlayerProfileCurrencyFilter // (Final|Native|Private|HasOutParms) // @ game+0x469ef10
	void OnShowImageViewer(bool voiceOverIsPlaying); // Function DBDUIPresenters.PlayerProfilePresenter.OnShowImageViewer // (Final|Native|Private) // @ game+0x469ee80
	void OnResetPlayerProfileCurrencyFilter(); // Function DBDUIPresenters.PlayerProfilePresenter.OnResetPlayerProfileCurrencyFilter // (Final|Native|Private) // @ game+0x469eb50
	void OnHideImageViewer(); // Function DBDUIPresenters.PlayerProfilePresenter.OnHideImageViewer // (Final|Native|Private) // @ game+0x469e360
	void OnCurrentSpecialEventChanged(struct FCombinedSpecialEventData& previousSpecialEvent, enum class ESpecialEventStatus previousSpecialEventStatus, struct FCombinedSpecialEventData& currentSpecialEvent, enum class ESpecialEventStatus currentSpecialEventStatus); // Function DBDUIPresenters.PlayerProfilePresenter.OnCurrentSpecialEventChanged // (Final|Native|Private|HasOutParms) // @ game+0x469dca0
	void HidePlayerProfile(); // Function DBDUIPresenters.PlayerProfilePresenter.HidePlayerProfile // (Final|Native|Private) // @ game+0x469d890
	struct FText GetPlayerName(); // Function DBDUIPresenters.PlayerProfilePresenter.GetPlayerName // (Final|Native|Private) // @ game+0x469d7d0
};

// Class DBDUIPresenters.PresenterGroup
// Size: 0x58 (Inherited: 0x30)
struct UPresenterGroup : UUIComponent {
	enum class EPresenterPhase WidgetInstantiationPhase; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct UUIComponent*> _components; // 0x38(0x10)
	struct TArray<struct UPresenter*> _presenters; // 0x48(0x10)
};

// Class DBDUIPresenters.PresenterManager
// Size: 0x68 (Inherited: 0x38)
struct UPresenterManager : UGameInstanceSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct UPresenterGroup*> _persistentPresenterGroups; // 0x40(0x10)
	struct TArray<struct UPresenterGroup*> _transientPresenterGroups; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)

	void OnViewportCreated(); // Function DBDUIPresenters.PresenterManager.OnViewportCreated // (Final|Native|Private) // @ game+0x46a2840
	void OnLoadingTransition(enum class ELoadingTransitionType TransitionType); // Function DBDUIPresenters.PresenterManager.OnLoadingTransition // (Final|Native|Private) // @ game+0x46a2720
};

// Class DBDUIPresenters.PresenterRequirementFunction
// Size: 0x50 (Inherited: 0x30)
struct UPresenterRequirementFunction : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class DBDUIPresenters.ProcessingPopupPresenter
// Size: 0x120 (Inherited: 0x110)
struct UProcessingPopupPresenter : UBasePopupPresenter {
	char pad_110[0x10]; // 0x110(0x10)
};

// Class DBDUIPresenters.ProgressionSystemInfoPopupPresenter
// Size: 0x170 (Inherited: 0x160)
struct UProgressionSystemInfoPopupPresenter : UGenericPopupPresenter {
	char pad_160[0x10]; // 0x160(0x10)
};

// Class DBDUIPresenters.ReportFeedbackPopupPresenter
// Size: 0x170 (Inherited: 0x160)
struct UReportFeedbackPopupPresenter : UGenericPopupPresenter {
	char pad_160[0x10]; // 0x160(0x10)
};

// Class DBDUIPresenters.RootContainer
// Size: 0xa0 (Inherited: 0x30)
struct URootContainer : UUIComponent {
	enum class EGameLayer GameLayer; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float UnfocusedOpacity; // 0x34(0x04)
	char pad_38[0x10]; // 0x38(0x10)
	struct TMap<struct UPresenterParentWidget*, struct UPresenterParentWidget*> _presenterParentWidgets; // 0x48(0x50)
	struct UUserWidget* _rootWidget; // 0x98(0x08)
};

// Class DBDUIPresenters.RootWidget
// Size: 0x2a0 (Inherited: 0x298)
struct URootWidget : UUserWidget {
	struct UCanvasPanel* _canvasPanel; // 0x298(0x08)
};

// Class DBDUIPresenters.SeasonEndRankRewardsPopupPresenter
// Size: 0x170 (Inherited: 0x160)
struct USeasonEndRankRewardsPopupPresenter : UGenericPopupPresenter {
	char pad_160[0x10]; // 0x160(0x10)
};

// Class DBDUIPresenters.SkillCheckPresenter
// Size: 0x138 (Inherited: 0x108)
struct USkillCheckPresenter : UHudPresenter {
	struct UUserWidget* SkillCheckWidgetClass; // 0x108(0x08)
	char pad_110[0x28]; // 0x110(0x28)
};

// Class DBDUIPresenters.SubtitlesPresenter
// Size: 0x128 (Inherited: 0xd0)
struct USubtitlesPresenter : UPresenter {
	struct UUserWidget* SubtitlesWidgetClass; // 0xd0(0x08)
	int32_t NumberOfCharactersPerLine; // 0xd8(0x04)
	float DurationPerLine; // 0xdc(0x04)
	bool KeepSingleCharacter; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TArray<struct FSubtitlesEntry> _entryQueue; // 0xe8(0x10)
	struct FTimerHandle _timerHandle; // 0xf8(0x08)
	struct TWeakObjectPtr<struct UNavigationScreen> _navigationScreen; // 0x100(0x08)
	char pad_108[0x20]; // 0x108(0x20)

	void OnEntryTimedOut(); // Function DBDUIPresenters.SubtitlesPresenter.OnEntryTimedOut // (Final|Native|Private) // @ game+0x46a2700
	bool IsSubtitlesEnabled(); // Function DBDUIPresenters.SubtitlesPresenter.IsSubtitlesEnabled // (Final|Native|Private|Const) // @ game+0x46a26a0
};

// Class DBDUIPresenters.TemplatePresenter
// Size: 0x128 (Inherited: 0x108)
struct UTemplatePresenter : UHudPresenter {
	struct UUserWidget* TemplateWidgetClass; // 0x108(0x08)
	char pad_110[0x18]; // 0x110(0x18)
};

// Class DBDUIPresenters.TestBuildFlagPresenter
// Size: 0xf0 (Inherited: 0xd0)
struct UTestBuildFlagPresenter : UPresenter {
	struct UUserWidget* TestBuildFlagWidgetClass; // 0xd0(0x08)
	enum class ETestBuildFlagPosition testBuildFlagPosition; // 0xd8(0x01)
	char pad_D9[0x17]; // 0xd9(0x17)
};

// Class DBDUIPresenters.TestPresenter
// Size: 0xe0 (Inherited: 0xd0)
struct UTestPresenter : UPresenter {
	struct UUserWidget* TestWidgetClass; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class DBDUIPresenters.HudTutorialBlockingNotificationsPresenter
// Size: 0x1f0 (Inherited: 0x108)
struct UHudTutorialBlockingNotificationsPresenter : UHudPresenter {
	struct UUserWidget* CoreTutorialBlockingNotificationsWidget; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)
	struct ATutorialsUtilities* _tutorialsUtilities; // 0x118(0x08)
	char pad_120[0xd0]; // 0x120(0xd0)

	void OnTutorialNotificationClosedByUserInput(); // Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialNotificationClosedByUserInput // (Final|Native|Private) // @ game+0x46a2820
	void OnTutorialHudFadeOutTriggered(); // Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeOutTriggered // (Final|Native|Private) // @ game+0x46a2800
	void OnTutorialHudFadeInTriggered(); // Function DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeInTriggered // (Final|Native|Private) // @ game+0x46a27e0
};

// Class DBDUIPresenters.HudTutorialMysteryNotesPresenter
// Size: 0x120 (Inherited: 0x108)
struct UHudTutorialMysteryNotesPresenter : UHudPresenter {
	struct UUserWidget* CoreTutorialMysteryNoteWidget; // 0x108(0x08)
	char pad_110[0x10]; // 0x110(0x10)
};

// Class DBDUIPresenters.UIConsoleCommands
// Size: 0x50 (Inherited: 0x30)
struct UUIConsoleCommands : UObject {
	char pad_30[0x20]; // 0x30(0x20)

	void DBD_ToggleTestWidget(); // Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void DBD_ToggleDPICurve(); // Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve // (Final|Exec|Native|Public) // @ game+0x4032ad0
	void DBD_ShowPresenterDebugInfo(int32_t presenterDebugMode); // Function DBDUIPresenters.UIConsoleCommands.DBD_ShowPresenterDebugInfo // (Final|Exec|Native|Public) // @ game+0x46a25e0
	void DBD_ShowHUDWidgetsInfo(bool Show); // Function DBDUIPresenters.UIConsoleCommands.DBD_ShowHUDWidgetsInfo // (Final|Exec|Native|Public) // @ game+0x46a2400
	void DBD_SetUMGVisible(bool IsVisible); // Function DBDUIPresenters.UIConsoleCommands.DBD_SetUMGVisible // (Final|Exec|Native|Public) // @ game+0x46a2400
	void DBD_SetMenuScaleFactor(float ScaleFactor); // Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor // (Final|Exec|Native|Public) // @ game+0x46a2490
	void DBD_SetHUDWidgetVisible(int32_t index, bool IsVisible); // Function DBDUIPresenters.UIConsoleCommands.DBD_SetHUDWidgetVisible // (Final|Exec|Native|Public) // @ game+0x46a2510
	void DBD_SetHudVisible(bool IsVisible); // Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible // (Final|Exec|Native|Public) // @ game+0x46a2400
	void DBD_SetHudScaleFactor(float ScaleFactor); // Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor // (Final|Exec|Native|Public) // @ game+0x46a2490
	void DBD_SetApplicationScale(float ApplicationScale); // Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale // (Final|Exec|Native|Public) // @ game+0x46a2490
	void DBD_SetAllHUDWidgetsVisible(bool IsVisible); // Function DBDUIPresenters.UIConsoleCommands.DBD_SetAllHUDWidgetsVisible // (Final|Exec|Native|Public) // @ game+0x46a2400
	void DBD_ResetPresenters(); // Function DBDUIPresenters.UIConsoleCommands.DBD_ResetPresenters // (Final|Exec|Native|Public) // @ game+0x4032ad0
};

// Class DBDUIPresenters.UnlockPersonalPerksPopupPresenter
// Size: 0x170 (Inherited: 0x160)
struct UUnlockPersonalPerksPopupPresenter : UGenericPopupPresenter {
	struct TArray<struct UMenuPerkViewData*> _perksData; // 0x160(0x10)
};

// Class DBDUIPresenters.WatermarkPresenter
// Size: 0xe8 (Inherited: 0xd0)
struct UWatermarkPresenter : UPresenter {
	struct UUserWidget* WatermarkWidgetClass; // 0xd0(0x08)
	char pad_D8[0x10]; // 0xd8(0x10)

	bool IsUsingCommandLineArgument(); // Function DBDUIPresenters.WatermarkPresenter.IsUsingCommandLineArgument // (Final|Native|Protected) // @ game+0x46a26d0
	bool IsSteamBuild(); // Function DBDUIPresenters.WatermarkPresenter.IsSteamBuild // (Final|Native|Protected) // @ game+0x46a2670
	bool IsNonShippingBuild(); // Function DBDUIPresenters.WatermarkPresenter.IsNonShippingBuild // (Final|Native|Protected) // @ game+0x3eb2f20
};

