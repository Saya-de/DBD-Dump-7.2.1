// Class DBDUIViewInterfaces.AddonViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UAddonViewInterface : UInterface {

	void SetData(struct FAddonViewData& BaseLoadoutPartViewData); // Function DBDUIViewInterfaces.AddonViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46aaac0
	void ClearData(); // Function DBDUIViewInterfaces.AddonViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.ArchiveCompendiumViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchiveCompendiumViewInterface : UInterface {

	void SetPastTomesViewData(struct TArray<struct FCompendiumButtonData>& pastStoryButtonData); // Function DBDUIViewInterfaces.ArchiveCompendiumViewInterface.SetPastTomesViewData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ab000
};

// Class DBDUIViewInterfaces.ArchiveEditorViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchiveEditorViewInterface : UInterface {

	void InitEditor(); // Function DBDUIViewInterfaces.ArchiveEditorViewInterface.InitEditor // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
	void DisplayEditorSaving(struct FString Path); // Function DBDUIViewInterfaces.ArchiveEditorViewInterface.DisplayEditorSaving // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa300
};

// Class DBDUIViewInterfaces.ArchiveImageViewerViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchiveImageViewerViewInterface : UInterface {

	void UpdateContent(struct FArchivesVignetteEntryViewData& Data); // Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.UpdateContent // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ac4a0
	void SetVoiceOverPlaying(bool voiceOverPlaying); // Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetVoiceOverPlaying // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46abf20
	void SetVoiceOverAutoplay(bool voiceOverAutoplay); // Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetVoiceOverAutoplay // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void SetTextVisibility(bool visible); // Function DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetTextVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa530
};

// Class DBDUIViewInterfaces.ArchiveJournalViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchiveJournalViewInterface : UInterface {

	void SetVoiceOverPlaying(bool voiceOverPlaying); // Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVoiceOverPlaying // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46abfb0
	void SetVoiceOverAutoplay(bool voiceOverAutoplay); // Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVoiceOverAutoplay // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ab3c0
	void SetVignetteList(struct TArray<struct FArchivesVignetteViewData>& vignetteDataList); // Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteList // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46abdc0
	void SetVignetteInputsEnabled(bool Enabled); // Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteInputsEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aaa30
	void SetVignetteData(struct FArchivesVignetteViewData& vignetteViewData); // Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46abbc0
	void SetEntryData(struct FArchivesVignetteEntryViewData& entryViewData); // Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetEntryData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46aab80
	void SetCinematicButtonsEnabled(bool Enabled); // Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetCinematicButtonsEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa9a0
	void SetArrowButtonEnabled(bool IsEnabled); // Function DBDUIViewInterfaces.ArchiveJournalViewInterface.SetArrowButtonEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void OnImageViewerVoiceOverPlayed(); // Function DBDUIViewInterfaces.ArchiveJournalViewInterface.OnImageViewerVoiceOverPlayed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
	void OnImageViewerVoiceOverAutoplay(bool autoplay); // Function DBDUIViewInterfaces.ArchiveJournalViewInterface.OnImageViewerVoiceOverAutoplay // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa530
};

// Class DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchiveLevelProgressionViewInterface : UInterface {

	void UpdateLevelStatus(int32_t Level, enum class EArchivesStoryLevelStatus Status); // Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.UpdateLevelStatus // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ac5c0
	void SetTomeRewardsData(struct TArray<struct FRewardWrapperViewData>& RewardsData, bool areLocked); // Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetTomeRewardsData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46aba50
	void SetTomeLevelsData(struct TArray<struct UArchiveStoryLevelViewData*>& levelsData, int32_t selectedLevel); // Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetTomeLevelsData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ab950
	void SetRewardsContainerVisibility(bool IsVisible); // Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetRewardsContainerVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa9a0
	void SetLevelSelectorVisibility(bool IsVisible); // Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetLevelSelectorVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aaef0
	void SetLevelSelectorEnabled(bool Enabled); // Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetLevelSelectorEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aae60
	void SetActiveLevel(int32_t levelIndex, bool performAction); // Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetActiveLevel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa5c0
	void PlayRewardsAnimation(); // Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.PlayRewardsAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	void GoToNextLevel(int32_t levelIndex); // Function DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.GoToNextLevel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa460
};

// Class DBDUIViewInterfaces.ArchiveStoryLevelViewData
// Size: 0x40 (Inherited: 0x30)
struct UArchiveStoryLevelViewData : UObject {
	int32_t Level; // 0x30(0x04)
	enum class EArchivesStoryLevelStatus Status; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FDateTime StartDate; // 0x38(0x08)
};

// Class DBDUIViewInterfaces.ArchiveMenuViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchiveMenuViewInterface : UInterface {

	void UpdateBackgroundSkin(int32_t Key, struct FArchiveTomeSkinData& Data); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.UpdateBackgroundSkin // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ac3a0
	void ShowUI(); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ShowUI // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
	void ShowSlotSelector(struct FArchiveNodeViewData& Data); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ShowSlotSelector // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ac040
	void SetTitle(struct FText& Title); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTitle // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ab880
	void SetTabsInputsEnabled(bool Enabled); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabsInputsEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa530
	void SetTabSelected(int32_t Key); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabSelected // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ab680
	void SetTabsData(struct TArray<struct FTabWidgetData>& tabsData, int32_t SelectedKey); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabsData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ab710
	void SetTabEnabled(int32_t Key, bool Enabled); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ab5b0
	void SetSubtitleVisible(bool IsVisible); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetSubtitleVisible // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ab520
	void SetSubtitle(struct FText& Subtitle); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetSubtitle // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ab450
	void SetReminderSlotsEnabled(bool Enabled); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetReminderSlotsEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ab3c0
	void SetRemainingTimeVisible(bool IsVisible); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetRemainingTimeVisible // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ab330
	void SetRemainingTime(struct FString RemainingTime, bool isMoreThanWarningThreshold, enum class EArchiveMenuState menuState); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetRemainingTime // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ab200
	void SetQuestNodeHoverEffect(enum class EPlayerRole Role, bool IsHovered); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetQuestNodeHoverEffect // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ab130
	void SetMenuState(enum class EArchiveMenuState menuState); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetMenuState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aaf80
	void SetInfoButtonVisible(bool IsVisible); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetInfoButtonVisible // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aadd0
	void SetInfoButtonEnabled(bool IsEnabled); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetInfoButtonEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aad40
	void SetEventLabel(struct FString eventLabel); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetEventLabel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aaca0
	void SetControllerElementsEnabled(bool Enabled); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetControllerElementsEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aaa30
	void SetChallengeReminderVisibility(bool IsVisible); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetChallengeReminderVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa910
	void SetChallengeReminderData(struct FArchiveChallengeReminderViewData& Data, enum class EPlayerRole Role, bool needsAnimation, struct FVector2D& animationOriginalPosition); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.SetChallengeReminderData // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x46aa720
	void Init(); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.Init // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa4f0
	void HideUI(); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.HideUI // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	struct TScriptInterface<IArchiveTomeViewInterface> GetArchiveTomeInterface(); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveTomeInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46aa420
	struct TScriptInterface<IArchiveRiftViewInterface> GetArchiveRiftInterface(); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveRiftInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46aa3e0
	struct TScriptInterface<IArchiveCompendiumViewInterface> GetArchiveCompendiumInterface(); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveCompendiumInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46aa3a0
	void CloseSlotSelector(); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.CloseSlotSelector // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2e0
	void ClearChallengeReminderData(enum class EPlayerRole Role); // Function DBDUIViewInterfaces.ArchiveMenuViewInterface.ClearChallengeReminderData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa240
};

