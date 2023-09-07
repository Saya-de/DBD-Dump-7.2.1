// Class TheShape.KillStandingInteractionDefinition
// Size: 0x640 (Inherited: 0x630)
struct UKillStandingInteractionDefinition : UInteractionDefinition {
	char pad_630[0x4]; // 0x630(0x04)
	float _slasherFacingTolerance; // 0x634(0x04)
	char pad_638[0x8]; // 0x638(0x08)
};

// Class TheShape.ObjectOfObsession
// Size: 0x438 (Inherited: 0x3c8)
struct UObjectOfObsession : UPerk {
	float _revealTimeIntervals[0x3]; // 0x3c8(0x0c)
	float _revealTimeDuration[0x3]; // 0x3d4(0x0c)
	float _actionSpeedBonus[0x3]; // 0x3e0(0x0c)
	char pad_3EC[0x34]; // 0x3ec(0x34)
	struct UStatusEffect* _increaseObsessionChanceEffect; // 0x420(0x08)
	struct UStatusEffect* _revealToKillerStatusEffect; // 0x428(0x08)
	struct UStatusEffect* _objectOfObsessionActionSpeedEffect; // 0x430(0x08)

	void Authority_OnDamageStateChanged(enum class ECamperDamageState oldDamageState, enum class ECamperDamageState CurrentDamageState); // Function TheShape.ObjectOfObsession.Authority_OnDamageStateChanged // (Final|Native|Private) // @ game+0x5a39860
};

// Class TheShape.ShapeAnimInstance
// Size: 0x620 (Inherited: 0x610)
struct UShapeAnimInstance : UKillerAnimInstance {
	bool _isTier3Active; // 0x610(0x01)
	char pad_611[0x7]; // 0x611(0x07)
	struct UEvilWithinComponent* _evilWithinComponent; // 0x618(0x08)
};

// Class TheShape.ShapePounceAttackOpenSubstate
// Size: 0x140 (Inherited: 0x130)
struct UShapePounceAttackOpenSubstate : UPounceAttackOpenSubstate {
	struct TArray<struct FDBDTunableRowHandle> _tierDurations; // 0x130(0x10)
};

