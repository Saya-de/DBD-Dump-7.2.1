// BlueprintGeneratedClass StartScreen.StartScreen_C
// Size: 0x248 (Inherited: 0x238)
struct AStartScreen_C : AStartScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct ALevelSequenceActor* SQ_fade_menu_ExecuteUbergraph_StartScreen_RefProperty; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function StartScreen.StartScreen_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BeginDestroyTravelSequence(); // Function StartScreen.StartScreen_C.BeginDestroyTravelSequence // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void FadeOutEvent(); // Function StartScreen.StartScreen_C.FadeOutEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_StartScreen(int32_t EntryPoint); // Function StartScreen.StartScreen_C.ExecuteUbergraph_StartScreen // (Final|UbergraphFunction) // @ game+0x5e02c90
};

