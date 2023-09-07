// BlueprintGeneratedClass BP_Menu_CamperMale04.BP_Menu_CamperMale04_C
// Size: 0x720 (Inherited: 0x708)
struct ABP_Menu_CamperMale04_C : ABP_Menu_Base_Camper_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x708(0x08)
	float Cigarette_NewTrack_0_97E71C104E36EF0B3195F484D090F427; // 0x710(0x04)
	enum class ETimelineDirection Cigarette__Direction_97E71C104E36EF0B3195F484D090F427; // 0x714(0x01)
	char pad_715[0x3]; // 0x715(0x03)
	struct UTimelineComponent* Cigarette; // 0x718(0x08)

	void Cigarette__FinishedFunc(); // Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Cigarette__UpdateFunc(); // Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BeginDestroySequence_Internal(); // Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.BeginDestroySequence_Internal // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Menu_CamperMale04(int32_t EntryPoint); // Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ExecuteUbergraph_BP_Menu_CamperMale04 // (Final|UbergraphFunction) // @ game+0x5e02c90
};

