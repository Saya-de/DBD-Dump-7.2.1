// Class DBDUIViewsCore.CoreBaseUserWidget
// Size: 0x310 (Inherited: 0x298)
struct UCoreBaseUserWidget : UUserWidget {
	char pad_298[0x10]; // 0x298(0x10)
	struct UScaleBox* ScaleContainer; // 0x2a8(0x08)
	bool IsInteractive; // 0x2b0(0x01)
	enum class EControlMode _controlMode; // 0x2b1(0x01)
	enum class EScaleType ScaleType; // 0x2b2(0x01)
	char pad_2B3[0x5]; // 0x2b3(0x05)
	struct UDBDInputManager* _inputManager; // 0x2b8(0x08)
	struct TMap<struct FName, struct UWidgetAnimation*> _animationMap; // 0x2c0(0x50)

	void UpdateScale(float Scale); // Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x482b1a0
	bool StopAnimationByName(struct FName animName); // Function DBDUIViewsCore.CoreBaseUserWidget.StopAnimationByName // (Final|Native|Protected|BlueprintCallable) // @ game+0x482b0b0
	void RegisterForInput(); // Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput // (Native|Public|BlueprintCallable) // @ game+0x482a860
	bool PlayAnimationByName(struct FName animName, float starttime, int32_t loopcount, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function DBDUIViewsCore.CoreBaseUserWidget.PlayAnimationByName // (Final|Native|Protected|BlueprintCallable) // @ game+0x482a6a0
	void OnControlModeChangedBP(enum class EControlMode controlMode); // Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	struct UWidgetAnimation* GetAnimationByName(struct FName animName); // Function DBDUIViewsCore.CoreBaseUserWidget.GetAnimationByName // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4829e20
	void DeregisterFromInput(); // Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput // (Native|Public|BlueprintCallable) // @ game+0x4829d70
};

// Class DBDUIViewsCore.TooltipWidget
// Size: 0x320 (Inherited: 0x310)
struct UTooltipWidget : UCoreBaseUserWidget {
	struct FMargin _tooltipMargin; // 0x310(0x10)
};

// Class DBDUIViewsCore.ArchiveCompendiumTooltipWidget
// Size: 0x338 (Inherited: 0x320)
struct UArchiveCompendiumTooltipWidget : UTooltipWidget {
	struct UDBDTextBlock* TomeTitleTB; // 0x320(0x08)
	struct UDBDTextBlock* DescriptionTB; // 0x328(0x08)
	struct UCoreStoryLevelsSelectorWidget* StoryLevelsSelector; // 0x330(0x08)

	void SetTooltipData(struct FCompendiumButtonData& tooltipViewData); // Function DBDUIViewsCore.ArchiveCompendiumTooltipWidget.SetTooltipData // (Final|Native|Public|HasOutParms) // @ game+0x48205c0
	void Reset(); // Function DBDUIViewsCore.ArchiveCompendiumTooltipWidget.Reset // (Final|Native|Public) // @ game+0x481fe40
};

// Class DBDUIViewsCore.ArchiveNodeTooltipWidget
// Size: 0x370 (Inherited: 0x320)
struct UArchiveNodeTooltipWidget : UTooltipWidget {
	struct UDBDImage* BackgroundIMG; // 0x320(0x08)
	struct UDBDImage* RarityIMG; // 0x328(0x08)
	struct UDBDTextBlock* NodeTitleTB; // 0x330(0x08)
	struct UDBDTextBlock* SubtitleTB; // 0x338(0x08)
	struct UDBDRichTextBlock* NodeDescriptionRTB; // 0x340(0x08)
	struct UCoreArchiveObjectiveWidget* ObjectiveWidgetClass; // 0x348(0x08)
	struct UVerticalBox* ArchiveObjectivesContainer; // 0x350(0x08)
	struct UCoreCurrencyForTooltipsWidget* ProgressionRewardWidget; // 0x358(0x08)
	struct UCoreCurrencyForTooltipsWidget* CurrencyRewardWidget; // 0x360(0x08)
	struct UDBDRichTextBlock* VignetteRTB; // 0x368(0x08)

	void SetTooltipData(struct FArchiveNodeViewData& NodeViewData); // Function DBDUIViewsCore.ArchiveNodeTooltipWidget.SetTooltipData // (Final|Native|Public|HasOutParms) // @ game+0x48206d0
	void SetNodeType(enum class EArchiveNodeType Type); // Function DBDUIViewsCore.ArchiveNodeTooltipWidget.SetNodeType // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Reset(); // Function DBDUIViewsCore.ArchiveNodeTooltipWidget.Reset // (Final|Native|Public) // @ game+0x481fe60
};

// Class DBDUIViewsCore.ArchiveRewardNodeTooltipWidget
// Size: 0x328 (Inherited: 0x320)
struct UArchiveRewardNodeTooltipWidget : UTooltipWidget {
	struct UCustomizationTooltipWidget* CustomizationTooltip; // 0x320(0x08)
};

// Class DBDUIViewsCore.AspectRatioBox
// Size: 0x160 (Inherited: 0x148)
struct UAspectRatioBox : UContentWidget {
	float AspectRatio; // 0x148(0x04)
	char IsAspectRatioOverridden : 1; // 0x14c(0x01)
	char pad_14C_1 : 7; // 0x14c(0x01)
	char pad_14D[0x13]; // 0x14d(0x13)

	void SetAspectRatio(float inAspectRatio); // Function DBDUIViewsCore.AspectRatioBox.SetAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x481fec0
	void ClearAspectRatio(); // Function DBDUIViewsCore.AspectRatioBox.ClearAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x481f2b0
};

// Class DBDUIViewsCore.AspectRatioBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UAspectRatioBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function DBDUIViewsCore.AspectRatioBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4820a30
	void SetPadding(struct FMargin InPadding); // Function DBDUIViewsCore.AspectRatioBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x48204a0
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function DBDUIViewsCore.AspectRatioBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4820290
};

// Class DBDUIViewsCore.CharacterTooltipWidget
// Size: 0x340 (Inherited: 0x320)
struct UCharacterTooltipWidget : UTooltipWidget {
	struct UDBDTextBlock* InstructionTB; // 0x320(0x08)
	struct UDBDTextBlock* LevelTB; // 0x328(0x08)
	struct UDBDTextBlock* LockDetailsTB; // 0x330(0x08)
	struct UDBDRichTextBlock* DifficultyRTB; // 0x338(0x08)

	void SetTooltipData(struct FCharacterTooltipViewData& characterViewData); // Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void SetLockDetails(struct FCharacterTooltipViewData& characterViewData); // Function DBDUIViewsCore.CharacterTooltipWidget.SetLockDetails // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x48203a0
	void SetLevel(int32_t Level); // Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel // (Final|Native|Protected|BlueprintCallable) // @ game+0x4820310
	void SetDifficulty(enum class ECharacterDifficulty Difficulty); // Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty // (Final|Native|Protected|BlueprintCallable) // @ game+0x4820140
};

// Class DBDUIViewsCore.CoreBaseLoadoutPartWidget
// Size: 0x2b0 (Inherited: 0x298)
struct UCoreBaseLoadoutPartWidget : UUserWidget {
	struct UDBDImage* ImageRarity; // 0x298(0x08)
	struct UDBDImage* ImageIcon; // 0x2a0(0x08)
	struct UTextBlock* TextStackCount; // 0x2a8(0x08)

	void SetLoadoutStackCount(int32_t StackCount); // Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount // (Final|Native|Protected|BlueprintCallable) // @ game+0x482af70
	void SetLoadoutPartRarity(enum class EItemRarity Rarity); // Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity // (Final|Native|Protected|BlueprintCallable) // @ game+0x482aef0
	void SetLoadoutPartIcon(struct TSoftObjectPtr<UTexture2D> Icon); // Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon // (Final|Native|Protected|BlueprintCallable) // @ game+0x482ade0
};

// Class DBDUIViewsCore.CoreAddonWidget
// Size: 0x2b8 (Inherited: 0x2b0)
struct UCoreAddonWidget : UCoreBaseLoadoutPartWidget {
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class DBDUIViewsCore.CoreButtonWidget
// Size: 0x408 (Inherited: 0x310)
struct UCoreButtonWidget : UCoreBaseUserWidget {
	struct UDBDImage* BackgroundIMG; // 0x310(0x08)
	struct UDBDImage* AdditionalIconIMG; // 0x318(0x08)
	struct FMulticastInlineDelegate OnHoveredDelegate; // 0x320(0x10)
	struct FMulticastInlineDelegate OnUnhoveredDelegate; // 0x330(0x10)
	struct FMulticastInlineDelegate OnPressedDelegate; // 0x340(0x10)
	struct FMulticastInlineDelegate OnReleasedDelegate; // 0x350(0x10)
	struct FMulticastInlineDelegate OnClickedDelegate; // 0x360(0x10)
	struct FString HoveredSfxName; // 0x370(0x10)
	struct UAkAudioEvent* HoveredSfx; // 0x380(0x08)
	struct FString PressedSfxName; // 0x388(0x10)
	struct UAkAudioEvent* PressedSfx; // 0x398(0x08)
	struct FString ClickedSfxName; // 0x3a0(0x10)
	struct UAkAudioEvent* ClickedSfx; // 0x3b0(0x08)
	enum class EAnalogCursorStickiness AnalogCursorStickiness; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct UDBDButton* HitzoneButton; // 0x3c0(0x08)
	struct UDBDTextBlock* LabelTB; // 0x3c8(0x08)
	enum class ETextJustify _alignment; // 0x3d0(0x01)
	char pad_3D1[0x21]; // 0x3d1(0x21)
	bool SendAnalyticsData; // 0x3f2(0x01)
	char pad_3F3[0x5]; // 0x3f3(0x05)
	struct FString AnalyticsName; // 0x3f8(0x10)

	void SetVisible(enum class EButtonWidgetVisibility visible); // Function DBDUIViewsCore.CoreButtonWidget.SetVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x4831570
	void SetRepeatable(bool isRepeatable, struct UCurveFloat* repetitionDelayCurve); // Function DBDUIViewsCore.CoreButtonWidget.SetRepeatable // (Final|Native|Public|BlueprintCallable) // @ game+0x48314a0
	void SetPressable(bool isPressable); // Function DBDUIViewsCore.CoreButtonWidget.SetPressable // (Final|Native|Public|BlueprintCallable) // @ game+0x4831390
	void SetLabel(struct FText& label); // Function DBDUIViewsCore.CoreButtonWidget.SetLabel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48312c0
	void SetHoverable(bool isHoverable); // Function DBDUIViewsCore.CoreButtonWidget.SetHoverable // (Final|Native|Public|BlueprintCallable) // @ game+0x4831230
	void SetHoldable(bool isHoldable); // Function DBDUIViewsCore.CoreButtonWidget.SetHoldable // (Final|Native|Public|BlueprintCallable) // @ game+0x48311a0
	void SetEnabled(bool IsEnabled); // Function DBDUIViewsCore.CoreButtonWidget.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4831110
	void SetClickable(bool isClickable); // Function DBDUIViewsCore.CoreButtonWidget.SetClickable // (Final|Native|Public|BlueprintCallable) // @ game+0x4830c50
	void SetChargeable(bool isChargeable); // Function DBDUIViewsCore.CoreButtonWidget.SetChargeable // (Final|Native|Public|BlueprintCallable) // @ game+0x4830bc0
	void SetBackground(struct TSoftObjectPtr<UMaterialInstance> backgroundMaterial); // Function DBDUIViewsCore.CoreButtonWidget.SetBackground // (Final|Native|Public|BlueprintCallable) // @ game+0x4830970
	void SetAlignment(enum class ETextJustify newAlignment); // Function DBDUIViewsCore.CoreButtonWidget.SetAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x48308f0
	void SetAdditionalIcon(struct TSoftObjectPtr<UTexture2D> iconTexture); // Function DBDUIViewsCore.CoreButtonWidget.SetAdditionalIcon // (Final|Native|Public|BlueprintCallable) // @ game+0x48307e0
	void OnUnhoveredDelegate__DelegateSignature(struct UCoreButtonWidget* buttonTarget); // DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnUnhoveredDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnUnhovered(); // Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnReleasedDelegate__DelegateSignature(struct UCoreButtonWidget* buttonTarget); // DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnReleasedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnReleased(); // Function DBDUIViewsCore.CoreButtonWidget.OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnPressedDelegate__DelegateSignature(struct UCoreButtonWidget* buttonTarget); // DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnPressedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnPressed(); // Function DBDUIViewsCore.CoreButtonWidget.OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnLongPressed(); // Function DBDUIViewsCore.CoreButtonWidget.OnLongPressed // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnInternalUnhovered(); // Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered // (Native|Protected) // @ game+0x4830710
	void OnInternalReleased(); // Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased // (Native|Protected) // @ game+0x48306f0
	void OnInternalPressed(); // Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed // (Native|Protected) // @ game+0x48306d0
	void OnInternalLongPressed(); // Function DBDUIViewsCore.CoreButtonWidget.OnInternalLongPressed // (Native|Protected) // @ game+0x48306b0
	void OnInternalHovered(); // Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered // (Native|Protected) // @ game+0x482a840
	void OnInternalClicked(); // Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked // (Native|Protected) // @ game+0x4830690
	void OnHoveredDelegate__DelegateSignature(struct UCoreButtonWidget* buttonTarget); // DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnHoveredDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnHovered(); // Function DBDUIViewsCore.CoreButtonWidget.OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnEnabledChanged(bool IsEnabled); // Function DBDUIViewsCore.CoreButtonWidget.OnEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnClickedDelegate__DelegateSignature(struct UCoreButtonWidget* buttonTarget); // DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnClickedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnClicked(); // Function DBDUIViewsCore.CoreButtonWidget.OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnAlignmentChanged(enum class ETextJustify newAlignment); // Function DBDUIViewsCore.CoreButtonWidget.OnAlignmentChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool IsEnabled(); // Function DBDUIViewsCore.CoreButtonWidget.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48305f0
	struct FGeometry GetHitzonePaintSpaceGeometry(); // Function DBDUIViewsCore.CoreButtonWidget.GetHitzonePaintSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4830450
};

// Class DBDUIViewsCore.CoreSelectableButtonWidget
// Size: 0x440 (Inherited: 0x408)
struct UCoreSelectableButtonWidget : UCoreButtonWidget {
	struct FMulticastInlineDelegate OnSelectedChangedDelegate; // 0x408(0x10)
	struct FMulticastInlineDelegate OnSelectedAgainDelegate; // 0x418(0x10)
	struct FString _analyticsName; // 0x428(0x10)
	char pad_438[0x8]; // 0x438(0x08)

	void UpdateBackgroundSkin(struct UMaterialInterface* skinMaterial); // Function DBDUIViewsCore.CoreSelectableButtonWidget.UpdateBackgroundSkin // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetSelected(bool IsSelected); // Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x4845fe0
	void SetSelectable(bool IsSelectable); // Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelectable // (Final|Native|Public|BlueprintCallable) // @ game+0x4845f50
	void OnSelectedChangedDelegate__DelegateSignature(struct UCoreSelectableButtonWidget* buttonTarget, bool IsSelected); // DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChangedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnSelectedChanged(bool IsSelected); // Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnSelectedAgainDelegate__DelegateSignature(struct UCoreSelectableButtonWidget* buttonTarget); // DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedAgainDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	bool IsSelected(); // Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4845430
	bool IsSelectable(); // Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelectable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4845400
};

// Class DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget
// Size: 0x4a8 (Inherited: 0x440)
struct UCoreArchiveChallengeReminderSlotWidget : UCoreSelectableButtonWidget {
	struct UCoreArchiveQuestNodeWidget* Node; // 0x440(0x08)
	struct UDBDImage* EmptySlotImage; // 0x448(0x08)
	struct UDBDImage* InactiveBG; // 0x450(0x08)
	struct UDBDImage* ActiveBG; // 0x458(0x08)
	struct UDBDImage* SmokeBackground; // 0x460(0x08)
	struct UDBDImage* ProgressBar; // 0x468(0x08)
	struct UDBDImage* SelectorHighlight; // 0x470(0x08)
	struct UDBDTextBlock* TitleTB; // 0x478(0x08)
	struct UDBDTextBlock* SubtitleTB; // 0x480(0x08)
	struct UDBDTextBlock* InactiveTitleTB; // 0x488(0x08)
	struct UDBDTextBlock* InactiveSubtitleTB; // 0x490(0x08)
	struct UCoreOnHoverBorderWidget* OnHoverBorder; // 0x498(0x08)
	enum class EPlayerRole _slotRole; // 0x4a0(0x01)
	bool _hasActiveHoverEffect; // 0x4a1(0x01)
	char pad_4A2[0x6]; // 0x4a2(0x06)

	void UpdateVisualState(struct FArchiveChallengeReminderViewData& Data); // Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateVisualState // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void UpdateProgressBar(float Progress); // Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateProgressBar // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void UpdateActiveState(bool IsActive, bool PlayAnimation); // Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateActiveState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SwapChallenge(struct FArchiveChallengeReminderViewData& Data); // Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SwapChallenge // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetSlotSelectorState(bool isSelectorOpen); // Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetSlotSelectorState // (Final|Native|Public) // @ game+0x4820530
	void SetQuestNodeHoverEffect(bool IsHovered); // Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetQuestNodeHoverEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetData(struct FArchiveChallengeReminderViewData& Data); // Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4820050
	void InitVisualState(); // Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.InitVisualState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Init(enum class EPlayerRole Role); // Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.Init // (Final|Native|Public) // @ game+0x481f4e0
	void ClearData(); // Function DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.ClearData // (Final|Native|Public) // @ game+0x481f2d0
};

// Class DBDUIViewsCore.CoreArchiveCompendiumButtonWidget
// Size: 0x490 (Inherited: 0x408)
struct UCoreArchiveCompendiumButtonWidget : UCoreButtonWidget {
	enum class ETooltipHorizontalAlignment HorizontalAlignment; // 0x408(0x01)
	enum class ETooltipVerticalAlignment VerticalAlignment; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct UDBDImage* TomeProgressStyleTexture; // 0x410(0x08)
	struct UDBDTextBlock* VolumeIndex; // 0x418(0x08)
	struct FCompendiumButtonData _compendiumButtonData; // 0x420(0x70)

	void SetLevelProgressionVisual(int32_t buttonLevel, enum class EArchivesStoryLevelStatus levelStatus); // Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetLevelProgressionVisual // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetGhostStory(bool isGhostStory); // Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetGhostStory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetButtonVisual(struct FCompendiumButtonData& buttonData); // Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetButtonVisual // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void SetButtonData(struct FCompendiumButtonData& buttonData); // Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetButtonData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x481ff40
	void ResetVisuals(); // Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.ResetVisuals // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnButtonUnhovered(); // Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.OnButtonUnhovered // (Final|Native|Protected|BlueprintCallable) // @ game+0x481f650
	void OnButtonHovered(); // Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.OnButtonHovered // (Final|Native|Protected|BlueprintCallable) // @ game+0x481f630
	struct FString GetTomeId(); // Function DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.GetTomeId // (Final|Native|Public|BlueprintCallable) // @ game+0x481f420
};

// Class DBDUIViewsCore.CoreTabContentWidget
// Size: 0x330 (Inherited: 0x310)
struct UCoreTabContentWidget : UCoreBaseUserWidget {
	struct TArray<struct UWidget*> ContentWidgets; // 0x310(0x10)
	float _contentFadeInTime; // 0x320(0x04)
	enum class EEasingType _contentFadeInEasing; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	float _contentFadeOutTime; // 0x328(0x04)
	enum class EEasingType _contentFadeOutEasing; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)

	void StopFadeInTweening(float opacityValue); // Function DBDUIViewsCore.CoreTabContentWidget.StopFadeInTweening // (Final|Native|Public|BlueprintCallable) // @ game+0x4846400
	void ResetFade(); // Function DBDUIViewsCore.CoreTabContentWidget.ResetFade // (Final|Native|Public|BlueprintCallable) // @ game+0x48455d0
	void FadeOutContent(); // Function DBDUIViewsCore.CoreTabContentWidget.FadeOutContent // (Final|Native|Public|BlueprintCallable) // @ game+0x4844d90
	void FadeInContent(); // Function DBDUIViewsCore.CoreTabContentWidget.FadeInContent // (Final|Native|Public|BlueprintCallable) // @ game+0x4844d70
};

// Class DBDUIViewsCore.CoreArchiveCompendiumWidget
// Size: 0x388 (Inherited: 0x330)
struct UCoreArchiveCompendiumWidget : UCoreTabContentWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct UCoreArchiveCompendiumButtonWidget* _compendiumButtonWidgetClass; // 0x338(0x08)
	struct FMulticastInlineDelegate _onCompendiumClickedDelegate; // 0x340(0x10)
	struct UGridPanel* CompendiumGrid; // 0x350(0x08)
	struct UDBDScrollBox* CompendiumScroll; // 0x358(0x08)
	int32_t _cellsPerRow; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct UCoreArchiveCompendiumButtonWidget*> _compendiumButtonWidgetPool; // 0x368(0x10)
	struct TArray<struct UCoreArchiveCompendiumButtonWidget*> _compendiumButtonWidgetList; // 0x378(0x10)

	void SetGridSlot(struct UGridSlot* GridSlot, int32_t index); // Function DBDUIViewsCore.CoreArchiveCompendiumWidget.SetGridSlot // (Final|Native|Private) // @ game+0x48201c0
	void ResetScroll(); // Function DBDUIViewsCore.CoreArchiveCompendiumWidget.ResetScroll // (Final|Native|Public|BlueprintCallable) // @ game+0x481fea0
	void Reset(); // Function DBDUIViewsCore.CoreArchiveCompendiumWidget.Reset // (Final|Native|Private) // @ game+0x481fe80
	void OnPastStoryClicked(struct UCoreButtonWidget* Button); // Function DBDUIViewsCore.CoreArchiveCompendiumWidget.OnPastStoryClicked // (Final|Native|Protected) // @ game+0x481f6d0
	void CreateGhostStories(int32_t currentStoryNum); // Function DBDUIViewsCore.CoreArchiveCompendiumWidget.CreateGhostStories // (Final|Native|Private) // @ game+0x481f390
	struct UCoreArchiveCompendiumButtonWidget* CreateAndAddButtonToGrid(int32_t index); // Function DBDUIViewsCore.CoreArchiveCompendiumWidget.CreateAndAddButtonToGrid // (Final|Native|Private) // @ game+0x481f2f0
};

// Class DBDUIViewsCore.CoreArchiveJournalImageViewerWidget
// Size: 0x388 (Inherited: 0x330)
struct UCoreArchiveJournalImageViewerWidget : UCoreTabContentWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct UCoreInputSwitcherWidget* BackInputSwitcher; // 0x338(0x08)
	struct UCoreInputSwitcherWidget* TextVisibilityInputSwitcher; // 0x340(0x08)
	struct FMulticastInlineDelegate _backActionDelegate; // 0x348(0x10)
	struct FMulticastInlineDelegate _imageViewerTextVisibilityActionDelegate; // 0x358(0x10)
	struct FMulticastInlineDelegate _imageViewerVoiceOverPlayedDelegate; // 0x368(0x10)
	struct FMulticastInlineDelegate _imageViewerVoiceOverAutoplayDelegate; // 0x378(0x10)

	void SetVoiceOverText(struct FText& playVoiceOverText, struct FText& stopVoiceOverText, struct FText& autoplayVoiceOverText); // Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetVoiceOverText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetTextVisibilityInputText(struct FText& DisplayText, struct FText& hideText); // Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetTextVisibilityInputText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetScrollData(struct FText& journalEntryScrollPromptText); // Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetScrollData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetData(struct FArchivesVignetteEntryViewData& Data, bool hasTitle, bool hasDescription); // Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnVoiceOverPlay(); // Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnVoiceOverPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x481fe00
	void OnVoiceOverAutoPlay(bool autoplay); // Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnVoiceOverAutoPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x481fce0
	void OnTextVisibilityChanged(); // Function DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnTextVisibilityChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x481faf0
};

// Class DBDUIViewsCore.CoreArchiveJournalWidget
// Size: 0x418 (Inherited: 0x330)
struct UCoreArchiveJournalWidget : UCoreTabContentWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct UCoreArchiveVignetteButtonContainerWidget* VignetteButtonContainer; // 0x338(0x08)
	struct UCoreArchiveVignetteEntryContainerWidget* VignetteEntryContainer; // 0x340(0x08)
	struct UCoreArchiveVignetteCinematicContainerWidget* VignetteCinematicsContainer; // 0x348(0x08)
	struct UCoreInputSwitcherWidget* LeftArrowInputSwitcher; // 0x350(0x08)
	struct UCoreInputSwitcherWidget* RightArrowInputSwitcher; // 0x358(0x08)
	struct TSoftObjectPtr<UTexture2D> DebugRewardImage; // 0x360(0x30)
	char RewardImageMaxDescriptionLength; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct FMulticastInlineDelegate _vignetteSelectedDelegate; // 0x398(0x10)
	struct FMulticastInlineDelegate _vignetteEntrySelectedDelegate; // 0x3a8(0x10)
	struct FMulticastInlineDelegate _vignetteCinematicPlayedDelegate; // 0x3b8(0x10)
	struct FMulticastInlineDelegate _vignetteVoiceOverPlayedDelegate; // 0x3c8(0x10)
	struct FMulticastInlineDelegate _vignetteVoiceOverAutoplayDelegate; // 0x3d8(0x10)
	struct FMulticastInlineDelegate _vignetteShowImageViewerDelegate; // 0x3e8(0x10)
	char pad_3F8[0x20]; // 0x3f8(0x20)

	void ShowImageViewer(); // Function DBDUIViewsCore.CoreArchiveJournalWidget.ShowImageViewer // (Final|Native|Public|BlueprintCallable) // @ game+0x4820ab0
	void SetVoiceOverText(struct FText& playVoiceOverText, struct FText& stopVoiceOverText, struct FText& autoplayVoiceOverText); // Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVoiceOverText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetVoiceOverButtonsVisibility(bool IsVisible); // Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVoiceOverButtonsVisibility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetVignetteText(struct FText& titleText, struct FText& subtitleText); // Function DBDUIViewsCore.CoreArchiveJournalWidget.SetVignetteText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetTopFogOffset(bool hasTitle, bool hasDescription); // Function DBDUIViewsCore.CoreArchiveJournalWidget.SetTopFogOffset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetEntryText(struct FText& titleText, struct FText& descriptionText); // Function DBDUIViewsCore.CoreArchiveJournalWidget.SetEntryText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetEntryImage(struct FText& titleText, struct FText& descriptionText, struct TSoftObjectPtr<UTexture2D>& RewardImage, float textureOffset); // Function DBDUIViewsCore.CoreArchiveJournalWidget.SetEntryImage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetBottomFogOffset(bool HasAudio); // Function DBDUIViewsCore.CoreArchiveJournalWidget.SetBottomFogOffset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnVoiceOverPlay(); // Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVoiceOverPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x481fe20
	void OnVoiceOverAutoPlay(bool autoplay); // Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVoiceOverAutoPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x481fd70
	void OnVignetteEntrySelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteEntrySelected // (Final|Native|Public) // @ game+0x481fc50
	void OnVignetteCinematicSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteCinematicSelected // (Final|Native|Public) // @ game+0x481fbc0
	void OnVignetteButtonSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteButtonSelected // (Final|Native|Public) // @ game+0x481fb30
	void OnRightArrowTriggered(); // Function DBDUIViewsCore.CoreArchiveJournalWidget.OnRightArrowTriggered // (Final|Native|Private) // @ game+0x481fa40
	void OnRewardImageLoaded(struct TSoftObjectPtr<UTexture2D> loadedTexture, bool success, struct FText titleText, struct FText descriptionText, float textureOffset); // Function DBDUIViewsCore.CoreArchiveJournalWidget.OnRewardImageLoaded // (Final|Native|Private) // @ game+0x481f760
	void OnLeftArrowTriggered(); // Function DBDUIViewsCore.CoreArchiveJournalWidget.OnLeftArrowTriggered // (Final|Native|Private) // @ game+0x481f6b0
	void OnJournalEntriesUnlocked(); // Function DBDUIViewsCore.CoreArchiveJournalWidget.OnJournalEntriesUnlocked // (Final|Native|Private) // @ game+0x481f690
	void OnFirstJournalEntryUnlocked(); // Function DBDUIViewsCore.CoreArchiveJournalWidget.OnFirstJournalEntryUnlocked // (Final|Native|Private) // @ game+0x481f670
	void InitializeArrow(struct UCoreInputSwitcherWidget* arrowWidget, bool Active); // Function DBDUIViewsCore.CoreArchiveJournalWidget.InitializeArrow // (Final|Native|Private) // @ game+0x481f560
};

