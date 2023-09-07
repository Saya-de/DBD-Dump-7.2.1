// Class DBDUIViewsMobile.FriendsMenuUtilities
// Size: 0x30 (Inherited: 0x30)
struct UFriendsMenuUtilities : UBlueprintFunctionLibrary {
};

// Class DBDUIViewsMobile.MatchConfigDifficultyDataAsset
// Size: 0x88 (Inherited: 0x38)
struct UMatchConfigDifficultyDataAsset : UPrimaryDataAsset {
	struct TMap<enum class ECustomMatchDifficulty, struct FMatchConfigDifficultyData> DifficultiesData; // 0x38(0x50)
};

// Class DBDUIViewsMobile.MatchConfigOptionsDataAsset
// Size: 0x88 (Inherited: 0x38)
struct UMatchConfigOptionsDataAsset : UPrimaryDataAsset {
	struct TMap<enum class ECustomMatchOptions, struct FMatchOptionAssetData> OptionsData; // 0x38(0x50)
};

// Class DBDUIViewsMobile.MatchConfigTabsDataAsset
// Size: 0x88 (Inherited: 0x38)
struct UMatchConfigTabsDataAsset : UPrimaryDataAsset {
	struct TMap<enum class ECustomMatchTab, struct FMatchConfigTabData> Data; // 0x38(0x50)
};

// Class DBDUIViewsMobile.MobileBaseUserWidget
// Size: 0x338 (Inherited: 0x298)
struct UMobileBaseUserWidget : UUserWidget {
	char pad_298[0x10]; // 0x298(0x10)
	struct UWidget* HighlightWidget; // 0x2a8(0x08)
	struct FName _tutorialAnimationName; // 0x2b0(0x0c)
	int32_t _tutorialNumberOfLoops; // 0x2bc(0x04)
	char pad_2C0[0x78]; // 0x2c0(0x78)

	void TutorialAnimationFinished(); // Function DBDUIViewsMobile.MobileBaseUserWidget.TutorialAnimationFinished // (Final|Native|Private) // @ game+0x486b810
	void TryBroadcastOnHighlightWidgetClicked(); // Function DBDUIViewsMobile.MobileBaseUserWidget.TryBroadcastOnHighlightWidgetClicked // (Final|Native|Protected|BlueprintCallable) // @ game+0x486b7f0
	void TriggerTutorialVisuals(); // Function DBDUIViewsMobile.MobileBaseUserWidget.TriggerTutorialVisuals // (Native|Public|BlueprintCallable) // @ game+0x486b7d0
	void PropagateOnHighlightWidgetClicked(struct FName onBoardingID); // Function DBDUIViewsMobile.MobileBaseUserWidget.PropagateOnHighlightWidgetClicked // (Final|Native|Public) // @ game+0x486b570
	void OnSynchronizeProperties(); // Function DBDUIViewsMobile.MobileBaseUserWidget.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	bool IsInTutorialState(); // Function DBDUIViewsMobile.MobileBaseUserWidget.IsInTutorialState // (Final|Native|Public|BlueprintCallable) // @ game+0x486b540
	void FinishTutorialVisuals(); // Function DBDUIViewsMobile.MobileBaseUserWidget.FinishTutorialVisuals // (Native|Public|BlueprintCallable) // @ game+0x482a840
};

// Class DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyRule
// Size: 0x350 (Inherited: 0x338)
struct UUMGAtlantaCustomMatchLobbyRule : UMobileBaseUserWidget {
	struct UTextBlock* RuleName; // 0x338(0x08)
	struct UTextBlock* OptionName; // 0x340(0x08)
	char pad_348[0x8]; // 0x348(0x08)
};

// Class DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen
// Size: 0x370 (Inherited: 0x338)
struct UUMGAtlantaCustomMatchLobbyScreen : UMobileBaseUserWidget {
	struct UUMGBaseButtonWidget* EditButton; // 0x338(0x08)
	struct UVerticalBox* RulesBox; // 0x340(0x08)
	struct UTextBlock* CustomMatchTitle; // 0x348(0x08)
	struct UTextBlock* MatchRulesTitle; // 0x350(0x08)
	char pad_358[0x18]; // 0x358(0x18)

	void HandleEditConfigButtonClicked(); // Function DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen.HandleEditConfigButtonClicked // (Final|Native|Protected) // @ game+0x486b360
};

