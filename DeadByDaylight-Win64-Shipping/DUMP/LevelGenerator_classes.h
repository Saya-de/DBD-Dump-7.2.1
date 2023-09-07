// BlueprintGeneratedClass LevelGenerator.LevelGenerator_C
// Size: 0x10dc (Inherited: 0x10c8)
struct ALevelGenerator_C : AProceduralLevelBuilder {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x10d0(0x08)
	float initialMistDensity; // 0x10d8(0x04)

	void RemoveMist(); // Function LevelGenerator.LevelGenerator_C.RemoveMist // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ApplyMist(float Modifier); // Function LevelGenerator.LevelGenerator_C.ApplyMist // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_LevelGenerator(int32_t EntryPoint); // Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator // (Final|UbergraphFunction) // @ game+0x5e02c90
};