// Class DBDUIViewsCore.CoreArchiveLevelProgressionWidget
// Size: 0x378 (Inherited: 0x310)
struct UCoreArchiveLevelProgressionWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	struct FMulticastInlineDelegate _levelSelectedDelegate; // 0x318(0x10)
	struct FMulticastInlineDelegate _levelAnimationDoneDelegate; // 0x328(0x10)
	struct FMulticastInlineDelegate _levelRewardAnimationDoneDelegate; // 0x338(0x10)
	struct FMulticastInlineDelegate _levelUnlockedAnimationDoneDelegate; // 0x348(0x10)
	struct UCoreStoryLevelsSelectorWidget* StoryLevelsSelector; // 0x358(0x08)
	struct UDBDTextBlock* LevelNumberTF; // 0x360(0x08)
	struct UDBDTextBlock* LevelCompletionTF; // 0x368(0x08)
	struct UOverlay* SideContent; // 0x370(0x08)

	void OnTomeLevelUnlockedAnimation(); // Function DBDUIViewsCore.CoreArchiveLevelProgressionWidget.OnTomeLevelUnlockedAnimation // (Final|Native|Private) // @ game+0x481fb10
	void OnStoryLevelSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreArchiveLevelProgressionWidget.OnStoryLevelSelected // (Final|Native|Protected) // @ game+0x481fa60
};

// Class DBDUIViewsCore.CoreArchiveMenuWidget
// Size: 0x578 (Inherited: 0x310)
struct UCoreArchiveMenuWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	struct UCoreTabContainerWidget* ArchiveMenuTabs; // 0x318(0x08)
	struct UCoreArchiveChallengeReminderSlotWidget* SurvivorChallengeSlot; // 0x320(0x08)
	struct UCoreArchiveChallengeReminderSlotWidget* KillerChallengeSlot; // 0x328(0x08)
	struct UCoreArchiveSlotSelectorWidget* SlotSelector; // 0x330(0x08)
	struct UCoreInputSwitcherWidget* BackInputSwitcher; // 0x338(0x08)
	struct UCoreButtonWidget* InfoButton; // 0x340(0x08)
	struct FMulticastInlineDelegate _backActionDelegate; // 0x348(0x10)
	struct FMulticastInlineDelegate _infoClickedDelegate; // 0x358(0x10)
	struct FMulticastInlineDelegate _slotSelectorClosedDelegate; // 0x368(0x10)
	struct FMulticastInlineDelegate MenuTabSelectedDelegate; // 0x378(0x10)
	struct FMulticastInlineDelegate _challengeReminderClickedDelegate; // 0x388(0x10)
	struct FMulticastInlineDelegate _slotSelectionSelectedDelegate; // 0x398(0x10)
	struct FText _riftRemainingTimeText; // 0x3a8(0x18)
	char pad_3C0[0x1b8]; // 0x3c0(0x1b8)

	void SetScrollData(struct FText& vignetteListScrollPromptText, struct FText& journalEntryScrollPromptText); // Function DBDUIViewsCore.CoreArchiveMenuWidget.SetScrollData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnSlotSelectionCancelled(); // Function DBDUIViewsCore.CoreArchiveMenuWidget.OnSlotSelectionCancelled // (Final|Native|Protected) // @ game+0x48256b0
	void OnSlotSelected(enum class EPlayerRole Role); // Function DBDUIViewsCore.CoreArchiveMenuWidget.OnSlotSelected // (Final|Native|Protected) // @ game+0x4825630
	void OnMenuTabSelectedAgain(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreArchiveMenuWidget.OnMenuTabSelectedAgain // (Final|Native|Protected) // @ game+0x4824c90
	void OnMenuTabSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreArchiveMenuWidget.OnMenuTabSelected // (Final|Native|Protected) // @ game+0x4824c00
	void OnInfoButtonClicked(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreArchiveMenuWidget.OnInfoButtonClicked // (Final|Native|Protected) // @ game+0x4824ae0
	void OnChallengeReminderClick(struct UCoreButtonWidget* Button); // Function DBDUIViewsCore.CoreArchiveMenuWidget.OnChallengeReminderClick // (Final|Native|Protected) // @ game+0x4824680
	struct FText GetTimeRemainingLabelFromMenuState(enum class EArchiveMenuState menuState); // Function DBDUIViewsCore.CoreArchiveMenuWidget.GetTimeRemainingLabelFromMenuState // (Final|Native|Protected|BlueprintCallable) // @ game+0x4823d40
};

// Class DBDUIViewsCore.CoreArchiveObjectiveWidget
// Size: 0x330 (Inherited: 0x310)
struct UCoreArchiveObjectiveWidget : UCoreBaseUserWidget {
	struct UDBDRichTextBlock* ObjectiveDescriptionRTB; // 0x310(0x08)
	struct UDBDImage* ProgressBar; // 0x318(0x08)
	struct UDBDTextBlock* CurrentProgressTB; // 0x320(0x08)
	struct UDBDTextBlock* MaxProgressTB; // 0x328(0x08)

	void SetData(struct FArchiveNodeObjectiveViewData& objectiveData); // Function DBDUIViewsCore.CoreArchiveObjectiveWidget.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48257a0
};

// Class DBDUIViewsCore.CoreBasePopupWidget
// Size: 0x328 (Inherited: 0x310)
struct UCoreBasePopupWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	struct UDBDRichTextBlock* titleText; // 0x318(0x08)
	struct UDBDRichTextBlock* MessageText; // 0x320(0x08)

	void Show(struct UBasePopupViewData* Data); // Function DBDUIViewsCore.CoreBasePopupWidget.Show // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Hide(); // Function DBDUIViewsCore.CoreBasePopupWidget.Hide // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreGenericPopupWidget
// Size: 0x368 (Inherited: 0x328)
struct UCoreGenericPopupWidget : UCoreBasePopupWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct UCoreInputSwitcherWidget* ProgressionButton; // 0x330(0x08)
	struct UCoreInputSwitcherWidget* RegressionButton; // 0x338(0x08)
	struct UCoreInputSwitcherWidget* AlternativeButton; // 0x340(0x08)
	struct FMulticastInlineDelegate _popupActionDelegate; // 0x348(0x10)
	struct FMulticastInlineDelegate _popupBackActionDelegate; // 0x358(0x10)

	void OnRegressionAction(); // Function DBDUIViewsCore.CoreGenericPopupWidget.OnRegressionAction // (Native|Protected) // @ game+0x4830710
	void OnProgressionAction(); // Function DBDUIViewsCore.CoreGenericPopupWidget.OnProgressionAction // (Native|Protected) // @ game+0x482a840
	void OnAlternativeAction(); // Function DBDUIViewsCore.CoreGenericPopupWidget.OnAlternativeAction // (Native|Protected) // @ game+0x48306d0
};

// Class DBDUIViewsCore.CoreArchivePassPurchasePopupWidget
// Size: 0x370 (Inherited: 0x368)
struct UCoreArchivePassPurchasePopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)

	struct FText GetTranslatedAvailabilityTitleText(); // Function DBDUIViewsCore.CoreArchivePassPurchasePopupWidget.GetTranslatedAvailabilityTitleText // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4823e30
};

