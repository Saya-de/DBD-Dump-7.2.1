// BlueprintGeneratedClass BP_Audio_KLR_34.BP_Audio_KLR_33_C
// Size: 0x218 (Inherited: 0x208)
struct UBP_Audio_KLR_33_C : UBP_Audio_KLR_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x208(0x08)
	struct UAkAudioEvent* AudioStatusStartMenuEvent; // 0x210(0x08)

	void OnKillerSoundbankLoaded(enum class EAkResult Result); // Function BP_Audio_KLR_34.BP_Audio_KLR_33_C.OnKillerSoundbankLoaded // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void IsCharacter(struct ADBDPlayer* CamperPlayer, struct TArray<struct FString>& characterName, bool& IsCharacter); // Function BP_Audio_KLR_34.BP_Audio_KLR_33_C.IsCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void SelectAudioStatusStartEvent(bool IsInMenu, struct UAkAudioEvent*& AudioEvent); // Function BP_Audio_KLR_34.BP_Audio_KLR_33_C.SelectAudioStatusStartEvent // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void HitImpactOnSurvivorSFX(struct ACamperPlayer* camper, enum class EAttackType attackType, bool IsWeaponHit); // Function BP_Audio_KLR_34.BP_Audio_KLR_33_C.HitImpactOnSurvivorSFX // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Audio_KLR_34(int32_t EntryPoint); // Function BP_Audio_KLR_34.BP_Audio_KLR_33_C.ExecuteUbergraph_BP_Audio_KLR_34 // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

