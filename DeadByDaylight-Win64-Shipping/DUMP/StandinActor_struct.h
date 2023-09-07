// ScriptStruct StandinActor.StandinProxyEntry
// Size: 0x50 (Inherited: 0x00)
struct FStandinProxyEntry {
	LazyObjectProperty StandinActor; // 0x00(0x1c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UStaticMesh* StaticMesh; // 0x20(0x08)
	struct UMaterialInterface* Material; // 0x28(0x08)
	struct TArray<struct UTexture2D*> Textures; // 0x30(0x10)
	struct FName Key; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

