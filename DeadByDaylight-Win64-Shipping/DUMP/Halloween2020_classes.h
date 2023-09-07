// Class Halloween2020.BlightedSerumAddon
// Size: 0x310 (Inherited: 0x2b8)
struct UBlightedSerumAddon : UItemAddon {
	struct ACollectable* _blightedSerumCollectable; // 0x2b8(0x08)
	struct UBlightedSerumDashInteraction* _dashInteraction; // 0x2c0(0x08)
	int32_t _theBlightExtraTokens; // 0x2c8(0x04)
	int32_t _numberOfDashesPerEvent; // 0x2cc(0x04)
	char pad_2D0[0x40]; // 0x2d0(0x40)

	void OnRep_DashInteraction(); // Function Halloween2020.BlightedSerumAddon.OnRep_DashInteraction // (Final|Native|Private) // @ game+0x5638770
	void OnBlightedDashEnabledVfxSfx(); // Function Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
};

// Class Halloween2020.BlightedSerumCollisionInteraction
// Size: 0x650 (Inherited: 0x630)
struct UBlightedSerumCollisionInteraction : UInteractionDefinition {
	struct UBlightedSerumCooldownInteraction* _cooldownInteraction; // 0x630(0x08)
	float _bounceTime; // 0x638(0x04)
	char pad_63C[0x14]; // 0x63c(0x14)

	void SetCooldownInteraction(struct UBlightedSerumCooldownInteraction* cooldownInteraction); // Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction // (Final|Native|Public|BlueprintCallable) // @ game+0x5638900
};

// Class Halloween2020.BlightedSerumCooldownInteraction
// Size: 0x640 (Inherited: 0x630)
struct UBlightedSerumCooldownInteraction : UInteractionDefinition {
	float _cooldownTime; // 0x630(0x04)
	float _cameraPitchRecenterTime; // 0x634(0x04)
	char pad_638[0x8]; // 0x638(0x08)
};

// Class Halloween2020.BlightedSerumDashInteraction
// Size: 0x6d0 (Inherited: 0x630)
struct UBlightedSerumDashInteraction : UInteractionDefinition {
	struct UBlightedSerumCooldownInteraction* _cooldownInteraction; // 0x630(0x08)
	struct UBlightedSerumCollisionInteraction* _collisionInteraction; // 0x638(0x08)
	struct UCurveFloat* _dashSpeedCurve; // 0x640(0x08)
	struct UCurveFloat* _lookAngleToTurnRateCurveController; // 0x648(0x08)
	struct UCurveFloat* _lookAngleToTurnRateCurveMouse; // 0x650(0x08)
	float _dashDuration; // 0x658(0x04)
	float _vectorInterpToSpeed; // 0x65c(0x04)
	float _wallDashAccelerationMultiplier; // 0x660(0x04)
	float _cameraPitchRecenterTime; // 0x664(0x04)
	float _lookAngleTurnRateModifier; // 0x668(0x04)
	float _wallDashCollisionRadius; // 0x66c(0x04)
	float _wallDashCollisionHeight; // 0x670(0x04)
	float _wallDashCollisionRange; // 0x674(0x04)
	char pad_678[0x58]; // 0x678(0x58)

	void SetCooldownInteraction(struct UBlightedSerumCooldownInteraction* cooldownInteraction); // Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction // (Final|Native|Public|BlueprintCallable) // @ game+0x5638900
	void SetCollisionInteraction(struct UBlightedSerumCollisionInteraction* collisionInteraction); // Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction // (Final|Native|Public|BlueprintCallable) // @ game+0x5638c40
};

// Class Halloween2020.ToxinPlantInteractable
// Size: 0x380 (Inherited: 0x378)
struct AToxinPlantInteractable : ASpecialBehaviourInteractable {
	char pad_378[0x8]; // 0x378(0x08)

	void SetToxinPlantComplete(bool IsComplete); // Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete // (Final|Native|Public|BlueprintCallable) // @ game+0x5639040
	void OnToxinPlantComplete(); // Function Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnSalvageInteractionStart(); // Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void OnSalvageInteractionFinished(); // Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	bool IsToxinPlantComplete(); // Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5639010
};

