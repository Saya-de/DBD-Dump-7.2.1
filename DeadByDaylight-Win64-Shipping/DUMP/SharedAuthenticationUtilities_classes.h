// Class SharedAuthenticationUtilities.SharedAuthenticationComponent
// Size: 0x190 (Inherited: 0x30)
struct USharedAuthenticationComponent : UObject {
	int32_t PopupZOrder; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UUMGAutheticationProviderSelection* AuthenticationProviderSelectionWidget; // 0x38(0x08)
	struct TSoftClassPtr<UObject> AuthenticationProviderSelectionWidgetToLoad; // 0x40(0x30)
	struct TMap<enum class ESharedAuthenticationProvider, struct TSoftClassPtr<UObject>> LoginBackgroundToLoadWidgetToLoadMap; // 0x70(0x50)
	struct UObject* _worldContextObject; // 0xc0(0x08)
	char pad_C8[0x28]; // 0xc8(0x28)
	struct UUserWidget* _loginBackgroundWidget; // 0xf0(0x08)
	char pad_F8[0x50]; // 0xf8(0x50)
	struct UUMGAuthenticationProviderSelection* _identityAuthenticationSelectionWidget; // 0x148(0x08)
	char pad_150[0x38]; // 0x150(0x38)
	struct USharedAuthenticationMigrateComponent* _migrateComponent; // 0x188(0x08)
};

// Class SharedAuthenticationUtilities.SharedAuthenticationMigrateComponent
// Size: 0x70 (Inherited: 0x30)
struct USharedAuthenticationMigrateComponent : UObject {
	struct UObject* _worldContextObject; // 0x30(0x08)
	char pad_38[0x38]; // 0x38(0x38)
};

// Class SharedAuthenticationUtilities.UMGAuthenticationProviderSelection
// Size: 0x2d0 (Inherited: 0x298)
struct UUMGAuthenticationProviderSelection : UUserWidget {
	bool _isAsia; // 0x298(0x01)
	char pad_299[0x37]; // 0x299(0x37)

	void UpdateWidgetsVisibility(); // Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.UpdateWidgetsVisibility // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ShowMigrationFailedPopup(); // Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.ShowMigrationFailedPopup // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void SetSelectedAuthenticationProvider(enum class ESharedAuthenticationProvider Provider); // Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetSelectedAuthenticationProvider // (Final|Native|Public|BlueprintCallable) // @ game+0x82bd200
	void SetMigrateWarningMessageAndShowPopup(struct FString playerName); // Function SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetMigrateWarningMessageAndShowPopup // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class SharedAuthenticationUtilities.UMGAutheticationProviderSelection
// Size: 0x2b0 (Inherited: 0x298)
struct UUMGAutheticationProviderSelection : UUserWidget {
	char pad_298[0x18]; // 0x298(0x18)

	void SetSelectedAuthenticationProvider(enum class ESharedAuthenticationProvider Provider); // Function SharedAuthenticationUtilities.UMGAutheticationProviderSelection.SetSelectedAuthenticationProvider // (Final|Native|Public|BlueprintCallable) // @ game+0x82bd490
};

