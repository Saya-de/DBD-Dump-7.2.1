// Enum TheNurse.EBlinkPowerState
enum class EBlinkPowerState : uint8 {
	Ready = 0,
	ChainBlink = 1,
	AttackBlink = 2,
	AwaitingCooldown = 3,
	Cooldown = 4,
	EBlinkPowerState_MAX = 5
};

// ScriptStruct TheNurse.BlinkParams
// Size: 0x14 (Inherited: 0x00)
struct FBlinkParams {
	struct FVector TargetTranslation; // 0x00(0x0c)
	float Duration; // 0x0c(0x04)
	float Timestamp; // 0x10(0x04)
};

// ScriptStruct TheNurse.BlinkPowerSetupParams
// Size: 0x18 (Inherited: 0x00)
struct FBlinkPowerSetupParams {
	struct UTimerObject* ChainBlinkTimer; // 0x00(0x08)
	struct UTimerObject* CooldownTimer; // 0x08(0x08)
	struct UTimerObject* RechargeTimer; // 0x10(0x08)
};

