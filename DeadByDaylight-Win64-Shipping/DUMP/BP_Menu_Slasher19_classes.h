// BlueprintGeneratedClass BP_Menu_Slasher19.BP_Menu_Slasher19_C
// Size: 0x740 (Inherited: 0x728)
struct ABP_Menu_Slasher19_C : ABP_Menu_BaseSlasher_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct UBP_Audio_KLR_19_C* BP_Audio_KLR_20; // 0x730(0x08)
	struct USkeletalMeshComponent* HarpoonMesh; // 0x738(0x08)

	void UpdateHarpoonOnRifle(struct USkeletalMeshComponent* Rifle Mesh); // Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.UpdateHarpoonOnRifle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnMeshSwitchBP(enum class ECustomizationCategory category, struct USkeletalMeshComponent* Mesh); // Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.OnMeshSwitchBP // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Slasher19(int32_t EntryPoint); // Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ExecuteUbergraph_BP_Menu_Slasher19 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