// Class DBDUIViewsCore.CoreArchiveQuestMapWidget
// Size: 0x4a8 (Inherited: 0x330)
struct UCoreArchiveQuestMapWidget : UCoreTabContentWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct UCanvasPanel* ChallengesContainer; // 0x338(0x08)
	struct UCoreArchiveQuestNodeWidget* ArchiveQuestNodeWidgetClass; // 0x340(0x08)
	struct UCoreArchiveQuestPathWidget* ArchiveQuestPathWidgetClass; // 0x348(0x08)
	int32_t MaxDisplayedNodes; // 0x350(0x04)
	int32_t MaxDisplayedPaths; // 0x354(0x04)
	float QuestMapRevealDuration; // 0x358(0x04)
	float NodeRevealDuration; // 0x35c(0x04)
	float PathRevealDuration; // 0x360(0x04)
	enum class EEasingType NodeRevealEasingType; // 0x364(0x01)
	enum class EEasingType PathRevealEasingType; // 0x365(0x01)
	char pad_366[0x2]; // 0x366(0x02)
	struct UAkAudioEvent* QuestMapGenerationSound; // 0x368(0x08)
	struct TArray<struct FArchiveNodeGraphViewData> _nodeGraphDataList; // 0x370(0x10)
	struct TArray<struct FArchiveMapPathViewData> _pathDataList; // 0x380(0x10)
	struct FMulticastInlineDelegate _questMapCreatedDelegate; // 0x390(0x10)
	struct FMulticastInlineDelegate _questNodeHoveredDelegate; // 0x3a0(0x10)
	struct FMulticastInlineDelegate _questNodeUnhoveredDelegate; // 0x3b0(0x10)
	struct FMulticastInlineDelegate _questNodeSelectedDelegate; // 0x3c0(0x10)
	struct TMap<struct FName, struct UCoreArchiveQuestNodeWidget*> _nodeDictionary; // 0x3d0(0x50)
	struct TMap<struct FName, struct UCoreArchiveQuestPathWidget*> _pathDictionary; // 0x420(0x50)
	struct TArray<struct UCoreArchiveQuestNodeWidget*> _nodeWidgetPool; // 0x470(0x10)
	struct TArray<struct UCoreArchiveQuestPathWidget*> _pathWidgetPool; // 0x480(0x10)
	char pad_490[0x18]; // 0x490(0x18)

	void UnbindFromPath(struct UCoreArchiveQuestPathWidget* Path); // Function DBDUIViewsCore.CoreArchiveQuestMapWidget.UnbindFromPath // (Native|Protected) // @ game+0x4825b10
	void UnbindFromNode(struct UCoreArchiveQuestNodeWidget* Node); // Function DBDUIViewsCore.CoreArchiveQuestMapWidget.UnbindFromNode // (Native|Protected) // @ game+0x4825a80
	void SetupPath(struct FArchiveMapPathViewData& PathData); // Function DBDUIViewsCore.CoreArchiveQuestMapWidget.SetupPath // (Final|Native|Private|HasOutParms) // @ game+0x48259a0
	void SetupNode(struct FArchiveNodeGraphViewData& NodeData); // Function DBDUIViewsCore.CoreArchiveQuestMapWidget.SetupNode // (Final|Native|Private|HasOutParms) // @ game+0x4825880
	void OnNodeUnhovered(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeUnhovered // (Final|Native|Protected) // @ game+0x4825000
	void OnNodesRevealCompleted(); // Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodesRevealCompleted // (Final|Native|Private) // @ game+0x48253d0
	void OnNodeHovered(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeHovered // (Final|Native|Protected) // @ game+0x4824ee0
	void OnNodeClicked(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeClicked // (Native|Protected) // @ game+0x4824e50
	void BindToPath(struct UCoreArchiveQuestPathWidget* Path); // Function DBDUIViewsCore.CoreArchiveQuestMapWidget.BindToPath // (Native|Protected) // @ game+0x4823cb0
	void BindToNode(struct UCoreArchiveQuestNodeWidget* Node); // Function DBDUIViewsCore.CoreArchiveQuestMapWidget.BindToNode // (Native|Protected) // @ game+0x4823c20
};

// Class DBDUIViewsCore.CoreArchiveQuestEditorWidget
// Size: 0x5a8 (Inherited: 0x4a8)
struct UCoreArchiveQuestEditorWidget : UCoreArchiveQuestMapWidget {
	char pad_4A8[0x8]; // 0x4a8(0x08)
	struct TArray<struct FLinePair> _gridLinesListVertical; // 0x4b0(0x10)
	struct TArray<struct FLinePair> _gridLinesListHorizontal; // 0x4c0(0x10)
	struct UCoreArchiveQuestNodeWidget* _activeNode; // 0x4d0(0x08)
	struct UCoreArchiveQuestPathWidget* _pathInCreation; // 0x4d8(0x08)
	struct FMulticastInlineDelegate _questEditorSaveDelegate; // 0x4e0(0x10)
	bool _isCreatingPath; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct UBorder* EditorBorder; // 0x4f8(0x08)
	struct UCheckBox* MoveNodesRadioCheckbox; // 0x500(0x08)
	struct UCheckBox* LinkNodesRadioCheckbox; // 0x508(0x08)
	struct UCheckBox* GridVisibilityCheckbox; // 0x510(0x08)
	struct UCheckBox* SnapGridCheckbox; // 0x518(0x08)
	struct UEditableTextBox* GridTileWidthInputPixelsTextBox; // 0x520(0x08)
	struct UEditableTextBox* GridTileWidthInputPercentTextBox; // 0x528(0x08)
	struct UEditableTextBox* GridTileHeightInputPixelsTextBox; // 0x530(0x08)
	struct UEditableTextBox* GridTileHeightInputPercentTextBox; // 0x538(0x08)
	struct UCoreKeyListenerButtonWidget* RefreshGridButton; // 0x540(0x08)
	struct UOverlay* NodeCoordinateContainer; // 0x548(0x08)
	struct UEditableTextBox* NodeXInputPixels; // 0x550(0x08)
	struct UEditableTextBox* NodeXInputPercent; // 0x558(0x08)
	struct UEditableTextBox* NodeYInputPixels; // 0x560(0x08)
	struct UEditableTextBox* NodeYInputPercent; // 0x568(0x08)
	struct UCoreKeyListenerButtonWidget* SubmitButton; // 0x570(0x08)
	struct UCoreKeyListenerButtonWidget* SaveQuestMapButton; // 0x578(0x08)
	struct UVerticalBox* SaveInfoContainer; // 0x580(0x08)
	struct UDBDTextBlock* PathTextBlock; // 0x588(0x08)
	float GridTileHeightValuePercent; // 0x590(0x04)
	float GridTileWidthValuePercent; // 0x594(0x04)
	bool IsSnapping; // 0x598(0x01)
	bool IsGridVisible; // 0x599(0x01)
	enum class EEditorMode Mode; // 0x59a(0x01)
	char pad_59B[0xd]; // 0x59b(0x0d)

	void SetHighlightedGridLines(int32_t verticalIndex, int32_t horizontalIndex); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.SetHighlightedGridLines // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetGridLinesArray(struct TArray<struct FLinePair>& gridArrayVertical, struct TArray<struct FLinePair>& gridArrayHorizontal); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.SetGridLinesArray // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void OnSnapGridChecked(bool checked); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnSnapGridChecked // (Final|Native|Private) // @ game+0x48256d0
	void OnSaveGraphClick(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnSaveGraphClick // (Final|Native|Private) // @ game+0x48255a0
	void OnRefreshGridClick(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnRefreshGridClick // (Final|Native|Private) // @ game+0x4825480
	void OnPathClicked(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnPathClicked // (Final|Native|Protected) // @ game+0x48253f0
	void OnNodeYPixelChanged(struct FText& Text); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeYPixelChanged // (Final|Native|Private|HasOutParms) // @ game+0x4825300
	void OnNodeYPercentChanged(struct FText& Text); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeYPercentChanged // (Final|Native|Private|HasOutParms) // @ game+0x4825230
	void OnNodeXPixelChanged(struct FText& Text); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeXPixelChanged // (Final|Native|Private|HasOutParms) // @ game+0x4825160
	void OnNodeXPercentChanged(struct FText& Text); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeXPercentChanged // (Final|Native|Private|HasOutParms) // @ game+0x4825090
	void OnNodeSubmitClick(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeSubmitClick // (Final|Native|Private) // @ game+0x4824f70
	void OnNodeBeginDrag(struct FName& ID); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeBeginDrag // (Final|Native|Private|HasOutParms) // @ game+0x4824db0
	void OnMoveNodesModeChecked(bool checked); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnMoveNodesModeChecked // (Final|Native|Private) // @ game+0x4824d20
	void OnLinkNodesModeChecked(bool checked); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnLinkNodesModeChecked // (Final|Native|Private) // @ game+0x4824b70
	void OnGridVisbilityChecked(bool checked); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridVisbilityChecked // (Final|Native|Private) // @ game+0x4824a50
	void OnGridTileWidthPixelChanged(struct FText& Text); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileWidthPixelChanged // (Final|Native|Private|HasOutParms) // @ game+0x4824980
	void OnGridTileWidthPercentChanged(struct FText& Text); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileWidthPercentChanged // (Final|Native|Private|HasOutParms) // @ game+0x48248b0
	void OnGridTileHeightPixelChanged(struct FText& Text); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileHeightPixelChanged // (Final|Native|Private|HasOutParms) // @ game+0x48247e0
	void OnGridTileHeightPercentChanged(struct FText& Text); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileHeightPercentChanged // (Final|Native|Private|HasOutParms) // @ game+0x4824710
	void NodeDragged(struct FVector2D& position); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.NodeDragged // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x48245f0
	void IntermediatePathMove(struct FVector2D& position); // Function DBDUIViewsCore.CoreArchiveQuestEditorWidget.IntermediatePathMove // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4824450
};

// Class DBDUIViewsCore.CoreArchiveQuestNodeWidget
// Size: 0x558 (Inherited: 0x408)
struct UCoreArchiveQuestNodeWidget : UCoreButtonWidget {
	char pad_408[0x10]; // 0x408(0x10)
	enum class ETooltipHorizontalAlignment HorizontalAlignment; // 0x418(0x01)
	enum class ETooltipVerticalAlignment VerticalAlignment; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct UDBDImage* Icon; // 0x420(0x08)
	struct UOverlay* VignetteTextIndicatorOverlay; // 0x428(0x08)
	struct UOverlay* VignetteImageIndicatorOverlay; // 0x430(0x08)
	struct TMap<enum class ENodeStatusChange, struct UAkAudioEvent*> StatusChangeAudioEvents; // 0x438(0x50)
	struct FArchiveNodeViewData _nodeData; // 0x488(0xb8)
	struct FName _nodeId; // 0x540(0x0c)
	bool _isChallengeReminderNode; // 0x54c(0x01)
	bool _isDraggable; // 0x54d(0x01)
	char pad_54E[0xa]; // 0x54e(0x0a)

	void UpdateStoryIndicatorOpacity(bool IsImageReward, bool isCompleted); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateStoryIndicatorOpacity // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void UpdateNode(struct FArchiveNodeViewData& Data); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4825bc0
	void UpdateAllStoryIndicators(); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateAllStoryIndicators // (Final|Native|Protected|BlueprintCallable) // @ game+0x4825ba0
	void ShowRewardNodeTooltip(); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.ShowRewardNodeTooltip // (Final|Native|Protected|BlueprintCallable) // @ game+0x4825a60
	void SetRewardRarity(enum class EItemRarity Rarity); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.SetRewardRarity // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Reset(); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.Reset // (Final|Native|Public) // @ game+0x4825760
	void OnStatusChanged(enum class ENodeStatusChange nodeStatusChange); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnReset(); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnReset // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnInit(); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnInit // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool NeedsChallengeReminderHoverAnimation(); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.NeedsChallengeReminderHoverAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48245a0
	bool IsValidNode(); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.IsValidNode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4824520
	bool IsSelectableNode(); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.IsSelectableNode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48244e0
	void InitNode(struct FName& NodeId, struct FArchiveNodeViewData& Data, bool isChallengeReminderNode); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.InitNode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4823f90
	void HandleStatusChange(enum class EStoryNodeState prevStatus, enum class EStoryNodeState currentStatus); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.HandleStatusChange // (Final|Native|Protected|BlueprintCallable) // @ game+0x4823ec0
	void BroadcastDragBegin(); // Function DBDUIViewsCore.CoreArchiveQuestNodeWidget.BroadcastDragBegin // (Final|Native|Protected|BlueprintCallable) // @ game+0x4032ad0
};

// Class DBDUIViewsCore.CoreArchiveQuestPathWidget
// Size: 0x450 (Inherited: 0x408)
struct UCoreArchiveQuestPathWidget : UCoreButtonWidget {
	struct UOverlay* PathOverlay; // 0x408(0x08)
	struct UDBDImage* PathImage; // 0x410(0x08)
	enum class EArchivePathStatus _status; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	struct FArchiveMapPathViewData _data; // 0x41c(0x2c)
	char pad_448[0x8]; // 0x448(0x08)

	void UpdatePath(struct FArchiveMapPathViewData& Data); // Function DBDUIViewsCore.CoreArchiveQuestPathWidget.UpdatePath // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4825f20
	void SetVisualState(enum class EArchivePathStatus& pathStatus); // Function DBDUIViewsCore.CoreArchiveQuestPathWidget.SetVisualState // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void Reset(); // Function DBDUIViewsCore.CoreArchiveQuestPathWidget.Reset // (Final|Native|Public) // @ game+0x4825780
	void InitPath(struct FArchiveMapPathViewData& Data); // Function DBDUIViewsCore.CoreArchiveQuestPathWidget.InitPath // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4824390
};

// Class DBDUIViewsCore.CoreArchiveRiftTierItem
// Size: 0x2f8 (Inherited: 0x298)
struct UCoreArchiveRiftTierItem : UUserWidget {
	struct FMulticastInlineDelegate _itemClickedDelegate; // 0x298(0x10)
	struct FMulticastInlineDelegate _unlockAnimationCompleteDelegate; // 0x2a8(0x10)
	struct UGridPanel* FreeRewardsContainer; // 0x2b8(0x08)
	struct UGridPanel* PremiumRewardsContainer; // 0x2c0(0x08)
	struct TArray<struct UCoreRewardWrapperWidget*> _freeRewardWidgets; // 0x2c8(0x10)
	struct TArray<struct UCoreRewardWrapperWidget*> _premiumRewardWidgets; // 0x2d8(0x10)
	struct UAkAudioEvent* _unlockAnimationCompleteSound; // 0x2e8(0x08)
	char pad_2F0[0x8]; // 0x2f0(0x08)

	void SetLockedState(bool IsLocked, bool hasPremium); // Function DBDUIViewsCore.CoreArchiveRiftTierItem.SetLockedState // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void SetGenericData(struct FArchiveRiftTierRewardsViewData& Data); // Function DBDUIViewsCore.CoreArchiveRiftTierItem.SetGenericData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void PlayUnlockanimation(bool IsPremiumUnlocked, float Delay); // Function DBDUIViewsCore.CoreArchiveRiftTierItem.PlayUnlockanimation // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnRewardClicked(struct UCoreButtonWidget* Button); // Function DBDUIViewsCore.CoreArchiveRiftTierItem.OnRewardClicked // (Final|Native|Protected) // @ game+0x4825510
	void Clear(); // Function DBDUIViewsCore.CoreArchiveRiftTierItem.Clear // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreArchiveRiftWidget
// Size: 0x5e8 (Inherited: 0x330)
struct UCoreArchiveRiftWidget : UCoreTabContentWidget {
	char pad_330[0x8]; // 0x330(0x08)
	enum class ETooltipHorizontalAlignment HorizontalAlignment; // 0x338(0x01)
	enum class ETooltipVerticalAlignment VerticalAlignment; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)
	struct FMulticastInlineDelegate _rewardItemClickedDelegate; // 0x340(0x10)
	struct FMulticastInlineDelegate _rewardCurrencyClickedDelegate; // 0x350(0x10)
	struct FMulticastInlineDelegate _purchasePremiumPassClickedDelegate; // 0x360(0x10)
	struct FMulticastInlineDelegate _purchaseTierClickedDelegate; // 0x370(0x10)
	struct FMulticastInlineDelegate _outfitClickedDelegate; // 0x380(0x10)
	struct FMulticastInlineDelegate _bonusTierShownDelegate; // 0x390(0x10)
	struct FArchivesRiftGenericViewData _genericData; // 0x3a0(0x20)
	struct TArray<struct FArchiveRiftTierRewardsViewData> _riftTiersData; // 0x3c0(0x10)
	int32_t _currentPage; // 0x3d0(0x04)
	int32_t _maxTierItemsPerPage; // 0x3d4(0x04)
	float _animationItemDelay; // 0x3d8(0x04)
	float _animationPremiumTrackDelay; // 0x3dc(0x04)
	float _pageSwitchFadeDuration; // 0x3e0(0x04)
	enum class EEasingType _pageSwitchFadeTweenEasing; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	struct UCoreArchiveRiftTierItem* _archiveRiftTierItemClass; // 0x3e8(0x08)
	struct FText _freePurchaseButtonText; // 0x3f0(0x18)
	struct FText _freePurchaseDescriptionText; // 0x408(0x18)
	struct FText _premiumPurchaseButtonText; // 0x420(0x18)
	struct FText _premiumPurchaseDescriptionText; // 0x438(0x18)
	struct FText _maxTierText; // 0x450(0x18)
	struct FText _currentProgressInfoText; // 0x468(0x18)
	struct FCurrencyProgressionTooltipViewData _riftFragmentTooltipViewData; // 0x480(0xc0)
	struct UCoreToggleButtonWidget* OutfitButton; // 0x540(0x08)
	struct UCoreInputSwitcherWidget* PurchaseButton; // 0x548(0x08)
	struct UHorizontalBox* RewardGrid; // 0x550(0x08)
	struct UDBDRichTextBlock* TierInfoDescriptionRTB; // 0x558(0x08)
	struct UDBDTextBlock* TierInfoTopTB; // 0x560(0x08)
	struct UDBDTextBlock* TierInfoBottomTB; // 0x568(0x08)
	struct UDBDTextBlock* FreeTrackLabelTB; // 0x570(0x08)
	struct UDBDTextBlock* PremiumTrackLabelTB; // 0x578(0x08)
	struct UDBDTextBlock* PaginationTB; // 0x580(0x08)
	struct UCoreInputSwitcherWidget* PaginationPreviousButton; // 0x588(0x08)
	struct UCoreInputSwitcherWidget* PaginationNextButton; // 0x590(0x08)
	struct TArray<struct UCoreArchiveRiftTierItem*> _tierItemPool; // 0x598(0x10)
	struct UUITweenInstance* _contentVisbilityTween; // 0x5a8(0x08)
	struct UUITweenInstance* _pageSwitchVisbilityTween; // 0x5b0(0x08)
	struct UCoreSelectableButtonWidget* _currentSelectedReward; // 0x5b8(0x08)
	char pad_5C0[0x28]; // 0x5c0(0x28)

	void SetVisualData(struct FArchivesRiftGenericViewData& Data); // Function DBDUIViewsCore.CoreArchiveRiftWidget.SetVisualData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void SetTierVisuals(enum class ETierType TierType); // Function DBDUIViewsCore.CoreArchiveRiftWidget.SetTierVisuals // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SetPaginationVisuals(bool showBonusTierHighlight, struct FText& bonusTierTooltipText); // Function DBDUIViewsCore.CoreArchiveRiftWidget.SetPaginationVisuals // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void PlayPremiumTrackUnlockAnimation(); // Function DBDUIViewsCore.CoreArchiveRiftWidget.PlayPremiumTrackUnlockAnimation // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRewardItemClicked(int32_t tier, struct UCoreButtonWidget* Button, bool isPremium, int32_t index); // Function DBDUIViewsCore.CoreArchiveRiftWidget.OnRewardItemClicked // (Final|Native|Private) // @ game+0x482a400
	void OnRewardAnimationCompleted(); // Function DBDUIViewsCore.CoreArchiveRiftWidget.OnRewardAnimationCompleted // (Final|Native|Private) // @ game+0x482a3e0
	void OnPreviousButtonClicked(); // Function DBDUIViewsCore.CoreArchiveRiftWidget.OnPreviousButtonClicked // (Final|Native|Private) // @ game+0x482a3c0
	void OnOutfitButtonUnhovered(struct UCoreButtonWidget* Button); // Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonUnhovered // (Final|Native|Private) // @ game+0x482a330
	void OnOutfitButtonHovered(struct UCoreButtonWidget* Button); // Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonHovered // (Final|Native|Private) // @ game+0x482a2a0
	void OnOutfitButtonClicked(struct UCoreButtonWidget* Button); // Function DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonClicked // (Final|Native|Private) // @ game+0x482a210
	void OnNextButtonClicked(); // Function DBDUIViewsCore.CoreArchiveRiftWidget.OnNextButtonClicked // (Final|Native|Private) // @ game+0x482a1f0
	void OnCurrentPageAnimationCompleted(); // Function DBDUIViewsCore.CoreArchiveRiftWidget.OnCurrentPageAnimationCompleted // (Final|Native|Private) // @ game+0x482a0e0
	void DisplayPage(struct UUITweenInstance* tween); // Function DBDUIViewsCore.CoreArchiveRiftWidget.DisplayPage // (Final|Native|Private) // @ game+0x4829d90
};

// Class DBDUIViewsCore.CoreArchiveSlotSelectorWidget
// Size: 0x358 (Inherited: 0x310)
struct UCoreArchiveSlotSelectorWidget : UCoreBaseUserWidget {
	struct UArchiveNodeTooltipWidget* NodeTooltip; // 0x310(0x08)
	struct UCoreKeyListenerInputPromptWidget* SurvivorSlotPromptWidget; // 0x318(0x08)
	struct UCoreKeyListenerInputPromptWidget* BothSlotPromptWidget; // 0x320(0x08)
	struct UCoreKeyListenerInputPromptWidget* KillerSlotPromptWidget; // 0x328(0x08)
	struct UCoreInputSwitcherWidget* CancelPromptWidget; // 0x330(0x08)
	char pad_338[0x20]; // 0x338(0x20)

	void OnSurvivorSelection(); // Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnSurvivorSelection // (Final|Native|Private) // @ game+0x482a560
	void OnKillerSelection(); // Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnKillerSelection // (Final|Native|Private) // @ game+0x482a100
	void OnCancelSelection(); // Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnCancelSelection // (Final|Native|Private) // @ game+0x482a0a0
	void OnBothSelection(); // Function DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnBothSelection // (Final|Native|Private) // @ game+0x4829f20
};

// Class DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget
// Size: 0x4b8 (Inherited: 0x368)
struct UCoreArchiveTierPurchasePopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)
	struct UCoreInputSwitcherWidget* LessInputSwitcher; // 0x370(0x08)
	struct UCoreInputSwitcherWidget* MoreInputSwitcher; // 0x378(0x08)
	struct UDBDRichTextBlock* CurrentQuantityText; // 0x380(0x08)
	struct UDBDImage* ImageContainer; // 0x388(0x08)
	struct UOverlay* PriceContainer; // 0x390(0x08)
	struct UDBDTextBlock* PriceText; // 0x398(0x08)
	struct UDBDTextBlock* DiscountText; // 0x3a0(0x08)
	struct UDBDImage* CurrencyIcon; // 0x3a8(0x08)
	struct UCurveFloat* _quantityCurve; // 0x3b0(0x08)
	struct FText _bonusTierStyleName; // 0x3b8(0x18)
	struct TMap<enum class ECurrencyType, struct TSoftObjectPtr<UTexture2D>> _currencyIconTextures; // 0x3d0(0x50)
	struct TMap<enum class ECurrencyType, struct FSlateColor> _currencyTextColors; // 0x420(0x50)
	struct FSlateColor _unaffordablePriceColor; // 0x470(0x28)
	struct FMulticastInlineDelegate _confirmPurchaseDelegate; // 0x498(0x10)
	char pad_4A8[0x10]; // 0x4a8(0x10)

	void SetVisualData(struct UArchiveTierPurchasePopupViewData* ViewData); // Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.SetVisualData // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnMoreInputTriggered(); // Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnMoreInputTriggered // (Final|Native|Private) // @ game+0x482a1d0
	void OnLessInputTriggered(); // Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnLessInputTriggered // (Final|Native|Private) // @ game+0x482a120
	void OnConfirmPurchase(); // Function DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnConfirmPurchase // (Final|Native|Private) // @ game+0x482a0c0
};

// Class DBDUIViewsCore.CoreArchiveTomeWidget
// Size: 0x378 (Inherited: 0x330)
struct UCoreArchiveTomeWidget : UCoreTabContentWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct UCoreArchiveQuestEditorWidget* _archiveQuestEditorWidgetClass; // 0x338(0x08)
	struct UCoreArchiveQuestEditorWidget* _archiveQuestEditorWidget; // 0x340(0x08)
	struct UCoreTabContainerWidget* ArchiveTomeSideNav; // 0x348(0x08)
	struct UWidgetSwitcher* EditorSwitcher; // 0x350(0x08)
	struct FMulticastInlineDelegate MenuTabSelectedDelegate; // 0x358(0x10)
	struct FMulticastInlineDelegate _editorSwitchCompleteDelegate; // 0x368(0x10)

	void OnMenuTabSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreArchiveTomeWidget.OnMenuTabSelected // (Final|Native|Protected) // @ game+0x482a140
};

// Class DBDUIViewsCore.CoreButtonSelector
// Size: 0x360 (Inherited: 0x310)
struct UCoreButtonSelector : UCoreBaseUserWidget {
	struct FMulticastInlineDelegate OnSelectedDelegate; // 0x310(0x10)
	struct FMulticastInlineDelegate OnSelectedAgainDelegate; // 0x320(0x10)
	struct FMulticastInlineDelegate OnUnselectedDelegate; // 0x330(0x10)
	struct TArray<struct UCoreSelectableButtonWidget*> _buttons; // 0x340(0x10)
	char pad_350[0x10]; // 0x350(0x10)

	void UnselectCurrent(); // Function DBDUIViewsCore.CoreButtonSelector.UnselectCurrent // (Final|Native|Public|BlueprintCallable) // @ game+0x482b180
	void SetInputsEnabled(bool Enabled); // Function DBDUIViewsCore.CoreButtonSelector.SetInputsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x482ad50
	void SetAllEnabled(bool Enabled); // Function DBDUIViewsCore.CoreButtonSelector.SetAllEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x482a9b0
	bool SelectPrevious(); // Function DBDUIViewsCore.CoreButtonSelector.SelectPrevious // (Final|Native|Public|BlueprintCallable) // @ game+0x482a980
	bool SelectNext(); // Function DBDUIViewsCore.CoreButtonSelector.SelectNext // (Final|Native|Public|BlueprintCallable) // @ game+0x482a950
	bool Select(struct UCoreSelectableButtonWidget* buttonToSelect, bool performAction); // Function DBDUIViewsCore.CoreButtonSelector.Select // (Final|Native|Public|BlueprintCallable) // @ game+0x482a880
	void OnUnselectedDelegate__DelegateSignature(struct UCoreSelectableButtonWidget* unselectedButton); // DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnUnselectedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnSelectedDelegate__DelegateSignature(struct UCoreSelectableButtonWidget* selectedButton); // DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnSelectedAgainDelegate__DelegateSignature(struct UCoreSelectableButtonWidget* selectedButton); // DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedAgainDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnButtonSelectedChanged(struct UCoreSelectableButtonWidget* selectedButton, bool IsSelected); // Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedChanged // (Final|Native|Private) // @ game+0x4829fd0
	void OnButtonSelectedAgain(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedAgain // (Final|Native|Private) // @ game+0x4829f40
	bool HasSelection(); // Function DBDUIViewsCore.CoreButtonSelector.HasSelection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4829ef0
};

// Class DBDUIViewsCore.CoreTabContainerWidget
// Size: 0x398 (Inherited: 0x360)
struct UCoreTabContainerWidget : UCoreButtonSelector {
	struct UAkAudioEvent* InputPromptTriggeredSfx; // 0x360(0x08)
	bool AlignHorizontally; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	struct FMargin TabPadding; // 0x36c(0x10)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UCoreTabWidget* CoreTabClass; // 0x380(0x08)
	struct UGridPanel* TabContainer; // 0x388(0x08)
	bool UseControllerTabSwitching; // 0x390(0x01)
	bool CanLoop; // 0x391(0x01)
	bool FillContainerSpace; // 0x392(0x01)
	bool SendAnalyticsData; // 0x393(0x01)
	char pad_394[0x4]; // 0x394(0x04)

	void UpdateBackgroundSkin(int32_t Key, struct UMaterialInterface* skinMaterial); // Function DBDUIViewsCore.CoreTabContainerWidget.UpdateBackgroundSkin // (Final|Native|Public|BlueprintCallable) // @ game+0x4846480
	void SetUseControllerTabSwitching(bool Enabled); // Function DBDUIViewsCore.CoreTabContainerWidget.SetUseControllerTabSwitching // (Final|Native|Public|BlueprintCallable) // @ game+0x4846370
	void SetUiTakeoverActive(bool IsActive); // Function DBDUIViewsCore.CoreTabContainerWidget.SetUiTakeoverActive // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48462c0
	void SetTabVisible(int32_t Key, bool visible); // Function DBDUIViewsCore.CoreTabContainerWidget.SetTabVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x48461f0
	void SetTabEnabled(int32_t Key, bool Enabled); // Function DBDUIViewsCore.CoreTabContainerWidget.SetTabEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4846120
	void SetNotificationVisibility(int32_t Key, bool HasNotification); // Function DBDUIViewsCore.CoreTabContainerWidget.SetNotificationVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x4845c40
	void RemoveTabs(); // Function DBDUIViewsCore.CoreTabContainerWidget.RemoveTabs // (Final|Native|Public|BlueprintCallable) // @ game+0x48455b0
	void OnTabSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreTabContainerWidget.OnTabSelected // (Final|Native|Private) // @ game+0x4845520
	void LayOutTabs(); // Function DBDUIViewsCore.CoreTabContainerWidget.LayOutTabs // (Final|Native|Public|BlueprintCallable) // @ game+0x4845450
	void Init(struct TArray<struct FTabWidgetData>& tabsData); // Function DBDUIViewsCore.CoreTabContainerWidget.Init // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48452e0
	struct UCoreTabWidget* GetTab(int32_t Key); // Function DBDUIViewsCore.CoreTabContainerWidget.GetTab // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4845240
};

// Class DBDUIViewsCore.CoreArchiveVignetteButtonContainerWidget
// Size: 0x398 (Inherited: 0x398)
struct UCoreArchiveVignetteButtonContainerWidget : UCoreTabContainerWidget {
};

// Class DBDUIViewsCore.CoreTabWidget
// Size: 0x478 (Inherited: 0x440)
struct UCoreTabWidget : UCoreSelectableButtonWidget {
	struct UDBDTextBlock* TabTextField; // 0x440(0x08)
	struct UDBDImage* TabImage; // 0x448(0x08)
	struct UWidget* NotificationWidget; // 0x450(0x08)
	struct FText LabelTooltipText; // 0x458(0x18)
	char pad_470[0x8]; // 0x470(0x08)

	void SetNotificationVisibility(bool HasNotification); // Function DBDUIViewsCore.CoreTabWidget.SetNotificationVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x484bc00
	void SetIconTexture(struct UTexture2D* iconTexture, struct FVector2D forcedIconSize); // Function DBDUIViewsCore.CoreTabWidget.SetIconTexture // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x484b950
	void SetIconSoftTexture(struct TSoftObjectPtr<UTexture2D> iconTexture, struct FVector2D forcedIconSize); // Function DBDUIViewsCore.CoreTabWidget.SetIconSoftTexture // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x484b800
	void PostInit(); // Function DBDUIViewsCore.CoreTabWidget.PostInit // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	bool HasLabelTooltip(); // Function DBDUIViewsCore.CoreTabWidget.HasLabelTooltip // (Final|Native|Public|BlueprintCallable) // @ game+0x484a7e0
	struct FText GetTabText(); // Function DBDUIViewsCore.CoreTabWidget.GetTabText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x484a640
	int32_t GetKey(); // Function DBDUIViewsCore.CoreTabWidget.GetKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x484a620
};

// Class DBDUIViewsCore.CoreArchiveVignetteButtonWidget
// Size: 0x4f0 (Inherited: 0x478)
struct UCoreArchiveVignetteButtonWidget : UCoreTabWidget {
	char pad_478[0x70]; // 0x478(0x70)
	int32_t _subtitleMaxLength; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)

	void SetVisualData(struct FText& vignetteTitle, struct FText& vignetteSubtitle, struct FText& vignetteProgressText, bool displayProgress, float vignetteProgress, bool isUnread, struct FText& unreadIndicatorText, bool showCinematics, bool lockCinematics); // Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetVisualData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void SetVignetteRead(bool IsRead); // Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetVignetteRead // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SetData(struct FArchivesVignetteViewData& vignetteDataList); // Function DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x482aa40
};

// Class DBDUIViewsCore.CoreArchiveVignetteCinematicButton
// Size: 0x480 (Inherited: 0x478)
struct UCoreArchiveVignetteCinematicButton : UCoreTabWidget {
	bool isForceDisabled; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)

	void UnlockCinematic(); // Function DBDUIViewsCore.CoreArchiveVignetteCinematicButton.UnlockCinematic // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetIsForceDisabled(bool isForceDisabled); // Function DBDUIViewsCore.CoreArchiveVignetteCinematicButton.SetIsForceDisabled // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreArchiveVignetteCinematicContainerWidget
// Size: 0x398 (Inherited: 0x398)
struct UCoreArchiveVignetteCinematicContainerWidget : UCoreTabContainerWidget {

	void UnlockCinematics(); // Function DBDUIViewsCore.CoreArchiveVignetteCinematicContainerWidget.UnlockCinematics // (Final|Native|Public) // @ game+0x482b160
};

// Class DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget
// Size: 0x4a0 (Inherited: 0x478)
struct UCoreArchiveVignetteEntryButtonWidget : UCoreTabWidget {
	struct UTexture2D* TextIconLocked; // 0x478(0x08)
	struct UTexture2D* TextIconUnlocked; // 0x480(0x08)
	struct UTexture2D* ImageIconLocked; // 0x488(0x08)
	struct UTexture2D* ImageIconUnlocked; // 0x490(0x08)
	char pad_498[0x8]; // 0x498(0x08)

	void UnlockEntry(); // Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.UnlockEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetVisualData(int32_t entryNumber, bool IsRead, struct FText& unreadIndicatorText, bool isImage); // Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.SetVisualData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetData(int32_t entryNumber, bool IsRead, bool isImage); // Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.SetData // (Final|Native|Public|BlueprintCallable) // @ game+0x482ac40
	int32_t GetEntryNumber(); // Function DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.GetEntryNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4829ed0
};

// Class DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget
// Size: 0x3d8 (Inherited: 0x398)
struct UCoreArchiveVignetteEntryContainerWidget : UCoreTabContainerWidget {
	char pad_398[0x20]; // 0x398(0x20)
	struct UProgressBar* JournalProgressBar; // 0x3b8(0x08)
	enum class EEasingType AnimationEasing; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	float ProgressAnimationDuration; // 0x3c4(0x04)
	char pad_3C8[0x10]; // 0x3c8(0x10)

	void OnUnlockProgress(struct UUITweenInstance* tween); // Function DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget.OnUnlockProgress // (Final|Native|Public) // @ game+0x482a610
	void OnUnlockComplete(struct UUITweenInstance* tween); // Function DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget.OnUnlockComplete // (Final|Native|Public) // @ game+0x482a580
};

// Class DBDUIViewsCore.CoreBaseHudWidget
// Size: 0x328 (Inherited: 0x310)
struct UCoreBaseHudWidget : UCoreBaseUserWidget {
	float FocusAnimationDuration; // 0x310(0x04)
	float FocusAnimationDelay; // 0x314(0x04)
	enum class EEasingType FocusAnimationEasing; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float FocusAnimationMaxOpacity; // 0x31c(0x04)
	float FocusAnimationMinOpacity; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)

	bool ShouldPlayFocusAnimation(); // Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x482b080
	void PlayFocusAnimation(); // Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x482a840
};

// Class DBDUIViewsCore.CoreBinkVideoPlayerWidget
// Size: 0x330 (Inherited: 0x310)
struct UCoreBinkVideoPlayerWidget : UCoreBaseUserWidget {
	struct UDBDImage* VideoBinkBG; // 0x310(0x08)
	struct USizeBox* VideoBinkSizeBox; // 0x318(0x08)
	struct UScaleBox* VideoBinkScaleBox; // 0x320(0x08)
	struct UImage* VideoBinkImage; // 0x328(0x08)

	void SetSize(struct FVector2D Size); // Function DBDUIViewsCore.CoreBinkVideoPlayerWidget.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x482b000
};

// Class DBDUIViewsCore.CoreChallengeTrackerWidget
// Size: 0x390 (Inherited: 0x328)
struct UCoreChallengeTrackerWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct FMulticastInlineDelegate _onWidgetOpeningDone; // 0x330(0x10)
	struct FMulticastInlineDelegate _onWidgetClosingDone; // 0x340(0x10)
	struct FMulticastInlineDelegate _onWidgetProgressionDone; // 0x350(0x10)
	struct UAkAudioEvent* OpenSfx; // 0x360(0x08)
	struct UAkAudioEvent* CloseSfx; // 0x368(0x08)
	struct UAkAudioEvent* ProgressionSfx; // 0x370(0x08)
	struct UAkAudioEvent* CompleteSfx; // 0x378(0x08)
	struct FName ProgressionAudioRTPC; // 0x380(0x0c)
	char pad_38C[0x4]; // 0x38c(0x04)
};

// Class DBDUIViewsCore.CoreRewardWidget
// Size: 0x460 (Inherited: 0x440)
struct UCoreRewardWidget : UCoreSelectableButtonWidget {
	struct UDBDImage* RewardIcon; // 0x440(0x08)
	struct UScaleBox* LayoutScale; // 0x448(0x08)
	struct UCoreLockedOverlayWidget* LockedOverlay; // 0x450(0x08)
	struct UCoreOnHoverBorderWidget* OnHoverBorder; // 0x458(0x08)

	void SetSmallTemplate(bool useSmallTemplate); // Function DBDUIViewsCore.CoreRewardWidget.SetSmallTemplate // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetRewardScale(float Scale); // Function DBDUIViewsCore.CoreRewardWidget.SetRewardScale // (Final|Native|Public|BlueprintCallable) // @ game+0x4845dd0
	void SetRewardData(struct FRewardViewData& RewardData); // Function DBDUIViewsCore.CoreRewardWidget.SetRewardData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4845d10
	void SetIsLocked(bool IsLocked, bool useAnimation); // Function DBDUIViewsCore.CoreRewardWidget.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x4845aa0
	void ClearData(); // Function DBDUIViewsCore.CoreRewardWidget.ClearData // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreCharacterRewardWidget
// Size: 0x460 (Inherited: 0x460)
struct UCoreCharacterRewardWidget : UCoreRewardWidget {

	void SetCharacterRewardData(struct FCharacterRewardViewData& CharacterRewardViewData); // Function DBDUIViewsCore.CoreCharacterRewardWidget.SetCharacterRewardData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4830a80
};

// Class DBDUIViewsCore.CoreCreditsWidget
// Size: 0x348 (Inherited: 0x310)
struct UCoreCreditsWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	float ScrollSpeed; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UCoreInputSwitcherWidget* BackInputSwitcher; // 0x320(0x08)
	struct UDBDRichTextBlock* CreditsTextBlock; // 0x328(0x08)
	struct FMulticastInlineDelegate _backActionDelegate; // 0x330(0x10)
	struct UUITweenInstance* _tween; // 0x340(0x08)

	void ScrollText(); // Function DBDUIViewsCore.CoreCreditsWidget.ScrollText // (Final|Native|Private) // @ game+0x48307c0
	void OnScrollEnd(struct UUITweenInstance* tween); // Function DBDUIViewsCore.CoreCreditsWidget.OnScrollEnd // (Final|Native|Private) // @ game+0x4830730
};

// Class DBDUIViewsCore.CoreKeyListenerButtonWidget
// Size: 0x440 (Inherited: 0x408)
struct UCoreKeyListenerButtonWidget : UCoreButtonWidget {
	bool IsKeyboardLabelVisible; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UDBDTextBlock* InputNameTB; // 0x410(0x08)
	char pad_418[0x28]; // 0x418(0x28)

	void SetUIAction(enum class EUIActionType ActionType); // Function DBDUIViewsCore.CoreKeyListenerButtonWidget.SetUIAction // (Final|Native|Public|BlueprintCallable) // @ game+0x483c7c0
	void SetKeyOverride(struct FKey keyOverride); // Function DBDUIViewsCore.CoreKeyListenerButtonWidget.SetKeyOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x483bd00
};

// Class DBDUIViewsCore.CoreCurrencyButtonWidget
// Size: 0x448 (Inherited: 0x440)
struct UCoreCurrencyButtonWidget : UCoreKeyListenerButtonWidget {
	struct UCorePriceTagWidget* PriceTag; // 0x440(0x08)

	void SetCurrencyData(struct FPriceTagViewData& CurrencyData); // Function DBDUIViewsCore.CoreCurrencyButtonWidget.SetCurrencyData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4830ce0
};

// Class DBDUIViewsCore.CoreCurrencyExpirationLabelWidget
// Size: 0x310 (Inherited: 0x310)
struct UCoreCurrencyExpirationLabelWidget : UCoreBaseUserWidget {

	void SetData(struct FCurrencyExpirationLabelViewData& ViewData); // Function DBDUIViewsCore.CoreCurrencyExpirationLabelWidget.SetData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreCurrencyForTooltipsWidget
// Size: 0x310 (Inherited: 0x310)
struct UCoreCurrencyForTooltipsWidget : UCoreBaseUserWidget {

	void SetData(struct FCurrencyProgressionRewardViewData& currencyRewardViewData); // Function DBDUIViewsCore.CoreCurrencyForTooltipsWidget.SetData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreCurrencyLabelWidget
// Size: 0x408 (Inherited: 0x408)
struct UCoreCurrencyLabelWidget : UCoreButtonWidget {

	void UpdateCurrency(int32_t newBalance, int32_t previousBalance); // Function DBDUIViewsCore.CoreCurrencyLabelWidget.UpdateCurrency // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void SetData(struct FCurrencyLabelViewData& ViewData); // Function DBDUIViewsCore.CoreCurrencyLabelWidget.SetData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void PlayNotEnoughCurrency(); // Function DBDUIViewsCore.CoreCurrencyLabelWidget.PlayNotEnoughCurrency // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreCurrencyProgressionRewardWidget
// Size: 0x460 (Inherited: 0x460)
struct UCoreCurrencyProgressionRewardWidget : UCoreRewardWidget {

	void SetCurrencyProgressionRewardData(struct FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData); // Function DBDUIViewsCore.CoreCurrencyProgressionRewardWidget.SetCurrencyProgressionRewardData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4830ef0
};

// Class DBDUIViewsCore.CoreKeyListenerInputPromptWidget
// Size: 0x368 (Inherited: 0x310)
struct UCoreKeyListenerInputPromptWidget : UCoreBaseUserWidget {
	struct FString ClickedSfxName; // 0x310(0x10)
	struct UAkAudioEvent* ClickedSfx; // 0x320(0x08)
	struct UCoreInputPromptWidget* InputPrompt; // 0x328(0x08)
	struct UDBDTextBlock* LabelTB; // 0x330(0x08)
	struct UDBDImage* AdditionalIconIMG; // 0x338(0x08)
	struct FMulticastInlineDelegate _onKeyListenerInputPromptTriggeredDelegate; // 0x340(0x10)
	char pad_350[0x18]; // 0x350(0x18)

	void SetUIAction(enum class EUIActionType ActionType); // Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetUIAction // (Final|Native|Public|BlueprintCallable) // @ game+0x483c840
	void SetRepeatable(bool isRepeatable, struct UCurveFloat* repetitionDelayCurve); // Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetRepeatable // (Final|Native|Public|BlueprintCallable) // @ game+0x483c660
	void SetLabel(struct FText& label); // Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetLabel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483bee0
	void SetKeyOverride(struct FKey keyOverride); // Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetKeyOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x483bdf0
	void SetEnabled(bool IsEnabled); // Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x483b8a0
	void SetAdditionalIcon(struct TSoftObjectPtr<UTexture2D> iconTexture); // Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetAdditionalIcon // (Final|Native|Public|BlueprintCallable) // @ game+0x483b6e0
	void OnEnabledChanged(bool IsEnabled); // Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.OnEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool IsEnabled(); // Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x483b550
};

// Class DBDUIViewsCore.CoreCurrencyPromptWidget
// Size: 0x370 (Inherited: 0x368)
struct UCoreCurrencyPromptWidget : UCoreKeyListenerInputPromptWidget {
	struct UCorePriceTagWidget* PriceTag; // 0x368(0x08)

	void SetCurrencyData(struct FPriceTagViewData& CurrencyData); // Function DBDUIViewsCore.CoreCurrencyPromptWidget.SetCurrencyData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4830d90
};

// Class DBDUIViewsCore.CoreInputSwitcherWidget
// Size: 0x3a0 (Inherited: 0x310)
struct UCoreInputSwitcherWidget : UCoreBaseUserWidget {
	enum class EInputSwitcherDisplayRule ButtonDisplayRule; // 0x310(0x01)
	enum class EInputSwitcherDisplayRule InputPromptDisplayRule; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
	struct FString ButtonPressedSfxName; // 0x318(0x10)
	struct UAkAudioEvent* ButtonPressedSfx; // 0x328(0x08)
	struct FString ButtonHoveredSfxName; // 0x330(0x10)
	struct UAkAudioEvent* ButtonHoveredSfx; // 0x340(0x08)
	struct FString InputTriggeredSfxName; // 0x348(0x10)
	struct UAkAudioEvent* InputTriggeredSfx; // 0x358(0x08)
	struct UCoreKeyListenerInputPromptWidget* InputPrompt; // 0x360(0x08)
	struct UCoreButtonWidget* Button; // 0x368(0x08)
	bool _shouldRegisterForInputInConstruct; // 0x370(0x01)
	enum class ETextJustify _alignment; // 0x371(0x01)
	bool _isEnabled; // 0x372(0x01)
	char pad_373[0x5]; // 0x373(0x05)
	struct FMulticastInlineDelegate _onInputSwitcherTriggeredDelegate; // 0x378(0x10)
	char pad_388[0x1]; // 0x388(0x01)
	bool SendAnalyticsData; // 0x389(0x01)
	char pad_38A[0x6]; // 0x38a(0x06)
	struct FString AnalyticsName; // 0x390(0x10)

	void SetUIAction(enum class EUIActionType ActionType); // Function DBDUIViewsCore.CoreInputSwitcherWidget.SetUIAction // (Final|Native|Public|BlueprintCallable) // @ game+0x4836d20
	void SetRepeatable(bool isRepeatable, struct UCurveFloat* repetitionDelayCurve); // Function DBDUIViewsCore.CoreInputSwitcherWidget.SetRepeatable // (Final|Native|Public|BlueprintCallable) // @ game+0x4836ac0
	void SetLabel(struct FText& label); // Function DBDUIViewsCore.CoreInputSwitcherWidget.SetLabel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48369f0
	void SetKeyOverride(struct FKey keyOverride); // Function DBDUIViewsCore.CoreInputSwitcherWidget.SetKeyOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x4836900
	void SetEnabled(bool IsEnabled); // Function DBDUIViewsCore.CoreInputSwitcherWidget.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4836720
	void SetBackground(struct TSoftObjectPtr<UMaterialInstance> backgroundMaterial); // Function DBDUIViewsCore.CoreInputSwitcherWidget.SetBackground // (Final|Native|Public|BlueprintCallable) // @ game+0x4836410
	void SetAlignment(enum class ETextJustify newAlignment); // Function DBDUIViewsCore.CoreInputSwitcherWidget.SetAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4836390
	void SetAdditionalIcon(struct TSoftObjectPtr<UTexture2D> iconTexture); // Function DBDUIViewsCore.CoreInputSwitcherWidget.SetAdditionalIcon // (Final|Native|Public|BlueprintCallable) // @ game+0x4836280
	void OnInputPromptTriggered(); // Function DBDUIViewsCore.CoreInputSwitcherWidget.OnInputPromptTriggered // (Final|Native|Private) // @ game+0x4835d50
	void OnButtonClicked(struct UCoreButtonWidget* Target); // Function DBDUIViewsCore.CoreInputSwitcherWidget.OnButtonClicked // (Final|Native|Private) // @ game+0x4835b10
	void OnAlignmentChanged(enum class ETextJustify newAlignment); // Function DBDUIViewsCore.CoreInputSwitcherWidget.OnAlignmentChanged // (Native|Event|Protected|BlueprintEvent) // @ game+0x4835a90
	struct UCoreKeyListenerInputPromptWidget* GetInputPrompt(); // Function DBDUIViewsCore.CoreInputSwitcherWidget.GetInputPrompt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48357a0
	struct UCoreButtonWidget* GetButton(); // Function DBDUIViewsCore.CoreInputSwitcherWidget.GetButton // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4835690
};

// Class DBDUIViewsCore.CoreCurrencySwitcherWidget
// Size: 0x3a0 (Inherited: 0x3a0)
struct UCoreCurrencySwitcherWidget : UCoreInputSwitcherWidget {

	void SetCurrencyData(struct FPriceTagViewData& CurrencyData); // Function DBDUIViewsCore.CoreCurrencySwitcherWidget.SetCurrencyData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4830e40
};

// Class DBDUIViewsCore.CoreCustomizationRewardWidget
// Size: 0x618 (Inherited: 0x460)
struct UCoreCustomizationRewardWidget : UCoreRewardWidget {
	struct FMargin _priceTagPadding; // 0x460(0x10)
	struct UCorePriceTagWidget* PriceTagWidgetClass; // 0x470(0x08)
	struct UDBDImage* RarityIMG; // 0x478(0x08)
	struct UDBDImage* EventPointsImage; // 0x480(0x08)
	struct UDBDImage* CheckmarkImage; // 0x488(0x08)
	struct UVerticalBox* PriceTagsVerticalBox; // 0x490(0x08)
	struct FCustomizationRewardViewData _data; // 0x498(0x180)

	void SetVisibleCurrencies(struct TArray<enum class ECurrencyType> visibleCurrencyTypes); // Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetVisibleCurrencies // (Final|Native|Public|BlueprintCallable) // @ game+0x48315f0
	void SetRarity(enum class EItemRarity Rarity); // Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetRarity // (Final|Native|Public|BlueprintCallable) // @ game+0x4831420
	void SetOwnedText(struct FText& ownedText); // Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetOwnedText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetMilestoneTrackerOwnedVisuals(bool IsOwned, bool useAnimation); // Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetMilestoneTrackerOwnedVisuals // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetCustomizationRewardData(struct FCustomizationRewardViewData& CustomizationRewardViewData); // Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetCustomizationRewardData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4831010
	void DisplayEventPointIcon(bool Show); // Function DBDUIViewsCore.CoreCustomizationRewardWidget.DisplayEventPointIcon // (Final|Native|Public|BlueprintCallable) // @ game+0x48303c0
};

// Class DBDUIViewsCore.CoreDisplayStandWidget
// Size: 0x330 (Inherited: 0x310)
struct UCoreDisplayStandWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	struct FMulticastInlineDelegate _displayStandRotationDelegate; // 0x318(0x10)
	struct UDragZone* DragZone; // 0x328(0x08)

	void OnDrag(struct FVector2D cursorDelta); // Function DBDUIViewsCore.CoreDisplayStandWidget.OnDrag // (Final|Native|Protected|HasDefaults) // @ game+0x4830610
};

// Class DBDUIViewsCore.CoreEndGameCollapseBarWidget
// Size: 0x3a0 (Inherited: 0x328)
struct UCoreEndGameCollapseBarWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	float _progressBarInterpSpeed; // 0x330(0x04)
	char pad_334[0x6c]; // 0x334(0x6c)

	void UpdateBarProgression(float Progress); // Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void PlayToZeroAnimation(); // Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget
// Size: 0x358 (Inherited: 0x310)
struct UCoreEndGameCollapseProgressWidget : UCoreBaseUserWidget {
	struct UProgressBar* ProgressBar; // 0x310(0x08)
	struct UCanvasPanel* MarkerLeftCanvas; // 0x318(0x08)
	struct UCanvasPanel* MarkerRightCanvas; // 0x320(0x08)
	struct UHorizontalBoxSlot* _markerLeftBox; // 0x328(0x08)
	struct UHorizontalBoxSlot* _markerRightBox; // 0x330(0x08)
	char pad_338[0x20]; // 0x338(0x20)
};

// Class DBDUIViewsCore.CoreEquippedItemWidget
// Size: 0x338 (Inherited: 0x328)
struct UCoreEquippedItemWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct UAkAudioEvent* ItemDisappearSfx; // 0x330(0x08)
};

// Class DBDUIViewsCore.CoreEquippedPowerWidget
// Size: 0x330 (Inherited: 0x328)
struct UCoreEquippedPowerWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
};

// Class DBDUIViewsCore.CoreExampleWidget
// Size: 0x3c0 (Inherited: 0x328)
struct UCoreExampleWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct FString EditAnywhere; // 0x330(0x10)
	struct FString EditDefaultsOnly; // 0x340(0x10)
	struct FString EditInstanceOnly; // 0x350(0x10)
	struct FString EditNoBlueprint; // 0x360(0x10)
	struct FString EditDefaultsOnlyBlueprintReadOnly; // 0x370(0x10)
	struct FString VisibleAnywhere; // 0x380(0x10)
	struct FString VisibleDefaultsOnly; // 0x390(0x10)
	struct FString VisibleInstanceOnly; // 0x3a0(0x10)
	struct FMulticastInlineDelegate ExampleButtonClickDelegate; // 0x3b0(0x10)
};

