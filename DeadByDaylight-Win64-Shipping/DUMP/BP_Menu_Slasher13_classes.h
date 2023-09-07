// BlueprintGeneratedClass BP_Menu_Slasher13.BP_Menu_Slasher13_C
// Size: 0x7b1 (Inherited: 0x728)
struct ABP_Menu_Slasher13_C : ABP_Menu_BaseSlasher_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x728(0x08)
	struct UBP_Audio_KLR_13_C* BP_Audio_KLR_14; // 0x730(0x08)
	struct UBP_RedStainComponent_C* RedStainComponent; // 0x738(0x08)
	float Show_Sword_WPO_964716F24F8255A0C9F98FA0967E8ECF; // 0x740(0x04)
	float Show_Sword_Shard_Disappear_964716F24F8255A0C9F98FA0967E8ECF; // 0x744(0x04)
	float Show_Sword_Sword_Appear_964716F24F8255A0C9F98FA0967E8ECF; // 0x748(0x04)
	enum class ETimelineDirection Show_Sword__Direction_964716F24F8255A0C9F98FA0967E8ECF; // 0x74c(0x01)
	char pad_74D[0x3]; // 0x74d(0x03)
	struct UTimelineComponent* Show Sword; // 0x750(0x08)
	struct FVector Timeline_2_Size_548F5340441650D05914669F2F45DC7E; // 0x758(0x0c)
	struct FVector Timeline_2_Particle_Location_548F5340441650D05914669F2F45DC7E; // 0x764(0x0c)
	enum class ETimelineDirection Timeline_2__Direction_548F5340441650D05914669F2F45DC7E; // 0x770(0x01)
	char pad_771[0x7]; // 0x771(0x07)
	struct UTimelineComponent* Timeline_3; // 0x778(0x08)
	struct FVector Make_Sword_Disappear_Shard_Size_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x780(0x0c)
	struct FVector Make_Sword_Disappear_Particle_Position_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x78c(0x0c)
	float Make_Sword_Disappear_WPO_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x798(0x04)
	float Make_Sword_Disappear_Shard_Appear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x79c(0x04)
	float Make_Sword_Disappear_Weapon_Disappear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x7a0(0x04)
	enum class ETimelineDirection Make_Sword_Disappear__Direction_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x7a4(0x01)
	char pad_7A5[0x3]; // 0x7a5(0x03)
	struct UTimelineComponent* Make Sword Disappear; // 0x7a8(0x08)
	bool SwordShouldBeVisible; // 0x7b0(0x01)

	void GetShard(struct USkeletalMeshComponent*& Shard); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.GetShard // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void GetSword(struct USkeletalMeshComponent*& Sword); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.GetSword // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void Make Sword Disappear__FinishedFunc(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Make Sword Disappear__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Make Sword Disappear__UpdateFunc(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Make Sword Disappear__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Show Sword__FinishedFunc(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Show Sword__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Show Sword__UpdateFunc(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Show Sword__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_2__FinishedFunc(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Timeline_2__UpdateFunc(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnCustomizationUpdated(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.OnCustomizationUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnAttack_StopTimeline(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.OnAttack_StopTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K13_FX_MakeSwordInvisible(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordInvisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K13_FX_MakeSwordVisible(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K13_FX_MakeSwordDisappear(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordDisappear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K13_FX_MakeSwordAppear(); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordAppear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void K13_FX_ModifyFace(float SadFaceCurveValue, float MadFaceCurveValue); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_ModifyFace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_Slasher13(int32_t EntryPoint); // Function BP_Menu_Slasher13.BP_Menu_Slasher13_C.ExecuteUbergraph_BP_Menu_Slasher13 // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