// Class DBDUIViewsMobile.UMGPageScrollWidget
// Size: 0x468 (Inherited: 0x338)
struct UUMGPageScrollWidget : UMobileBaseUserWidget {
	float ItemWidth; // 0x338(0x04)
	float ItemHeight; // 0x33c(0x04)
	int32_t RowCount; // 0x340(0x04)
	int32_t ColumnCount; // 0x344(0x04)
	int32_t ItemGapDistance; // 0x348(0x04)
	int32_t TotalPageCount; // 0x34c(0x04)
	float ButtonWidth; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct UAkAudioEvent* OnPageChangeSound; // 0x358(0x08)
	struct UCanvasPanel* ContainerPanel; // 0x360(0x08)
	struct UHorizontalBox* ButtonsPanel; // 0x368(0x08)
	struct TSoftClassPtr<UObject> _pageButtonWidgetClass; // 0x370(0x30)
	struct TArray<struct UCanvasPanel*> _itemArray; // 0x3a0(0x10)
	int32_t _currentPageIndex; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct TArray<struct UMobileBaseUserWidget*> _activeWidgets; // 0x3b8(0x10)
	char pad_3C8[0xa0]; // 0x3c8(0xa0)

	void HandlePageButtonClicked(int32_t pageIndex); // Function DBDUIViewsMobile.UMGPageScrollWidget.HandlePageButtonClicked // (Final|Native|Public) // @ game+0x486b3a0
};

// Class DBDUIViewsMobile.UMGGridPageScrollWidget
// Size: 0x470 (Inherited: 0x468)
struct UUMGGridPageScrollWidget : UUMGPageScrollWidget {
	char pad_468[0x8]; // 0x468(0x08)
};

// Class DBDUIViewsMobile.UMGAtlantaMatchConfigPageScroll
// Size: 0x5d0 (Inherited: 0x470)
struct UUMGAtlantaMatchConfigPageScroll : UUMGGridPageScrollWidget {
	struct FCustomMatchTabConfig CharactersTabConfig; // 0x470(0x40)
	struct FCustomMatchTabConfig InventoryTabConfig; // 0x4b0(0x40)
	struct FCustomMatchTabConfig MapTabConfig; // 0x4f0(0x40)
	char pad_530[0xa0]; // 0x530(0xa0)
};

// Class DBDUIViewsMobile.UMGBaseButtonWidget
// Size: 0x468 (Inherited: 0x338)
struct UUMGBaseButtonWidget : UMobileBaseUserWidget {
	struct FMulticastInlineDelegate OnBaseButtonClickedEvent; // 0x338(0x10)
	struct FMulticastInlineDelegate OnBaseButtonPressedEvent; // 0x348(0x10)
	struct FMulticastInlineDelegate OnBaseButtonReleasedEvent; // 0x358(0x10)
	struct FMulticastInlineDelegate OnBaseButtonLongPressEvent; // 0x368(0x10)
	struct UButton* Button; // 0x378(0x08)
	struct UImage* IconPicture; // 0x380(0x08)
	struct UTextBlock* ButtonLabel; // 0x388(0x08)
	struct FSlateBrush ButtonPictureBrush; // 0x390(0x90)
	struct FText ButtonText; // 0x420(0x18)
	struct UAkAudioEvent* OnPressSound; // 0x438(0x08)
	struct UAkAudioEvent* OnClickSound; // 0x440(0x08)
	struct UAkAudioEvent* OnLongPressSound; // 0x448(0x08)
	struct UAkAudioEvent* OnReleaseSound; // 0x450(0x08)
	struct UAkAudioEvent* OnHoveredSound; // 0x458(0x08)
	char pad_460[0x8]; // 0x460(0x08)

	void OnBaseButtonReleased__DelegateSignature(); // DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonReleased__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnBaseButtonPressed__DelegateSignature(); // DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonPressed__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnBaseButtonLongPress__DelegateSignature(); // DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonLongPress__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnBaseButtonClicked__DelegateSignature(); // DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonClicked__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void HandleButtonReleasedEvent(); // Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonReleasedEvent // (Native|Protected|BlueprintCallable) // @ game+0x48306f0
	void HandleButtonPressedEvent(); // Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonPressedEvent // (Native|Protected|BlueprintCallable) // @ game+0x48306d0
	void HandleButtonLongPressEvent(); // Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonLongPressEvent // (Native|Protected|BlueprintCallable) // @ game+0x4830690
	void HandleButtonHoveredEvent(); // Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonHoveredEvent // (Native|Protected|BlueprintCallable) // @ game+0x48306b0
	void HandleButtonClickedEvent(); // Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonClickedEvent // (Native|Protected|BlueprintCallable) // @ game+0x4830710
};