// Class DBDUIViewsCore.CoreExternalEffectsWidget
// Size: 0x5a0 (Inherited: 0x328)
struct UCoreExternalEffectsWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct FVector2D GridSlotSize; // 0x330(0x08)
	float AddonScaleRatio; // 0x338(0x04)
	int32_t SpacingBetweenRows; // 0x33c(0x04)
	int32_t SpacingPerks; // 0x340(0x04)
	int32_t SpacingAddons; // 0x344(0x04)
	int32_t SpacingBetweenPerksAndAddons; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UCorePerkWidget* PerkWidgetClass; // 0x350(0x08)
	struct UCoreAddonWidget* AddonWidgetClass; // 0x358(0x08)
	struct UGridPanel* Container; // 0x360(0x08)
	char pad_368[0x8]; // 0x368(0x08)
	struct TArray<struct FPerkViewData> _perkData; // 0x370(0x10)
	struct TMap<struct FName, struct UCorePerkWidget*> _perkWidgets; // 0x380(0x50)
	struct TArray<struct UCorePerkWidget*> _perkPool; // 0x3d0(0x10)
	struct TMap<struct FName, struct TScriptInterface<IPerkViewInterface>> _perkViewInterfaces; // 0x3e0(0x50)
	struct TArray<struct FAddonViewData> _addonData; // 0x430(0x10)
	struct TMap<struct FName, struct UCoreAddonWidget*> _addonWidgets; // 0x440(0x50)
	struct TArray<struct UCoreAddonWidget*> _addonPool; // 0x490(0x10)
	struct TMap<struct FName, struct TScriptInterface<IAddonViewInterface>> _addonViewInterfaces; // 0x4a0(0x50)
	struct TMap<struct FName, struct FTimerHandle> _timerHandleMap; // 0x4f0(0x50)
	struct TMap<struct FName, struct USpacer*> _spacerWidgets; // 0x540(0x50)
	struct TArray<struct USpacer*> _spacerPool; // 0x590(0x10)

	void HideExternalPerk_Implementation(struct FName ItemId); // Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk_Implementation // (Native|Public) // @ game+0x4830540
	void HideExternalAddon_Implementation(struct FName ItemId); // Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon_Implementation // (Native|Public) // @ game+0x4830490
};

// Class DBDUIViewsCore.CoreFearMarketWidget
// Size: 0x398 (Inherited: 0x368)
struct UCoreFearMarketWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)
	struct UCoreMenuPerkWidget* MenuPerk; // 0x370(0x08)
	struct UHorizontalBox* BloodpointsRewardContainer; // 0x378(0x08)
	struct UDBDTextBlock* BloodpointsValueTB; // 0x380(0x08)
	struct UDBDTextBlock* CostTextTB; // 0x388(0x08)
	struct UDBDTextBlock* AvailableTextTB; // 0x390(0x08)
};

// Class DBDUIViewsCore.CoreFooterButtonWidget
// Size: 0x448 (Inherited: 0x408)
struct UCoreFooterButtonWidget : UCoreButtonWidget {
	struct UDBDImage* IconIMG; // 0x408(0x08)
	struct FLinearColor _hoveredColor; // 0x410(0x10)
	struct FLinearColor _unhoveredColor; // 0x420(0x10)
	struct FText _tooltipLabelText; // 0x430(0x18)

	void SetUnhoveredColor(); // Function DBDUIViewsCore.CoreFooterButtonWidget.SetUnhoveredColor // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetHoveredColor(); // Function DBDUIViewsCore.CoreFooterButtonWidget.SetHoveredColor // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreFooterInputSwitcherWidget
// Size: 0x3a8 (Inherited: 0x3a0)
struct UCoreFooterInputSwitcherWidget : UCoreInputSwitcherWidget {
	struct UTexture2D* _iconTexture; // 0x3a0(0x08)
};

// Class DBDUIViewsCore.CoreGameManualCategoryButton
// Size: 0x438 (Inherited: 0x408)
struct UCoreGameManualCategoryButton : UCoreButtonWidget {
	struct UDBDTextBlock* Title; // 0x408(0x08)
	struct UDBDTextBlock* Description; // 0x410(0x08)
	struct UDBDImage* Icon; // 0x418(0x08)
	struct UDBDImage* Background; // 0x420(0x08)
	struct UTexture2D* iconTexture; // 0x428(0x08)
	struct UTexture2D* BackgroundTexture; // 0x430(0x08)

	void SetText(struct FText Title, struct FText Description); // Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x4836b90
};

// Class DBDUIViewsCore.CoreGameManualPanelWidget
// Size: 0x3e8 (Inherited: 0x310)
struct UCoreGameManualPanelWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	enum class EGameManualMenuState _currentSelectedManualMenu; // 0x318(0x01)
	enum class EHelpType _currentGameManualTopic; // 0x319(0x01)
	char pad_31A[0x6]; // 0x31a(0x06)
	struct UPanelWidget* CategoryPanel; // 0x320(0x08)
	struct UCoreGameManualCategoryButton* GameCategoryButton; // 0x328(0x08)
	struct UCoreGameManualCategoryButton* SurvivorCategoryButton; // 0x330(0x08)
	struct UCoreGameManualCategoryButton* KillerCategoryButton; // 0x338(0x08)
	struct UPanelWidget* TopicsPanel; // 0x340(0x08)
	struct UCoreTabContainerWidget* GameManualTopicsTabs; // 0x348(0x08)
	struct UDBDTextBlock* GameManualContentTitle; // 0x350(0x08)
	struct UDBDTextBlock* GameManualContentSubtitle; // 0x358(0x08)
	struct UDBDRichTextBlock* GameManualContentText; // 0x360(0x08)
	struct FMulticastInlineDelegate _onSetOnboardingMenuSubtitleDelegate; // 0x368(0x10)
	struct FMulticastInlineDelegate _onResetOnboardingMenuSubtitleDelegate; // 0x378(0x10)
	char pad_388[0x60]; // 0x388(0x60)

	void ToggleGameManualMenuState(); // Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState // (Final|Native|Private|BlueprintCallable) // @ game+0x4836e20
	void ShowHelpTopics(enum class EHelpType categoryType); // Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics // (Final|Native|Private|BlueprintCallable) // @ game+0x4836da0
	void SetGameManualMenuState(enum class EGameManualMenuState menuState); // Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState // (Final|Native|Private|BlueprintCallable) // @ game+0x48367b0
	void SetCurrentOnbardingMenuSubtitle(); // Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle // (Final|Native|Private|BlueprintCallable) // @ game+0x4836520
	void ResetScrolls(bool resetTopicsScroll); // Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnTopicsTabSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicsTabSelected // (Final|Native|Private) // @ game+0x48361b0
};

// Class DBDUIViewsCore.CoreGenericRefreshingPopupWidget
// Size: 0x378 (Inherited: 0x368)
struct UCoreGenericRefreshingPopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x10]; // 0x368(0x10)
};

// Class DBDUIViewsCore.CoreGenericTextInputPopupWidget
// Size: 0x3d0 (Inherited: 0x368)
struct UCoreGenericTextInputPopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x40]; // 0x368(0x40)
	struct UEditableTextBox* InputTextBox; // 0x3a8(0x08)
	struct UDBDScrollBox* MessageScrollBox; // 0x3b0(0x08)
	struct UDBDImage* ErrorIcon; // 0x3b8(0x08)
	struct UDBDRichTextBlock* ErrorMessageTextBlock; // 0x3c0(0x08)
	struct UDBDButton* KeyboardButton; // 0x3c8(0x08)

	void OnTextInputChoiceSelected(enum class EPopupButtonType selectedButtonType, struct FString inputText); // Function DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnTextInputChoiceSelected // (Native|Public|BlueprintCallable) // @ game+0x48360c0
	void OnTextEntered(enum class EPopupButtonType selectedButtonType, struct FString inputText); // Function DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnTextEntered // (Native|Protected|BlueprintCallable) // @ game+0x4835fd0
	void OnTextCommitted(struct FText& InText, enum class ETextCommit inCommitType); // Function DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnTextCommitted // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x4835eb0
	void OnKeyboardButtonClicked(); // Function DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnKeyboardButtonClicked // (Final|Native|Protected) // @ game+0x4835e00
	void OnButtonUnhovered(struct UCoreButtonWidget* Button); // Function DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnButtonUnhovered // (Final|Native|Protected) // @ game+0x4835c30
	void OnButtonHovered(struct UCoreButtonWidget* Button); // Function DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnButtonHovered // (Final|Native|Protected) // @ game+0x4835ba0
};

// Class DBDUIViewsCore.CoreGlobalLoadingSpinnerWidget
// Size: 0x318 (Inherited: 0x310)
struct UCoreGlobalLoadingSpinnerWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
};

// Class DBDUIViewsCore.CoreHookCountWidget
// Size: 0x330 (Inherited: 0x328)
struct UCoreHookCountWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
};

// Class DBDUIViewsCore.CoreHudAimingCrosshairWidget
// Size: 0x338 (Inherited: 0x328)
struct UCoreHudAimingCrosshairWidget : UCoreBaseHudWidget {
	char pad_328[0x10]; // 0x328(0x10)

	enum class EAimingCrosshairState GetState(); // Function DBDUIViewsCore.CoreHudAimingCrosshairWidget.GetState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4835990
	float GetProgress(); // Function DBDUIViewsCore.CoreHudAimingCrosshairWidget.GetProgress // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4835940
	enum class EAimingCrosshairState GetPreviousState(); // Function DBDUIViewsCore.CoreHudAimingCrosshairWidget.GetPreviousState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4835920
};

// Class DBDUIViewsCore.CoreHudAlertWidget
// Size: 0x3b8 (Inherited: 0x328)
struct UCoreHudAlertWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	int32_t MaxDisplayedItems; // 0x330(0x04)
	float SecondaryAlpha; // 0x334(0x04)
	float FullAlertDuration; // 0x338(0x04)
	float PendingAlertDuration; // 0x33c(0x04)
	float AnimationDuration; // 0x340(0x04)
	enum class EEasingType AnimationEasing; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	float AnimationTranslationY; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UCoreHudScoreAlertItem* CoreHudScoreAlertItemClass; // 0x350(0x08)
	struct UCoreHudStatusEffectAlertItem* CoreHudStatusEffectAlertItemClass; // 0x358(0x08)
	struct UGridPanel* AlertContainer; // 0x360(0x08)
	struct TArray<struct UCoreBaseUserWidget*> _alerts; // 0x368(0x10)
	struct TArray<struct UCoreBaseUserWidget*> _pendingAlerts; // 0x378(0x10)
	struct TArray<struct UCoreHudScoreAlertItem*> _scoreAlertPool; // 0x388(0x10)
	struct TArray<struct UCoreHudStatusEffectAlertItem*> _statusEffectAlertPool; // 0x398(0x10)
	char pad_3A8[0x10]; // 0x3a8(0x10)

	void PopAlert(); // Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert // (Final|Native|Private) // @ game+0x4836240
	void OnPopAlertComplete(struct UUITweenInstance* tween); // Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete // (Final|Native|Private) // @ game+0x4835e20
	void OnClearAlertsComplete(struct UUITweenInstance* tween); // Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete // (Final|Native|Private) // @ game+0x4835cc0
	float GetRemainingTime(); // Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4835960
	struct TArray<struct UCoreBaseUserWidget*> GetPendingAlerts(); // Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4835860
	struct TArray<struct UCoreBaseUserWidget*> GetAlerts(); // Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x48355d0
	void ClearAlerts(); // Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts // (Final|Native|Private) // @ game+0x48355b0
};

// Class DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget
// Size: 0x328 (Inherited: 0x328)
struct UCoreHudDirectionalMiniGameItemWidget : UCoreBaseHudWidget {

	void UpdateResult(bool IsSuccessful); // Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.UpdateResult // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void UpdateFinaleVisualState(bool IsSuccessful); // Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.UpdateFinaleVisualState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void RevealDirection(bool withAnimation); // Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.RevealDirection // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Init(enum class EDirectionalInputKey Direction); // Function DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.Init // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreHudDirectionalMiniGameWidget
// Size: 0x360 (Inherited: 0x328)
struct UCoreHudDirectionalMiniGameWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct UCoreHudDirectionalMiniGameItemWidget* SkullMerchantItemWidgetClass; // 0x330(0x08)
	struct UCoreHudDirectionalMiniGameItemWidget* WormholeItemWidgetClass; // 0x338(0x08)
	struct UHorizontalBox* Container; // 0x340(0x08)
	struct TArray<struct UCoreHudDirectionalMiniGameItemWidget*> _widgets; // 0x348(0x10)
	enum class EDirectionalMiniGameType _currentType; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)

	void ShowVisual(); // Function DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.ShowVisual // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	struct TArray<struct UCoreHudDirectionalMiniGameItemWidget*> GetWidgets(); // Function DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.GetWidgets // (Final|Native|Protected|BlueprintCallable) // @ game+0x48359b0
	enum class EDirectionalMiniGameType GetCurrentType(); // Function DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.GetCurrentType // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x48356b0
};

// Class DBDUIViewsCore.CoreHudEventObjectiveItemWidget
// Size: 0x340 (Inherited: 0x328)
struct UCoreHudEventObjectiveItemWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	enum class EEventObjectiveItemState _currentState; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	int32_t _charges; // 0x334(0x04)
	int32_t _maxCharges; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
};

// Class DBDUIViewsCore.CoreHudEventProgressionWidget
// Size: 0x330 (Inherited: 0x328)
struct UCoreHudEventProgressionWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
};

// Class DBDUIViewsCore.CoreHudObjectivesWidget
// Size: 0x340 (Inherited: 0x328)
struct UCoreHudObjectivesWidget : UCoreBaseHudWidget {
	char pad_328[0x10]; // 0x328(0x10)
	struct UDBDTextBlock* SpecialSpacer; // 0x338(0x08)
};

// Class DBDUIViewsCore.CoreHudScoreAlertItem
// Size: 0x310 (Inherited: 0x310)
struct UCoreHudScoreAlertItem : UCoreBaseUserWidget {

	void SetData(struct FScoreAlertViewData& Data); // Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreHudStatusEffectAlertItem
// Size: 0x310 (Inherited: 0x310)
struct UCoreHudStatusEffectAlertItem : UCoreBaseUserWidget {

	void SetData(struct FStatusEffectAlertViewData& Data); // Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreImagePreviewAreaWidget
// Size: 0x328 (Inherited: 0x310)
struct UCoreImagePreviewAreaWidget : UCoreBaseUserWidget {
	struct UDBDImage* PreviewArea; // 0x310(0x08)
	struct UDBDRichTextBlock* ItemContainerText; // 0x318(0x08)
	struct UCustomizationItemGridContainer* ItemContainer; // 0x320(0x08)

	void SetData(struct FCustomizationItemPreviewAreaViewData& ViewData); // Function DBDUIViewsCore.CoreImagePreviewAreaWidget.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4836540
	void OnItemClicked(int32_t selectedIndex); // Function DBDUIViewsCore.CoreImagePreviewAreaWidget.OnItemClicked // (Final|Native|Protected) // @ game+0x4835d70
};

// Class DBDUIViewsCore.CoreInputPromptWidget
// Size: 0x350 (Inherited: 0x310)
struct UCoreInputPromptWidget : UCoreBaseUserWidget {
	struct FText _unfoundInputKeyText; // 0x310(0x18)
	struct FKey _inputKey; // 0x328(0x20)
	bool _isEnabled; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)

	void SetInputKey(struct FKey& InputKey); // Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4836830
	void SetEnabled(bool IsEnabled); // Function DBDUIViewsCore.CoreInputPromptWidget.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x4836690
	void PromptNotFound(); // Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound // (Final|Native|Protected|BlueprintCallable) // @ game+0x4836260
	void OnEnabledChanged(bool IsEnabled); // Function DBDUIViewsCore.CoreInputPromptWidget.OnEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool IsEnabled(); // Function DBDUIViewsCore.CoreInputPromptWidget.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4835a70
	struct FText GetInputShortDisplayName(); // Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x48357c0
	struct FKey GetInputKey(); // Function DBDUIViewsCore.CoreInputPromptWidget.GetInputKey // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48356d0
	void DisplayPrompt(); // Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreInteractionProgressWidget
// Size: 0x358 (Inherited: 0x328)
struct UCoreInteractionProgressWidget : UCoreBaseHudWidget {
	char pad_328[0x10]; // 0x328(0x10)
	struct TArray<struct UCoreStatusEffectIcon*> Proficiencies; // 0x338(0x10)
	struct FMulticastInlineDelegate _hemorrhageAnimationIsCompleteDelegate; // 0x348(0x10)

