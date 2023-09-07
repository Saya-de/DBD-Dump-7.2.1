// Enum Onboarding.EOnboardingModeList
enum class EOnboardingModeList : uint8 {
	DefaultMode = 0,
	MenuForced = 1,
	TutorialForced = 2,
	EOnboardingModeList_MAX = 3
};

// ScriptStruct Onboarding.OnboardingBotMatchDefinition
// Size: 0x70 (Inherited: 0x18)
struct FOnboardingBotMatchDefinition : FDBDTableRowBaseWithId {
	struct FText DisplayName; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct FName DefaultMapId; // 0x48(0x0c)
	int32_t DefaultSurvivorId; // 0x54(0x04)
	int32_t DefaultKillerId; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<int32_t> DefaultBotsId; // 0x60(0x10)
};

// ScriptStruct Onboarding.OnboardingTutorialDefinition
// Size: 0xc8 (Inherited: 0x18)
struct FOnboardingTutorialDefinition : FDBDTableRowBaseWithId {
	struct FText DisplayName; // 0x18(0x18)
	struct FText CompletedDisplayName; // 0x30(0x18)
	struct FText Description; // 0x48(0x18)
	struct FText CompletedDescription; // 0x60(0x18)
	enum class EOnboardingTutorialType TutorialType; // 0x78(0x01)
	enum class EOnboardingTutorialButtonStyle ButtonStyle; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct FString LevelId; // 0x80(0x10)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x90(0x30)
	int32_t DefaultCharacterId; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct Onboarding.SecretBotMatchLoadoutDefinition
// Size: 0x30 (Inherited: 0x08)
struct FSecretBotMatchLoadoutDefinition : FDBDTableRowBase {
	char BotRank; // 0x08(0x01)
	enum class ELoadoutItemType ItemEquipped; // 0x09(0x01)
	enum class EItemRarity ItemRarity; // 0x0a(0x01)
	char NbAddons; // 0x0b(0x01)
	enum class EItemRarity AddonsRarity; // 0x0c(0x01)
	enum class EItemRarity OfferingRarity; // 0x0d(0x01)
	char NbGenericPerks; // 0x0e(0x01)
	char NbCharacterSpecificPerks; // 0x0f(0x01)
	struct TArray<int32_t> PerkTiersList; // 0x10(0x10)
	struct TArray<int32_t> CharactersIndexList; // 0x20(0x10)
};

// ScriptStruct Onboarding.SecretBotMatchNamesDefinition
// Size: 0x20 (Inherited: 0x08)
struct FSecretBotMatchNamesDefinition : FDBDTableRowBase {
	char ID; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Name; // 0x10(0x10)
};

