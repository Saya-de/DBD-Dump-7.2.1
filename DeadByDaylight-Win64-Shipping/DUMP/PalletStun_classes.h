// BlueprintGeneratedClass PalletStun.PalletStun_C
// Size: 0x650 (Inherited: 0x648)
struct UPalletStun_C : UGenericStun_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x648(0x08)

	void OnInteractionUpdateStart(struct ADBDPlayer* Player); // Function PalletStun.PalletStun_C.OnInteractionUpdateStart // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void DispatchStunEvent(struct ADBDPlayer* Player); // Function PalletStun.PalletStun_C.DispatchStunEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_PalletStun(int32_t EntryPoint); // Function PalletStun.PalletStun_C.ExecuteUbergraph_PalletStun // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