// Class DBDUIViewInterfaces.BasePopupViewData
// Size: 0x68 (Inherited: 0x30)
struct UBasePopupViewData : UObject {
	enum class EPopupPriority Priority; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FText Title; // 0x38(0x18)
	struct FText Message; // 0x50(0x18)
};

// Class DBDUIViewInterfaces.GenericPopupViewData
// Size: 0x1f0 (Inherited: 0x68)
struct UGenericPopupViewData : UBasePopupViewData {
	char pad_68[0x8]; // 0x68(0x08)
	struct FPopupButtonViewData ProgressionData; // 0x70(0x80)
	struct FPopupButtonViewData RegressionData; // 0xf0(0x80)
	struct FPopupButtonViewData AlternativeData; // 0x170(0x80)
};

// Class DBDUIViewInterfaces.ArchivePassPurchasePopupViewData
// Size: 0x250 (Inherited: 0x1f0)
struct UArchivePassPurchasePopupViewData : UGenericPopupViewData {
	struct FText AvailabilityDates; // 0x1f0(0x18)
	struct TSoftObjectPtr<UTexture2D> ImageTexture; // 0x208(0x30)
	enum class ECurrencyType CurrencyType; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	int32_t Price; // 0x23c(0x04)
	float DiscountPercentage; // 0x240(0x04)
	bool IsAffordable; // 0x244(0x01)
	char pad_245[0xb]; // 0x245(0x0b)
};

// Class DBDUIViewInterfaces.ArchivePassPurchasePopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchivePassPurchasePopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.ArchiveQuestMapViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchiveQuestMapViewInterface : UInterface {

	void UpdateQuestMapData(struct TArray<struct FArchiveNodeGraphViewData>& nodeDataList, struct TArray<struct FArchiveMapPathViewData>& pathDataList); // Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.UpdateQuestMapData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b2200
	void SetQuestMapData(struct TArray<struct FArchiveNodeGraphViewData>& nodeDataList, struct TArray<struct FArchiveMapPathViewData>& pathDataList, bool needsCascadeAppear); // Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.SetQuestMapData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b1bc0
	void SetLoadingSpinner(bool isLoading); // Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.SetLoadingSpinner // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void Reset(); // Function DBDUIViewInterfaces.ArchiveQuestMapViewInterface.Reset // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
};

// Class DBDUIViewInterfaces.ArchiveRiftViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchiveRiftViewInterface : UInterface {

	void SetRiftFragmentTooltipViewData(struct FCurrencyProgressionTooltipViewData& RiftFragmentTooltipViewData); // Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetRiftFragmentTooltipViewData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b1e40
	void SetRewardTiersData(struct TArray<struct FArchiveRiftTierRewardsViewData>& riftTiersData); // Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetRewardTiersData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b1d70
	void SetMatchmakingSoftlockState(bool isInMatchmakingSoftlock); // Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetMatchmakingSoftlockState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aaa30
	void SetData(struct FArchivesRiftGenericViewData& Data); // Function DBDUIViewInterfaces.ArchiveRiftViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b19c0
	void PlayUnlockingAnimation(struct FArchivesRiftUnlockSequenceData& Data); // Function DBDUIViewInterfaces.ArchiveRiftViewInterface.PlayUnlockingAnimation // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b1920
};

// Class DBDUIViewInterfaces.ArchiveTierPurchasePopupViewData
// Size: 0x250 (Inherited: 0x1f0)
struct UArchiveTierPurchasePopupViewData : UGenericPopupViewData {
	struct TSoftObjectPtr<UTexture2D> ImageTexture; // 0x1f0(0x30)
	int32_t MaxTiers; // 0x220(0x04)
	int32_t currentTier; // 0x224(0x04)
	enum class ECurrencyType CurrencyType; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	int32_t UnitPrice; // 0x22c(0x04)
	float DiscountPercentage; // 0x230(0x04)
	bool IsAffordable; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	int32_t CurrentWalletAmount; // 0x238(0x04)
	int32_t InitialQuantity; // 0x23c(0x04)
	int32_t FirstBonusTier; // 0x240(0x04)
	int32_t LastBonusTier; // 0x244(0x04)
	bool IsBonusTier; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
};

// Class DBDUIViewInterfaces.ArchiveTierPurchasePopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchiveTierPurchasePopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.ArchiveTomeViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UArchiveTomeViewInterface : UInterface {

	void UpdateBackgroundSkin(int32_t Key, struct UMaterialInterface* skinMaterail); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.UpdateBackgroundSkin // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b2130
	void ToggleEditor(bool IsEnabled); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.ToggleEditor // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa9a0
	void SetUiTakeoverActive(bool IsActive); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetUiTakeoverActive // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void SetSideNavTabsVisibility(int32_t Key, bool IsVisible); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b2060
	void SetSideNavTabsEnabled(int32_t Key, bool IsEnabled); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa5c0
	void SetSideNavTabsData(struct TArray<struct FTabWidgetData>& tabsData, int32_t SelectedKey); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b1ef0
	void SetNotificationVisibility(int32_t Key, bool HasNotification); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetNotificationVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b1af0
	void SetMenuState(enum class EArchiveTomeMenuState menuState); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.SetMenuState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b1a70
	enum class EArchiveTomeMenuState GetMenuState(); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetMenuState // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46b17b0
	struct TScriptInterface<IArchiveQuestMapViewInterface> GetArchiveQuestMapInterface(); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveQuestMapInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46b1770
	struct TScriptInterface<IArchiveLevelProgressionViewInterface> GetArchiveLevelProgressionInterface(); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveLevelProgressionInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46b1730
	struct TScriptInterface<IArchiveJournalViewInterface> GetArchiveJournalInterface(); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveJournalInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46b16f0
	struct FEditorInterfaces GetArchiveEditorInterface(); // Function DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveEditorInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46b1690
};

// Class DBDUIViewInterfaces.BasePopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UBasePopupViewInterface : UInterface {

	void Leave(); // Function DBDUIViewInterfaces.BasePopupViewInterface.Leave // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	void Enter(struct UBasePopupViewData* Data); // Function DBDUIViewInterfaces.BasePopupViewInterface.Enter // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b1600
};

// Class DBDUIViewInterfaces.ChallengeTrackerViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UChallengeTrackerViewInterface : UInterface {

	void UpdateWidgetProgression(struct FArchiveNodeObjectiveViewData& ProgressionData); // Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.UpdateWidgetProgression // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b2360
	void OpenWidget(); // Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.OpenWidget // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b1900
	void InitWidgetData(struct FChallengeTrackerViewData& ViewData); // Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.InitWidgetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b17e0
	void CloseWidget(); // Function DBDUIViewInterfaces.ChallengeTrackerViewInterface.CloseWidget // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
};

// Class DBDUIViewInterfaces.CoreBaseViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UCoreBaseViewInterface : UInterface {

	void OnStopAsyncOperation(); // Function DBDUIViewInterfaces.CoreBaseViewInterface.OnStopAsyncOperation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	void OnStartAsyncOperation(); // Function DBDUIViewInterfaces.CoreBaseViewInterface.OnStartAsyncOperation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
};

// Class DBDUIViewInterfaces.CreditsViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UCreditsViewInterface : UInterface {

	void SetText(struct FText& Text); // Function DBDUIViewInterfaces.CreditsViewInterface.SetText // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b8370
	void ScrollToName(struct FString Name, float Delay); // Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToName // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b76b0
	void ScrollToEnd(); // Function DBDUIViewInterfaces.CreditsViewInterface.ScrollToEnd // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
};

