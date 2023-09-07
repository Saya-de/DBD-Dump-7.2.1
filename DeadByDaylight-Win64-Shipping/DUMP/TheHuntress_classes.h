// Class TheHuntress.DeadHard
// Size: 0x480 (Inherited: 0x3c8)
struct UDeadHard : UPerk {
	struct UAnimInstance* _deadHardAnimInstance; // 0x3c8(0x08)
	float _deadHardCooldownDuration; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct FStatusEffectSpawnData> _effectsToSpawn; // 0x3d8(0x10)
	struct FPlayerStatusEffectSpawnerHelper _spawnerHelper; // 0x3e8(0x88)
	float _exhaustedCooldownPerLevel[0x3]; // 0x470(0x0c)
	char pad_47C[0x4]; // 0x47c(0x04)

	float GetExhaustedDuration(); // Function TheHuntress.DeadHard.GetExhaustedDuration // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x5756760
	float GetDeadHardCooldownDuration(); // Function TheHuntress.DeadHard.GetDeadHardCooldownDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5756740
};

// Class TheHuntress.DeadHardEffect
// Size: 0x350 (Inherited: 0x350)
struct UDeadHardEffect : UStatusEffect {
};

// Class TheHuntress.DeadHardInteraction
// Size: 0x640 (Inherited: 0x630)
struct UDeadHardInteraction : UInteractionDefinition {
	char pad_630[0x10]; // 0x630(0x10)
};

// Class TheHuntress.HatchetCooldown
// Size: 0x630 (Inherited: 0x630)
struct UHatchetCooldown : UInteractionDefinition {
};

// Class TheHuntress.HatchetLauncher
// Size: 0x2a0 (Inherited: 0x180)
struct UHatchetLauncher : UKillerProjectileLauncher {
	struct FRotator _angleOffset; // 0x180(0x0c)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct UCurveFloat* _angleOffsetCurve; // 0x190(0x08)
	struct UCurveFloat* _speedCurve; // 0x198(0x08)
	float _hatchetSpeedWhenThrowFullyCharged; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct UCurveFloat* _hatchetPitchCurve; // 0x1a8(0x08)
	struct FDBDTunableRowHandle _hatchetMinAngleOffset; // 0x1b0(0x28)
	struct FDBDTunableRowHandle _hatchetMaxAngleOffset; // 0x1d8(0x28)
	struct FDBDTunableRowHandle _hatchetMinSpeed; // 0x200(0x28)
	struct FDBDTunableRowHandle _hatchetMaxSpeed; // 0x228(0x28)
	struct FDBDTunableRowHandle _hatchetLaunchPitchMin; // 0x250(0x28)
	struct FDBDTunableRowHandle _hatchetLaunchPitchMax; // 0x278(0x28)

	bool IsLaunchedHatchetFullyCharged(); // Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5756e20
};

// Class TheHuntress.HatchetProjectile
// Size: 0x338 (Inherited: 0x338)
struct AHatchetProjectile : AKillerProjectile {
};

// Class TheHuntress.HatchetRack
// Size: 0x248 (Inherited: 0x248)
struct AHatchetRack : ABaseLockerItem {

	void SetMovableHatchetVisibility(bool visible); // Function TheHuntress.HatchetRack.SetMovableHatchetVisibility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

// Class TheHuntress.HatchetThrow
// Size: 0x7a0 (Inherited: 0x770)
struct UHatchetThrow : UThrowInteraction {
	struct FDBDTunableRowHandle _hatchetThrowCancellationCooldown; // 0x768(0x28)
	char pad_798[0x8]; // 0x798(0x08)

