// Enum CoreUtilities.RealCaseGapEnum
enum class RealCaseGapEnum : int32 {
	None = 0,
	SavefileDeserializationFailure = 100,
	EarnPlayerXpParamError = 402,
	RealCaseGapEnum_MAX = 403
};

// Enum CoreUtilities.OutOfOrderEnum
enum class OutOfOrderEnum : uint8 {
	Value1 = 2,
	Value2 = 0,
	Value3 = 1,
	OutOfOrderEnum_MAX = 3
};

// Enum CoreUtilities.GapEnum
enum class GapEnum : uint8 {
	Value1 = 0,
	Value2 = 2,
	Value3 = 3,
	GapEnum_MAX = 4
};

// Enum CoreUtilities.SimpleEnum
enum class SimpleEnum : uint8 {
	Value1 = 0,
	Value2 = 1,
	Value3 = 2,
	SimpleEnum_MAX = 3
};

// ScriptStruct CoreUtilities.DelegateHandleWrapper
// Size: 0x08 (Inherited: 0x00)
struct FDelegateHandleWrapper {
	char pad_0[0x8]; // 0x00(0x08)
};

