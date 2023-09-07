// BlueprintGeneratedClass BP_Menu_Slasher27.BP_Menu_Slasher27_C
// Size: 0x758 (Inherited: 0x728)
struct ABP_Menu_Slasher27_C : ABP_Menu_BaseSlasher_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct UBP_Audio_KLR_27_C* BP_Audio_KLR_28; // 0x730(0x08)
	struct ABP_k27_IdleInterrupt_01_C* Actor_PostProcessInterupt_01; // 0x738(0x08)
	struct ABP_k27_MenuIdleInterrupt_02_C* Actor_PostProcessInterupt_02; // 0x740(0x08)
	bool IdleInterrupt_01_IsPlaying; // 0x748(0x01)
	bool IdleInterrupt_02_IsPlaying; // 0x749(0x01)
	char pad_74A[0x6]; // 0x74a(0x06)
	struct ABP_Well_C* WellActor; // 0x750(0x08)

	void OnNotifyEnd_2D489A3641E154EF5C2CBFA84C773EFE(struct FName NotifyName); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.OnNotifyEnd_2D489A3641E154EF5C2CBFA84C773EFE // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnNotifyBegin_2D489A3641E154EF5C2CBFA84C773EFE(struct FName NotifyName); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.OnNotifyBegin_2D489A3641E154EF5C2CBFA84C773EFE // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnInterrupted_2D489A3641E154EF5C2CBFA84C773EFE(struct FName NotifyName); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.OnInterrupted_2D489A3641E154EF5C2CBFA84C773EFE // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnBlendOut_2D489A3641E154EF5C2CBFA84C773EFE(struct FName NotifyName); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.OnBlendOut_2D489A3641E154EF5C2CBFA84C773EFE // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnCompleted_2D489A3641E154EF5C2CBFA84C773EFE(struct FName NotifyName); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.OnCompleted_2D489A3641E154EF5C2CBFA84C773EFE // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayWeaponInterupt(); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.PlayWeaponInterupt // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Play_K27_PostProcess_Interupt_02(); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.Play_K27_PostProcess_Interupt_02 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Play_K27_PostProcess_Interrupt_01(); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.Play_K27_PostProcess_Interrupt_01 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Destroy_K27_PostProcess_IdleInterrupt_02(); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.Destroy_K27_PostProcess_IdleInterrupt_02 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Destroy_K27_PostProcess_IdleInterrupt_01(); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.Destroy_K27_PostProcess_IdleInterrupt_01 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void RemoveAssetsBeforeDestroy(); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.RemoveAssetsBeforeDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void DisableCloth(); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.DisableCloth // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void EnableCloth(); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.EnableCloth // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void BeginSmokeIn(); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.BeginSmokeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Slasher27(int32_t EntryPoint); // Function BP_Menu_Slasher27.BP_Menu_Slasher27_C.ExecuteUbergraph_BP_Menu_Slasher27 // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

