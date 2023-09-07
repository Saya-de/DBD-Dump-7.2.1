// ScriptStruct CoreMemory.CoreMemoryFragmentSpawnData
// Size: 0x18 (Inherited: 0x00)
struct FCoreMemoryFragmentSpawnData {
	struct ACoreMemoryFragment* FragmentClass; // 0x00(0x08)
	float TriggerZoneRadiusDistance; // 0x08(0x04)
	float SpawnDistanceFromPlayer; // 0x0c(0x04)
	float SpawnDistanceFromOtherFragments; // 0x10(0x04)
	float HeightDistance; // 0x14(0x04)
};

// ScriptStruct CoreMemory.CoreMemoryStatusEffectDetails
// Size: 0x30 (Inherited: 0x00)
struct FCoreMemoryStatusEffectDetails {
	struct UStatusEffect* _statusEffect; // 0x00(0x08)
	struct FString _effectDurationParamKey; // 0x08(0x10)
	struct FString _customEffectParamKey; // 0x18(0x10)
	float _effectDuration; // 0x28(0x04)
	float _customEffectParam; // 0x2c(0x04)
};

