// BlueprintGeneratedClass BP_Audio_KLR_Base.BP_Audio_KLR_Base_C
// Size: 0x208 (Inherited: 0x1c8)
struct UBP_Audio_KLR_Base_C : UKillerAudioHandlerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1c8(0x08)
	struct UAkAudioBank* _killerAudioBank; // 0x1d0(0x08)
	struct UAkAudioEvent* _defaultAudioStatusStartEvent; // 0x1d8(0x08)
	struct UAkComponent* _audioComponent; // 0x1e0(0x08)
	bool _isInMenu; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	struct FName _audioCharacterName; // 0x1ec(0x0c)
	struct UAkAudioEvent* _audioStartEvent; // 0x1f8(0x08)
	struct ADBDBasePlayer* _ownerKiller; // 0x200(0x08)

	void OnKillerSoundbankUnloaded(enum class EAkResult Result); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankUnloaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnKillerSoundbankLoaded(enum class EAkResult Result); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnKillerAudioDisabled(); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerAudioDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnKillerAudioEnabled(); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SelectAudioStatusStartEvent(bool IsInMenu, struct UAkAudioEvent*& AudioEvent); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void GetAudioCharacterName(struct ADBDBasePlayer* Player, struct FName& AudioCharacterName); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x5e02c90
	void InititializeComponent(); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveBeginPlay(); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void TriggerSurvivorDamageHitAudioSFX(struct ACamperPlayer* camper, enum class EAttackType attackType, bool CausedKO, bool IsWeaponHit, bool isLightHit); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.TriggerSurvivorDamageHitAudioSFX // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HitImpactOnSurvivorSFX(struct ACamperPlayer* camper, enum class EAttackType attackType, bool IsWeaponHit); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.HitImpactOnSurvivorSFX // (BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_BP_Audio_KLR_Base(int32_t EntryPoint); // Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

