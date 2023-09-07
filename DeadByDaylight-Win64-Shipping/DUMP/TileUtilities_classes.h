// BlueprintGeneratedClass TileUtilities.TileUtilities_C
// Size: 0x30 (Inherited: 0x30)
struct UTileUtilities_C : UBlueprintFunctionLibrary {

	void CheckBasement(struct UTileSpawnPoint* SpawnPoint, struct AActor* spawnedObject, struct UObject* __WorldContext); // Function TileUtilities.TileUtilities_C.CheckBasement // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void CheckGenerator(struct UTileSpawnPoint* SpawnPoint, struct AActor* spawnedObject, struct UObject* __WorldContext); // Function TileUtilities.TileUtilities_C.CheckGenerator // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void CallForSpawn(struct UActorSpawner* ActorSpawner, struct UObject* __WorldContext); // Function TileUtilities.TileUtilities_C.CallForSpawn // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SelectSpawners(struct TArray<struct UActorSpawner*>& Spawners, int32_t MinCount, int32_t MaxCount, struct FRandomStream Stream, struct UObject* __WorldContext); // Function TileUtilities.TileUtilities_C.SelectSpawners // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SelectSpawner(struct TArray<struct UActorSpawner*>& Spawners, struct FRandomStream Stream, struct UObject* __WorldContext); // Function TileUtilities.TileUtilities_C.SelectSpawner // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetupGeneratorDrivenElements(struct TArray<struct UChildActorComponent*>& SpawnPoints, struct AActor* GeneratorSpawnPoint, int32_t generatorId, struct UObject* __WorldContext); // Function TileUtilities.TileUtilities_C.SetupGeneratorDrivenElements // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SelectSpawnpoint(struct TArray<struct UTileSpawnPoint*>& SpawnPoints, struct FRandomStream Stream, struct UObject* __WorldContext); // Function TileUtilities.TileUtilities_C.SelectSpawnpoint // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