// Class DBDUIViewInterfaces.DailyRitualsPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UDailyRitualsPopupViewInterface : UInterface {

	void StartAnim(); // Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.StartAnim // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
	void SetDailyRitualsData(struct TArray<struct FDailyRitualViewData>& dailyRitualsData, bool isAfterTrial); // Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetDailyRitualsData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b77a0
	void SetCanRemoveDailyRitual(bool canRemoveDailyRitual); // Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetCanRemoveDailyRitual // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa530
	void SetAllDailyRitualTilesVisible(); // Function DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetAllDailyRitualTilesVisible // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.DisplayStandViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UDisplayStandViewInterface : UInterface {

	void SetDragZone(struct FDisplayStandViewData& layoutData); // Function DBDUIViewInterfaces.DisplayStandViewInterface.SetDragZone // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b7b60
};

// Class DBDUIViewInterfaces.EndGameCollapseBarViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UEndGameCollapseBarViewInterface : UInterface {

	void StartEndGameScenario(); // Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	void SetEndGameScenarioProgressionValue(float Amount); // Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7c20
	void SetEndGameScenarioProgressionMode(bool isSlowMode); // Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa530
	void InitEndGameScenario(); // Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7690
};

// Class DBDUIViewInterfaces.EquippedItemViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UEquippedItemViewInterface : UInterface {

	void SetFakeItem(bool isHoldingFakeItem, struct TSoftObjectPtr<UTexture2D>& fakeItemIcon, struct FKey InputKey); // Function DBDUIViewInterfaces.EquippedItemViewInterface.SetFakeItem // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b7cb0
	void SetData(struct FItemBundleViewData& itemBundleData); // Function DBDUIViewInterfaces.EquippedItemViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b78f0
	void SetActiveState(bool IsActive); // Function DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void ClearData(bool fullClear); // Function DBDUIViewInterfaces.EquippedItemViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa530
};

// Class DBDUIViewInterfaces.EquippedPowerViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UEquippedPowerViewInterface : UInterface {

	void SetData(struct FPowerBundleViewData& powerBundleData); // Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b79e0
	void SetCarryingMode(bool IsCarrying); // Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46abf20
	void SetActiveState(bool IsActive); // Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void ClearData(); // Function DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b1900
};

// Class DBDUIViewInterfaces.EventCollectionViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UEventCollectionViewInterface : UInterface {

	void SetSelectedReward(int32_t selectedIndex); // Function DBDUIViewInterfaces.EventCollectionViewInterface.SetSelectedReward // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b82e0
	void SetPreviewAreaData(struct FCustomizationItemPreviewAreaViewData& ViewData); // Function DBDUIViewInterfaces.EventCollectionViewInterface.SetPreviewAreaData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b8110
	void SetItemsData(struct TArray<struct FCustomizationRewardViewData>& customizationRewardsData, int32_t selectedIndex); // Function DBDUIViewInterfaces.EventCollectionViewInterface.SetItemsData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b7fa0
	void SetInstructionWidgetData(struct FCustomizationItemOriginViewData& ViewData); // Function DBDUIViewInterfaces.EventCollectionViewInterface.SetInstructionWidgetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b7e70
	void Init(struct UDataTable* eventSkinDataTable, struct FText& eventFrameLabel); // Function DBDUIViewInterfaces.EventCollectionViewInterface.Init // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b7570
	void DisableInstructionStoreButton(); // Function DBDUIViewInterfaces.EventCollectionViewInterface.DisableInstructionStoreButton // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
	void DisableInstructionInputs(); // Function DBDUIViewInterfaces.EventCollectionViewInterface.DisableInstructionInputs // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	void DisableInstructionArchivesButton(); // Function DBDUIViewInterfaces.EventCollectionViewInterface.DisableInstructionArchivesButton // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b1900
	void DeselectReward(); // Function DBDUIViewInterfaces.EventCollectionViewInterface.DeselectReward // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7550
	void Deinit(); // Function DBDUIViewInterfaces.EventCollectionViewInterface.Deinit // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7530
};

// Class DBDUIViewInterfaces.EventEntryPopupViewData
// Size: 0x290 (Inherited: 0x1f0)
struct UEventEntryPopupViewData : UGenericPopupViewData {
	struct FText AvailabilityDates; // 0x1f0(0x18)
	struct FText eventFrameLabel; // 0x208(0x18)
	struct FText ImageBannerText; // 0x220(0x18)
	struct FText EventTabMessage; // 0x238(0x18)
	struct TSoftObjectPtr<UTexture2D> ImageTexture; // 0x250(0x30)
	bool ShouldShowEventTomeButton; // 0x280(0x01)
	bool ShouldActivateUiTakeover; // 0x281(0x01)
	char pad_282[0xe]; // 0x282(0x0e)
};

// Class DBDUIViewInterfaces.EventEntryPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UEventEntryPopupViewInterface : UInterface {

	void UpdateMilestoneTrackerUserEventPoints(int32_t userPoints); // Function DBDUIViewInterfaces.EventEntryPopupViewInterface.UpdateMilestoneTrackerUserEventPoints // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa460
	void UpdateMilestoneTrackerRewardsData(struct TArray<struct FMilestoneTrackerUpdateItemViewData>& newData); // Function DBDUIViewInterfaces.EventEntryPopupViewInterface.UpdateMilestoneTrackerRewardsData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c0340
	void SetTabsData(struct TArray<struct FTabWidgetData>& tabsData, int32_t SelectedKey); // Function DBDUIViewInterfaces.EventEntryPopupViewInterface.SetTabsData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46b1ef0
	void SetPopupState(enum class EEventEntryPopupTabState& tabState); // Function DBDUIViewInterfaces.EventEntryPopupViewInterface.SetPopupState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46bfc10
	void SetMilestoneTrackerData(struct FMilestoneTrackerViewData& ViewData); // Function DBDUIViewInterfaces.EventEntryPopupViewInterface.SetMilestoneTrackerData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46bfaf0
	void RequestPopupClosure(); // Function DBDUIViewInterfaces.EventEntryPopupViewInterface.RequestPopupClosure // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	struct TScriptInterface<IEventCollectionViewInterface> GetStoreSubPresenterInterface(); // Function DBDUIViewInterfaces.EventEntryPopupViewInterface.GetStoreSubPresenterInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46bf050
	struct TScriptInterface<IEventInfoViewInterface> GetEventSubPresenterInterface(); // Function DBDUIViewInterfaces.EventEntryPopupViewInterface.GetEventSubPresenterInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46b16f0
	struct UDataTable* GetEventSkinDataTable(); // Function DBDUIViewInterfaces.EventEntryPopupViewInterface.GetEventSkinDataTable // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46bf020
	struct TScriptInterface<IEventCollectionViewInterface> GetCollectionSubPresenterInterface(); // Function DBDUIViewInterfaces.EventEntryPopupViewInterface.GetCollectionSubPresenterInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46befb0
};

// Class DBDUIViewInterfaces.EventTabViewData
// Size: 0x98 (Inherited: 0x30)
struct UEventTabViewData : UObject {
	struct FText eventFrameLabel; // 0x30(0x18)
	struct TSoftObjectPtr<UTexture2D> ImageTexture; // 0x48(0x30)
	bool ShouldShowEventTomeButton; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FText Message; // 0x80(0x18)
};

