// BlueprintGeneratedClass SQ_fade_menu.SequenceDirector_C
// Size: 0x50 (Inherited: 0x40)
struct USequenceDirector_C : ULevelSequenceDirector {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x40(0x08)
	struct UObject* levelBP; // 0x48(0x08)

	void SequenceEvent__ENTRYPOINTSequenceDirector_1(struct TScriptInterface<IFadedOutEventInterface_C> Target); // Function SQ_fade_menu.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void FadeOutEvent(); // Function SQ_fade_menu.SequenceDirector_C.FadeOutEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SQ_FadedOutEvent(struct TScriptInterface<IFadedOutEventInterface_C> Target); // Function SQ_fade_menu.SequenceDirector_C.SQ_FadedOutEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint); // Function SQ_fade_menu.SequenceDirector_C.ExecuteUbergraph_SequenceDirector // (Final|UbergraphFunction) // @ game+0x5e02c90
};

