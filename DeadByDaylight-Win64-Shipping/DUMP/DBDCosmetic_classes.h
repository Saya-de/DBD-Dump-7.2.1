// Class DBDCosmetic.DBDActorIndicator
// Size: 0x238 (Inherited: 0x230)
struct ADBDActorIndicator : AActor {
	bool _isActivated; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)

	void Cosmetic_UpdateIndicatorActivationStatus(bool IsActivated); // Function DBDCosmetic.DBDActorIndicator.Cosmetic_UpdateIndicatorActivationStatus // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDCosmetic.DBDCosmeticModuleUtilities
// Size: 0x30 (Inherited: 0x30)
struct UDBDCosmeticModuleUtilities : UBlueprintFunctionLibrary {

	struct TArray<struct ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorsOfSurvivorByClass(struct ACamperPlayer* Survivor, struct ASurvivorCosmeticHelperActor* cosmeticHelperActorClassType); // Function DBDCosmetic.DBDCosmeticModuleUtilities.GetCosmeticHelperActorsOfSurvivorByClass // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4cf7390
	struct TArray<struct ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorsOfSurvivor(struct ACamperPlayer* Survivor); // Function DBDCosmetic.DBDCosmeticModuleUtilities.GetCosmeticHelperActorsOfSurvivor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4cf72c0
};

// Class DBDCosmetic.SurvivorCosmeticHelperActor
// Size: 0x270 (Inherited: 0x230)
struct ASurvivorCosmeticHelperActor : AActor {
	char pad_230[0x40]; // 0x230(0x40)

	bool IsLocallyObserved(); // Function DBDCosmetic.SurvivorCosmeticHelperActor.IsLocallyObserved // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf7940
	struct ACamperPlayer* GetSurvivor(); // Function DBDCosmetic.SurvivorCosmeticHelperActor.GetSurvivor // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf7910
	struct UMaterialHelper* GetMaterialHelper(); // Function DBDCosmetic.SurvivorCosmeticHelperActor.GetMaterialHelper // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf78e0
	struct UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh(); // Function DBDCosmetic.SurvivorCosmeticHelperActor.GetCustomizedSkeletalMesh // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf78b0
	struct UAkComponent* GetAudioComponent(); // Function DBDCosmetic.SurvivorCosmeticHelperActor.GetAudioComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf7880
	void Cosmetic_OnSurvivorLinked(struct ACamperPlayer* survivorLinked); // Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorLinked // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsLocallyObservingSurvivorChanged(bool isLocallyObservingSurvivor); // Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsLocallyObservingSurvivorChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIsGettingMoriedStatusChanged(bool isGettingMoried); // Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsGettingMoriedStatusChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent
// Size: 0xd8 (Inherited: 0xb8)
struct USurvivorCosmeticHelperSpawnerComponent : UActorComponent {
	struct UDataTable* _survivorCosmeticActorHelperDB; // 0xb8(0x08)
	struct TArray<struct ASurvivorCosmeticHelperActor*> survivorCosmeticHelperActors; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)

	struct TArray<struct ASurvivorCosmeticHelperActor*> GetCosmeticHelperActors(); // Function DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent.GetCosmeticHelperActors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf7ea0
	struct TArray<struct ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorByClass(struct ASurvivorCosmeticHelperActor* cosmeticHelperActorClassType); // Function DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent.GetCosmeticHelperActorByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4cf7dc0
};