// Class DBDUIViewInterfaces.EventInfoViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UEventInfoViewInterface : UInterface {

	void Init(struct UDataTable* eventSkinDataTable, struct UEventTabViewData* ViewData); // Function DBDUIViewInterfaces.EventInfoViewInterface.Init // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf1d0
	void DisableArchivesButton(); // Function DBDUIViewInterfaces.EventInfoViewInterface.DisableArchivesButton // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	void Deinit(); // Function DBDUIViewInterfaces.EventInfoViewInterface.Deinit // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
};

// Class DBDUIViewInterfaces.ExampleViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UExampleViewInterface : UInterface {

	void SetExampleText(struct FString Text); // Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleText // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf960
	void SetExampleProgressRatio(float Ratio); // Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf390
};

// Class DBDUIViewInterfaces.ExternalEffectsViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UExternalEffectsViewInterface : UInterface {

	void ShowExternalPerk(struct FPerkViewData& PerkViewData); // Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c0080
	void ShowExternalAddon(struct FAddonViewData& AddonViewData); // Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46bffa0
	void HideExternalPerk(struct FName ItemId); // Function DBDUIViewInterfaces.ExternalEffectsViewInterface.HideExternalPerk // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf130
	void HideExternalAddon(struct FName ItemId); // Function DBDUIViewInterfaces.ExternalEffectsViewInterface.HideExternalAddon // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf090
	void HideAllExternalPerks(); // Function DBDUIViewInterfaces.ExternalEffectsViewInterface.HideAllExternalPerks // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
	void HideAllExternalAddons(); // Function DBDUIViewInterfaces.ExternalEffectsViewInterface.HideAllExternalAddons // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.FearMarketPopupViewData
// Size: 0x210 (Inherited: 0x1f0)
struct UFearMarketPopupViewData : UGenericPopupViewData {
	struct UMenuPerkViewData* ItemData; // 0x1f0(0x08)
	int32_t Cost; // 0x1f8(0x04)
	int32_t BloodpointConversion; // 0x1fc(0x04)
	bool IsPurchased; // 0x200(0x01)
	bool AlreadyOwned; // 0x201(0x01)
	char pad_202[0x2]; // 0x202(0x02)
	int32_t AvailableTokens; // 0x204(0x04)
	char pad_208[0x8]; // 0x208(0x08)
};

// Class DBDUIViewInterfaces.FearMarketPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UFearMarketPopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.FriendSearchPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UFriendSearchPopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.GameManualViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UGameManualViewInterface : UInterface {

	void SetCurrentManualMenuState(enum class EGameManualMenuState menuState); // Function DBDUIViewInterfaces.GameManualViewInterface.SetCurrentManualMenuState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf7e0
	void SetCategoryData(struct FHelpCategoryData categoryData, struct TArray<struct FHelpTopicData>& topicsData); // Function DBDUIViewInterfaces.GameManualViewInterface.SetCategoryData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46bf4e0
	enum class EGameManualMenuState GetCurrentManualMenuState(); // Function DBDUIViewInterfaces.GameManualViewInterface.GetCurrentManualMenuState // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46beff0
};

// Class DBDUIViewInterfaces.GenericPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UGenericPopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.GenericRefreshingPopupViewData
// Size: 0x240 (Inherited: 0x1f0)
struct UGenericRefreshingPopupViewData : UGenericPopupViewData {
	float RefreshingIntervalsTime; // 0x1f0(0x04)
	float TimeoutTime; // 0x1f4(0x04)
	char pad_1F8[0x48]; // 0x1f8(0x48)
};

// Class DBDUIViewInterfaces.GenericRefreshingPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UGenericRefreshingPopupViewInterface : UInterface {

	void Refresh(float RemainingTime); // Function DBDUIViewInterfaces.GenericRefreshingPopupViewInterface.Refresh // (Native|Event|Public|BlueprintEvent) // @ game+0x46bf390
};

// Class DBDUIViewInterfaces.GenericTextInputPopupViewData
// Size: 0x2d0 (Inherited: 0x1f0)
struct UGenericTextInputPopupViewData : UGenericPopupViewData {
	char pad_1F0[0xe0]; // 0x1f0(0xe0)
};

// Class DBDUIViewInterfaces.GenericTextInputPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UGenericTextInputPopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.GlobalLoadSpinnerViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UGlobalLoadSpinnerViewInterface : UInterface {

	void SetGlobalSpinnerVisibility(bool IsVisible); // Function DBDUIViewInterfaces.GlobalLoadSpinnerViewInterface.SetGlobalSpinnerVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
};

// Class DBDUIViewInterfaces.HookCountViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UHookCountViewInterface : UInterface {

	void SetHookCountVisibility(bool visible); // Function DBDUIViewInterfaces.HookCountViewInterface.SetHookCountVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void SetData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount); // Function DBDUIViewInterfaces.HookCountViewInterface.SetData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf860
	void InitWidget(); // Function DBDUIViewInterfaces.HookCountViewInterface.InitWidget // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7690
	void ClearData(); // Function DBDUIViewInterfaces.HookCountViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
};

// Class DBDUIViewInterfaces.HudAimingCrosshairViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UHudAimingCrosshairViewInterface : UInterface {

	void SetState(enum class EAimingCrosshairState NewState); // Function DBDUIViewInterfaces.HudAimingCrosshairViewInterface.SetState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bfca0
	void SetProgress(float Progress); // Function DBDUIViewInterfaces.HudAimingCrosshairViewInterface.SetProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf390
};

// Class DBDUIViewInterfaces.HudAlertViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UHudAlertViewInterface : UInterface {

	void ShowStatusEffectAlert(struct FStatusEffectAlertViewData& Data); // Function DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c0230
	void ShowScoreAlert(struct FScoreAlertViewData& Data); // Function DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c0170
	void SetScoreEventsVisibility(bool visible); // Function DBDUIViewInterfaces.HudAlertViewInterface.SetScoreEventsVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void FadeOut(float Delay); // Function DBDUIViewInterfaces.HudAlertViewInterface.FadeOut // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7c20
	void FadeIn(); // Function DBDUIViewInterfaces.HudAlertViewInterface.FadeIn // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b1900
};

// Class DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UHudDirectionalMiniGameViewInterface : UInterface {

	void UpdateResult(int32_t index, bool IsSuccessful); // Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.UpdateResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46c0410
	void UpdateFinalResult(enum class EDirectionalMinigameResult finalResult); // Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.UpdateFinalResult // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Show(struct TArray<enum class EDirectionalInputKey>& directions); // Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Show // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46bfef0
	void Init(int32_t maxItems, enum class EDirectionalMiniGameType Type); // Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Init // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf2a0
	void Hide(); // Function DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewInterfaces.HudEventObjectiveItemViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UHudEventObjectiveItemViewInterface : UInterface {

	void SetWidgetState(enum class EEventObjectiveItemState eventItemState); // Function DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetWidgetState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bfe70
	void SetWidgetData(enum class EEventObjectiveItemState eventItemState, int32_t charges, int32_t maxCharges, float ChargePercent); // Function DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetWidgetData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bfd20
	void SetInputKey(struct FKey InputKey); // Function DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetInputKey // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bfa00
	void SetCooldownPercentage(float cooldownPercent); // Function DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetCooldownPercentage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf390
	void SetChargePercentage(float ChargePercent); // Function DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetChargePercentage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7c20
	void SetAvailableCharges(int32_t charges, int32_t maxCharges); // Function DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetAvailableCharges // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf410
	void InitWidget(); // Function DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.InitWidget // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf370
	void ClearData(); // Function DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7550
};

