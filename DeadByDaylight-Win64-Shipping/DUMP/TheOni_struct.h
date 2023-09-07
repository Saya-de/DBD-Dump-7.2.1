// Enum TheOni.EBloodOrbState
enum class EBloodOrbState : uint8 {
	Invalid = 0,
	BeingDropped = 1,
	Idle = 2,
	WaitingToMove = 3,
	Attracted = 4,
	Absorbed = 5,
	Destroyed = 6,
	EBloodOrbState_MAX = 7
};

// Enum TheOni.EBloodOrbVisibilityMode
enum class EBloodOrbVisibilityMode : uint8 {
	VisibleWithinRange = 0,
	HideAll = 1,
	EBloodOrbVisibilityMode_MAX = 2
};

// Enum TheOni.EDemonModeState
enum class EDemonModeState : uint8 {
	Invalid = 0,
	NotInPower = 1,
	Activation = 2,
	InPower = 3,
	Cooldown = 4,
	EDemonModeState_MAX = 5
};

// ScriptStruct TheOni.Accumulator
// Size: 0x18 (Inherited: 0x00)
struct FAccumulator {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TheOni.GameEventBloodOrbDropParams
// Size: 0x10 (Inherited: 0x00)
struct FGameEventBloodOrbDropParams {
	struct FGameplayTag GameEvent; // 0x00(0x0c)
	float ImpulseFactor; // 0x0c(0x04)
};

// ScriptStruct TheOni.BloodOrbDropParams
// Size: 0x08 (Inherited: 0x00)
struct FBloodOrbDropParams {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TheOni.BloodOrbInfo
// Size: 0x60 (Inherited: 0x00)
struct FBloodOrbInfo {
	char pad_0[0x50]; // 0x00(0x50)
	struct UStaticMeshComponent* originalStaticMesh; // 0x50(0x08)
	struct UStaticMeshComponent* clonedStaticMesh; // 0x58(0x08)
};