	void SetProficiencies(struct TArray<struct FStatusEffectViewData>& proficiencyDatas); // Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x483c590
};

// Class DBDUIViewsCore.CoreInteractionPromptActionWidget
// Size: 0x3c8 (Inherited: 0x310)
struct UCoreInteractionPromptActionWidget : UCoreBaseUserWidget {
	struct UCoreInputPromptWidget* InputPrompt; // 0x310(0x08)
	struct UCoreInputPromptWidget* InputPrompt2; // 0x318(0x08)
	struct UCoreInputPromptWidget* InputPrompt3; // 0x320(0x08)
	struct UCoreInputPromptWidget* InputPrompt4; // 0x328(0x08)
	struct FName IdleAnimationName; // 0x330(0x0c)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct FKey InputKey; // 0x340(0x20)
	struct FKey InputKey2; // 0x360(0x20)
	struct FKey InputKey3; // 0x380(0x20)
	struct FKey InputKey4; // 0x3a0(0x20)
	char pad_3C0[0x8]; // 0x3c0(0x08)

	void StopIdleAnimation(); // Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x483c8c0
	void SetInputKey4(struct FKey& InputKey4); // Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey4 // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483bad0
	void SetInputKey3(struct FKey& InputKey3); // Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey3 // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483ba00
	void SetInputKey2(struct FKey& InputKey2); // Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2 // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483b930
	void SetInputKey(struct FKey& InputKey); // Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483bba0
	void PlayIdleAnimation(); // Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x483b6c0
	bool HasThirdPrompt(); // Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasThirdPrompt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x483b4e0
	bool HasSecondPrompt(); // Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x483b470
	bool HasFourthPrompt(); // Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasFourthPrompt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x483b400
};

// Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget
// Size: 0x3f8 (Inherited: 0x328)
struct UCoreInteractionPromptsContainerWidget : UCoreBaseHudWidget {
	char pad_328[0x10]; // 0x328(0x10)
	struct UDBDWrapBox* CenterContainerBox; // 0x338(0x08)
	struct UDBDWrapBox* ContainerBox; // 0x340(0x08)
	struct UCoreInteractionPromptWidget* InteractionPromptWidgetClass; // 0x348(0x08)
	int32_t MaxDisplayedPrompts; // 0x350(0x04)
	int32_t MaxDisplayedCenterPrompts; // 0x354(0x04)
	struct FMargin SlotMargin; // 0x358(0x10)
	struct TArray<struct FInteractionPromptViewData> _promptViewDataList; // 0x368(0x10)
	struct TArray<struct FInteractionPromptViewData> _centerPromptViewDataList; // 0x378(0x10)
	struct TArray<struct UCoreInteractionPromptWidget*> _promptWidgets; // 0x388(0x10)
	struct TArray<struct UCoreInteractionPromptWidget*> _centerPromptWidgets; // 0x398(0x10)
	struct TMap<struct FName, struct UCoreInteractionPromptWidget*> _displayedPromptsMap; // 0x3a8(0x50)
};

// Class DBDUIViewsCore.CoreInteractionPromptWidget
// Size: 0x2b8 (Inherited: 0x298)
struct UCoreInteractionPromptWidget : UUserWidget {
	float LargeTextScale; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UScaleBox* LargeTextScaleBox; // 0x2a0(0x08)
	struct UDBDTextBlock* ActionTB; // 0x2a8(0x08)
	struct UDBDTextManager* _textManager; // 0x2b0(0x08)

	void SetData(struct FInteractionPromptViewData& Data); // Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnLargeTextSettingsChanged(bool isLargeTextEnabled); // Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged // (Final|Native|Private) // @ game+0x483b630
	void ClearData(); // Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreItemBundleWidget
// Size: 0x318 (Inherited: 0x310)
struct UCoreItemBundleWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
};

// Class DBDUIViewsCore.CoreItemInteractionWidget
// Size: 0x330 (Inherited: 0x328)
struct UCoreItemInteractionWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
};

// Class DBDUIViewsCore.CoreItemWidget
// Size: 0x2b8 (Inherited: 0x2b0)
struct UCoreItemWidget : UCoreBaseLoadoutPartWidget {
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class DBDUIViewsCore.CoreLeaningArrowsWidget
// Size: 0x330 (Inherited: 0x328)
struct UCoreLeaningArrowsWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
};

// Class DBDUIViewsCore.CoreLightSensitivityWidget
// Size: 0x340 (Inherited: 0x310)
struct UCoreLightSensitivityWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	struct TArray<struct UDBDRichTextBlock*> _lightSensitivityRichTextBlocks; // 0x318(0x10)
	struct UWidgetAnimation* FadeOutAnim; // 0x328(0x08)
	char pad_330[0x10]; // 0x330(0x10)
};

// Class DBDUIViewsCore.CoreLockedOverlayWidget
// Size: 0x310 (Inherited: 0x310)
struct UCoreLockedOverlayWidget : UCoreBaseUserWidget {

	void SetIsLocked(bool IsLocked, bool useAnimation); // Function DBDUIViewsCore.CoreLockedOverlayWidget.SetIsLocked // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreMatchResultWidget
// Size: 0x400 (Inherited: 0x328)
struct UCoreMatchResultWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct FText _survivorDefaultResultText; // 0x330(0x18)
	struct TMap<enum class EGameState, struct FText> _survivorResultTexts; // 0x348(0x50)
	struct FText _killerDefaultResultText; // 0x398(0x18)
	struct TMap<enum class EKillerMatchResult, struct FText> _killerResultTexts; // 0x3b0(0x50)
};

// Class DBDUIViewsCore.CoreMenuLoadoutPartWidget
// Size: 0x548 (Inherited: 0x440)
struct UCoreMenuLoadoutPartWidget : UCoreSelectableButtonWidget {
	enum class ELoadoutSlot slotIndex; // 0x440(0x01)
	enum class ETooltipHorizontalAlignment HorizontalAlignment; // 0x441(0x01)
	enum class ETooltipVerticalAlignment VerticalAlignment; // 0x442(0x01)
	char pad_443[0x5]; // 0x443(0x05)
	struct FLoadoutTooltipData _loadoutTooltipViewData; // 0x448(0x90)
	struct UDBDImage* RarityIMG; // 0x4d8(0x08)
	struct UDBDImage* IconIMG; // 0x4e0(0x08)
	struct UDBDImage* KillSwitchIMG; // 0x4e8(0x08)
	struct UDBDImage* lockedIcon; // 0x4f0(0x08)
	struct UDBDImage* Background; // 0x4f8(0x08)
	struct UDBDImage* ShadowOffset; // 0x500(0x08)
	struct UGridPanel* Selected; // 0x508(0x08)
	struct UScaleBox* LayoutScale; // 0x510(0x08)
	struct UCoreOnHoverBorderWidget* OnHoverBorder; // 0x518(0x08)
	struct UTextBlock* StackCountTB; // 0x520(0x08)
	struct UDBDImage* PlusSignIcon; // 0x528(0x08)
	struct UTexture2D* RarityTexture; // 0x530(0x08)
	struct FName _itemId; // 0x538(0x0c)
	char pad_544[0x4]; // 0x544(0x04)

	void SetSelectedState(bool selectedState); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetSelectedState // (Final|Native|Public|BlueprintCallable) // @ game+0x483c730
	void SetLoadoutPartTooltipData(struct FLoadoutTooltipData& TooltipData); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartTooltipData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483c0c0
	void SetLoadoutPartScale(float Scale); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartScale // (Final|Native|Public|BlueprintCallable) // @ game+0x483c040
	void SetLoadoutPartData(struct UMenuLoadoutPartViewData* Data); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartData // (Final|Native|Protected|BlueprintCallable) // @ game+0x483bfb0
	void SetIsPerkSurfacingExperimentActive(bool isPerkSurfacingExperimentActive); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetIsPerkSurfacingExperimentActive // (Final|Native|Public|BlueprintCallable) // @ game+0x483bc70
	void SetEmptyWidget(); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetEmptyWidget // (Final|Native|Public) // @ game+0x483b880
	void SetDisabledWidget(); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetDisabledWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetBackgroundShadowLayers(); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetBackgroundShadowLayers // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetBackgroundLayers(); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetBackgroundLayers // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	bool GetWidgetLockedState(); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetWidgetLockedState // (Final|Native|Public|BlueprintCallable) // @ game+0x483b350
	struct FName GetWidgetItemId(); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetWidgetItemId // (Final|Native|Public|BlueprintCallable) // @ game+0x483b320
	struct FLoadoutTooltipData GetTooltipData(); // Function DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetTooltipData // (Final|Native|Public|BlueprintCallable) // @ game+0x483b0b0
};

// Class DBDUIViewsCore.CoreMenuAddonWidget
// Size: 0x570 (Inherited: 0x548)
struct UCoreMenuAddonWidget : UCoreMenuLoadoutPartWidget {
	struct UDBDImage* DisabledState; // 0x548(0x08)
	float _addonInventoryScale; // 0x550(0x04)
	char pad_554[0x1c]; // 0x554(0x1c)

	void UpdateWidgetScale(); // Function DBDUIViewsCore.CoreMenuAddonWidget.UpdateWidgetScale // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetWhitePlusIconVisibility(bool IsVisible); // Function DBDUIViewsCore.CoreMenuAddonWidget.SetWhitePlusIconVisibility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetMenuAddonTooltipData(struct FLoadoutTooltipData& TooltipData); // Function DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonTooltipData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483c250
	void SetMenuAddonData(struct UMenuAddonViewData* Data); // Function DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonData // (Final|Native|Public|BlueprintCallable) // @ game+0x483c1c0
	void SetAddonDisabled(bool IsParentAvailable); // Function DBDUIViewsCore.CoreMenuAddonWidget.SetAddonDisabled // (Final|Native|Public|BlueprintCallable) // @ game+0x483b7f0
	struct FText GetWidgetParentDisplayName(); // Function DBDUIViewsCore.CoreMenuAddonWidget.GetWidgetParentDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x483b370
};

// Class DBDUIViewsCore.CoreMenuItemWidget
// Size: 0x548 (Inherited: 0x548)
struct UCoreMenuItemWidget : UCoreMenuLoadoutPartWidget {

	void SetMenuItemTooltipData(struct FLoadoutTooltipData& TooltipData); // Function DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemTooltipData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483c250
	void SetMenuItemData(struct UMenuItemViewData* Data); // Function DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemData // (Final|Native|Public|BlueprintCallable) // @ game+0x483c350
};

// Class DBDUIViewsCore.CoreMenuOfferingWidget
// Size: 0x548 (Inherited: 0x548)
struct UCoreMenuOfferingWidget : UCoreMenuLoadoutPartWidget {

	void SetMenuOfferingTooltipData(struct FLoadoutTooltipData& TooltipData); // Function DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingTooltipData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483c250
	void SetMenuOfferingData(struct UMenuOfferingViewData* Data); // Function DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingData // (Final|Native|Public|BlueprintCallable) // @ game+0x483c3e0
};

// Class DBDUIViewsCore.CoreMenuPerkWidget
// Size: 0x548 (Inherited: 0x548)
struct UCoreMenuPerkWidget : UCoreMenuLoadoutPartWidget {

	void SetMenuPerkTooltipData(struct FLoadoutTooltipData& TooltipData); // Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkTooltipData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483c250
	void SetMenuPerkLevel(int32_t Level); // Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkLevel // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SetMenuPerkData(struct UMenuPerkViewData* Data); // Function DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkData // (Final|Native|Public|BlueprintCallable) // @ game+0x483c470
	void SetEmptyPerk(); // Function DBDUIViewsCore.CoreMenuPerkWidget.SetEmptyPerk // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreMenuPowerWidget
// Size: 0x548 (Inherited: 0x548)
struct UCoreMenuPowerWidget : UCoreMenuLoadoutPartWidget {

	void SetMenuPowerTooltipData(struct FLoadoutTooltipData& TooltipData); // Function DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerTooltipData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x483c250
	void SetMenuPowerData(struct UMenuPowerViewData* Data); // Function DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerData // (Final|Native|Public|BlueprintCallable) // @ game+0x483c500
};

// Class DBDUIViewsCore.CoreOfferingInteractionWidget
// Size: 0x330 (Inherited: 0x328)
struct UCoreOfferingInteractionWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
};

// Class DBDUIViewsCore.CoreOfferingWidget
// Size: 0x2b8 (Inherited: 0x2b0)
struct UCoreOfferingWidget : UCoreBaseLoadoutPartWidget {
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class DBDUIViewsCore.CoreOnboardingButtonHolderWidget
// Size: 0x340 (Inherited: 0x310)
struct UCoreOnboardingButtonHolderWidget : UCoreBaseUserWidget {
	struct FMulticastInlineDelegate OnTutorialButtonClickedDelegate; // 0x310(0x10)
	struct FMulticastInlineDelegate OnSetDataAnimationCompleteDelegate; // 0x320(0x10)
	struct TArray<struct UCoreOnboardingTutorialButtonWidget*> TutorialButtons; // 0x330(0x10)

	void OnClickedTutorialButton(struct UCoreButtonWidget* clickedTutorialButton); // Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.OnClickedTutorialButton // (Final|Native|Protected) // @ game+0x483b5a0
	void OnButtonSetDataAnimationCompleteDelegate(); // Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.OnButtonSetDataAnimationCompleteDelegate // (Final|Native|Protected) // @ game+0x483b580
	struct FString GetStepId(); // Function DBDUIViewsCore.CoreOnboardingButtonHolderWidget.GetStepId // (Final|Native|Public|BlueprintCallable) // @ game+0x483b030
};

// Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget
// Size: 0x310 (Inherited: 0x310)
struct UCoreOnboardingMenuTitleWidget : UCoreBaseUserWidget {

	void SetOnboardingMenuTitle(struct FText& menuTitle); // Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetOnboardingMenuSubtitle(struct FText& menuTitle); // Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetOnboardingMenuDoubleTitle(struct FText& menuTitle, struct FText& menuSubTitle); // Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ResetOnboardingMenuSubtitle(); // Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreOnboardingMenuWidget
// Size: 0x3b0 (Inherited: 0x310)
struct UCoreOnboardingMenuWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	struct UCoreTabContainerWidget* OnboardingMenuTabs; // 0x318(0x08)
	struct UCoreOnboardingMenuTitleWidget* menuTitle; // 0x320(0x08)
	struct UCoreInputSwitcherWidget* BackInputSwitcher; // 0x328(0x08)
	struct UCoreFooterInputSwitcherWidget* SettingsInputSwitcher; // 0x330(0x08)
	struct UCoreFooterInputSwitcherWidget* QuitGameInputSwitcher; // 0x338(0x08)
	struct UCoreInputSwitcherWidget* ChangeAccountInputSwitcher; // 0x340(0x08)
	struct FMulticastInlineDelegate BackActionDelegate; // 0x348(0x10)
	struct FMulticastInlineDelegate SettingsActionDelegate; // 0x358(0x10)
	struct FMulticastInlineDelegate QuitGameActionDelegate; // 0x368(0x10)
	struct FMulticastInlineDelegate ChangeAccountActionDelegate; // 0x378(0x10)
	struct FMulticastInlineDelegate MenuTabSelectedDelegate; // 0x388(0x10)
	struct FMulticastInlineDelegate MenuTabSelectedAgainDelegate; // 0x398(0x10)
	char pad_3A8[0x8]; // 0x3a8(0x08)

	void SetTitleText(bool IsInTutorial); // Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText // (Final|Native|Private|BlueprintCallable) // @ game+0x48417a0
	void SetBackButton(bool isFTUE); // Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButton // (Final|Native|Private|BlueprintCallable) // @ game+0x48413a0
	void OnMenuTabSelectedAgain(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelectedAgain // (Final|Native|Private) // @ game+0x48410d0
	void OnMenuTabSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelected // (Final|Native|Private) // @ game+0x4841040
};

// Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget
// Size: 0x4f0 (Inherited: 0x408)
struct UCoreOnboardingTutorialButtonWidget : UCoreButtonWidget {
	struct FMulticastInlineDelegate OnSetDataAnimationCompleteDelegate; // 0x408(0x10)
	struct FString UnavailablePressedSfxName; // 0x418(0x10)
	struct UAkAudioEvent* UnavailablePressedSfx; // 0x428(0x08)
	struct UDBDTextBlock* titleText; // 0x430(0x08)
	struct UDBDTextBlock* descriptionText; // 0x438(0x08)
	struct UDBDTextBlock* RewardsText; // 0x440(0x08)
	struct UDBDImage* RoleIcon; // 0x448(0x08)
	struct UWidgetSwitcher* StateSwitcher; // 0x450(0x08)
	struct UDBDImage* LockedImage; // 0x458(0x08)
	struct UDBDImage* CompletedImage; // 0x460(0x08)
	struct TArray<struct UCoreRewardWrapperWidget*> RewardWrappers; // 0x468(0x10)
	struct FOnboardingTutorialButtonViewData ViewData; // 0x478(0x78)

	void SetVisual(); // Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual // (Final|Native|Protected|BlueprintCallable) // @ game+0x4841830
	void SetUIEnabled(bool Enabled); // Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void SetIsKillSwitch(bool IsKillSwitch); // Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetIsKillSwitch // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void SetData(struct FOnboardingTutorialButtonViewData& ViewData, bool isRefreshingWithAnimation); // Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void OnRewardReleased(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased // (Final|Native|Private) // @ game+0x4841310
	void OnRewardPressed(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed // (Final|Native|Private) // @ game+0x4841280
	void OnRewardClicked(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked // (Final|Native|Private) // @ game+0x48411f0
	bool IsInUnavailableStep(); // Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840ff0
};

// Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget
// Size: 0x380 (Inherited: 0x310)
struct UCoreOnboardingTutorialPanelWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	struct TArray<struct UOverlay*> OnboardingButtonHolderContainers; // 0x318(0x10)
	struct FMulticastInlineDelegate TutorialSelectedDelegate; // 0x328(0x10)
	struct UUserWidget* LoadingWidget; // 0x338(0x08)
	float _arrowHighlightRenderOpacity; // 0x340(0x04)
	float _arrowUnhighlightRenderOpacity; // 0x344(0x04)
	struct UCoreOnboardingButtonHolderWidget* _oneTutorialButtonHolderWidgetClass; // 0x348(0x08)
	struct UCoreOnboardingButtonHolderWidget* _twoTutorialButtonHolderWidgetClass; // 0x350(0x08)
	struct TArray<struct UCoreOnboardingButtonHolderWidget*> _onboardingButtonHolderWidgets; // 0x358(0x10)
	struct TArray<struct FPendingStepData> _pendingData; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)

	void TryBroadcastSelectedTutorial(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.TryBroadcastSelectedTutorial // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SetTutorialSeparators(struct FString completedStepId); // Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SetTutorialDescription(struct FText& Description, bool isWarning); // Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void NextPendingButtonUpdated(); // Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated // (Final|Native|Private) // @ game+0x4841020
	void CheckNextPendingButtonUpdate(); // Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate // (Final|Native|Private) // @ game+0x4840b00
};

// Class DBDUIViewsCore.CoreOnHoverBorderWidget
// Size: 0x310 (Inherited: 0x310)
struct UCoreOnHoverBorderWidget : UCoreBaseUserWidget {

	void UpdateColors(struct FLinearColor& progressBarColor, struct FLinearColor& BackgroundColor); // Function DBDUIViewsCore.CoreOnHoverBorderWidget.UpdateColors // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void UnbindFromButton(); // Function DBDUIViewsCore.CoreOnHoverBorderWidget.UnbindFromButton // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayPressedAnimation(bool playForward); // Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayPressedAnimation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayHoveredAnimation(bool playForward); // Function DBDUIViewsCore.CoreOnHoverBorderWidget.PlayHoveredAnimation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BindToButton(struct UCoreButtonWidget* buttonToBindOn); // Function DBDUIViewsCore.CoreOnHoverBorderWidget.BindToButton // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CorePaginationContainerWidget
// Size: 0x438 (Inherited: 0x360)
struct UCorePaginationContainerWidget : UCoreButtonSelector {
	struct FMulticastInlineDelegate OnSelectedPageDelegate; // 0x360(0x10)
	struct UCoreSelectableButtonWidget* PaginationWidgetClass; // 0x370(0x08)
	int32_t MaxNumberOfPages; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UGridPanel* PaginationContainer; // 0x380(0x08)
	struct UCoreSelectableButtonWidget* FirstPage; // 0x388(0x08)
	struct UDBDTextBlock* FirstEllipsis; // 0x390(0x08)
	struct UDBDTextBlock* LastEllipsis; // 0x398(0x08)
	struct UCoreSelectableButtonWidget* LastPage; // 0x3a0(0x08)
	struct FMargin _widgetPadding; // 0x3a8(0x10)
	struct TArray<struct UCoreSelectableButtonWidget*> _paginationWidgetList; // 0x3b8(0x10)
	char pad_3C8[0x70]; // 0x3c8(0x70)

	void UpdateSelectedWidget(int32_t currentIndex, int32_t numberOfPages); // Function DBDUIViewsCore.CorePaginationContainerWidget.UpdateSelectedWidget // (Native|Public|BlueprintCallable) // @ game+0x48418e0
	void OnSelectedPageDelegate__DelegateSignature(int32_t selectedPage, bool isUpdate); // DelegateFunction DBDUIViewsCore.CorePaginationContainerWidget.OnSelectedPageDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnPaginationSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CorePaginationContainerWidget.OnPaginationSelected // (Final|Native|Private) // @ game+0x4841160
	int32_t GetCurrentPage(); // Function DBDUIViewsCore.CorePaginationContainerWidget.GetCurrentPage // (Final|Native|Public|BlueprintCallable) // @ game+0x4840b20
};

// Class DBDUIViewsCore.CorePerksContainerWidget
// Size: 0x350 (Inherited: 0x328)
struct UCorePerksContainerWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct TArray<struct UCorePerkWidget*> PerkWidgets; // 0x330(0x10)
	struct TArray<struct TScriptInterface<IPerkViewInterface>> _perkViewInterfaces; // 0x340(0x10)
};

// Class DBDUIViewsCore.CorePerkWidget
// Size: 0x2b8 (Inherited: 0x2b0)
struct UCorePerkWidget : UCoreBaseLoadoutPartWidget {
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class DBDUIViewsCore.CorePingStatusWidget
// Size: 0x330 (Inherited: 0x328)
struct UCorePingStatusWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
};

// Class DBDUIViewsCore.CorePlayerLevelWidget
// Size: 0x310 (Inherited: 0x310)
struct UCorePlayerLevelWidget : UCoreBaseUserWidget {
};

// Class DBDUIViewsCore.CorePlayerNameWidget
// Size: 0x318 (Inherited: 0x310)
struct UCorePlayerNameWidget : UCoreBaseUserWidget {
	struct UDBDTextBlock* PlayerNameTB; // 0x310(0x08)

	void SetPlayerName(struct FText& playerName); // Function DBDUIViewsCore.CorePlayerNameWidget.SetPlayerName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4841540
};

// Class DBDUIViewsCore.CorePlayerProfileWidget
// Size: 0x338 (Inherited: 0x310)
struct UCorePlayerProfileWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	struct UCoreWalletWidget* Wallet; // 0x318(0x08)
	struct UCorePlayerNameWidget* playerName; // 0x320(0x08)
	struct UCorePlayerLevelWidget* PlayerLevel; // 0x328(0x08)
	struct UCorePlayerRankWidget* PlayerRank; // 0x330(0x08)
};

// Class DBDUIViewsCore.CorePlayerRankWidget
// Size: 0x370 (Inherited: 0x310)
struct UCorePlayerRankWidget : UCoreBaseUserWidget {
	struct TMap<int32_t, struct UTexture2D*> _rankImages; // 0x310(0x50)
	struct UDBDImage* LevelBG; // 0x360(0x08)
	struct UDBDTextBlock* LevelTB; // 0x368(0x08)
};

// Class DBDUIViewsCore.CorePlayerStatusesContainerWidget
// Size: 0x358 (Inherited: 0x328)
struct UCorePlayerStatusesContainerWidget : UCoreBaseHudWidget {
	char pad_328[0x10]; // 0x328(0x10)
	struct TArray<struct UCorePlayerStatusWidget*> PlayerStatusWidgets; // 0x338(0x10)
	struct TArray<struct TScriptInterface<IPlayerStatusViewInterface>> _playerStatusViewInterfaces; // 0x348(0x10)
};

// Class DBDUIViewsCore.CorePlayerStatusKillerEffectWidget
// Size: 0x328 (Inherited: 0x328)
struct UCorePlayerStatusKillerEffectWidget : UCoreBaseHudWidget {

	void SetKillerData(struct FPlayerStatusViewData& Data); // Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ClearVisual(); // Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x48306d0
};

// Class DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget
// Size: 0x328 (Inherited: 0x328)
struct UCorePlayerStatusKillerEffectK07Widget : UCorePlayerStatusKillerEffectWidget {

	void AfflictionHit(); // Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CorePlayerStatusWidget
// Size: 0x448 (Inherited: 0x328)
struct UCorePlayerStatusWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	int32_t MaxNameLength; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct TMap<enum class EPlayerStatus, struct FPlayerStatusAssets> PlayerStatusAssets; // 0x338(0x50)
	struct UAkAudioEvent* ObsessionSfx; // 0x388(0x08)
	struct UDBDTextBlock* PlayerNameTextfield; // 0x390(0x08)
	struct UOverlay* KillerStatusContainer; // 0x398(0x08)
	struct FPlayerStatusViewData _cachedViewData; // 0x3a0(0x48)
	char pad_3E8[0x50]; // 0x3e8(0x50)
	struct UCorePlayerStatusKillerEffectWidget* _killerStatusEffectWidget; // 0x438(0x08)
	struct UDataTable* _killerStatusDataMappingDB; // 0x440(0x08)