// Class DBDUIViewsMobile.UMGAtlantaMatchConfigPageScrollItem
// Size: 0x4a8 (Inherited: 0x468)
struct UUMGAtlantaMatchConfigPageScrollItem : UUMGBaseButtonWidget {
	struct UCanvasPanel* ImagePanel; // 0x468(0x08)
	struct UCanvasPanel* DefaultPanel; // 0x470(0x08)
	struct UImage* DefaultImage; // 0x478(0x08)
	float _unselectedOpacity; // 0x480(0x04)
	float _selectedOpacity; // 0x484(0x04)
	char pad_488[0x20]; // 0x488(0x20)
};

// Class DBDUIViewsMobile.UMGAtlantaMatchConfigScreen
// Size: 0x510 (Inherited: 0x338)
struct UUMGAtlantaMatchConfigScreen : UMobileBaseUserWidget {
	struct UUMGAtlantaMatchConfigPageScroll* MatchConfigPageScroll; // 0x338(0x08)
	struct UHorizontalBox* TabsBox; // 0x340(0x08)
	struct UVerticalBox* BotsTabsBox; // 0x348(0x08)
	struct UUMGBaseButtonWidget* BackButton; // 0x350(0x08)
	struct UTextBlock* MatchConfigTitle; // 0x358(0x08)
	struct UTextBlock* InventoryTitle; // 0x360(0x08)
	struct UTextBlock* SelectedTabTitle; // 0x368(0x08)
	struct UMatchConfigTabsDataAsset* TabsDataAsset; // 0x370(0x08)
	struct FSlateBrush SmallTabSeparation; // 0x378(0x90)
	struct FSlateBrush BigTabSeparation; // 0x408(0x90)
	float TabsVerticalPadding; // 0x498(0x04)
	float TabsHorizontalPadding; // 0x49c(0x04)
	char pad_4A0[0x70]; // 0x4a0(0x70)

	void HandleBackButtonClicked(); // Function DBDUIViewsMobile.UMGAtlantaMatchConfigScreen.HandleBackButtonClicked // (Final|Native|Protected) // @ game+0x486b320
};

// Class DBDUIViewsMobile.UMGAtlantaMatchConfigTab
// Size: 0x498 (Inherited: 0x468)
struct UUMGAtlantaMatchConfigTab : UUMGBaseButtonWidget {
	struct USizeBox* IconSizeBox; // 0x468(0x08)
	struct UTextBlock* TabName; // 0x470(0x08)
	struct UCanvasPanel* RandomPanel; // 0x478(0x08)
	char pad_480[0x18]; // 0x480(0x18)
};

// Class DBDUIViewsMobile.UMGAtlantaRequestRoleButton
// Size: 0x478 (Inherited: 0x468)
struct UUMGAtlantaRequestRoleButton : UUMGBaseButtonWidget {
	struct UWidgetSwitcher* IconSwitcher; // 0x468(0x08)
	char pad_470[0x8]; // 0x470(0x08)

	void SetIsActive(bool IsActive); // Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.SetIsActive // (Final|Native|Protected|BlueprintCallable) // @ game+0x486b610
	void OnToggleActiveState(bool IsActive); // Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.OnToggleActiveState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	bool GetIsActive(); // Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.GetIsActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x486b260
};

// Class DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget
// Size: 0x390 (Inherited: 0x338)
struct UUMGBaseFriendListContextualMenuWidget : UMobileBaseUserWidget {
	char pad_338[0x18]; // 0x338(0x18)
	struct UUMGFriendButtonWidget* InviteToPartyButton; // 0x350(0x08)
	struct UUMGFriendButtonWidget* MuteButton; // 0x358(0x08)
	struct UUMGFriendButtonWidget* UnmuteButton; // 0x360(0x08)
	struct UUMGFriendButtonWidget* RemoveFriendButton; // 0x368(0x08)
	struct UUMGFriendButtonWidget* RemovePlayerFromPartyButton; // 0x370(0x08)
	char pad_378[0x10]; // 0x378(0x10)
	struct UAkAudioEvent* TransitionOutAnimationSound; // 0x388(0x08)

	void HandleActionTriggered(enum class EActionOnFriendType ActionType); // Function DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget.HandleActionTriggered // (Final|Native|Protected|BlueprintCallable) // @ game+0x486b2a0
};

