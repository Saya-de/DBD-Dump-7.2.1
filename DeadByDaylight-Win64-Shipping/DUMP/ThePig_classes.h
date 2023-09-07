// Class ThePig.Addon_ThePig_JigsawSketch
// Size: 0x308 (Inherited: 0x2b8)
struct UAddon_ThePig_JigsawSketch : UItemAddon {
	struct TMap<struct ACamperPlayer*, struct AGenerator*> _trackedGeneratorRepairs; // 0x2b8(0x50)
};

// Class ThePig.AttachReverseBearTrap
// Size: 0x630 (Inherited: 0x630)
struct UAttachReverseBearTrap : UInteractionDefinition {

	struct ACamperPlayer* GetCamper(); // Function ThePig.AttachReverseBearTrap.GetCamper // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a32df0
};

// Class ThePig.DetectivesHunch
// Size: 0x638 (Inherited: 0x3c8)
struct UDetectivesHunch : UPerk {
	struct TSet<struct TSoftClassPtr<UObject>> _interactableClasses; // 0x3c8(0x50)
	float _revealRanges[0x3]; // 0x418(0x0c)
	float _revealDuration; // 0x424(0x04)
	struct TMap<struct AActor*, struct FTimerHandle> _actorToTimerMap; // 0x428(0x50)
	char pad_478[0x50]; // 0x478(0x50)
	struct FObjectFastArray _revealedActors; // 0x4c8(0x148)
	char pad_610[0x28]; // 0x610(0x28)

	float GetRevealRangeAtLevel(); // Function ThePig.DetectivesHunch.GetRevealRangeAtLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a333c0
	float GetRevealDuration(); // Function ThePig.DetectivesHunch.GetRevealDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a333a0
};

// Class ThePig.K11AnimInstance
// Size: 0x670 (Inherited: 0x610)
struct UK11AnimInstance : UKillerAnimInstance {
	bool _isAmbushAttack; // 0x610(0x01)
	bool _isCrouched; // 0x611(0x01)
	bool _isCrouchPressed; // 0x612(0x01)
	char pad_613[0x1]; // 0x613(0x01)
	float _crouchPlayRate; // 0x614(0x04)
	float _uncrouchPlayRate; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct UInteractionDefinition* _crouchInteractionDefinitionClass; // 0x620(0x08)
	struct UInteractionDefinition* _uncrouchInteractionDefinitionClass; // 0x628(0x08)
	struct UAnimSequence* _crouchToStand; // 0x630(0x08)
	struct UAnimSequence* _standToCrouch; // 0x638(0x08)
	struct UAnimSequence* _crouchToStandFPV; // 0x640(0x08)
	struct UAnimSequence* _standToCrouchFPV; // 0x648(0x08)
	struct UInteractionDefinition* _crouchInteractionDefinition; // 0x650(0x08)
	struct UInteractionDefinition* _uncrouchInteractionDefinition; // 0x658(0x08)
	char pad_660[0x10]; // 0x660(0x10)
};

// Class ThePig.PigAmbushAttack
// Size: 0x3a0 (Inherited: 0x390)
struct UPigAmbushAttack : UPounceAttack {
	char pad_390[0x10]; // 0x390(0x10)
};

// Class ThePig.PigAmbushAttackOpenSubstate
// Size: 0x138 (Inherited: 0x130)
struct UPigAmbushAttackOpenSubstate : UPounceAttackOpenSubstate {
	char pad_130[0x8]; // 0x130(0x08)
};

// Class ThePig.PigAmbushAttackHittingSubstate
// Size: 0x1a0 (Inherited: 0x1a0)
struct UPigAmbushAttackHittingSubstate : UPounceAttackHittingSubstate {
};

// Class ThePig.PigAmbushAttackSuccessSubstate
// Size: 0x118 (Inherited: 0x118)
struct UPigAmbushAttackSuccessSubstate : UPounceAttackSuccessSubstate {
};

// Class ThePig.PigAmbushAttackMissSubstate
// Size: 0x120 (Inherited: 0x120)
struct UPigAmbushAttackMissSubstate : UPounceAttackMissSubstate {
};

// Class ThePig.PigAmbushAttackObstructSubstate
// Size: 0x128 (Inherited: 0x128)
struct UPigAmbushAttackObstructSubstate : UPounceAttackObstructSubstate {
};

// Class ThePig.RBTSurvivorSubAnimInstance
// Size: 0x590 (Inherited: 0x550)
struct URBTSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	char pad_550[0x38]; // 0x550(0x38)
	bool _isRemovingRBT; // 0x588(0x01)
	bool _hasSkillCheckFailed; // 0x589(0x01)
	char pad_58A[0x6]; // 0x58a(0x06)
};

// Class ThePig.RemoveReverseBearTrapChargeable
// Size: 0x7a0 (Inherited: 0x760)
struct URemoveReverseBearTrapChargeable : UChargeableInteractionDefinition {
	struct FDBDTunableRowHandle _audibleRangeOnSearch; // 0x758(0x28)
	struct UStatusEffect* _timedRevealStatusEffect; // 0x780(0x08)
	char pad_790[0x10]; // 0x790(0x10)

	bool HasSuccessfullyRemoved(); // Function ThePig.RemoveReverseBearTrapChargeable.HasSuccessfullyRemoved // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a34460
	void BP_OnFinishWithoutDetach(struct ACamperPlayer* searchingPlayer); // Function ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithoutDetach // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void BP_OnFinishWithDetach(struct ACamperPlayer* searchingPlayer); // Function ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithDetach // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