// Class DBDUIViewInterfaces.HudEventProgressionViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UHudEventProgressionViewInterface : UInterface {

	void UpdateEventPendingProgress(struct FHudEventProgressionViewData& HudEventProgressionViewData); // Function DBDUIViewInterfaces.HudEventProgressionViewInterface.UpdateEventPendingProgress // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5ec0
	void UpdateEventBankedProgress(struct FHudEventProgressionViewData& HudEventProgressionViewData); // Function DBDUIViewInterfaces.HudEventProgressionViewInterface.UpdateEventBankedProgress // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5e20
	void InitEventProgression(struct FHudEventProgressionViewData& HudEventProgressionViewData); // Function DBDUIViewInterfaces.HudEventProgressionViewInterface.InitEventProgression // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5320
	void EnableEventProgression(bool IsEnabled); // Function DBDUIViewInterfaces.HudEventProgressionViewInterface.EnableEventProgression // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aaa30
};

// Class DBDUIViewInterfaces.HudObjectivesViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UHudObjectivesViewInterface : UInterface {

	void SetHudObjectiveData(struct FHudObjectivesViewData& hudObjectiveViewData); // Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHudObjectiveData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5710
	void SetHookCountVisibility(bool visible); // Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void SetHookCountData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount); // Function DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf860
	void InitWidget(); // Function DBDUIViewInterfaces.HudObjectivesViewInterface.InitWidget // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7550
	void ClearHookCountData(); // Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearHookCountData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
	void ClearData(); // Function DBDUIViewInterfaces.HudObjectivesViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7690
};

// Class DBDUIViewInterfaces.InteractionProgressViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UInteractionProgressViewInterface : UInterface {

	void UpdateInputProgress(float Progress, float itemCharge); // Function DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46c5f60
	void SetInputProgressPrompt(struct FInteractionProgressViewData& Data); // Function DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c57c0
	void PlayHemorrhageAnimation(); // Function DBDUIViewInterfaces.InteractionProgressViewInterface.PlayHemorrhageAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	void HideInputProgressPrompt(); // Function DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
};

// Class DBDUIViewInterfaces.InteractionPromptsContainerViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UInteractionPromptsContainerViewInterface : UInterface {

	void RemovePrompt(struct FName ID); // Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46c53c0
	void RemoveAllPrompts(); // Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	void AddPrompt(struct FInteractionPromptViewData& Data); // Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5170
};

// Class DBDUIViewInterfaces.ItemBundleViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UItemBundleViewInterface : UInterface {

	void SetData(struct FItemBundleViewData& ItemBundleViewData); // Function DBDUIViewInterfaces.ItemBundleViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5460
	void ClearData(); // Function DBDUIViewInterfaces.ItemBundleViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.ItemInteractionViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UItemInteractionViewInterface : UInterface {

	void SetData(struct FItemBundleViewData& itemBundleData); // Function DBDUIViewInterfaces.ItemInteractionViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5460
	void ClearData(); // Function DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.ItemViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UItemViewInterface : UInterface {

	void SetData(struct FItemViewData& ItemViewData); // Function DBDUIViewInterfaces.ItemViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5550
	void ClearData(); // Function DBDUIViewInterfaces.ItemViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.LeaningArrowsViewInterface
// Size: 0x30 (Inherited: 0x30)
struct ULeaningArrowsViewInterface : UInterface {

	void SetData(enum class ELeanState& leanState); // Function DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5680
};

// Class DBDUIViewInterfaces.LightSensitivityViewInterface
// Size: 0x30 (Inherited: 0x30)
struct ULightSensitivityViewInterface : UInterface {

	void StartFadeOut(); // Function DBDUIViewInterfaces.LightSensitivityViewInterface.StartFadeOut // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.LoadoutMenuPopupViewData
// Size: 0x300 (Inherited: 0x1f0)
struct ULoadoutMenuPopupViewData : UGenericPopupViewData {
	struct TSoftObjectPtr<UTexture2D> LoadoutIcon; // 0x1f0(0x30)
	struct FName ItemId; // 0x220(0x0c)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FText DisplayName; // 0x230(0x18)
	struct FText ParentDisplayName; // 0x248(0x18)
	struct FText ParentTypeDisplayName; // 0x260(0x18)
	bool IsParentAvailable; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FText Description; // 0x280(0x18)
	enum class EInventoryItemType ItemType; // 0x298(0x01)
	enum class EItemRarity Rarity; // 0x299(0x01)
	enum class EStatusEffectType StatusEffectType; // 0x29a(0x01)
	char pad_29B[0x1]; // 0x29b(0x01)
	int32_t Level; // 0x29c(0x04)
	struct FText Subtitle; // 0x2a0(0x18)
	int32_t StackCount; // 0x2b8(0x04)
	enum class EItemAvailability Availability; // 0x2bc(0x01)
	bool IsTeachablePerk; // 0x2bd(0x01)
	bool IsSlasherPerk; // 0x2be(0x01)
	bool IsSlasher; // 0x2bf(0x01)
	bool IsLocked; // 0x2c0(0x01)
	bool IsKillSwitch; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct FText EventName; // 0x2c8(0x18)
	struct FString EventId; // 0x2e0(0x10)
	bool IsPastEvent; // 0x2f0(0x01)
	char pad_2F1[0xf]; // 0x2f1(0x0f)
};

// Class DBDUIViewInterfaces.LoadoutMenuPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct ULoadoutMenuPopupViewInterface : UInterface {

	void UpdatePresetData(struct TArray<int32_t>& presetData, int32_t selectedPreset); // Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.UpdatePresetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c6030
	void SetSelectedInventoryItem(struct TArray<int32_t>& selectedIndex, bool isUnequip); // Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetSelectedInventoryItem // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5d20
	void SetSelectableCharacters(struct TArray<struct FTabWidgetData>& selectableCharacters, struct FTabWidgetData selectedCharacterData, int32_t botIndex); // Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetSelectableCharacters // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5a80
	void SetLoadoutMenuSlotData(struct TArray<struct ULoadoutMenuPopupViewData*>& loadoutMenuSlotButtonData); // Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetLoadoutMenuSlotData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c59d0
	void SetLoadoutMenuInventoryData(struct TArray<struct ULoadoutMenuPopupViewData*>& loadoutMenuSlotButtonData, enum class ELoadoutSlot slotSelected, bool isNextSlot); // Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetLoadoutMenuInventoryData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c58a0
	void SetIsPerkSurfacingExperimentActive(bool isPerkSurfacingExperimentActive); // Function DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetIsPerkSurfacingExperimentActive // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
};

// Class DBDUIViewInterfaces.MatchResultViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UMatchResultViewInterface : UInterface {

	void UpdateWidget(struct FMatchResultViewData& Data); // Function DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c6130
	void SetMatchResultVisibility(enum class ESlateVisibility Visibility); // Function DBDUIViewInterfaces.MatchResultViewInterface.SetMatchResultVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf7e0
	void PlayAnimationSequence(); // Function DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
};

// Class DBDUIViewInterfaces.MenuLoadoutPartViewData
// Size: 0x98 (Inherited: 0x30)
struct UMenuLoadoutPartViewData : UObject {
	struct FName ItemId; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftObjectPtr<UTexture2D> iconTexture; // 0x40(0x30)
	enum class EItemRarity Rarity; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t StackCount; // 0x74(0x04)
	struct FText ParentDisplayName; // 0x78(0x18)
	bool IsLocked; // 0x90(0x01)
	enum class EItemAvailability Availability; // 0x91(0x01)
	bool IsKillSwitchEnabled; // 0x92(0x01)
	char pad_93[0x5]; // 0x93(0x05)
};

