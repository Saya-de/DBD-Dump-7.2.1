// BlueprintGeneratedClass TileBase01.TileBase01_C
// Size: 0x4e0 (Inherited: 0x348)
struct ATileBase01_C : ATile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct USceneComponent* Breakables; // 0x350(0x08)
	struct USceneComponent* GeneratorDrivenObjects; // 0x358(0x08)
	struct USceneComponent* Audio; // 0x360(0x08)
	struct USceneComponent* PullObjects; // 0x368(0x08)
	struct UActorSpawner* BottomLeftSpawner; // 0x370(0x08)
	struct UActorSpawner* TopLeftSpawner; // 0x378(0x08)
	struct UActorSpawner* TopRightSpawner; // 0x380(0x08)
	struct UActorSpawner* BottomRightSpawner; // 0x388(0x08)
	struct USceneComponent* QuadrantSpawners; // 0x390(0x08)
	struct UBoxComponent* EdgeObjectBlocker; // 0x398(0x08)
	struct USceneComponent* VaultObjects; // 0x3a0(0x08)
	struct USceneComponent* Crows; // 0x3a8(0x08)
	struct USceneComponent* EdgeObjects; // 0x3b0(0x08)
	struct USceneComponent* lockers; // 0x3b8(0x08)
	struct USceneComponent* HideGrass; // 0x3c0(0x08)
	struct USceneComponent* Blockers; // 0x3c8(0x08)
	struct USceneComponent* Gameplay; // 0x3d0(0x08)
	struct USceneComponent* lights; // 0x3d8(0x08)
	struct UChildActorComponent* BP_Effect_Mist04; // 0x3e0(0x08)
	struct UChildActorComponent* BP_Effect_Mist03; // 0x3e8(0x08)
	struct UChildActorComponent* BP_Effect_Mist02; // 0x3f0(0x08)
	struct UChildActorComponent* BP_Effect_Mist01; // 0x3f8(0x08)
	struct USceneComponent* Mist (BP_Effect_Mist); // 0x400(0x08)
	struct USceneComponent* FX; // 0x408(0x08)
	struct USceneComponent* Deco; // 0x410(0x08)
	struct UActorSpawner* SearchableSpawner; // 0x418(0x08)
	struct UActorSpawner* SmallMeatLockerSpawner; // 0x420(0x08)
	struct UActorSpawner* HatchSpawner; // 0x428(0x08)
	struct UArrowComponent* Arrow6; // 0x430(0x08)
	struct UTileSpawnPoint* InteractableSpawn01; // 0x438(0x08)
	struct UArrowComponent* Arrow7; // 0x440(0x08)
	struct UActorSpawner* HexSpawner01; // 0x448(0x08)
	struct UTileSpawnPoint* SurvivorItemSpawn01; // 0x450(0x08)
	struct UArrowComponent* Arrow5; // 0x458(0x08)
	struct UTileSpawnPoint* KillerItemSpawn01; // 0x460(0x08)
	struct UArrowComponent* Arrow4; // 0x468(0x08)
	struct UTileSpawnPoint* KillerSpawn01; // 0x470(0x08)
	struct UArrowComponent* Arrow2; // 0x478(0x08)
	struct UTileSpawnPoint* SurvivorSpawn04; // 0x480(0x08)
	struct UArrowComponent* Arrow1; // 0x488(0x08)
	struct UTileSpawnPoint* SurvivorSpawn03; // 0x490(0x08)
	struct UArrowComponent* Arrow; // 0x498(0x08)
	struct UTileSpawnPoint* SurvivorSpawn02; // 0x4a0(0x08)
	struct UArrowComponent* Arrow3; // 0x4a8(0x08)
	struct UTileSpawnPoint* SurvivorSpawn01; // 0x4b0(0x08)
	struct USceneComponent* SpawnPoints; // 0x4b8(0x08)
	struct USceneComponent* Root; // 0x4c0(0x08)
	bool Initialized; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	float TotalWeight; // 0x4cc(0x04)
	float SelectedWeight; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct UTileSpawnPoint* SelectedSpawnPoint; // 0x4d8(0x08)

	void SelectSpawnpoint(struct TArray<struct UTileSpawnPoint*>& Array); // Function TileBase01.TileBase01_C.SelectSpawnpoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetupGeneratorDrivenElements(struct AActor* GeneratorSpawnPoint, struct TArray<struct UChildActorComponent*>& GeneratorDrivenElements); // Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveTick(float DeltaSeconds); // Function TileBase01.TileBase01_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnLevelLoaded(); // Function TileBase01.TileBase01_C.OnLevelLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetGeneratorDrivenObjects(struct UTileSpawnPoint* SpawnPoint, struct AActor* spawnedObject); // Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetGeneratorDrivenScoreEvent(struct TArray<struct AActor*>& generators); // Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void KNY_StartSnowstorm(); // Function TileBase01.TileBase01_C.KNY_StartSnowstorm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_TileBase01(int32_t EntryPoint); // Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

