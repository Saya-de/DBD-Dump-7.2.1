// Class FXWidget.FXUserWidgetBase
// Size: 0x2f8 (Inherited: 0x298)
struct UFXUserWidgetBase : UUserWidget {
	struct UNiagaraSystem* NiagaraSystem; // 0x298(0x08)
	bool isFillingWidget; // 0x2a0(0x01)
	char pad_2A1[0x17]; // 0x2a1(0x17)
	struct FFXWidgetPlayer _particlePlayer; // 0x2b8(0x10)
	char pad_2C8[0x30]; // 0x2c8(0x30)

	void StopParticle(); // Function FXWidget.FXUserWidgetBase.StopParticle // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const) // @ game+0x4948cc0
	void PlayParticle(float StartAtTime, int32_t NumLoopsToPlay); // Function FXWidget.FXUserWidgetBase.PlayParticle // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const) // @ game+0x4948bf0
	struct UNiagaraComponent* GetNiagaraFX(); // Function FXWidget.FXUserWidgetBase.GetNiagaraFX // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4948bd0
};

