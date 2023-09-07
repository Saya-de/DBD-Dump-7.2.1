// Class DBDUIManagers.DBDTextManager
// Size: 0x58 (Inherited: 0x38)
struct UDBDTextManager : UGameInstanceSubsystem {
	char pad_38[0x20]; // 0x38(0x20)

	bool GetLargeTextEnabled(); // Function DBDUIManagers.DBDTextManager.GetLargeTextEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4634ce0
};

// Class DBDUIManagers.UIAnalyticsManager
// Size: 0x68 (Inherited: 0x38)
struct UUIAnalyticsManager : UGameInstanceSubsystem {
	char pad_38[0x30]; // 0x38(0x30)
};

// Class DBDUIManagers.UIDataManager
// Size: 0x218 (Inherited: 0x38)
struct UUIDataManager : UGameInstanceSubsystem {
	struct TMap<enum class EItemRarity, struct FRarityMaterialData> RarityMaterialMap; // 0x38(0x50)
	struct TMap<struct FString, struct FTextBlockStyle> RichTextStyleMap; // 0x88(0x50)
	struct TMap<enum class ECurrencyType, struct FCurrencyProgressionUIData> CurrencyUIDataMap; // 0xd8(0x50)
	struct TMap<enum class EProgressionType, struct FCurrencyProgressionUIData> ProgressionUIDataMap; // 0x128(0x50)
	struct TMap<enum class EArchiveMenuState, struct FArchiveTomeSkinData> ArchiveTomeSkinDataMap; // 0x178(0x50)
	struct TMap<struct FString, struct UTexture2D*> TooltipEventSkinUIDataMap; // 0x1c8(0x50)

	struct UMaterialInterface* GetTooltipRarityMaterial(enum class EItemRarity Rarity); // Function DBDUIManagers.UIDataManager.GetTooltipRarityMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x4634f80
	struct UTexture2D* GetTooltipEventHeader(struct FString EventBannerLabel); // Function DBDUIManagers.UIDataManager.GetTooltipEventHeader // (Final|Native|Public|BlueprintCallable) // @ game+0x4634e80
	struct UMaterialInterface* GetLoadoutPartRarityMaterial(enum class EItemRarity Rarity); // Function DBDUIManagers.UIDataManager.GetLoadoutPartRarityMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x4634d00
	struct UMaterialInterface* GetCustomizationRarityMaterial(enum class EItemRarity Rarity); // Function DBDUIManagers.UIDataManager.GetCustomizationRarityMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x4634bf0
};

// Class DBDUIManagers.UIEventDispatcher
// Size: 0x180 (Inherited: 0x38)
struct UUIEventDispatcher : UGameInstanceSubsystem {
	char pad_38[0x148]; // 0x38(0x148)
};

// Class DBDUIManagers.UIScaleManager
// Size: 0xe0 (Inherited: 0x38)
struct UUIScaleManager : UGameInstanceSubsystem {
	struct UDataTable* _dpiScaleCurveDB; // 0x38(0x08)
	struct UCurveFloat* _dpiScaleCurve; // 0x40(0x08)
	char pad_48[0x98]; // 0x48(0x98)

	float GetSkillCheckScaleFactor(); // Function DBDUIManagers.UIScaleManager.GetSkillCheckScaleFactor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4634e50
	float GetScaleFactor(enum class EScaleType Type); // Function DBDUIManagers.UIScaleManager.GetScaleFactor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4634dc0
	float GetMenuScaleFactor(); // Function DBDUIManagers.UIScaleManager.GetMenuScaleFactor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4634d90
	float GetHudScaleFactor(); // Function DBDUIManagers.UIScaleManager.GetHudScaleFactor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4634cb0
	enum class EDPIScaleCurveRatio GetDPIScaleCurveRatio(); // Function DBDUIManagers.UIScaleManager.GetDPIScaleCurveRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x4634c80
};