// Class DBDUIViewsMobile.UMGBaseFriendListElement
// Size: 0x3f8 (Inherited: 0x338)
struct UUMGBaseFriendListElement : UMobileBaseUserWidget {
	struct UImage* StatusPicture; // 0x338(0x08)
	struct UTextBlock* FriendName; // 0x340(0x08)
	struct UTextBlock* FriendStatus; // 0x348(0x08)
	struct UCanvasPanel* SelectionHighlight; // 0x350(0x08)
	struct UUMGBaseButtonWidget* ItemSelectionBaseButton; // 0x358(0x08)
	struct UNamedSlot* ContextualMenuPosition; // 0x360(0x08)
	struct FAtlantaFriendUIData _cachedFriendData; // 0x368(0x68)
	struct UDataTable* FriendUIStatusDataTable; // 0x3d0(0x08)
	char pad_3D8[0x20]; // 0x3d8(0x20)

	void TriggerActionOnThisFriend(enum class EActionOnFriendType ActionType); // Function DBDUIViewsMobile.UMGBaseFriendListElement.TriggerActionOnThisFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x486b750
};

// Class DBDUIViewsMobile.UMGBaseTabButtonWidget
// Size: 0x4d8 (Inherited: 0x468)
struct UUMGBaseTabButtonWidget : UUMGBaseButtonWidget {
	char pad_468[0x18]; // 0x468(0x18)
	struct URichTextBlock* TabText; // 0x480(0x08)
	struct UTextBlock* NotificationCountText; // 0x488(0x08)
	struct UCanvasPanel* NotificationPanel; // 0x490(0x08)
	struct UImage* TabButtonSelected; // 0x498(0x08)
	char tabIndex; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct FText TitleOfTab; // 0x4a8(0x18)
	char pad_4C0[0x8]; // 0x4c0(0x08)
	struct FString _tabTextParameter; // 0x4c8(0x10)
};

// Class DBDUIViewsMobile.UMGBaseTabListWidget
// Size: 0x338 (Inherited: 0x338)
struct UUMGBaseTabListWidget : UMobileBaseUserWidget {
};

// Class DBDUIViewsMobile.UMGExpandableListWidget
// Size: 0x3e0 (Inherited: 0x338)
struct UUMGExpandableListWidget : UMobileBaseUserWidget {
	bool ShouldHideExpandableListIfEmpty; // 0x338(0x01)
	bool IsExtendedAtStart; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)
	struct UUMGBaseButtonWidget* ExpansionButton; // 0x340(0x08)
	struct UVerticalBox* ItemContainer; // 0x348(0x08)
	struct UTextBlock* CategorieName; // 0x350(0x08)
	struct UTextBlock* itemCount; // 0x358(0x08)
	struct UExpandableArea* ExpandableArea; // 0x360(0x08)
	struct FText HeaderTitle; // 0x368(0x18)
	char pad_380[0x8]; // 0x380(0x08)
	struct TArray<struct UUserWidget*> _childWidgets; // 0x388(0x10)
	char pad_398[0x48]; // 0x398(0x48)

	void ToggleExpansion(); // Function DBDUIViewsMobile.UMGExpandableListWidget.ToggleExpansion // (Final|Native|Protected) // @ game+0x486b730
};

// Class DBDUIViewsMobile.UMGFriendBaseTabListWidget
// Size: 0x338 (Inherited: 0x338)
struct UUMGFriendBaseTabListWidget : UUMGBaseTabListWidget {
};

// Class DBDUIViewsMobile.UMGFriendButtonWidget
// Size: 0x4e8 (Inherited: 0x468)
struct UUMGFriendButtonWidget : UUMGBaseButtonWidget {
	struct UCanvasPanel* InteractableButtonStatePanel; // 0x468(0x08)
	struct UCanvasPanel* NonInteractableButtonStatePanel; // 0x470(0x08)
	struct UTextBlock* NonInteractableExplanationText; // 0x478(0x08)
	struct UTextBlock* NonInteractableActionText; // 0x480(0x08)
	bool _isInteractable; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct UImage* NonInteractableImage; // 0x490(0x08)
	struct TMap<enum class EFriendTypeButton, struct FSlateBrush> _nonInteractableImages; // 0x498(0x50)
};

// Class DBDUIViewsMobile.UMGFriendContextualMenuWidget
// Size: 0x390 (Inherited: 0x390)
struct UUMGFriendContextualMenuWidget : UUMGBaseFriendListContextualMenuWidget {
};

// Class DBDUIViewsMobile.UMGFriendElementWidget
// Size: 0x5d0 (Inherited: 0x3f8)
struct UUMGFriendElementWidget : UUMGBaseFriendListElement {
	struct UImage* FavoriteSlot; // 0x3f8(0x08)
	struct UButton* FavoriteButton; // 0x400(0x08)
	struct UImage* SelectionImage; // 0x408(0x08)
	struct UImage* SelectedPicture; // 0x410(0x08)
	struct UImage* FriendIcon; // 0x418(0x08)
	struct FSlateBrush UnFavoriteBrush; // 0x420(0x90)
	struct FSlateBrush FavoriteBrush; // 0x4b0(0x90)
	struct FSlateBrush MutedBrush; // 0x540(0x90)