	bool ShouldPlaySleepAnimation(enum class ESleepingUIState newSleepState); // Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4841850
	bool HasTimerProgressChanged(float newTimerProgress); // Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840f60
	bool HasPlayerStatusDataChanged(struct FPlayerStatusViewData& newViewData); // Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840e80
	bool HasPlayerStateChanged(enum class EPlayerStatus newPlayerState); // Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840df0
	bool HasObsessionStateChanged(enum class EObsessionUIState newObsessionState); // Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840d60
	bool HasKillerStatusDataChanged(struct FPlayerStatusViewData& newViewData); // Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840c80
	enum class EPlayerStateChangeType GetPlayerStateChangeType(struct FPlayerStatusViewData& newViewData); // Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840ba0
	struct UCorePlayerStatusKillerEffectWidget* GetKillerStatusEffectWidget(); // Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840b80
	struct UDataTable* GetKillerStatusDataMappingDB(); // Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusDataMappingDB // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4840b40
	struct FPlayerStatusViewData CacheViewData(struct FPlayerStatusViewData Data); // Function DBDUIViewsCore.CorePlayerStatusWidget.CacheViewData // (Final|Native|Protected|BlueprintCallable) // @ game+0x48408e0
};

// Class DBDUIViewsCore.CorePowerBundleWidget
// Size: 0x318 (Inherited: 0x310)
struct UCorePowerBundleWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
};

// Class DBDUIViewsCore.CorePowerWidget
// Size: 0x2b8 (Inherited: 0x2b0)
struct UCorePowerWidget : UCoreBaseLoadoutPartWidget {
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class DBDUIViewsCore.CorePresetWidgetContainer
// Size: 0x3a0 (Inherited: 0x360)
struct UCorePresetWidgetContainer : UCoreButtonSelector {
	struct FMulticastInlineDelegate OnSelectedPresetDelegate; // 0x360(0x10)
	struct UCoreSelectableButtonWidget* Preset_2; // 0x370(0x08)
	struct UCoreSelectableButtonWidget* Preset_3; // 0x378(0x08)
	struct UCoreSelectableButtonWidget* Preset_4; // 0x380(0x08)
	struct UCoreSelectableButtonWidget* Preset_5; // 0x388(0x08)
	struct TArray<struct UCoreSelectableButtonWidget*> _presetWidgets; // 0x390(0x10)

	void SetSelectedPreset(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.CorePresetWidgetContainer.SetSelectedPreset // (Final|Native|Private|BlueprintCallable) // @ game+0x4841710
	void SetPreset(struct TArray<int32_t>& presetData, int32_t selectedPreset); // Function DBDUIViewsCore.CorePresetWidgetContainer.SetPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4841610
	void OnSelectedPresetDelegate__DelegateSignature(int32_t selectedPreset); // DelegateFunction DBDUIViewsCore.CorePresetWidgetContainer.OnSelectedPresetDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CorePriceTagWidget
// Size: 0x370 (Inherited: 0x310)
struct UCorePriceTagWidget : UCoreBaseUserWidget {
	bool _highlightInsufficientCurrency; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UDBDImage* CurrencyIcon; // 0x318(0x08)
	struct TMap<enum class ECurrencyType, struct TSoftObjectPtr<UTexture2D>> _currencyIconTextures; // 0x320(0x50)

	void SetHighlightInsufficientCurrency(bool Highlight); // Function DBDUIViewsCore.CorePriceTagWidget.SetHighlightInsufficientCurrency // (Final|Native|Public|BlueprintCallable) // @ game+0x48414b0
	void SetData(struct FPriceTagViewData& ViewData); // Function DBDUIViewsCore.CorePriceTagWidget.SetData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void SetCurrencyIcon(enum class ECurrencyType CurrencyType); // Function DBDUIViewsCore.CorePriceTagWidget.SetCurrencyIcon // (Final|Native|Public|BlueprintCallable) // @ game+0x4841430
};

// Class DBDUIViewsCore.CoreRewardWrapperWidget
// Size: 0x2d0 (Inherited: 0x298)
struct UCoreRewardWrapperWidget : UUserWidget {
	struct UCoreCharacterRewardWidget* CharacterRewardWidget; // 0x298(0x08)
	struct UCoreCurrencyProgressionRewardWidget* CurrencyProgressionRewardWidget; // 0x2a0(0x08)
	struct UCoreCustomizationRewardWidget* CustomizationRewardWidget; // 0x2a8(0x08)
	struct UPanelWidget* RewardContainer; // 0x2b0(0x08)
	struct USizeBox* SizeBox; // 0x2b8(0x08)
	struct UScaleBox* ScaleBox; // 0x2c0(0x08)
	struct UCoreRewardWidget* _rewardWidget; // 0x2c8(0x08)

	void SetScaleUserSpecified(float Scale); // Function DBDUIViewsCore.CoreRewardWrapperWidget.SetScaleUserSpecified // (Final|Native|Public|BlueprintCallable) // @ game+0x4845ed0
	void SetScaleToFit(float Size); // Function DBDUIViewsCore.CoreRewardWrapperWidget.SetScaleToFit // (Final|Native|Public|BlueprintCallable) // @ game+0x4845e50
	void SetIsLocked(bool IsLocked, bool PlayAnimation); // Function DBDUIViewsCore.CoreRewardWrapperWidget.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x4845b70
	void SetIsClickable(bool isClickable); // Function DBDUIViewsCore.CoreRewardWrapperWidget.SetIsClickable // (Final|Native|Public|BlueprintCallable) // @ game+0x4845a10
	void SetData(struct FRewardWrapperViewData& ViewData); // Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48455f0
	struct UCoreRewardWidget* GetRewardWidget(); // Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x4844ed0
	void ClearData(); // Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData // (Final|Native|Public|BlueprintCallable) // @ game+0x4844d50
};

// Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget
// Size: 0x3a8 (Inherited: 0x328)
struct UCoreScreenIndicatorsContainerWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	float InactiveThreshold; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct UCanvasPanel* Container; // 0x338(0x08)
	struct UCoreScreenIndicatorWidget* ScreenIndicatorClass; // 0x340(0x08)
	struct TMap<struct FString, struct UCoreScreenIndicatorWidget*> _screenIndicatorsMap; // 0x348(0x50)
	struct TArray<struct UCoreScreenIndicatorWidget*> _screenIndicatorsPool; // 0x398(0x10)

	struct TMap<struct FString, struct UCoreScreenIndicatorWidget*> GetScreenIndicatorsMap(); // Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap // (Final|Native|Protected|BlueprintCallable) // @ game+0x4844ef0
	struct FString FindScreenIndicatorKey(struct UCoreScreenIndicatorWidget* value); // Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4844db0
};

// Class DBDUIViewsCore.CoreScreenIndicatorWidget
// Size: 0x330 (Inherited: 0x310)
struct UCoreScreenIndicatorWidget : UCoreBaseUserWidget {
	float InactiveTime; // 0x310(0x04)
	struct FVector2D IndicatorPadding; // 0x314(0x08)
	struct FVector2D DistanceClamping; // 0x31c(0x08)
	float MinDistanceRatio; // 0x324(0x04)
	float MinDistanceAlpha; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)

	void SetData(struct FScreenIndicatorViewData& Data); // Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ClearData(); // Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreSkillCheckWidget
// Size: 0x330 (Inherited: 0x328)
struct UCoreSkillCheckWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
};

// Class DBDUIViewsCore.CoreSpectateBarWidget
// Size: 0x378 (Inherited: 0x328)
struct UCoreSpectateBarWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct UCoreInputSwitcherWidget* LeaveInputSwitcher; // 0x330(0x08)
	struct UCoreInputSwitcherWidget* LeftArrowInputSwitcher; // 0x338(0x08)
	struct UCoreInputSwitcherWidget* RightArrowInputSwitcher; // 0x340(0x08)
	struct FMulticastInlineDelegate _leaveTriggeredDelegate; // 0x348(0x10)
	struct FMulticastInlineDelegate _leftArrowTriggeredDelegate; // 0x358(0x10)
	struct FMulticastInlineDelegate _rightArrowTriggeredDelegate; // 0x368(0x10)

	void OnRightArrowTriggered(); // Function DBDUIViewsCore.CoreSpectateBarWidget.OnRightArrowTriggered // (Final|Native|Private) // @ game+0x481fe00
	void OnLeftArrowTriggered(); // Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeftArrowTriggered // (Final|Native|Private) // @ game+0x481faf0
	void OnLeaveTriggered(); // Function DBDUIViewsCore.CoreSpectateBarWidget.OnLeaveTriggered // (Final|Native|Private) // @ game+0x481fb10
};

// Class DBDUIViewsCore.CoreStartSequenceWidget
// Size: 0x3c8 (Inherited: 0x328)
struct UCoreStartSequenceWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	float FadeInDuration; // 0x330(0x04)
	float FadeOutDuration; // 0x334(0x04)
	enum class EEasingType FadeInEasing; // 0x338(0x01)
	enum class EEasingType FadeOutEasing; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)
	struct TMap<enum class EThemeColorId, struct FLinearColor> BorderColors; // 0x340(0x50)
	struct FLinearColor DefaultColor; // 0x390(0x10)
	struct UDBDTextBlock* ThemeNameTextfield; // 0x3a0(0x08)
	struct UImage* SeparatorImage; // 0x3a8(0x08)
	struct UDBDTextBlock* MapNameTextfield; // 0x3b0(0x08)
	struct FMulticastInlineDelegate StartSequenceFadeOutDelegate; // 0x3b8(0x10)

	void OnHideStartSequenceComplete(struct UUITweenInstance* tween); // Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete // (Final|Native|Private) // @ game+0x4845470
};

// Class DBDUIViewsCore.CoreStatusEffectIcon
// Size: 0x368 (Inherited: 0x310)
struct UCoreStatusEffectIcon : UCoreBaseUserWidget {
	char pad_310[0x58]; // 0x310(0x58)

	void UpdateWidget(); // Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void UpdatePercentageFill(float Percentage); // Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetStatusEffectData(struct FStatusEffectViewData& Data); // Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4846070
	void SetInactiveTicks(int32_t inactiveTicks); // Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks // (Final|Native|Public|BlueprintCallable) // @ game+0x4845980
	void ResetWidget(); // Function DBDUIViewsCore.CoreStatusEffectIcon.ResetWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	struct FStatusEffectViewData GetStatusEffectData(); // Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData // (Final|Native|Public|BlueprintCallable) // @ game+0x4845010
	int32_t GetInactiveTicks(); // Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4844e90
};

// Class DBDUIViewsCore.CoreStatusEffectWidget
// Size: 0x3c0 (Inherited: 0x328)
struct UCoreStatusEffectWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	int32_t InactiveThreshold; // 0x330(0x04)
	int32_t PrepooledItemAmount; // 0x334(0x04)
	int32_t ItemsByColumn; // 0x338(0x04)
	float EvenColumnOffset; // 0x33c(0x04)
	struct UCoreStatusEffectIcon* CoreStatusEffectIconClass; // 0x340(0x08)
	struct UGridPanel* StatusEffectContainer; // 0x348(0x08)
	struct TArray<struct UCoreStatusEffectIcon*> _statusEffectPool; // 0x350(0x10)
	struct TArray<struct FName> _statusEffectOrder; // 0x360(0x10)
	struct TMap<struct FName, struct UCoreStatusEffectIcon*> _statusEffectMap; // 0x370(0x50)

	struct TMap<struct FName, struct UCoreStatusEffectIcon*> GetStatusEffectMap(); // Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4845040
};

// Class DBDUIViewsCore.CoreStoryLevelButtonWidget
// Size: 0x478 (Inherited: 0x440)
struct UCoreStoryLevelButtonWidget : UCoreSelectableButtonWidget {
	struct FMulticastInlineDelegate _levelUnlockedAnimationDoneDelegate; // 0x440(0x10)
	struct FText _tooltipText; // 0x450(0x18)
	enum class ERemainingTimeFormat _lockedLevelTimeFormat; // 0x468(0x01)
	char pad_469[0xf]; // 0x469(0x0f)

	void UpdateVisualStatus(enum class EArchivesStoryLevelStatus newStatus, bool newlyUnlocked); // Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateVisualStatus // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void UpdateVisual(struct UArchiveStoryLevelViewData* ViewData, bool newlyUnlocked); // Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateVisual // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void UpdateStatusData(enum class EArchivesStoryLevelStatus newStatus, bool isSelectorReadOnly); // Function DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateStatusData // (Final|Native|Public|BlueprintCallable) // @ game+0x4846620
	void SetData(struct UArchiveStoryLevelViewData* ViewData, bool isSelectorReadOnly); // Function DBDUIViewsCore.CoreStoryLevelButtonWidget.SetData // (Final|Native|Public|BlueprintCallable) // @ game+0x4845770
	int32_t GetLevel(); // Function DBDUIViewsCore.CoreStoryLevelButtonWidget.GetLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4844eb0
};

// Class DBDUIViewsCore.CoreStoryLevelsSelectorWidget
// Size: 0x3a8 (Inherited: 0x360)
struct UCoreStoryLevelsSelectorWidget : UCoreButtonSelector {
	bool IsReadOnly; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UCoreStoryLevelButtonWidget* CoreStoryLevelButtonWidgetClass; // 0x368(0x08)
	struct UGridPanel* LevelButtonsContainer; // 0x370(0x08)
	struct UCoreInputSwitcherWidget* PreviousLevelInputSwitcher; // 0x378(0x08)
	struct UCoreInputSwitcherWidget* NextLevelInputSwitcher; // 0x380(0x08)
	struct TArray<struct UArchiveStoryLevelViewData*> _levelButtonsData; // 0x388(0x10)
	char pad_398[0x10]; // 0x398(0x10)

	void UpdateVisual(enum class EArchivesStoryLevelStatus globalStatus, bool PlayAnimation); // Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.UpdateVisual // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void UpdateLevelStatus(int32_t Level, enum class EArchivesStoryLevelStatus Status); // Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.UpdateLevelStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x4846550
	void SetUpInteractionMode(); // Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetUpInteractionMode // (Final|Native|Protected|BlueprintCallable) // @ game+0x4846350
	void SetEnabled(bool Enabled); // Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x48458f0
	void SetData(struct TArray<struct UArchiveStoryLevelViewData*>& levelbuttonsData); // Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4845840
	void OnStoryLevelUnlockedAnimation(); // Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.OnStoryLevelUnlockedAnimation // (Final|Native|Private) // @ game+0x4845500
	struct UCoreStoryLevelButtonWidget* GetStoryLevelButton(int32_t Level); // Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.GetStoryLevelButton // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x48451a0
	void AdaptButtonsPoolToData(int32_t dataNumber); // Function DBDUIViewsCore.CoreStoryLevelsSelectorWidget.AdaptButtonsPoolToData // (Final|Native|Protected|BlueprintCallable) // @ game+0x4844cc0
};

// Class DBDUIViewsCore.CoreSubtitlesWidget
// Size: 0x320 (Inherited: 0x310)
struct UCoreSubtitlesWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	struct UDBDTextBlock* SubtitlesTB; // 0x318(0x08)
};

// Class DBDUIViewsCore.CoreTemplateWidget
// Size: 0x2a0 (Inherited: 0x298)
struct UCoreTemplateWidget : UUserWidget {
	char pad_298[0x8]; // 0x298(0x08)
};

// Class DBDUIViewsCore.CoreTestBuildFlagWidget
// Size: 0x398 (Inherited: 0x328)
struct UCoreTestBuildFlagWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct UGridPanel* HudTestFlagContainer; // 0x330(0x08)
	struct UTextBlock* HudTopLineTextfield; // 0x338(0x08)
	struct UTextBlock* HudBottomLineTextfield; // 0x340(0x08)
	char pad_348[0x50]; // 0x348(0x50)
};

// Class DBDUIViewsCore.CoreToggleButtonWidget
// Size: 0x410 (Inherited: 0x408)
struct UCoreToggleButtonWidget : UCoreButtonWidget {
	bool DefaultToggleState; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)

	void SetToDefaultState(); // Function DBDUIViewsCore.CoreToggleButtonWidget.SetToDefaultState // (Final|Native|Public|BlueprintCallable) // @ game+0x484c090
	void SetActiveVisualState(bool IsActive); // Function DBDUIViewsCore.CoreToggleButtonWidget.SetActiveVisualState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	bool IsToggled(); // Function DBDUIViewsCore.CoreToggleButtonWidget.IsToggled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x484a990
};

// Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget
// Size: 0x330 (Inherited: 0x328)
struct UCoreTutorialMysteryNoteWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
};

// Class DBDUIViewsCore.CoreTutorialObjectiveItem
// Size: 0x320 (Inherited: 0x310)
struct UCoreTutorialObjectiveItem : UCoreBaseUserWidget {
	struct FMulticastInlineDelegate TutorialObjectiveCompletedDelegate; // 0x310(0x10)

	void SetObjectiveCompleted(bool removeAfterCompletion); // Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void InitObjective(struct FTutorialObjectivesViewData& interactionsViewData); // Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.CoreTutorialObjectivesContainer
// Size: 0x3a8 (Inherited: 0x328)
struct UCoreTutorialObjectivesContainer : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct UCoreTutorialObjectiveItem* CoreTutorialObjectiveItemClass; // 0x330(0x08)
	int32_t BasePooledInstanceAmount; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct UGridPanel* ObjectiveContainer; // 0x340(0x08)
	struct TArray<struct UCoreTutorialObjectiveItem*> _objectivePool; // 0x348(0x10)
	struct TMap<struct FName, struct UCoreTutorialObjectiveItem*> _objectiveItems; // 0x358(0x50)

	void OnTutorialObjectiveCompleted(struct UCoreTutorialObjectiveItem* Item); // Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted // (Final|Native|Private) // @ game+0x484b020
};

// Class DBDUIViewsCore.CoreTutorialPopupWidget
// Size: 0x350 (Inherited: 0x328)
struct UCoreTutorialPopupWidget : UCoreBaseHudWidget {
	char pad_328[0x8]; // 0x328(0x08)
	struct UCoreInputSwitcherWidget* ProgressionInputSwitcher; // 0x330(0x08)
	struct UAkAudioEvent* ClosePopupSfx; // 0x338(0x08)
	struct FMulticastInlineDelegate _notifTutoConfirmButtonClickDelegate; // 0x340(0x10)
};

// Class DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget
// Size: 0x398 (Inherited: 0x368)
struct UCoreUnlockPersonalPerksPopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)
	struct TArray<struct UCoreMenuPerkWidget*> _perkArray; // 0x370(0x10)
	struct UCoreMenuPerkWidget* FirstPerk; // 0x380(0x08)
	struct UCoreMenuPerkWidget* SecondPerk; // 0x388(0x08)
	struct UCoreMenuPerkWidget* ThirdPerk; // 0x390(0x08)

	void ShowMenuPerkTooltip(struct UCoreButtonWidget* hoveredSlotWidget); // Function DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget.ShowMenuPerkTooltip // (Final|Native|Private|BlueprintCallable) // @ game+0x484c160
	void HideMenuPerkTooltip(struct UCoreButtonWidget* unhoveredSlotWidget); // Function DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget.HideMenuPerkTooltip // (Final|Native|Private|BlueprintCallable) // @ game+0x484a820
};

// Class DBDUIViewsCore.CoreWalletWidget
// Size: 0x370 (Inherited: 0x310)
struct UCoreWalletWidget : UCoreBaseUserWidget {
	struct UCoreCurrencyLabelWidget* CoreCurrencyLabelWidgetClass; // 0x310(0x08)
	struct UGridPanel* CurrencyContainer; // 0x318(0x08)
	struct TMap<enum class ECurrencyType, struct UCoreCurrencyLabelWidget*> _currencyWidgetMap; // 0x320(0x50)

	void UpdateCurrency(enum class ECurrencyType Type, int32_t newBalance, int32_t previousBalance); // Function DBDUIViewsCore.CoreWalletWidget.UpdateCurrency // (Final|Native|Public|BlueprintCallable) // @ game+0x484c210
	void PlayNotEnoughCurrency(enum class ECurrencyType Type); // Function DBDUIViewsCore.CoreWalletWidget.PlayNotEnoughCurrency // (Final|Native|Public|BlueprintCallable) // @ game+0x484b0b0
	void InitWallet(struct TArray<struct FCurrencyLabelViewData>& walletData); // Function DBDUIViewsCore.CoreWalletWidget.InitWallet // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x484a8b0
	void FullUpdateCurrency(struct FCurrencyLabelViewData& ViewData); // Function DBDUIViewsCore.CoreWalletWidget.FullUpdateCurrency // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x484a530
};

// Class DBDUIViewsCore.CoreWatermarkWidget
// Size: 0x350 (Inherited: 0x310)
struct UCoreWatermarkWidget : UCoreBaseUserWidget {
	char pad_310[0x8]; // 0x310(0x08)
	struct TArray<struct UDBDTextBlock*> _watermarkDBDTextBlocks; // 0x318(0x10)
	char pad_328[0x28]; // 0x328(0x28)

	void UpdateWatermarkText(); // Function DBDUIViewsCore.CoreWatermarkWidget.UpdateWatermarkText // (Final|Native|Protected) // @ game+0x484c320
};

// Class DBDUIViewsCore.CurrencyProgressionTooltipWidget
// Size: 0x398 (Inherited: 0x320)
struct UCurrencyProgressionTooltipWidget : UTooltipWidget {
	int32_t MaxExpirationLabels; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct UCoreCurrencyExpirationLabelWidget* CoreCurrencyExpirationLabelWidgetClass; // 0x328(0x08)
	struct UDBDTextBlock* CurrencyTB; // 0x330(0x08)
	struct UDBDTextBlock* CurrencyTitleTB; // 0x338(0x08)
	struct UDBDRichTextBlock* CurrencyDescriptionRTB; // 0x340(0x08)
	struct UDBDImage* TitleBgIMG; // 0x348(0x08)
	struct UVerticalBox* EventContainer; // 0x350(0x08)
	struct UDBDTextBlock* EventNameTB; // 0x358(0x08)
	struct UDBDTextBlock* EventDescriptionTB; // 0x360(0x08)
	struct UDBDTextBlock* EventTimerTB; // 0x368(0x08)
	struct UVerticalBox* ExpirationPanel; // 0x370(0x08)
	struct UVerticalBox* ExpirationLabelContainer; // 0x378(0x08)
	struct UDBDTextBlock* ExpirationTitleTB; // 0x380(0x08)
	struct TArray<struct UCoreCurrencyExpirationLabelWidget*> _currencyExpirationWidgetPool; // 0x388(0x10)

	void SetTooltipData(struct FCurrencyProgressionTooltipViewData& currencyViewData); // Function DBDUIViewsCore.CurrencyProgressionTooltipWidget.SetTooltipData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x484c0b0
};

// Class DBDUIViewsCore.CustomizationItemGridContainer
// Size: 0x360 (Inherited: 0x310)
struct UCustomizationItemGridContainer : UCoreBaseUserWidget {
	struct UCoreCustomizationRewardWidget* _customizationRewardWidgetClass; // 0x310(0x08)
	bool _setSmallTemplate; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	int32_t _columnCountInGrid; // 0x31c(0x04)
	float _customizationTileScale; // 0x320(0x04)
	int32_t _rowCountToShowScrollBar; // 0x324(0x04)
	struct UGridPanel* GridContainer; // 0x328(0x08)
	struct UDBDScrollBox* ScrollBox; // 0x330(0x08)
	struct FText _scrollLabelText; // 0x338(0x18)
	char pad_350[0x10]; // 0x350(0x10)

	void SetSmallTemplate(bool SetSmallTemplate); // Function DBDUIViewsCore.CustomizationItemGridContainer.SetSmallTemplate // (Final|Native|Public|BlueprintCallable) // @ game+0x484bdb0
	void SetSelectedItem(int32_t selectedIndex); // Function DBDUIViewsCore.CustomizationItemGridContainer.SetSelectedItem // (Final|Native|Public|BlueprintCallable) // @ game+0x484bd20
	void SetScrollPrompt(struct UCoreKeyListenerInputPromptWidget* DisplayPrompt); // Function DBDUIViewsCore.CustomizationItemGridContainer.SetScrollPrompt // (Final|Native|Public|BlueprintCallable) // @ game+0x484bc90
	void SetData(struct TArray<struct FCustomizationRewardViewData>& customizationRewardsData, int32_t selectedIndex); // Function DBDUIViewsCore.CustomizationItemGridContainer.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x484b2f0
	void OnItemClickedDelegate__DelegateSignature(int32_t selectedIndex); // DelegateFunction DBDUIViewsCore.CustomizationItemGridContainer.OnItemClickedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnItemClicked(struct UCoreSelectableButtonWidget* buttonTarget, bool IsSelected); // Function DBDUIViewsCore.CustomizationItemGridContainer.OnItemClicked // (Final|Native|Protected) // @ game+0x484ae30
	void ClearGrid(); // Function DBDUIViewsCore.CustomizationItemGridContainer.ClearGrid // (Final|Native|Protected|BlueprintCallable|Const) // @ game+0x484a4b0
};

// Class DBDUIViewsCore.CustomizationItemOriginWidget
// Size: 0x360 (Inherited: 0x310)
struct UCustomizationItemOriginWidget : UCoreBaseUserWidget {
	struct UDBDRichTextBlock* InstructionText; // 0x310(0x08)
	struct UDBDImage* InstructionImage; // 0x318(0x08)
	struct UDBDRichTextBlock* UnlockTitle; // 0x320(0x08)
	struct UDBDRichTextBlock* UnlockSubtitle; // 0x328(0x08)
	struct UCoreCurrencySwitcherWidget* CurrencyButton; // 0x330(0x08)
	struct UCoreInputSwitcherWidget* ArchivesButton; // 0x338(0x08)
	struct UCoreInputSwitcherWidget* StoreButton; // 0x340(0x08)
	char pad_348[0x18]; // 0x348(0x18)

