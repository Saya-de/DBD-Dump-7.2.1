// BlueprintGeneratedClass LevelTransition_LightsEffects.LevelTransition_LightsEffects_C
// Size: 0x260 (Inherited: 0x238)
struct ALevelTransition_LightsEffects_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	float Fade_Out_Intensity_Multiplier__23A1AA444F5E07D5215601B3AED70035; // 0x240(0x04)
	enum class ETimelineDirection Fade_Out__Direction_23A1AA444F5E07D5215601B3AED70035; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UTimelineComponent* Fade Out; // 0x248(0x08)
	struct TArray<float> Fog Densities; // 0x250(0x10)

	void Fade Out__FinishedFunc(); // Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__FinishedFunc // (BlueprintEvent) // @ game+0x5e02c90
	void Fade Out__UpdateFunc(); // Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__UpdateFunc // (BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveTick(float DeltaSeconds); // Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_LevelTransition_LightsEffects(int32_t EntryPoint); // Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ExecuteUbergraph_LevelTransition_LightsEffects // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