// Class DBDUIViewInterfaces.MenuAddonViewData
// Size: 0x98 (Inherited: 0x98)
struct UMenuAddonViewData : UMenuLoadoutPartViewData {
};

// Class DBDUIViewInterfaces.MenuItemViewData
// Size: 0x98 (Inherited: 0x98)
struct UMenuItemViewData : UMenuLoadoutPartViewData {
};

// Class DBDUIViewInterfaces.MenuOfferingViewData
// Size: 0x98 (Inherited: 0x98)
struct UMenuOfferingViewData : UMenuLoadoutPartViewData {
};

// Class DBDUIViewInterfaces.MenuPerkViewData
// Size: 0xf8 (Inherited: 0x98)
struct UMenuPerkViewData : UMenuLoadoutPartViewData {
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FText DisplayName; // 0xa0(0x18)
	struct FText Description; // 0xb8(0x18)
	struct FText EventName; // 0xd0(0x18)
	struct FString EventId; // 0xe8(0x10)
};

// Class DBDUIViewInterfaces.MenuPowerViewData
// Size: 0x98 (Inherited: 0x98)
struct UMenuPowerViewData : UMenuLoadoutPartViewData {
};

// Class DBDUIViewInterfaces.NewActiveTomePopupViewData
// Size: 0x1f0 (Inherited: 0x1f0)
struct UNewActiveTomePopupViewData : UGenericPopupViewData {
};

// Class DBDUIViewInterfaces.NewActiveTomePopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UNewActiveTomePopupViewInterface : UInterface {

	void SetRiftEnabled(bool IsEnabled); // Function DBDUIViewInterfaces.NewActiveTomePopupViewInterface.SetRiftEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void SetRemainingTime(struct FString RemainingTime); // Function DBDUIViewInterfaces.NewActiveTomePopupViewInterface.SetRemainingTime // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf960
};

// Class DBDUIViewInterfaces.OfferingInteractionViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UOfferingInteractionViewInterface : UInterface {

	void SetData(struct FOfferingViewData& OfferingData); // Function DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ce230
	void ClearData(); // Function DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.OfferingViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UOfferingViewInterface : UInterface {

	void SetData(struct FOfferingViewData& OfferingViewData); // Function DBDUIViewInterfaces.OfferingViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ce230
	void ClearData(); // Function DBDUIViewInterfaces.OfferingViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.OnboardingMenuViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UOnboardingMenuViewInterface : UInterface {

	void SetUIEnabled(bool Enabled); // Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetUIEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ab3c0
	void SetQuitGameButtonVisible(bool visible); // Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetQuitGameButtonVisible // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa530
	void SetOnboardingMenuState(enum class EOnboardingMenuState menuState); // Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetOnboardingMenuState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ce510
	void SetFirstTimeUserExperience(bool ftue); // Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetFirstTimeUserExperience // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46abfb0
	void SetChangeAccountInputSwitcherVisible(bool visible); // Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetChangeAccountInputSwitcherVisible // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46abf20
	void SetChangeAccountInputSwitcherPlayerNickname(struct FString playerNickname); // Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetChangeAccountInputSwitcherPlayerNickname // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa300
	void SetBackButtonVisible(bool visible); // Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetBackButtonVisible // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aaa30
	struct TScriptInterface<IOnboardingTutorialViewInterface> GetOnboardingTutorialInterface(); // Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetOnboardingTutorialInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46befb0
	struct TScriptInterface<IGameManualViewInterface> GetGameManualInterface(); // Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetGameManualInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46bf050
};

// Class DBDUIViewInterfaces.OnboardingTutorialViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UOnboardingTutorialViewInterface : UInterface {

	void UpdateProgress(struct TArray<struct FOnboardingStepViewData>& before, struct TArray<struct FOnboardingStepViewData>& after, struct TArray<struct FRewardWrapperViewData>& Rewards); // Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.UpdateProgress // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46cea30
	void StopLoadingSpinner(); // Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.StopLoadingSpinner // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7690
	void SetUIEnabled(bool Enabled); // Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetUIEnabled // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa530
	void SetTutorialProgressionFeedbacks(struct FString completedStepId, bool isOnboardingEnabled); // Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetTutorialProgressionFeedbacks // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ce740
	void SetProgress(struct TArray<struct FOnboardingStepViewData>& Progress); // Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetProgress // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ce660
	void SetIsKillSwitch(bool IsKillSwitch); // Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetIsKillSwitch // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46abf20
	void SetCanShowGoToMainMenuTutorialButton(bool canShowGoToMainMenuTutorialButton); // Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetCanShowGoToMainMenuTutorialButton // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
};

// Class DBDUIViewInterfaces.PerksContainerViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UPerksContainerViewInterface : UInterface {

	struct TScriptInterface<IPerkViewInterface> GetPerkInterface(int32_t index); // Function DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ce0c0
};

// Class DBDUIViewInterfaces.PerkViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UPerkViewInterface : UInterface {

	void UpdatePerkCooldown(float cooldownValue, bool IsRechargeable, bool IsRechargeableActive); // Function DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ce910
	void SetData(struct FPerkViewData& PerkViewData); // Function DBDUIViewInterfaces.PerkViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ce300
	void ClearData(); // Function DBDUIViewInterfaces.PerkViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.PingStatusViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UPingStatusViewInterface : UInterface {

	void SetLocalPingStatus(enum class EConnectionQuality& localPing); // Function DBDUIViewInterfaces.PingStatusViewInterface.SetLocalPingStatus // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ce480
	void SetLocalPacketLossStatus(enum class EConnectionQuality& localPacketLoss); // Function DBDUIViewInterfaces.PingStatusViewInterface.SetLocalPacketLossStatus // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ce3f0
	void SetKillerConnectionQualityStatus(enum class EConnectionQuality& killerConnectionQuality); // Function DBDUIViewInterfaces.PingStatusViewInterface.SetKillerConnectionQualityStatus // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46c5680
};

// Class DBDUIViewInterfaces.PlayerProfileViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UPlayerProfileViewInterface : UInterface {

	void UpdateWallet(enum class ECurrencyType Type, int32_t newBalance, int32_t previousBalance); // Function DBDUIViewInterfaces.PlayerProfileViewInterface.UpdateWallet // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46cec70
	void ShowUI(); // Function DBDUIViewInterfaces.PlayerProfileViewInterface.ShowUI // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
	void SetWallet(struct TArray<struct FCurrencyLabelViewData>& walletData); // Function DBDUIViewInterfaces.PlayerProfileViewInterface.SetWallet // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ce830
	void SetPlayerName(struct FText& playerNameText); // Function DBDUIViewInterfaces.PlayerProfileViewInterface.SetPlayerName // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ce590
	void HideWallet(); // Function DBDUIViewInterfaces.PlayerProfileViewInterface.HideWallet // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2e0
	void HideUI(); // Function DBDUIViewInterfaces.PlayerProfileViewInterface.HideUI // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	void HidePlayerRank(); // Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerRank // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b1900
	void HidePlayerName(); // Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerName // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ce170
	void HidePlayerLevel(); // Function DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerLevel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7690
	void FullUpdateCurrency(struct FCurrencyLabelViewData& ViewData); // Function DBDUIViewInterfaces.PlayerProfileViewInterface.FullUpdateCurrency // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ce000
};

// Class DBDUIViewInterfaces.PlayerStatusesContainerViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UPlayerStatusesContainerViewInterface : UInterface {

	struct TScriptInterface<IPlayerStatusViewInterface> GetPlayerStatusInterface(int32_t index); // Function DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ce0c0
};

