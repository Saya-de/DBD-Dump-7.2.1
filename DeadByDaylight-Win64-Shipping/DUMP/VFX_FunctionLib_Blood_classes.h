// BlueprintGeneratedClass VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C
// Size: 0x30 (Inherited: 0x30)
struct UVFX_FunctionLib_Blood_C : UBlueprintFunctionLibrary {

	struct FTransform GetDecalTransform(struct USceneComponent* Mesh, struct UObject* __WorldContext); // Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetDecalTransform // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void SpawnBleedEffect(struct USceneComponent* Mesh, struct UObject* __WorldContext, struct UParticleSystemComponent*& ParticleSystem); // Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.SpawnBleedEffect // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	struct UNiagaraComponent* SpawnBloodSpurtsParticles(struct USceneComponent* Mesh, struct UObject* __WorldContext); // Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.SpawnBloodSpurtsParticles // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	float GetSlasherBloodOpacityPlayrate(struct UObject* __WorldContext); // Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetSlasherBloodOpacityPlayrate // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	float GetBloodFramePlayRate(struct UObject* __WorldContext); // Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetBloodFramePlayRate // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void CreatePP_BloodMaterial(struct UObject* __WorldContext, struct UMaterialInstanceDynamic*& PostProcessMaterialInstance); // Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.CreatePP_BloodMaterial // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ManagePostProcessParameters(bool Remove, struct UCameraComponent* Camera, struct UObject* PostProcessMaterial, struct UObject* __WorldContext); // Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.ManagePostProcessParameters // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void RandomizeBloodPostProcess(struct UMaterialInstanceDynamic* MaterialInstance, struct ADBDPlayer* DBDPlayer, struct UObject* __WorldContext); // Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.RandomizeBloodPostProcess // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void RandomizeBloodLayer(struct UMaterialInstanceDynamic* MaterialInstance, struct FName OffsetX_MaterialParameter, struct FName OffsetY_MaterialParameter, struct FName Texture_MaterialParameter, struct FName Scale_Parameter, int32_t Dimension 1, struct UObject* __WorldContext); // Function VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.RandomizeBloodLayer // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