	void SetStoreState(); // Function DBDUIViewsCore.CustomizationItemOriginWidget.SetStoreState // (Native|Event|Protected|BlueprintEvent) // @ game+0x48306f0
	void SetState(struct FCustomizationItemOriginViewData& ViewData); // Function DBDUIViewsCore.CustomizationItemOriginWidget.SetState // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x484be40
	void SetMilestonePointsState(struct TArray<struct FText>& Args); // Function DBDUIViewsCore.CustomizationItemOriginWidget.SetMilestonePointsState // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x484baf0
	void SetInputSwitcherEnabled(struct UCoreInputSwitcherWidget* inputSwitcher, bool Enabled); // Function DBDUIViewsCore.CustomizationItemOriginWidget.SetInputSwitcherEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x484ba20
	void SetGameplayState(struct TArray<struct FText>& Args); // Function DBDUIViewsCore.CustomizationItemOriginWidget.SetGameplayState // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x484b6f0
	void SetData(struct FCustomizationItemOriginViewData& ViewData); // Function DBDUIViewsCore.CustomizationItemOriginWidget.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x484b460
	void SetCurrencyPurchaseState(struct FPriceTagViewData& CurrencyData); // Function DBDUIViewsCore.CustomizationItemOriginWidget.SetCurrencyPurchaseState // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x484b240
	void SetArchivesState(struct TArray<struct FText>& Args); // Function DBDUIViewsCore.CustomizationItemOriginWidget.SetArchivesState // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x484b130
	void OnButtonClick(); // Function DBDUIViewsCore.CustomizationItemOriginWidget.OnButtonClick // (Final|Native|Protected) // @ game+0x484a9c0
	void DisableStoreButton(); // Function DBDUIViewsCore.CustomizationItemOriginWidget.DisableStoreButton // (Final|Native|Public|BlueprintCallable) // @ game+0x484a510
	void DisableInputs(); // Function DBDUIViewsCore.CustomizationItemOriginWidget.DisableInputs // (Final|Native|Public|BlueprintCallable) // @ game+0x484a4f0
	void DisableArchivesButton(); // Function DBDUIViewsCore.CustomizationItemOriginWidget.DisableArchivesButton // (Final|Native|Public|BlueprintCallable) // @ game+0x484a4d0
};

// Class DBDUIViewsCore.CustomizationTooltipWidget
// Size: 0x330 (Inherited: 0x320)
struct UCustomizationTooltipWidget : UTooltipWidget {
	struct UDBDTextBlock* ToolTipStatusTB; // 0x320(0x08)
	struct UDBDRichTextBlock* ToolTipDescriptionRTB; // 0x328(0x08)

	void SetTooltipData(struct FCustomizationTooltipViewData& customizationViewData); // Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void SetStatusText(bool IsEquipped, bool IsOwned, bool IsLocked); // Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText // (Final|Native|Protected|BlueprintCallable) // @ game+0x484bf60
	void AppendToDescriptionText(struct FText& appendedText); // Function DBDUIViewsCore.CustomizationTooltipWidget.AppendToDescriptionText // (Final|Native|Public|HasOutParms) // @ game+0x484a3e0
};

// Class DBDUIViewsCore.DailyRitualsContainerWidget
// Size: 0x3a8 (Inherited: 0x310)
struct UDailyRitualsContainerWidget : UCoreBaseUserWidget {
	struct FMulticastInlineDelegate _claimButtonClickedDelegate; // 0x310(0x10)
	struct FMulticastInlineDelegate _removeButtonClickedDelegate; // 0x320(0x10)
	struct FMulticastInlineDelegate _onOutOfDailyRitualsDelegate; // 0x330(0x10)
	struct UDailyRitualTileWidget* DailyRitualTileWidgetClass; // 0x340(0x08)
	struct UCanvasPanel* Container; // 0x348(0x08)
	struct UDBDTextBlock* NoRitualWarningText; // 0x350(0x08)
	float TilePadding; // 0x358(0x04)
	float FadeInNoRitualsWarningTextDuration; // 0x35c(0x04)
	float AlignmentAnimationDuration; // 0x360(0x04)
	char pad_364[0x3c]; // 0x364(0x3c)
	struct UUITweenInstance* _alignAssignedRitualsTween; // 0x3a0(0x08)

	void StartAnim(); // Function DBDUIViewsCore.DailyRitualsContainerWidget.StartAnim // (Final|Native|Public|BlueprintCallable) // @ game+0x484c1f0
	void SetData(struct TArray<struct FDailyRitualViewData> dailyRitualsData, bool isAfterTrial); // Function DBDUIViewsCore.DailyRitualsContainerWidget.SetData // (Final|Native|Public|BlueprintCallable) // @ game+0x484b580
	void OnRecentlyAssignedDailyRitualFadeInComplete(struct UDailyRitualTileWidget* dailyRitualTile); // Function DBDUIViewsCore.DailyRitualsContainerWidget.OnRecentlyAssignedDailyRitualFadeInComplete // (Final|Native|Private) // @ game+0x484af00
	void OnDelayUntilFadeInSequenceComplete(struct UUITweenInstance* delayUntilFadeInSequenceTween); // Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDelayUntilFadeInSequenceComplete // (Final|Native|Private) // @ game+0x484ada0
	void OnDailyRitualTileFadeOutComplete(struct UDailyRitualTileWidget* dailyRitualTile); // Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualTileFadeOutComplete // (Final|Native|Private) // @ game+0x484ad10
	void OnDailyRitualRemoveButtonClicked(struct FString dailyRitualKey); // Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualRemoveButtonClicked // (Final|Native|Protected) // @ game+0x484abd0
	void OnDailyRitualClaimButtonClicked(struct FString dailyRitualKey); // Function DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualClaimButtonClicked // (Final|Native|Protected) // @ game+0x484aa90
};

// Class DBDUIViewsCore.DailyRitualsPopupWidget
// Size: 0x3d8 (Inherited: 0x368)
struct UDailyRitualsPopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)
	struct FMulticastInlineDelegate _onRemovedDailyRitualDelegate; // 0x370(0x10)
	struct FMulticastInlineDelegate _onClaimedRitualDelegate; // 0x380(0x10)
	struct FMulticastInlineDelegate _onClaimedAllRitualsDelegate; // 0x390(0x10)
	struct UDBDImage* BaseBG; // 0x3a0(0x08)
	struct UOverlay* DailyRitualsDetails; // 0x3a8(0x08)
	struct UDailyRitualsContainerWidget* DailyRitualsContainer; // 0x3b0(0x08)
	struct UDBDRichTextBlock* FooterText; // 0x3b8(0x08)
	struct UMaterialInstance* DefaultBackgroundMaterialInstance; // 0x3c0(0x08)
	struct UMaterialInstance* AfterTrialBackgroundMaterialInstance; // 0x3c8(0x08)
	char pad_3D0[0x8]; // 0x3d0(0x08)

	void SetVisuals(bool isAfterTrial); // Function DBDUIViewsCore.DailyRitualsPopupWidget.SetVisuals // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnDailyRitualRemoveButtonClicked(struct FString dailyRitualKey); // Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualRemoveButtonClicked // (Final|Native|Protected) // @ game+0x484ac70
	void OnDailyRitualClaimButtonClicked(struct FString dailyRitualKey); // Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualClaimButtonClicked // (Final|Native|Protected) // @ game+0x484ab30
	void OnDailyRitualClaimAllButtonClicked(); // Function DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualClaimAllButtonClicked // (Final|Native|Protected) // @ game+0x484aa70
};

// Class DBDUIViewsCore.DailyRitualTileWidget
// Size: 0x440 (Inherited: 0x310)
struct UDailyRitualTileWidget : UCoreBaseUserWidget {
	struct FMulticastInlineDelegate _claimButtonClickedDelegate; // 0x310(0x10)
	struct FMulticastInlineDelegate _removeButtonClickedDelegate; // 0x320(0x10)
	struct FMulticastInlineDelegate _onDailyRitualTileFadeInCompletedDelegate; // 0x330(0x10)
	struct FMulticastInlineDelegate _onDailyRitualTileFadeOutCompletedDelegate; // 0x340(0x10)
	struct USizeBox* ContainerSizeBox; // 0x350(0x08)
	struct UDBDImage* IconImage; // 0x358(0x08)
	struct UDBDImage* BackgroundImage; // 0x360(0x08)
	struct UDBDImage* ProgressBar; // 0x368(0x08)
	struct UDBDImage* BackgroundSheen; // 0x370(0x08)
	struct UDBDTextBlock* TitleTextBlock; // 0x378(0x08)
	struct UDBDTextBlock* RewardTextBlock; // 0x380(0x08)
	struct UDBDTextBlock* DescriptionTextBlock; // 0x388(0x08)
	struct UDBDTextBlock* ProgressTextBlock; // 0x390(0x08)
	struct UCoreButtonWidget* ClaimButton; // 0x398(0x08)
	struct UCoreButtonWidget* RemoveButton; // 0x3a0(0x08)
	struct UMaterialInterface* DefaultBackgroundTexture; // 0x3a8(0x08)
	struct UMaterialInterface* NewBackgroundTexture; // 0x3b0(0x08)
	struct UMaterialInterface* CompletedBackgroundTexture; // 0x3b8(0x08)
	struct FDailyRitualViewData _dailyRitualData; // 0x3c0(0x78)
	char pad_438[0x8]; // 0x438(0x08)

	void PlayFadeOutAnimation(); // Function DBDUIViewsCore.DailyRitualTileWidget.PlayFadeOutAnimation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayFadeInAnimation(); // Function DBDUIViewsCore.DailyRitualTileWidget.PlayFadeInAnimation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnRemoveButtonClicked(struct UCoreButtonWidget* Button); // Function DBDUIViewsCore.DailyRitualTileWidget.OnRemoveButtonClicked // (Final|Native|Protected) // @ game+0x484af90
	void OnClaimButtonClicked(struct UCoreButtonWidget* Button); // Function DBDUIViewsCore.DailyRitualTileWidget.OnClaimButtonClicked // (Final|Native|Protected) // @ game+0x484a9e0
};

// Class DBDUIViewsCore.DBDButton
// Size: 0x4b8 (Inherited: 0x4a0)
struct UDBDButton : UButton {
	bool SendAnalyticsData; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct FString AnalyticsName; // 0x4a8(0x10)
};

// Class DBDUIViewsCore.DBDComboBoxString
// Size: 0xee8 (Inherited: 0xee8)
struct UDBDComboBoxString : UComboBoxString {

	void SetData(struct TArray<struct FString>& OptionsList, struct FString DefaultOption); // Function DBDUIViewsCore.DBDComboBoxString.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4850d40
};

// Class DBDUIViewsCore.DBDDropDownListButton
// Size: 0x478 (Inherited: 0x478)
struct UDBDDropDownListButton : UCoreTabWidget {

	void ToggleDropDownArrow(bool showArrow); // Function DBDUIViewsCore.DBDDropDownListButton.ToggleDropDownArrow // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.DBDDropDownListWidget
// Size: 0x3c0 (Inherited: 0x398)
struct UDBDDropDownListWidget : UCoreTabContainerWidget {
	struct FMulticastInlineDelegate OnSelectedOptionDelegate; // 0x398(0x10)
	struct UCoreButtonWidget* _triggerButton; // 0x3a8(0x08)
	char pad_3B0[0x10]; // 0x3b0(0x10)

	void UpdateDropDown(); // Function DBDUIViewsCore.DBDDropDownListWidget.UpdateDropDown // (Native|Public) // @ game+0x48306b0
	void UnbindFromTrigger(); // Function DBDUIViewsCore.DBDDropDownListWidget.UnbindFromTrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x4852770
	void OnUserClicked(struct FPointerEvent& MouseEvent); // Function DBDUIViewsCore.DBDDropDownListWidget.OnUserClicked // (Native|Protected|HasOutParms) // @ game+0x48509c0
	void OnTriggerClicked(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.DBDDropDownListWidget.OnTriggerClicked // (Final|Native|Private) // @ game+0x4850930
	void OnSelectedOptionDelegate__DelegateSignature(struct FTabWidgetData buttonData); // DelegateFunction DBDUIViewsCore.DBDDropDownListWidget.OnSelectedOptionDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnOptionSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.DBDDropDownListWidget.OnOptionSelected // (Native|Protected) // @ game+0x4850780
	void HideDropDownList(); // Function DBDUIViewsCore.DBDDropDownListWidget.HideDropDownList // (Final|Native|Private|BlueprintCallable) // @ game+0x4850070
	void BindToTrigger(struct UCoreButtonWidget* triggerButton); // Function DBDUIViewsCore.DBDDropDownListWidget.BindToTrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x484ff20
};

// Class DBDUIViewsCore.DBDImage
// Size: 0x298 (Inherited: 0x250)
struct UDBDImage : UImage {
	struct UTexture2D* DefaultImage; // 0x250(0x08)
	struct FMulticastInlineDelegate _onImageStreamingCancelled; // 0x258(0x10)
	struct FMulticastInlineDelegate _onImageStreamingStarted; // 0x268(0x10)
	struct FMulticastInlineDelegate _onImageStreamingCompleted; // 0x278(0x10)
	char pad_288[0x10]; // 0x288(0x10)

	void SetBrushFromTextureWithDefault(struct UTexture2D* Texture, bool matchSize); // Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x4850c70
	void SetBrushFromSoftTextureWithDefault(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool matchSize); // Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x4850b10
};

// Class DBDUIViewsCore.DBDRichTextBlock
// Size: 0x7e0 (Inherited: 0x6d0)
struct UDBDRichTextBlock : URichTextBlock {
	struct FString TextStyle; // 0x6d0(0x10)
	struct USwitchDockStateManager* _switchDockStateManager; // 0x6e0(0x08)
	struct UDBDTextManager* _textManager; // 0x6e8(0x08)
	int32_t _characterLimit; // 0x6f0(0x04)
	bool _isUpperCase; // 0x6f4(0x01)
	bool _hasLargeText; // 0x6f5(0x01)
	char pad_6F6[0x2]; // 0x6f6(0x02)
	struct FTextBlockOverrideProperties _largeTextProperties; // 0x6f8(0x48)
	char pad_740[0x1]; // 0x740(0x01)
	bool _overrideUndockedPropertiesWithLargeText; // 0x741(0x01)
	bool _hasUndocking; // 0x742(0x01)
	char pad_743[0x5]; // 0x743(0x05)
	struct FTextBlockOverrideProperties _undockedProperties; // 0x748(0x48)
	char pad_790[0x50]; // 0x790(0x50)

	void SetIsUpperCase(bool isUpperCase); // Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase // (Final|Native|Public|BlueprintCallable) // @ game+0x4851260
	void SetHTMLText(struct FText& InText); // Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4851010
	void PreviewUndocked(); // Function DBDUIViewsCore.DBDRichTextBlock.PreviewUndocked // (Final|Native|Protected) // @ game+0x4032ad0
	void PreviewLargeText(); // Function DBDUIViewsCore.DBDRichTextBlock.PreviewLargeText // (Final|Native|Protected) // @ game+0x4032ad0
	void OnSwitchDockStateChanged(bool isDocked); // Function DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged // (Final|Native|Protected) // @ game+0x4850810
	void OnLargeTextSettingsChanged(bool isLargeText); // Function DBDUIViewsCore.DBDRichTextBlock.OnLargeTextSettingsChanged // (Final|Native|Protected) // @ game+0x4850290
	bool GetIsUpperCase(); // Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x484ffb0
};

// Class DBDUIViewsCore.DBDScrollBox
// Size: 0x950 (Inherited: 0x910)
struct UDBDScrollBox : UScrollBox {
	bool _useControllerScroll; // 0x910(0x01)
	bool _shouldScrollOnMouseOver; // 0x911(0x01)
	char pad_912[0x2]; // 0x912(0x02)
	float _scrollSpeed; // 0x914(0x04)
	struct UCoreKeyListenerInputPromptWidget* _displayPrompt; // 0x918(0x08)
	struct FText _displayPromptText; // 0x920(0x18)
	enum class EShowScrollDisplayPrompt _showDisplayPrompt; // 0x938(0x01)
	bool IsUsingSmoothMask; // 0x939(0x01)
	char pad_93A[0x6]; // 0x93a(0x06)
	struct URetainerBox* SmoothMaskRetainerBox; // 0x940(0x08)
	char pad_948[0x8]; // 0x948(0x08)

	void UpdateSmoothMask(float CurrentOffset); // Function DBDUIViewsCore.DBDScrollBox.UpdateSmoothMask // (Final|Native|Private) // @ game+0x48527b0
	void UpdateDisplayPrompt(); // Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt // (Final|Native|Protected|BlueprintCallable) // @ game+0x4852790
	void SetDisplayPrompt(struct UCoreKeyListenerInputPromptWidget* DisplayPrompt); // Function DBDUIViewsCore.DBDScrollBox.SetDisplayPrompt // (Final|Native|Public|BlueprintCallable) // @ game+0x4850e70
	void OnControlModeChanged(enum class EControlMode controlMode); // Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged // (Final|Native|Protected|BlueprintCallable) // @ game+0x4850210
	bool IsMouseOver(); // Function DBDUIViewsCore.DBDScrollBox.IsMouseOver // (Final|Native|Public|BlueprintCallable) // @ game+0x48500b0
	void HandleControllerInput(float analogValue); // Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput // (Final|Native|Protected|BlueprintCallable) // @ game+0x484fff0
};

// Class DBDUIViewsCore.DBDTextBlock
// Size: 0x400 (Inherited: 0x2f0)
struct UDBDTextBlock : UTextBlock {
	struct FString TextStyle; // 0x2f0(0x10)
	struct USwitchDockStateManager* _switchDockStateManager; // 0x300(0x08)
	struct UDBDTextManager* _textManager; // 0x308(0x08)
	int32_t _characterLimit; // 0x310(0x04)
	bool _isUpperCase; // 0x314(0x01)
	bool _hasLargeText; // 0x315(0x01)
	char pad_316[0x2]; // 0x316(0x02)
	struct FTextBlockOverrideProperties _largeTextProperties; // 0x318(0x48)
	char pad_360[0x1]; // 0x360(0x01)
	bool _overrideUndockedPropertiesWithLargeText; // 0x361(0x01)
	bool _hasUndocking; // 0x362(0x01)
	char pad_363[0x5]; // 0x363(0x05)
	struct FTextBlockOverrideProperties _undockedProperties; // 0x368(0x48)
	char pad_3B0[0x50]; // 0x3b0(0x50)

	void SetIsUpperCase(bool isUpperCase); // Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase // (Final|Native|Public|BlueprintCallable) // @ game+0x48512f0
	void PreviewUndocked(); // Function DBDUIViewsCore.DBDTextBlock.PreviewUndocked // (Final|Native|Protected) // @ game+0x4032ad0
	void PreviewLargeText(); // Function DBDUIViewsCore.DBDTextBlock.PreviewLargeText // (Final|Native|Protected) // @ game+0x4032ad0
	void OnSwitchDockStateChanged(bool isDocked); // Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged // (Final|Native|Protected) // @ game+0x48508a0
	void OnLargeTextSettingsChanged(bool isLargeText); // Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged // (Final|Native|Protected) // @ game+0x4850320
	bool GetIsUpperCase(); // Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x484ffd0
};

// Class DBDUIViewsCore.TooltipRoot
// Size: 0x2a0 (Inherited: 0x298)
struct UTooltipRoot : UUserWidget {
	struct UCanvasPanel* _canvasPanel; // 0x298(0x08)
};

// Class DBDUIViewsCore.DBDTooltipManager
// Size: 0xa0 (Inherited: 0x38)
struct UDBDTooltipManager : UGameInstanceSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct UTooltipRoot* _rootWidget; // 0x40(0x08)
	struct TMap<enum class ETooltipType, struct UUserWidget*> _tooltipPool; // 0x48(0x50)
	struct UUserWidget* _currentTooltip; // 0x98(0x08)

	void ShowLoadoutTooltip(struct FLoadoutTooltipData& tooltipViewData, struct FGeometry& triggerGeometry, enum class ETooltipHorizontalAlignment tooltipHorizontalAlignment, enum class ETooltipVerticalAlignment tooltipVerticalAlignment); // Function DBDUIViewsCore.DBDTooltipManager.ShowLoadoutTooltip // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48524a0
	void ShowLabelTooltip(struct FText& tooltipViewData, struct FGeometry& triggerGeometry, enum class ETooltipHorizontalAlignment tooltipHorizontalAlignment, enum class ETooltipVerticalAlignment tooltipVerticalAlignment); // Function DBDUIViewsCore.DBDTooltipManager.ShowLabelTooltip // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48522b0
	void ShowCustomizationTooltip(struct FCustomizationTooltipViewData& tooltipViewData, struct FGeometry& triggerGeometry, enum class ETooltipHorizontalAlignment tooltipHorizontalAlignment, enum class ETooltipVerticalAlignment tooltipVerticalAlignment); // Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48520f0
	void ShowCurrencyTooltip(struct FCurrencyProgressionTooltipViewData& tooltipViewData, struct FGeometry& triggerGeometry, enum class ETooltipHorizontalAlignment tooltipHorizontalAlignment, enum class ETooltipVerticalAlignment tooltipVerticalAlignment); // Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4851ef0
	void ShowCharacterTooltip(struct FCharacterTooltipViewData& tooltipViewData, struct FGeometry& triggerGeometry, enum class ETooltipHorizontalAlignment tooltipHorizontalAlignment, enum class ETooltipVerticalAlignment tooltipVerticalAlignment); // Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4851d00
	void ShowArchiveRewardNodeTooltip(struct FArchiveRewardNodeTooltipViewData& tooltipViewData, struct FGeometry& triggerGeometry, enum class ETooltipHorizontalAlignment tooltipHorizontalAlignment, enum class ETooltipVerticalAlignment tooltipVerticalAlignment); // Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveRewardNodeTooltip // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4851b20
	void ShowArchiveNodeTooltip(struct FArchiveNodeViewData& tooltipViewData, struct FGeometry& triggerGeometry, enum class ETooltipHorizontalAlignment tooltipHorizontalAlignment, enum class ETooltipVerticalAlignment tooltipVerticalAlignment); // Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveNodeTooltip // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48516d0
	void ShowArchiveCompendiumTooltip(struct FCompendiumButtonData& tooltipViewData, struct FGeometry& triggerGeometry, enum class ETooltipHorizontalAlignment tooltipHorizontalAlignment, enum class ETooltipVerticalAlignment tooltipVerticalAlignment); // Function DBDUIViewsCore.DBDTooltipManager.ShowArchiveCompendiumTooltip // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4851490
	void OnViewportCreated(); // Function DBDUIViewsCore.DBDTooltipManager.OnViewportCreated // (Final|Native|Private) // @ game+0x4850af0
	void HideTooltip(); // Function DBDUIViewsCore.DBDTooltipManager.HideTooltip // (Final|Native|Public|BlueprintCallable) // @ game+0x4850090
};

// Class DBDUIViewsCore.DBDWrapBox
// Size: 0x168 (Inherited: 0x148)
struct UDBDWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x148(0x08)
	float WrapWidth; // 0x150(0x04)
	bool bExplicitWrapWidth; // 0x154(0x01)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x155(0x01)
	char pad_156[0x12]; // 0x156(0x12)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x48511e0
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x48510e0
	struct UDBDWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox // (Final|Native|Public|BlueprintCallable) // @ game+0x484fe80
};

// Class DBDUIViewsCore.DBDWrapBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UDBDWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment inVerticalAlignment); // Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4851410
	void SetPadding(struct FMargin InPadding); // Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x4851380
	void SetHorizontalAlignment(enum class EHorizontalAlignment inHorizontalAlignment); // Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x4851160
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan // (Final|Native|Public|BlueprintCallable) // @ game+0x4850f90
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace // (Final|Native|Public|BlueprintCallable) // @ game+0x4850f00
};

// Class DBDUIViewsCore.DragZone
// Size: 0x2f0 (Inherited: 0x298)
struct UDragZone : UUserWidget {
	struct FMulticastInlineDelegate OnDragDelegate; // 0x298(0x10)
	float DeadZone; // 0x2a8(0x04)
	enum class EDragZoneAxis Axis; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UBorder* DebugPreview; // 0x2b0(0x08)
	struct UDBDButton* HitzoneButton; // 0x2b8(0x08)
	char pad_2C0[0x30]; // 0x2c0(0x30)

	void OnMouseReleaseGlobal(struct FPointerEvent& MouseEvent); // Function DBDUIViewsCore.DragZone.OnMouseReleaseGlobal // (Final|Native|Private|HasOutParms) // @ game+0x4850650
	void OnMousePressHitzone(); // Function DBDUIViewsCore.DragZone.OnMousePressHitzone // (Final|Native|Private) // @ game+0x4850630
	void OnMousePressGlobal(struct FPointerEvent& MouseEvent); // Function DBDUIViewsCore.DragZone.OnMousePressGlobal // (Final|Native|Private|HasOutParms) // @ game+0x4850500
	void OnMouseMoveGlobal(struct FPointerEvent& MouseEvent); // Function DBDUIViewsCore.DragZone.OnMouseMoveGlobal // (Final|Native|Private|HasOutParms) // @ game+0x48503d0
	void OnMouseHoverHitzone(); // Function DBDUIViewsCore.DragZone.OnMouseHoverHitzone // (Final|Native|Private) // @ game+0x48503b0
	void OnAnalogInput(struct FAnalogInputEvent& analogEvent); // Function DBDUIViewsCore.DragZone.OnAnalogInput // (Final|Native|Private|HasOutParms) // @ game+0x48500d0
};

// Class DBDUIViewsCore.EventEntryRewardsTabWidget
// Size: 0x380 (Inherited: 0x330)
struct UEventEntryRewardsTabWidget : UCoreTabContentWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct UDataTable* _eventSkinDataTable; // 0x338(0x08)
	struct FText _eventFrameLabel; // 0x340(0x18)
	struct UEventEntryRewardsDisplayWidget* EventEntryRewardsDisplayWidget; // 0x358(0x08)
	struct FMulticastInlineDelegate _onRewardGridItemClicked; // 0x360(0x10)
	struct FMulticastInlineDelegate _onPreviewAreaItemClicked; // 0x370(0x10)

	void SetScrollPrompt(struct UCoreKeyListenerInputPromptWidget* DisplayPrompt); // Function DBDUIViewsCore.EventEntryRewardsTabWidget.SetScrollPrompt // (Final|Native|Public|BlueprintCallable) // @ game+0x4857100
	void OnRewardGridItemClicked(int32_t selectedIndex); // Function DBDUIViewsCore.EventEntryRewardsTabWidget.OnRewardGridItemClicked // (Final|Native|Protected) // @ game+0x4856710
	void OnPreviewAreaItemClicked(int32_t selectedIndex); // Function DBDUIViewsCore.EventEntryRewardsTabWidget.OnPreviewAreaItemClicked // (Final|Native|Protected) // @ game+0x4856680
};

// Class DBDUIViewsCore.EventEntryCollectionTabWidget
// Size: 0x380 (Inherited: 0x380)
struct UEventEntryCollectionTabWidget : UEventEntryRewardsTabWidget {
};

