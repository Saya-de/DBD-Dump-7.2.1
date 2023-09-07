// Enum StatSystem.EModifierCompoundStrategy
enum class EModifierCompoundStrategy : uint8 {
	Add = 0,
	AddPlusOne = 1,
	Min = 2,
	Max = 3,
	Mult = 4,
	MultWithCompoundNegative = 5,
	MultWithCompoundNegativeMinusOne = 6,
	Average = 7,
	EModifierCompoundStrategy_MAX = 8
};

// Enum StatSystem.EModifierOperationStrategy
enum class EModifierOperationStrategy : uint8 {
	Add = 0,
	Subs = 1,
	Mult = 2,
	Div = 3,
	EModifierOperationStrategy_MAX = 4
};

// ScriptStruct StatSystem.BaseStat
// Size: 0x58 (Inherited: 0x00)
struct FBaseStat {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct FStatModifier> _statModifiers; // 0x20(0x10)
	char pad_30[0x28]; // 0x30(0x28)
};

// ScriptStruct StatSystem.StatModifier
// Size: 0x30 (Inherited: 0x00)
struct FStatModifier {
	enum class EModifierOperationStrategy OperationStrategy; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGameplayTag ModifierTag; // 0x04(0x0c)
	enum class EModifierCompoundStrategy CompoundStrategy; // 0x10(0x01)
	char pad_11[0x1f]; // 0x11(0x1f)
};

// ScriptStruct StatSystem.TunableStat
// Size: 0x80 (Inherited: 0x58)
struct FTunableStat : FBaseStat {
	struct FDBDTunableRowHandle _baseValue; // 0x58(0x28)
};

// ScriptStruct StatSystem.NonTunableStat
// Size: 0x60 (Inherited: 0x58)
struct FNonTunableStat : FBaseStat {
	float _baseValue; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct StatSystem.StatProperty
// Size: 0x88 (Inherited: 0x58)
struct FStatProperty : FBaseStat {
	bool _useTunable; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float _nonTunableValue; // 0x5c(0x04)
	struct FDBDTunableRowHandle _tunableValue; // 0x60(0x28)
};