	struct ATheHuntressPower* GetOwningHatchetSpawner(); // Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5757450
};

// Class TheHuntress.HexHuntressLullabyEffect
// Size: 0x358 (Inherited: 0x350)
struct UHexHuntressLullabyEffect : UStatusEffect {
	char pad_350[0x8]; // 0x350(0x08)
};

// Class TheHuntress.HexHuntressLullabyPerk
// Size: 0x498 (Inherited: 0x448)
struct UHexHuntressLullabyPerk : UHexPerk {
	char pad_448[0x18]; // 0x448(0x18)
	struct UStatusEffect* _huntressLullabyStatusEffect; // 0x460(0x08)
	struct FGameplayTagContainer _possiblePlayerStateTagsInProgress; // 0x468(0x20)
	struct TArray<struct UStatusEffect*> _huntressLullabyStatusEffects; // 0x488(0x10)
};

// Class TheHuntress.HuntressPowerSubAnimInstance
// Size: 0x300 (Inherited: 0x2c0)
struct UHuntressPowerSubAnimInstance : UAnimInstance {
	bool _powerIsActive; // 0x2c0(0x01)
	bool _powerIsReleased; // 0x2c1(0x01)
	bool _powerIsCancelled; // 0x2c2(0x01)
	bool _powerIsInCooldown; // 0x2c3(0x01)
	float _aimingPlayRate; // 0x2c4(0x04)
	float _launchPlayRate; // 0x2c8(0x04)
	float _cancelPlayRate; // 0x2cc(0x04)
	float _cooldownPlayRate; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UAnimSequence* _aimingAnimationSequence; // 0x2d8(0x08)
	struct UAnimSequence* _launchAnimationSequence; // 0x2e0(0x08)
	struct UAnimSequence* _cancelAnimationSequence; // 0x2e8(0x08)
	struct UAnimSequence* _cooldownAnimationSequence; // 0x2f0(0x08)
	char pad_2F8[0x8]; // 0x2f8(0x08)
};

// Class TheHuntress.ReloadHatchet
// Size: 0x670 (Inherited: 0x660)
struct UReloadHatchet : UBaseLockerInteraction {
	char pad_660[0x10]; // 0x660(0x10)

	bool IsInteractionPossible_Shared(struct ADBDPlayer* Player); // Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5757b40
};

// Class TheHuntress.TerritorialImperative
// Size: 0x3f0 (Inherited: 0x3c8)
struct UTerritorialImperative : UPerk {
	struct UStatusEffect* _revealSurvivorStatusEffect; // 0x3c8(0x08)
	float _survivorRevealedTime[0x3]; // 0x3d0(0x0c)
	float _killerMinimumDistance; // 0x3dc(0x04)
	float _perkCooldown; // 0x3e0(0x04)
	char pad_3E4[0xc]; // 0x3e4(0x0c)

	void Multicast_OnPerkTriggered(struct ADBDPlayer* triggerer); // Function TheHuntress.TerritorialImperative.Multicast_OnPerkTriggered // (Net|Native|Event|NetMulticast|Public) // @ game+0x4ceef10
};

// Class TheHuntress.TheHuntressPower
// Size: 0x4d8 (Inherited: 0x4c8)
struct ATheHuntressPower : ACollectable {
	struct UReloadHatchet* _reloadHatchetClass; // 0x4c8(0x08)
	char pad_4D0[0x8]; // 0x4d0(0x08)

	void StartHatchetShineCosmetic(); // Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic // (BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x57584d0
	void SetPercentThrowStrength(float percentStrength); // Function TheHuntress.TheHuntressPower.SetPercentThrowStrength // (Final|Native|Public|BlueprintCallable) // @ game+0x56aeed0
	void SetHatchetVisible(bool visible); // Function TheHuntress.TheHuntressPower.SetHatchetVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x5758440
	void PrintDebugThrowInfo(); // Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	bool IsHatchetThrowFullyCharged(); // Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5758410
	bool HasHatchet(); // Function TheHuntress.TheHuntressPower.HasHatchet // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57583e0
	struct ASlasherPlayer* GetOwningKiller(); // Function TheHuntress.TheHuntressPower.GetOwningKiller // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57583b0
	struct UBaseProjectileLauncher* GetHatchetProjectileLauncher(); // Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	struct UHatchetCooldown* GetHatchetCooldown(); // Function TheHuntress.TheHuntressPower.GetHatchetCooldown // (Event|Public|BlueprintEvent|Const) // @ game+0x5e02c90
	struct UAkComponent* GetAkAudioHatchetSpawner(); // Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x5e02c90
	void Cosmetic_OnThrowInteractionStart(); // Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnThrowInteractionCancelled(); // Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