// Class DBDUIViewsCore.EventEntryEventTabWidget
// Size: 0x3a0 (Inherited: 0x330)
struct UEventEntryEventTabWidget : UCoreTabContentWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct UDataTable* _eventSkinDataTable; // 0x338(0x08)
	struct UEventTabViewData* _viewData; // 0x340(0x08)
	struct UDBDImage* ImageContainer; // 0x348(0x08)
	struct UDBDScrollBox* ScrollBox; // 0x350(0x08)
	struct UDBDRichTextBlock* MessageText; // 0x358(0x08)
	struct UDBDRichTextBlock* AdditionalInformationText; // 0x360(0x08)
	struct UCoreInputSwitcherWidget* ArchivesButton; // 0x368(0x08)
	struct FText _scrollLabelText; // 0x370(0x18)
	struct FMulticastInlineDelegate _onArchivesButtonClicked; // 0x388(0x10)
	bool _disableArchivesButton; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)

	void OnArchivesButtonClicked(); // Function DBDUIViewsCore.EventEntryEventTabWidget.OnArchivesButtonClicked // (Final|Native|Protected) // @ game+0x48501f0
	void EnableInputs(); // Function DBDUIViewsCore.EventEntryEventTabWidget.EnableInputs // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void DisableInputs(); // Function DBDUIViewsCore.EventEntryEventTabWidget.DisableInputs // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.EventEntryPopupWidget
// Size: 0x3c0 (Inherited: 0x368)
struct UEventEntryPopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)
	struct UEventEntryPopupViewData* _viewData; // 0x370(0x08)
	struct UDataTable* _eventSkinDataTable; // 0x378(0x08)
	struct UDBDImage* TitleBanner; // 0x380(0x08)
	struct UDBDImage* TitleImage; // 0x388(0x08)
	struct UDBDTextBlock* EventDateText; // 0x390(0x08)
	struct UCoreTabContainerWidget* PopupTabsContainer; // 0x398(0x08)
	struct UMilestoneTrackerWidget* MilestoneTracker; // 0x3a0(0x08)
	struct UCoreKeyListenerInputPromptWidget* ScrollPrompt; // 0x3a8(0x08)
	struct FMulticastInlineDelegate _eventEntryTabSelectedEvent; // 0x3b0(0x10)

	void SetUiTakeoverActive(bool IsActive); // Function DBDUIViewsCore.EventEntryPopupWidget.SetUiTakeoverActive // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48462c0
	void SetTabsVisuals(); // Function DBDUIViewsCore.EventEntryPopupWidget.SetTabsVisuals // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnTabSelected(struct UCoreSelectableButtonWidget* selectedButton); // Function DBDUIViewsCore.EventEntryPopupWidget.OnTabSelected // (Final|Native|Protected) // @ game+0x4856830
	bool GetRowDataFromEventSkinDataTable(struct UDataTable* DataTable, struct FName& RowName, struct FEventEntryPopupSkinUIData& outRowData); // Function DBDUIViewsCore.EventEntryPopupWidget.GetRowDataFromEventSkinDataTable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4855d90
};

// Class DBDUIViewsCore.EventEntryRewardsDisplayWidget
// Size: 0x328 (Inherited: 0x310)
struct UEventEntryRewardsDisplayWidget : UCoreBaseUserWidget {
	struct UCustomizationItemGridContainer* RewardGrid; // 0x310(0x08)
	struct UCoreImagePreviewAreaWidget* PreviewArea; // 0x318(0x08)
	struct UCustomizationItemOriginWidget* InstructionWidget; // 0x320(0x08)

	void SetVisuals(struct FEventEntryPopupSkinUIData skinUIData); // Function DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetVisuals // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48573f0
	void SetSelectedReward(int32_t selectedIndex); // Function DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetSelectedReward // (Final|Native|Public|BlueprintCallable) // @ game+0x4857190
	void SetScrollPrompt(struct UCoreKeyListenerInputPromptWidget* DisplayPrompt); // Function DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetScrollPrompt // (Final|Native|Public|BlueprintCallable) // @ game+0x4857070
	void SetPreviewAreaData(struct FCustomizationItemPreviewAreaViewData& ViewData); // Function DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetPreviewAreaData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4856f20
	void SetItemsData(struct TArray<struct FCustomizationRewardViewData>& customizationRewardsData, int32_t selectedIndex); // Function DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetItemsData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4856db0
	void SetInstructionWidgetData(struct FCustomizationItemOriginViewData& ViewData); // Function DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetInstructionWidgetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4856ad0
	void DisableInstructionStoreButton(); // Function DBDUIViewsCore.EventEntryRewardsDisplayWidget.DisableInstructionStoreButton // (Final|Native|Public|BlueprintCallable) // @ game+0x4855d70
	void DisableInstructionArchivesButton(); // Function DBDUIViewsCore.EventEntryRewardsDisplayWidget.DisableInstructionArchivesButton // (Final|Native|Public|BlueprintCallable) // @ game+0x4855d50
	void DisableInputs(); // Function DBDUIViewsCore.EventEntryRewardsDisplayWidget.DisableInputs // (Final|Native|Public|BlueprintCallable) // @ game+0x4855d30
};

// Class DBDUIViewsCore.EventEntryStoreTabWidget
// Size: 0x380 (Inherited: 0x380)
struct UEventEntryStoreTabWidget : UEventEntryRewardsTabWidget {
};

// Class DBDUIViewsCore.EventPointsWidget
// Size: 0x298 (Inherited: 0x298)
struct UEventPointsWidget : UUserWidget {

	void SetValue(int32_t NewValue); // Function DBDUIViewsCore.EventPointsWidget.SetValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Highlight(bool isHighlighted); // Function DBDUIViewsCore.EventPointsWidget.Highlight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDUIViewsCore.FriendItemWidget
// Size: 0x440 (Inherited: 0x408)
struct UFriendItemWidget : UCoreButtonWidget {
	struct UDBDRichTextBlock* playerNameText; // 0x408(0x08)
	struct UDBDRichTextBlock* StatusText; // 0x410(0x08)
	struct UDBDImage* InviteIcon; // 0x418(0x08)
	struct UDBDImage* CrossplayIcon; // 0x420(0x08)
	char pad_428[0x18]; // 0x428(0x18)
};

// Class DBDUIViewsCore.FriendSearchPopupWidget
// Size: 0x4b8 (Inherited: 0x3d0)
struct UFriendSearchPopupWidget : UCoreGenericTextInputPopupWidget {
	char pad_3D0[0x80]; // 0x3d0(0x80)
	struct UCoreInputSwitcherWidget* FriendSearchWidget; // 0x450(0x08)
	struct UDBDScrollBox* FriendSearchScrollBox; // 0x458(0x08)
	struct UFriendItemWidget* FriendItemWidgetClass; // 0x460(0x08)
	struct TMap<struct FString, struct UFriendItemWidget*> _friendsMap; // 0x468(0x50)

	void OnFriendClicked(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.FriendSearchPopupWidget.OnFriendClicked // (Final|Native|Protected) // @ game+0x48560f0
};

// Class DBDUIViewsCore.LabelTooltipWidget
// Size: 0x328 (Inherited: 0x320)
struct ULabelTooltipWidget : UTooltipWidget {
	struct UDBDRichTextBlock* LabelRTB; // 0x320(0x08)

	void SetTooltipData(struct FText& labelText); // Function DBDUIViewsCore.LabelTooltipWidget.SetTooltipData // (Final|Native|Public|HasOutParms) // @ game+0x4857220
	void Reset(); // Function DBDUIViewsCore.LabelTooltipWidget.Reset // (Final|Native|Public) // @ game+0x48568c0
};

// Class DBDUIViewsCore.LoadoutMenuPopupWidget
// Size: 0x658 (Inherited: 0x368)
struct ULoadoutMenuPopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)
	struct UDBDRichTextBlock* LoadoutMenuPowerItemRTB; // 0x370(0x08)
	struct UDBDRichTextBlock* LoadoutMenuAddonRTB; // 0x378(0x08)
	struct UDBDRichTextBlock* LoadoutMenuOfferingRTB; // 0x380(0x08)
	struct UDBDRichTextBlock* LoadoutMenuPerkRTB; // 0x388(0x08)
	struct UDBDTextBlock* BotRoleIndexText; // 0x390(0x08)
	struct UDBDRichTextBlock* LoadoutMenuInventoryRTB; // 0x398(0x08)
	struct UDBDRichTextBlock* LoadoutMenuSubtitleRTB; // 0x3a0(0x08)
	struct UDBDRichTextBlock* LoadoutMenuPresetRTB; // 0x3a8(0x08)
	struct UDBDDropDownListWidget* DropDownListWidget; // 0x3b0(0x08)
	struct UDBDDropDownListButton* DropDownListTrigger; // 0x3b8(0x08)
	struct UCoreMenuPowerWidget* CoreMenuPower; // 0x3c0(0x08)
	struct UCoreMenuItemWidget* CoreMenuItem; // 0x3c8(0x08)
	struct UCoreMenuAddonWidget* CoreAddon_2; // 0x3d0(0x08)
	struct UCoreMenuAddonWidget* CoreAddon_3; // 0x3d8(0x08)
	struct UCoreMenuOfferingWidget* CoreOffering; // 0x3e0(0x08)
	struct UCoreMenuPerkWidget* CorePerk_2; // 0x3e8(0x08)
	struct UCoreMenuPerkWidget* CorePerk_3; // 0x3f0(0x08)
	struct UCoreMenuPerkWidget* CorePerk_4; // 0x3f8(0x08)
	struct UCoreMenuPerkWidget* CorePerk_5; // 0x400(0x08)
	struct UCorePresetWidgetContainer* PresetContainer; // 0x408(0x08)
	struct UGridPanel* InventoryGridContainer; // 0x410(0x08)
	struct UCorePaginationContainerWidget* PaginationGridContainer; // 0x418(0x08)
	struct UCoreInputSwitcherWidget* LeftArrow; // 0x420(0x08)
	struct UCoreInputSwitcherWidget* RightArrow; // 0x428(0x08)
	struct UDBDImage* PlusSignImage; // 0x430(0x08)
	struct UDBDImage* LinkBarImage; // 0x438(0x08)
	struct UDBDImage* AddonLinkBarImage; // 0x440(0x08)
	struct FMulticastInlineDelegate _onPaginationAnimationCompletedDelegate; // 0x448(0x10)
	struct FMulticastInlineDelegate _onLoadoutMenuSlotClickedDelegate; // 0x458(0x10)
	struct FMulticastInlineDelegate _onLoadoutMenuSlotSelectedDelegate; // 0x468(0x10)
	struct FMulticastInlineDelegate _onLoadoutMenuInventorySlotClickedDelegate; // 0x478(0x10)
	struct FMulticastInlineDelegate _onLoadoutMenuPresetSlotClickedDelegate; // 0x488(0x10)
	struct FMulticastInlineDelegate _onSelectedCharacterChangedDelegate; // 0x498(0x10)
	struct UCoreMenuPowerWidget* _loadoutPowerClass; // 0x4a8(0x08)
	struct UCoreMenuItemWidget* _loadoutItemWidgetClass; // 0x4b0(0x08)
	struct UCoreMenuAddonWidget* _loadoutAddonClass; // 0x4b8(0x08)
	struct UCoreMenuOfferingWidget* _loadoutOfferingClass; // 0x4c0(0x08)
	struct UCoreMenuPerkWidget* _loadoutPerkClass; // 0x4c8(0x08)
	struct UCorePaginationContainerWidget* _paginationWidgetClass; // 0x4d0(0x08)
	int32_t _inventoryPerRow; // 0x4d8(0x04)
	int32_t _inventoryPerColumn; // 0x4dc(0x04)
	int32_t _cellsPerRow; // 0x4e0(0x04)
	struct FMargin _inventoryItemPadding; // 0x4e4(0x10)
	struct FMargin _inventoryPerkPadding; // 0x4f4(0x10)
	struct FMargin _inventoryOfferingPadding; // 0x504(0x10)
	float _inventoryPerkExtraNudge; // 0x514(0x04)
	float _inventoryOfferingExtraNudge; // 0x518(0x04)
	enum class ETooltipHorizontalAlignment HorizontalAlignment; // 0x51c(0x01)
	enum class ETooltipVerticalAlignment VerticalAlignment; // 0x51d(0x01)
	char pad_51E[0x2]; // 0x51e(0x02)
	struct TArray<struct UCoreMenuLoadoutPartWidget*> _inventoryItemWidgetList; // 0x520(0x10)
	struct TArray<struct UCoreMenuPerkWidget*> _perkSlotWidget; // 0x530(0x10)
	struct TArray<struct UCoreMenuAddonWidget*> _addonSlotWidget; // 0x540(0x10)
	struct UMenuLoadoutPartViewData* _menuLoadoutPartViewData; // 0x550(0x08)
	enum class ELoadoutSlot _loadoutSelectedSlot; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	int32_t _numberOfPaginationItem; // 0x55c(0x04)
	struct TArray<struct ULoadoutMenuPopupViewData*> _perkData; // 0x560(0x10)
	struct TArray<struct ULoadoutMenuPopupViewData*> _addonLoadoutData; // 0x570(0x10)
	struct TArray<struct ULoadoutMenuPopupViewData*> _inventoryViewData; // 0x580(0x10)
	char pad_590[0xc8]; // 0x590(0xc8)

	void UpdateInventoryItemData(); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.UpdateInventoryItemData // (Final|Native|Private|BlueprintCallable) // @ game+0x48577e0
	void ShowMenuLoadoutPartsTooltip(struct UCoreButtonWidget* hoveredSlotWidget); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.ShowMenuLoadoutPartsTooltip // (Final|Native|Private|BlueprintCallable) // @ game+0x4857640
	void SetInventoryItemEnabled(struct UCoreMenuLoadoutPartWidget* Widget, enum class EItemAvailability Availability); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.SetInventoryItemEnabled // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayPaginationOutAnimation(bool isNextPage); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.PlayPaginationOutAnimation // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayPaginationInAnimation(); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.PlayPaginationInAnimation // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnPaginationSelected(int32_t currentPage, bool isUpdate); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnPaginationSelected // (Final|Native|Private) // @ game+0x48565b0
	void OnLoadoutMenuRightArrowClicked(); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuRightArrowClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x4856590
	void OnLoadoutMenuPresetClicked(int32_t selectedPresetId); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPresetClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x4856500
	void OnLoadoutMenuPowerSlotClicked(struct UCoreButtonWidget* menuPowerWidget); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPowerSlotClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x4856470
	void OnLoadoutMenuPerkSlotClicked(struct UCoreButtonWidget* menuPerkWidget); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPerkSlotClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x48563e0
	void OnLoadoutMenuOfferingSlotClicked(struct UCoreButtonWidget* menuOfferingWidget); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuOfferingSlotClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x4856350
	void OnLoadoutMenuLeftArrowClicked(); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuLeftArrowClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x4856330
	void OnLoadoutMenuItemSlotClicked(struct UCoreButtonWidget* menuItemWidget); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuItemSlotClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x48562a0
	void OnLoadoutMenuInventorySlotClicked(struct UCoreButtonWidget* menuPerkWidget); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuInventorySlotClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x4856210
	void OnLoadoutMenuAddonSlotClicked(struct UCoreButtonWidget* menuAddonWidget); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuAddonSlotClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x4856180
	void OnDropdownSelected(enum class ESlateVisibility InVisibility); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnDropdownSelected // (Final|Native|Private) // @ game+0x4856070
	void OnDropDownListSelectedOptionChanged(struct FTabWidgetData buttonData); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.OnDropDownListSelectedOptionChanged // (Final|Native|Private) // @ game+0x4855ef0
	void HideMenuLoadoutPartsTooltip(struct UCoreButtonWidget* unhoveredSlotWidget); // Function DBDUIViewsCore.LoadoutMenuPopupWidget.HideMenuLoadoutPartsTooltip // (Final|Native|Private|BlueprintCallable) // @ game+0x484a820
};

// Class DBDUIViewsCore.LoadoutTooltipWidget
// Size: 0x370 (Inherited: 0x320)
struct ULoadoutTooltipWidget : UTooltipWidget {
	struct UDBDTextBlock* TooltipTitle; // 0x320(0x08)
	struct UDBDRichTextBlock* ToolTipDescriptionRTB; // 0x328(0x08)
	struct UDBDTextBlock* SpecialEventTitle; // 0x330(0x08)
	struct UDBDTextBlock* SpecialEventDescription; // 0x338(0x08)
	struct UDBDTextBlock* UnlockInstructionText; // 0x340(0x08)
	struct UDBDTextBlock* RarityTypeSubtitle; // 0x348(0x08)
	struct UDBDImage* RarityBG; // 0x350(0x08)
	struct UDBDImage* Line_2; // 0x358(0x08)
	struct UDBDImage* LevelIcon; // 0x360(0x08)
	struct UDBDRichTextBlock* ToolTipWarning; // 0x368(0x08)

	void SetTooltipData(struct FLoadoutTooltipData& tooltipViewData); // Function DBDUIViewsCore.LoadoutTooltipWidget.SetTooltipData // (Final|Native|Public|HasOutParms) // @ game+0x48572f0
	void SetLoadoutTooltipPerkLevel(int32_t Level); // Function DBDUIViewsCore.LoadoutTooltipWidget.SetLoadoutTooltipPerkLevel // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SetLoadoutTooltipLockedState(); // Function DBDUIViewsCore.LoadoutTooltipWidget.SetLoadoutTooltipLockedState // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Reset(); // Function DBDUIViewsCore.LoadoutTooltipWidget.Reset // (Final|Native|Public) // @ game+0x48568e0
};

// Class DBDUIViewsCore.MilestoneTrackerTierItem
// Size: 0x328 (Inherited: 0x310)
struct UMilestoneTrackerTierItem : UCoreBaseUserWidget {
	struct UCoreCustomizationRewardWidget* Reward; // 0x310(0x08)
	struct UEventPointsWidget* EventPointsWidget; // 0x318(0x08)
	struct UDBDImage* BackgroundImage; // 0x320(0x08)

	void UpdateBackground(struct TSoftObjectPtr<UMaterialInstance> Background); // Function DBDUIViewsCore.MilestoneTrackerTierItem.UpdateBackground // (Final|Native|Public|BlueprintCallable) // @ game+0x48576d0
	void SetVisualState(enum class EMilestoneTrackerItemState State); // Function DBDUIViewsCore.MilestoneTrackerTierItem.SetVisualState // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SetIsOwned(bool IsOwned, bool useAnimation); // Function DBDUIViewsCore.MilestoneTrackerTierItem.SetIsOwned // (Native|Event|Public|BlueprintEvent) // @ game+0x4856cd0
	void SetIsLocked(bool IsLocked, bool useAnimation); // Function DBDUIViewsCore.MilestoneTrackerTierItem.SetIsLocked // (Native|Event|Public|BlueprintEvent) // @ game+0x4856bf0
	void SetData(struct FMilestoneTrackerItemViewData& Data); // Function DBDUIViewsCore.MilestoneTrackerTierItem.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4856900
	void Clear(); // Function DBDUIViewsCore.MilestoneTrackerTierItem.Clear // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x4855d10
};

// Class DBDUIViewsCore.MilestoneTrackerWidget
// Size: 0x368 (Inherited: 0x310)
struct UMilestoneTrackerWidget : UCoreBaseUserWidget {
	struct UDBDRichTextBlock* Title; // 0x310(0x08)
	struct UDBDRichTextBlock* MilestonePointsText; // 0x318(0x08)
	struct UEventPointsWidget* UserMilestonePointsWidget; // 0x320(0x08)
	struct UHorizontalBox* RewardsGrid; // 0x328(0x08)
	struct UDBDImage* Background; // 0x330(0x08)
	struct UMilestoneTrackerTierItem* _milestoneTrackerTierItemClass; // 0x338(0x08)
	int32_t _maxTierItems; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<struct UMilestoneTrackerTierItem*> _tierItemPool; // 0x348(0x10)
	char pad_358[0x10]; // 0x358(0x10)

	void UpdateUserMilestonePointsValue(int32_t NewValue); // Function DBDUIViewsCore.MilestoneTrackerWidget.UpdateUserMilestonePointsValue // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x48578d0
	void UpdateMilestoneRewardsData(struct TArray<struct FMilestoneTrackerUpdateItemViewData>& newData); // Function DBDUIViewsCore.MilestoneTrackerWidget.UpdateMilestoneRewardsData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4857800
	void SetVisuals(struct FMilestoneTrackerEventBasedSkinViewData& ViewData); // Function DBDUIViewsCore.MilestoneTrackerWidget.SetVisuals // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4857580
	void SetData(struct FMilestoneTrackerViewData& ViewData); // Function DBDUIViewsCore.MilestoneTrackerWidget.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48569b0
	void OnRewardItemClicked(struct UCoreButtonWidget* buttonTarget); // Function DBDUIViewsCore.MilestoneTrackerWidget.OnRewardItemClicked // (Final|Native|Private) // @ game+0x48567a0
};

// Class DBDUIViewsCore.NewActiveTomePopupWidget
// Size: 0x3d0 (Inherited: 0x368)
struct UNewActiveTomePopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)
	struct UDBDImage* BgImageContainer; // 0x370(0x08)
	struct UDBDTextBlock* RiftTimeLabel; // 0x378(0x08)
	struct UDBDTextBlock* TomeTitle; // 0x380(0x08)
	struct UDBDTextBlock* TomeDescription; // 0x388(0x08)
	struct UCoreInputSwitcherWidget* TomeButton; // 0x390(0x08)
	struct UDBDTextBlock* RiftTitle; // 0x398(0x08)
	struct UDBDTextBlock* RiftDescription; // 0x3a0(0x08)
	struct UCoreInputSwitcherWidget* RiftButton; // 0x3a8(0x08)
	struct FMulticastInlineDelegate _currentTomeButtonClickedDelegate; // 0x3b0(0x10)
	struct FMulticastInlineDelegate _riftButtonClickedDelegate; // 0x3c0(0x10)

	void OnRiftButtonClicked(); // Function DBDUIViewsCore.NewActiveTomePopupWidget.OnRiftButtonClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x4859620
	void OnCurrentTomeButtonClicked(); // Function DBDUIViewsCore.NewActiveTomePopupWidget.OnCurrentTomeButtonClicked // (Final|Native|Private|BlueprintCallable) // @ game+0x4859600
};

// Class DBDUIViewsCore.ProcessingPopupWidget
// Size: 0x330 (Inherited: 0x328)
struct UProcessingPopupWidget : UCoreBasePopupWidget {
	char pad_328[0x8]; // 0x328(0x08)
};

// Class DBDUIViewsCore.ProgressionSystemInfoPopupWidget
// Size: 0x370 (Inherited: 0x368)
struct UProgressionSystemInfoPopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)
};

// Class DBDUIViewsCore.ReportFeedbackInfoWidget
// Size: 0x320 (Inherited: 0x310)
struct UReportFeedbackInfoWidget : UCoreBaseUserWidget {
	struct UDBDTextBlock* BanTimestampTB; // 0x310(0x08)
	struct UDBDTextBlock* ReasonTB; // 0x318(0x08)

	void SetData(struct FReportFeedbackData& ReportData); // Function DBDUIViewsCore.ReportFeedbackInfoWidget.SetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4859660
};

// Class DBDUIViewsCore.ReportFeedbackPopupWidget
// Size: 0x390 (Inherited: 0x368)
struct UReportFeedbackPopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)
	struct UReportFeedbackInfoWidget* InfoWidgetClass; // 0x370(0x08)
	struct UDBDTextBlock* BanTimestampSubtitleTB; // 0x378(0x08)
	struct UDBDTextBlock* ReasonSubtitleTB; // 0x380(0x08)
	struct UDBDScrollBox* ReportFeedbackInfoScrollBox; // 0x388(0x08)
};

// Class DBDUIViewsCore.RichTextBlockImageSharedSizeDecorator
// Size: 0x40 (Inherited: 0x38)
struct URichTextBlockImageSharedSizeDecorator : URichTextBlockImageDecorator {
	int32_t Width; // 0x38(0x04)
	int32_t Height; // 0x3c(0x04)
};

// Class DBDUIViewsCore.RichTextBlockScalableImageDecorator
// Size: 0x68 (Inherited: 0x38)
struct URichTextBlockScalableImageDecorator : URichTextBlockImageDecorator {
	struct FSlateColor TintColor; // 0x38(0x28)
	char pad_60[0x8]; // 0x60(0x08)

	void SetTintColor(struct FSlateColor TintColor); // Function DBDUIViewsCore.RichTextBlockScalableImageDecorator.SetTintColor // (Final|Native|Public|BlueprintCallable) // @ game+0x4859800
	void ResetTintColor(); // Function DBDUIViewsCore.RichTextBlockScalableImageDecorator.ResetTintColor // (Final|Native|Public|BlueprintCallable) // @ game+0x4859640
};

// Class DBDUIViewsCore.RichTextHTMLDecorator
// Size: 0x30 (Inherited: 0x30)
struct URichTextHTMLDecorator : URichTextBlockDecorator {
};

// Class DBDUIViewsCore.RichTextNestedTagsDecorator
// Size: 0x80 (Inherited: 0x30)
struct URichTextNestedTagsDecorator : URichTextBlockDecorator {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class DBDUIViewsCore.SeasonEndRankRewardsPopupWidget
// Size: 0x3b8 (Inherited: 0x368)
struct USeasonEndRankRewardsPopupWidget : UCoreGenericPopupWidget {
	char pad_368[0x8]; // 0x368(0x08)
	struct UDBDRichTextBlock* SurvivorSeasonHighRTB; // 0x370(0x08)
	struct UDBDRichTextBlock* KillerSeasonHighRTB; // 0x378(0x08)
	struct UDBDRichTextBlock* DisclaimerMessageRTB; // 0x380(0x08)
	struct UDBDRichTextBlock* SurvivorRankRTB; // 0x388(0x08)
	struct UDBDRichTextBlock* KillerRankRTB; // 0x390(0x08)
	struct UCorePlayerRankWidget* SurvivorRank; // 0x398(0x08)
	struct UCoreCurrencyProgressionRewardWidget* SurvivorReward; // 0x3a0(0x08)
	struct UCorePlayerRankWidget* KillerRank; // 0x3a8(0x08)
	struct UCoreCurrencyProgressionRewardWidget* KillerReward; // 0x3b0(0x08)
};

// Class DBDUIViewsCore.TestWidget
// Size: 0x320 (Inherited: 0x310)
struct UTestWidget : UCoreBaseUserWidget {
	struct UPanelWidget* Workbench; // 0x310(0x08)
	bool showWorkbench; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)

	void SetShowWorkbench(bool showWorkbench); // Function DBDUIViewsCore.TestWidget.SetShowWorkbench // (Final|Native|Public|BlueprintCallable) // @ game+0x4859770
};

