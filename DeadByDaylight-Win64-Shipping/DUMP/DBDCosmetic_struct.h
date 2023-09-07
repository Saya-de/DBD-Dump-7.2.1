// ScriptStruct DBDCosmetic.SurvivorCosmeticHelperActorSpawnInfo
// Size: 0x48 (Inherited: 0x08)
struct FSurvivorCosmeticHelperActorSpawnInfo : FDBDTableRowBase {
	struct FGameplayTag KillerPresenceTag; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftClassPtr<UObject> SurvivorCosmeticActorClass; // 0x18(0x30)
};

