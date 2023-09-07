// BlueprintGeneratedClass Kill.Kill_C
// Size: 0x7f9 (Inherited: 0x7f0)
struct UKill_C : UKillInteractionDefinition {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7f0(0x08)
	bool Activate Crazy State Audio Switch During Kill; // 0x7f8(0x01)

	void DeactivateKillAudio(struct ADBDPlayer* interactingPlayer); // Function Kill.Kill_C.DeactivateKillAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ActivateKillAudio(struct ADBDPlayer* interactingPlayer); // Function Kill.Kill_C.ActivateKillAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnKillAudioActivation(bool Active, struct ADBDPlayer* interactingPlayer); // Function Kill.Kill_C.OnKillAudioActivation // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_Kill(int32_t EntryPoint); // Function Kill.Kill_C.ExecuteUbergraph_Kill // (Final|UbergraphFunction) // @ game+0x5e02c90
};

