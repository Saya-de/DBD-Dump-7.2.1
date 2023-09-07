// BlueprintGeneratedClass BP_Audio_KLR_30.BP_Audio_KLR_29_C
// Size: 0x218 (Inherited: 0x208)
struct UBP_Audio_KLR_29_C : UBP_Audio_KLR_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x208(0x08)
	struct UAkAudioEvent* AudioStatusStartMenuEvent; // 0x210(0x08)

	void IsCharacter(struct ADBDPlayer* CamperPlayer, struct TArray<struct FString>& characterName, bool& IsCharacter); // Function BP_Audio_KLR_30.BP_Audio_KLR_29_C.IsCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void SelectAudioStatusStartEvent(bool IsInMenu, struct UAkAudioEvent*& AudioEvent); // Function BP_Audio_KLR_30.BP_Audio_KLR_29_C.SelectAudioStatusStartEvent // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void HitImpactOnSurvivorSFX(struct ACamperPlayer* camper, enum class EAttackType attackType, bool IsWeaponHit); // Function BP_Audio_KLR_30.BP_Audio_KLR_29_C.HitImpactOnSurvivorSFX // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Audio_KLR_30(int32_t EntryPoint); // Function BP_Audio_KLR_30.BP_Audio_KLR_29_C.ExecuteUbergraph_BP_Audio_KLR_30 // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

