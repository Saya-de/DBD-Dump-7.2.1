// Class DBDAttack.PounceAttack
// Size: 0x390 (Inherited: 0x390)
struct UPounceAttack : UDBDAttack {
};

// Class DBDAttack.PounceAttackOpenSubstate
// Size: 0x130 (Inherited: 0x118)
struct UPounceAttackOpenSubstate : UDBDAttackOpenSubstate {
	struct UPounceAttackOpenSubstateCosmetic* _pounceOpenStateCosmeticBlueprintClass; // 0x118(0x08)
	struct UPounceAttackOpenSubstateCosmetic* _pounceOpenStateCosmeticBlueprintObject; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
};

// Class DBDAttack.PounceAttackHittingSubstate
// Size: 0x1a0 (Inherited: 0x1a0)
struct UPounceAttackHittingSubstate : UDBDAttackHittingSubstate {
};

// Class DBDAttack.PounceAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UPounceAttackSuccessSubstate : UDBDAttackSuccessSubstate {
};

// Class DBDAttack.PounceAttackMissSubstate
// Size: 0x120 (Inherited: 0x118)
struct UPounceAttackMissSubstate : UDBDAttackMissSubstate {
	char pad_118[0x8]; // 0x118(0x08)
};

// Class DBDAttack.PounceAttackObstructSubstate
// Size: 0x128 (Inherited: 0x118)
struct UPounceAttackObstructSubstate : UDBDAttackObstructSubstate {
	struct FName _fullObstructMontage; // 0x118(0x0c)
	char pad_124[0x4]; // 0x124(0x04)
};

// Class DBDAttack.PounceAttackOpenSubstateCosmetic
// Size: 0x30 (Inherited: 0x30)
struct UPounceAttackOpenSubstateCosmetic : UObject {

	void OnLungeAttackStartCosmetic(struct ADBDPlayer* SlasherPlayer); // Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackStartCosmetic // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnLungeAttackEndCosmetic(struct ADBDPlayer* SlasherPlayer); // Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackEndCosmetic // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnLocallyObservedChangedCosmetic(struct ADBDPlayer* SlasherPlayer); // Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChangedCosmetic // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void OnLocallyObservedChanged(struct ADBDPlayer* SlasherPlayer); // Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChanged // (Final|Native|Private) // @ game+0x4bba170
	bool IsLungeAttackAugmented(struct ADBDPlayer* SlasherPlayer); // Function DBDAttack.PounceAttackOpenSubstateCosmetic.IsLungeAttackAugmented // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4bba0d0
};

// Class DBDAttack.SlashAttack
// Size: 0x390 (Inherited: 0x390)
struct USlashAttack : UPounceAttack {
};