// Class DBDUIViewInterfaces.KillerStatusData
// Size: 0x30 (Inherited: 0x30)
struct UKillerStatusData : UObject {

	bool IsEqual(struct UKillerStatusData* Other); // Function DBDUIViewInterfaces.KillerStatusData.IsEqual // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46ce190
};

// Class DBDUIViewInterfaces.DoctorStatusData
// Size: 0x38 (Inherited: 0x30)
struct UDoctorStatusData : UKillerStatusData {
	enum class EAfflictionLevel AfflictionLevel; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DBDUIViewInterfaces.ExecutionerStatusData
// Size: 0x38 (Inherited: 0x30)
struct UExecutionerStatusData : UKillerStatusData {
	float AgonyProgress; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class DBDUIViewInterfaces.TwinsStatusData
// Size: 0x38 (Inherited: 0x30)
struct UTwinsStatusData : UKillerStatusData {
	bool TwinsActive; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DBDUIViewInterfaces.GhostfaceStatusData
// Size: 0x38 (Inherited: 0x30)
struct UGhostfaceStatusData : UKillerStatusData {
	bool IsExposed; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float StalkingProgress; // 0x34(0x04)
};

// Class DBDUIViewInterfaces.NightmareStatusData
// Size: 0x40 (Inherited: 0x30)
struct UNightmareStatusData : UKillerStatusData {
	enum class ESleepingUIState SleepingState; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float SleepingProgress; // 0x34(0x04)
	float SleepProtectionRemainingDuration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DBDUIViewInterfaces.PigStatusData
// Size: 0x38 (Inherited: 0x30)
struct UPigStatusData : UKillerStatusData {
	enum class EReverseBearTrapUIState ReverseBearTrapState; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float TimerProgress; // 0x34(0x04)
};

// Class DBDUIViewInterfaces.PlagueStatusData
// Size: 0x38 (Inherited: 0x30)
struct UPlagueStatusData : UKillerStatusData {
	enum class ESicknessLevel SicknessLevel; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float SicknessProgress; // 0x34(0x04)
};

// Class DBDUIViewInterfaces.TricksterStatusData
// Size: 0x40 (Inherited: 0x30)
struct UTricksterStatusData : UKillerStatusData {
	float CurrentLacerationLevel; // 0x30(0x04)
	float MaximumLacerationLevel; // 0x34(0x04)
	bool IsDangerousLacerationLevel; // 0x38(0x01)
	bool WasRecentlyDamagedByLaceration; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class DBDUIViewInterfaces.K24StatusData
// Size: 0x38 (Inherited: 0x30)
struct UK24StatusData : UKillerStatusData {
	bool IsContaminated; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DBDUIViewInterfaces.K25StatusData
// Size: 0x38 (Inherited: 0x30)
struct UK25StatusData : UKillerStatusData {
	float ChainHuntProgressPercentage; // 0x30(0x04)
	bool IsHoldingLamentConfiguration; // 0x34(0x01)
	bool IsSolvingLamentConfiguration; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// Class DBDUIViewInterfaces.K26StatusData
// Size: 0x38 (Inherited: 0x30)
struct UK26StatusData : UKillerStatusData {
	bool IsCrowAttached; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DBDUIViewInterfaces.TheOnryoStatusData
// Size: 0x40 (Inherited: 0x30)
struct UTheOnryoStatusData : UKillerStatusData {
	bool IsCondemnedActive; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float CondemnedProgress; // 0x34(0x04)
	bool IsFullCondemned; // 0x38(0x01)
	bool IsHoldingTape; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class DBDUIViewInterfaces.K28StatusData
// Size: 0x38 (Inherited: 0x30)
struct UK28StatusData : UKillerStatusData {
	float DayNightCycleProgressPercentage; // 0x30(0x04)
	bool IsDaytime; // 0x34(0x01)
	bool IsTransitioningToNighttime; // 0x35(0x01)
	bool IsNighttime; // 0x36(0x01)
	bool IsTransitioningToDaytime; // 0x37(0x01)
};

// Class DBDUIViewInterfaces.K29StatusData
// Size: 0x38 (Inherited: 0x30)
struct UK29StatusData : UKillerStatusData {
	float InfectionPercentage; // 0x30(0x04)
	bool IsInfected; // 0x34(0x01)
	bool IsInfectionActive; // 0x35(0x01)
	bool IsInfectionCritical; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// Class DBDUIViewInterfaces.K30StatusData
// Size: 0x38 (Inherited: 0x30)
struct UK30StatusData : UKillerStatusData {
	float HuntRemainingPercentage; // 0x30(0x04)
	bool IsHuntingSurvivor; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class DBDUIViewInterfaces.K31StatusData
// Size: 0x40 (Inherited: 0x30)
struct UK31StatusData : UKillerStatusData {
	float EffectProgressPercentage; // 0x30(0x04)
	bool IsAffectedByEffect; // 0x34(0x01)
	bool IsFullyAffectedByEffect; // 0x35(0x01)
	bool IsClawTrapped; // 0x36(0x01)
	bool IsClawTrapBroadcasting; // 0x37(0x01)
	float ClawTrapBatteryPercentage; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class DBDUIViewInterfaces.K32StatusData
// Size: 0x38 (Inherited: 0x30)
struct UK32StatusData : UKillerStatusData {
	bool IsAssimilated; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DBDUIViewInterfaces.PlayerStatusViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UPlayerStatusViewInterface : UInterface {

	void UpdateSurvivorSpecificPingIcon(enum class EConnectionQuality& connectionQuality); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.UpdateSurvivorSpecificPingIcon // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d52c0
	void UpdateSurvivorActivityProgress(float Progress); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.UpdateSurvivorActivityProgress // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void TriggerAfflictionHit(); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	void ShowSurvivorActivity(struct TSoftObjectPtr<UTexture2D>& activityIcon, bool ShouldDisplayProgress); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.ShowSurvivorActivity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetTimerProgress(float value, bool IsDeepWound); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46d4ba0
	void SetPlayerNameVisibility(bool visible); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetPlayerNameVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46abf20
	void SetKiller(struct FGameplayTag killerTag); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetKiller // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46d4a80
	void SetData(struct FPlayerStatusViewData& Data); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d4700
	void SetCampProgress(float value, bool IsLocalPlayerAKiller); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetCampProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46d4550
	void PlayTimerAnimation(); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ce170
	void PlayHookEscapeFailedAnimation(); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7690
	void HideSurvivorActivity(); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.HideSurvivorActivity // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EnableChasesMode(bool isChased); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.EnableChasesMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ClearData(); // Function DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf370
};

// Class DBDUIViewInterfaces.PowerBundleViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UPowerBundleViewInterface : UInterface {

	void SetData(struct FPowerBundleViewData& PowerBundleViewData); // Function DBDUIViewInterfaces.PowerBundleViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d47d0
	void ClearData(); // Function DBDUIViewInterfaces.PowerBundleViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.PowerViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UPowerViewInterface : UInterface {

