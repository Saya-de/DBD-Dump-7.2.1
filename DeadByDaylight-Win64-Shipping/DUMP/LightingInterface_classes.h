// BlueprintGeneratedClass LightingInterface.LightingInterface_C
// Size: 0x30 (Inherited: 0x30)
struct ULightingInterface_C : UInterface {

	void GetDetectionZoneIntensity(enum class LightingInterfaceEnum& BP Type, float& DetectionZoneCylinderIntensityOverride, float& DetectionZoneDecalIntensityOverride); // Function LightingInterface.LightingInterface_C.GetDetectionZoneIntensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void GetCondemnedStatusVignetteIntensity(enum class LightingInterfaceEnum& BP Type, float& CondemnedStatusIntensityOverride); // Function LightingInterface.LightingInterface_C.GetCondemnedStatusVignetteIntensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetPostOverride(struct FPostProcessSettings PostSettings, struct UPostProcessComponent* postProcess); // Function LightingInterface.LightingInterface_C.SetPostOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void GetLightingPost(struct TArray<struct UPostProcessComponent*>& postProcess, enum class LightingInterfaceEnum& BP Type); // Function LightingInterface.LightingInterface_C.GetLightingPost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void GetBasementPost(enum class LightingInterfaceEnum& BP Type, struct FDBDPerPlatformFloat& Override); // Function LightingInterface.LightingInterface_C.GetBasementPost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

