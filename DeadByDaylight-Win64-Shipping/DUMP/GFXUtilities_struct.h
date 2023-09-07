// ScriptStruct GFXUtilities.MaterialHelperOriginalMeshState
// Size: 0x48 (Inherited: 0x00)
struct FMaterialHelperOriginalMeshState {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> _originalMaterials; // 0x08(0x10)
	struct TArray<struct UMaterialInterface*> _originalDynamicMaterials; // 0x18(0x10)
	char pad_28[0x20]; // 0x28(0x20)
};

// ScriptStruct GFXUtilities.MaterialNamedGroup
// Size: 0x20 (Inherited: 0x00)
struct FMaterialNamedGroup {
	struct FString GroupName; // 0x00(0x10)
	struct TArray<struct FMaterialMap> Maps; // 0x10(0x10)
};

// ScriptStruct GFXUtilities.MaterialMap
// Size: 0x10 (Inherited: 0x00)
struct FMaterialMap {
	struct UMaterialInterface* SrcMaterial; // 0x00(0x08)
	struct UMaterialInterface* DstMaterial; // 0x08(0x08)
};

// ScriptStruct GFXUtilities.DBDCullDistanceSizePair
// Size: 0x08 (Inherited: 0x00)
struct FDBDCullDistanceSizePair {
	struct FPerPlatformFloat Size; // 0x00(0x04)
	struct FPerPlatformFloat CullDistance; // 0x04(0x04)
};

// ScriptStruct GFXUtilities.LightUpdate
// Size: 0x10 (Inherited: 0x00)
struct FLightUpdate {
	struct ULightComponent* Light; // 0x00(0x08)
	float Multiplier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct GFXUtilities.LightMaterialUpdate
// Size: 0x18 (Inherited: 0x00)
struct FLightMaterialUpdate {
	struct UMaterialHelper* Material; // 0x00(0x08)
	struct FName PropertyName; // 0x08(0x0c)
	float Multiplier; // 0x14(0x04)
};

