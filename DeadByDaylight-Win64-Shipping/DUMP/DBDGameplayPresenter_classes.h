// Class DBDGameplayPresenter.SurvivorStatusComponent
// Size: 0xf8 (Inherited: 0xb8)
struct USurvivorStatusComponent : UActorComponent {
	struct ACamperPlayer* _survivor; // 0xb8(0x08)
	char pad_C0[0x38]; // 0xc0(0x38)

	void OnValidatedInteractionStarted(); // Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted // (Final|Native|Private) // @ game+0x4d66ae0
	void OnValidatedInteractionEnded(); // Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded // (Final|Native|Private) // @ game+0x4d66ae0
	void OnSuvivorDamaged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState newDamageState); // Function DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged // (Final|Native|Private) // @ game+0x4d66b00
	void OnSurivorStatusChange(); // Function DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnRunningAndMovementChanged(bool isRunningAndMoving); // Function DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged // (Final|Native|Private) // @ game+0x4d66a50
	void OnHookedStateChanged(); // Function DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged // (Final|Native|Private) // @ game+0x4d66ae0
	void OnGuidedStateChanged(); // Function DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged // (Final|Native|Private) // @ game+0x4d66ae0
	void OnCrouchChanged(bool isCrouched); // Function DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged // (Final|Native|Private) // @ game+0x4d66a50
	bool IsSleeping(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d66a20
	bool IsRunning(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsRunning // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d669f0
	bool IsInjured(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsInjured // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d669c0
	bool IsHooked(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsHooked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d66990
	bool IsHiding(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsHiding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d66960
	bool IsHealing(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsHealing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d66930
	bool IsHarpooned(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d66900
	bool IsGettingStrangled(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d668d0
	bool IsGettingSacrificed(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d668a0
	bool IsDying(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsDying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d66870
	bool IsDead(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsDead // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d66840
	bool IsCrouching(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d66810
	bool IsCaptured(); // Function DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d667e0
	void GetMovementSpeed(float& currentMovementSpeed, float& percentMovementSpeed, float& maximumMovementSpeed); // Function DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4d666a0
};