	void SetData(struct FPowerViewData& PowerViewData); // Function DBDUIViewInterfaces.PowerViewInterface.SetData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d4950
	void ClearData(); // Function DBDUIViewInterfaces.PowerViewInterface.ClearData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.ProcessingPopupViewData
// Size: 0x68 (Inherited: 0x68)
struct UProcessingPopupViewData : UBasePopupViewData {
};

// Class DBDUIViewInterfaces.ProcessingPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UProcessingPopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.ProgressionSystemInfoPopupViewData
// Size: 0x1f0 (Inherited: 0x1f0)
struct UProgressionSystemInfoPopupViewData : UGenericPopupViewData {
};

// Class DBDUIViewInterfaces.ProgressionSystemInfoPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UProgressionSystemInfoPopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.ReportFeedbackPopupViewData
// Size: 0x200 (Inherited: 0x1f0)
struct UReportFeedbackPopupViewData : UGenericPopupViewData {
	char pad_1F0[0x10]; // 0x1f0(0x10)
};

// Class DBDUIViewInterfaces.ReportFeedbackPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UReportFeedbackPopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UScreenIndicatorsContainerViewInterface : UInterface {

	void ShowDirectionIndicator(struct FScreenIndicatorViewData& Data); // Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.ShowDirectionIndicator // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d4e10
	void RemoveDirectionIndicator(struct FString ID); // Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.RemoveDirectionIndicator // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa300
};

// Class DBDUIViewInterfaces.SeasonEndRankRewardsPopupViewData
// Size: 0x220 (Inherited: 0x1f0)
struct USeasonEndRankRewardsPopupViewData : UGenericPopupViewData {
	int32_t OldKillerRank; // 0x1f0(0x04)
	int32_t OldSurvivorRank; // 0x1f4(0x04)
	struct TArray<struct FRewardWrapperViewData> SurvivorRewards; // 0x1f8(0x10)
	struct TArray<struct FRewardWrapperViewData> KillerRewards; // 0x208(0x10)
	int32_t NbRankDefinitions; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
};

// Class DBDUIViewInterfaces.SeasonEndRankRewardsPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct USeasonEndRankRewardsPopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.SkillCheckViewInterface
// Size: 0x30 (Inherited: 0x30)
struct USkillCheckViewInterface : UInterface {

	void UpdateProgress(float value); // Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46d5230
	void UpdatePositionOffset(int32_t X, int32_t Y); // Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46d5160
	void ShowSkillCheckSuccess(bool IsBonus); // Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckSuccess // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46abf20
	void ShowSkillCheckFail(); // Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckFail // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b1900
	void ShowSkillCheck(struct FSkillCheckViewData& skillCheckData); // Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d4ef0
	void HideSkillCheck(); // Function DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46b7550
	void ApplyScaleFactor(float Scale); // Function DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf390
};

// Class DBDUIViewInterfaces.SpectateBarViewInterface
// Size: 0x30 (Inherited: 0x30)
struct USpectateBarViewInterface : UInterface {

	void SetSpectatedName(struct FString playerName); // Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bf960
	void SetSpectateBarVisibility(bool IsVisible); // Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aaa30
	void SetBotTag(bool IsBot); // Function DBDUIViewInterfaces.SpectateBarViewInterface.SetBotTag // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
	void SetArrowsVisibility(bool IsVisible); // Function DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa530
};

// Class DBDUIViewInterfaces.StartSequenceViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UStartSequenceViewInterface : UInterface {

	void ShowStartSequence(struct FStartSequenceViewData& Data); // Function DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d5010
	void HideStartSequence(); // Function DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
	bool GetIsStartSequenceVisible(); // Function DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x46d4480
};

// Class DBDUIViewInterfaces.StatusEffectViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UStatusEffectViewInterface : UInterface {

	void ShowActiveStatusEffect(struct FStatusEffectViewData& statusEffectData); // Function DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d4d60
	void RemoveExistingStatusEffect(struct FName& statusEffectID); // Function DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d44b0
};

// Class DBDUIViewInterfaces.SubtitlesViewInterface
// Size: 0x30 (Inherited: 0x30)
struct USubtitlesViewInterface : UInterface {

	void ShowSubtitle(struct FText& subtitleText); // Function DBDUIViewInterfaces.SubtitlesViewInterface.ShowSubtitle // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46ce590
	void SetSubtitlesSize(enum class ESubtitlesSize Size); // Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesSize // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46d4b20
	void SetSubtitlesPosition(enum class ESubtitlesPosition position); // Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesPosition // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bfca0
	void SetSubtitlesBackgroundOpacity(enum class ESubtitlesBackgroundOpacity Opacity); // Function DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesBackgroundOpacity // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46bfe70
	void SetConstrainAspectRatioChanged(bool isConstrained, float AspectRatio); // Function DBDUIViewInterfaces.SubtitlesViewInterface.SetConstrainAspectRatioChanged // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46d4630
	void HideSubtitles(); // Function DBDUIViewInterfaces.SubtitlesViewInterface.HideSubtitles // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46ce170
};

// Class DBDUIViewInterfaces.TemplateViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UTemplateViewInterface : UInterface {

	void TemplateExampleFunction(struct FTemplateViewData& templateData); // Function DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d50d0
};

// Class DBDUIViewInterfaces.TestBuildFlagViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UTestBuildFlagViewInterface : UInterface {

	void UpdateWidget(enum class ETestBuildType testBuildType, enum class ETestBuildFlagPosition testBuildFlagPosition); // Function DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46d5350
};

// Class DBDUIViewInterfaces.TutorialHighlightViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UTutorialHighlightViewInterface : UInterface {

	void SetTutorialHighlight(bool Show, enum class EHudComponent& componentId); // Function DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d4c80
};

// Class DBDUIViewInterfaces.TutorialMysteryNoteViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UTutorialMysteryNoteViewInterface : UInterface {

	void ShowMysteryNote(struct FNotifTutorialPopupViewData& notifData); // Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d6d60
	void HideMysteryNote(); // Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa2c0
};

// Class DBDUIViewInterfaces.TutorialObjectivesViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UTutorialObjectivesViewInterface : UInterface {

	void RemoveTutorialObjective(struct FName& ID); // Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d6bc0
	void RemoveAllTutorialObjectives(); // Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa510
	void CompleteTutorialObjective(struct FName& ID, bool removeAfterCompletion); // Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d69f0
	void AddTutorialObjective(struct FName& ID, struct FTutorialObjectivesViewData& InteractionPromptViewData); // Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d68c0
};

// Class DBDUIViewInterfaces.TutorialPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UTutorialPopupViewInterface : UInterface {

	void ShowNotifTutorialPopup(struct FNotifTutorialPopupViewData& notifTutoData); // Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x46d6d60
	void HideTutorialPopup(bool playSoundEffect); // Function DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46aa690
};

// Class DBDUIViewInterfaces.UIUtilities
// Size: 0x30 (Inherited: 0x30)
struct UUIUtilities : UBlueprintFunctionLibrary {

	void ConvertArchiveCurrentAndMaxProgressionInPercentage(int32_t& outCurrentProgression, int32_t& outMaxProgression); // Function DBDUIViewInterfaces.UIUtilities.ConvertArchiveCurrentAndMaxProgressionInPercentage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x46d6ae0
};

// Class DBDUIViewInterfaces.UnlockPersonalPerksPopupViewData
// Size: 0x200 (Inherited: 0x1f0)
struct UUnlockPersonalPerksPopupViewData : UGenericPopupViewData {
	struct TArray<struct UMenuPerkViewData*> PerksData; // 0x1f0(0x10)
};

// Class DBDUIViewInterfaces.UnlockPersonalPerksPopupViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UUnlockPersonalPerksPopupViewInterface : UInterface {
};

// Class DBDUIViewInterfaces.WatermarkViewInterface
// Size: 0x30 (Inherited: 0x30)
struct UWatermarkViewInterface : UInterface {

	void SetSteamValuesText(struct FString SteamName, struct FString SteamId); // Function DBDUIViewInterfaces.WatermarkViewInterface.SetSteamValuesText // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x46d6c60
};

