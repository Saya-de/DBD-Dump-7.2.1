// BlueprintGeneratedClass BP_Effect_Mist.BP_Effect_Mist_C
// Size: 0x250 (Inherited: 0x238)
struct ABP_Effect_Mist_C : ABaseVFX {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UDBDAggregateParticleLocatorComponent* DBDAggregateParticleLocator; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void ReceiveTick(float DeltaSeconds); // Function BP_Effect_Mist.BP_Effect_Mist_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Effect_Mist(int32_t EntryPoint); // Function BP_Effect_Mist.BP_Effect_Mist_C.ExecuteUbergraph_BP_Effect_Mist // (Final|UbergraphFunction) // @ game+0x5e02c90
};

