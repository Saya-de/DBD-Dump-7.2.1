// BlueprintGeneratedClass BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C
// Size: 0x740 (Inherited: 0x708)
struct ABP_Menu_CamperFemale20_C : ABP_Menu_Base_Camper_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x708(0x08)
	struct USkeletalMeshComponent* Quesita; // 0x710(0x08)
	float TML_QuesitaMenuDissolveController_DissolveAmount_D17C04F24597E2E9472870A4ADA20B1B; // 0x718(0x04)
	enum class ETimelineDirection TML_QuesitaMenuDissolveController__Direction_D17C04F24597E2E9472870A4ADA20B1B; // 0x71c(0x01)
	char pad_71D[0x3]; // 0x71d(0x03)
	struct UTimelineComponent* TML_QuesitaMenuDissolveController; // 0x720(0x08)
	struct UAB_Menu_Quesita01_REF_C* As AB Menu Quesita 01 REF; // 0x728(0x08)
	struct UAB_Menu_S33_C* As AB Menu S33; // 0x730(0x08)
	struct UMaterialInstanceDynamic* MID_Quesita; // 0x738(0x08)

	void GenerateRandomNumberForInterrupt(int32_t& InterruptNumber); // Function BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.GenerateRandomNumberForInterrupt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void TML_QuesitaMenuDissolveController__FinishedFunc(); // Function BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.TML_QuesitaMenuDissolveController__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void TML_QuesitaMenuDissolveController__UpdateFunc(); // Function BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.TML_QuesitaMenuDissolveController__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void CustomEvent_2(enum class EAkResult Result); // Function BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Quesita_MenuDissolve_In(); // Function BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.AnimNotify_Quesita_MenuDissolve_In // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void AnimNotify_Quesita_MenuDissolve_Out(); // Function BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.AnimNotify_Quesita_MenuDissolve_Out // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void SetQuesitaVisibility(bool IsVisible); // Function BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.SetQuesitaVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_CamperFemale20(int32_t EntryPoint); // Function BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.ExecuteUbergraph_BP_Menu_CamperFemale20 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