	void HandleSelectionButton(); // Function DBDUIViewsMobile.UMGFriendElementWidget.HandleSelectionButton // (Final|Native|Protected) // @ game+0x486b450
	void HandleFavoriteButtonClicked(); // Function DBDUIViewsMobile.UMGFriendElementWidget.HandleFavoriteButtonClicked // (Final|Native|Protected|BlueprintCallable) // @ game+0x486b380
};

// Class DBDUIViewsMobile.UMGFriendListTabWidget
// Size: 0x350 (Inherited: 0x338)
struct UUMGFriendListTabWidget : UUMGFriendBaseTabListWidget {
	struct UUMGExpandableListWidget* SentInviteToParty; // 0x338(0x08)
	struct UUMGExpandableListWidget* ConnectedFriendsExpandableList; // 0x340(0x08)
	struct UUMGExpandableListWidget* DisconnectedFriendsExpandableList; // 0x348(0x08)
};

// Class DBDUIViewsMobile.UMGFriendPartyListElementWidget
// Size: 0x708 (Inherited: 0x5d0)
struct UUMGFriendPartyListElementWidget : UUMGFriendElementWidget {
	struct UWidgetSwitcher* ButtonOrStatusSwitcher; // 0x5d0(0x08)
	struct UButton* CancelInviteButton; // 0x5d8(0x08)
	struct UImage* PartyStatusImage; // 0x5e0(0x08)
	struct FSlateBrush IconNotReady; // 0x5e8(0x90)
	struct FSlateBrush IconReady; // 0x678(0x90)

	void HandleCancelInviteButtonClicked(); // Function DBDUIViewsMobile.UMGFriendPartyListElementWidget.HandleCancelInviteButtonClicked // (Final|Native|Protected) // @ game+0x486b340
};

// Class DBDUIViewsMobile.UMGFriendSearchBarWidget
// Size: 0x378 (Inherited: 0x338)
struct UUMGFriendSearchBarWidget : UMobileBaseUserWidget {
	char pad_338[0x30]; // 0x338(0x30)
	struct UEditableTextBox* InputTextField; // 0x368(0x08)
	struct UUMGBaseButtonWidget* SearchButton; // 0x370(0x08)

	void HandleTextInputChanged(struct FText& textInput); // Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleTextInputChanged // (Final|Native|Private|HasOutParms) // @ game+0x486b470
	void HandleSearchButtonClicked(); // Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleSearchButtonClicked // (Final|Native|Private) // @ game+0x486b430
};

// Class DBDUIViewsMobile.UMGFriendTabButtonWidget
// Size: 0x528 (Inherited: 0x4d8)
struct UUMGFriendTabButtonWidget : UUMGBaseTabButtonWidget {
	char pad_4D8[0x50]; // 0x4d8(0x50)
};

// Class DBDUIViewsMobile.UMGRequestsListTabWidget
// Size: 0x348 (Inherited: 0x338)
struct UUMGRequestsListTabWidget : UUMGFriendBaseTabListWidget {
	struct UUMGExpandableListWidget* FriendRequestExpandableList; // 0x338(0x08)
	struct UUMGExpandableListWidget* PendingExpandableList; // 0x340(0x08)
};

// Class DBDUIViewsMobile.UMGScrollListPageButton
// Size: 0x360 (Inherited: 0x338)
struct UUMGScrollListPageButton : UMobileBaseUserWidget {
	struct FMulticastInlineDelegate OnClicked; // 0x338(0x10)
	int32_t pageIndex; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UButton* ActionButton; // 0x350(0x08)
	struct UImage* SelectedImage; // 0x358(0x08)

	void SetIsSelected(bool Selected); // Function DBDUIViewsMobile.UMGScrollListPageButton.SetIsSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x486b6a0
	void HandleActionButtonClick(); // Function DBDUIViewsMobile.UMGScrollListPageButton.HandleActionButtonClick // (Final|Native|Public) // @ game+0x486b280
};

// Class DBDUIViewsMobile.UMGSuggestionsListTabWidget
// Size: 0x348 (Inherited: 0x338)
struct UUMGSuggestionsListTabWidget : UUMGFriendBaseTabListWidget {
	struct UUMGExpandableListWidget* PlayedWithFriendsExpandableList; // 0x338(0x08)
	struct UUMGExpandableListWidget* SocialFriendsExpandableList; // 0x340(0x08)
};

