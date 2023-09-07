// Enum NetworkUtilities.ETimerState
enum class ETimerState : uint8 {
	Cleared = 0,
	Started = 1,
	Paused = 2,
	ETimerState_MAX = 3
};

// ScriptStruct NetworkUtilities.Float_NetQuantize8
// Size: 0x08 (Inherited: 0x00)
struct FFloat_NetQuantize8 {
	float _value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
};

// ScriptStruct NetworkUtilities.YawAndPitchRotator_NetQuantize16
// Size: 0x0c (Inherited: 0x00)
struct FYawAndPitchRotator_NetQuantize16 {
	struct FRotator _value; // 0x00(0x0c)
};

// ScriptStruct NetworkUtilities.YawAndPitchRotator_NetQuantize32
// Size: 0x0c (Inherited: 0x00)
struct FYawAndPitchRotator_NetQuantize32 {
	struct FRotator _value; // 0x00(0x0c)
};

// ScriptStruct NetworkUtilities.SpeedBasedNetSyncedValue
// Size: 0x38 (Inherited: 0x00)
struct FSpeedBasedNetSyncedValue {
	char pad_0[0x18]; // 0x00(0x18)
	float _replicatedValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	float _replicatedSpeed; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	float _replicatedLastUpdateTimestamp; // 0x28(0x04)
	char pad_2C[0xc]; // 0x2c(0x0c)
};

// ScriptStruct NetworkUtilities.AssetNetIdRow
// Size: 0x10 (Inherited: 0x08)
struct FAssetNetIdRow : FTableRowBase {
	int32_t NetId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct NetworkUtilities.ObjectFastArray
// Size: 0x148 (Inherited: 0x108)
struct FObjectFastArray : FFastArraySerializer {
	char pad_108[0x30]; // 0x108(0x30)
	struct TArray<struct FObjectFastArrayEntry> Objects; // 0x138(0x10)
};

// ScriptStruct NetworkUtilities.ObjectFastArrayEntry
// Size: 0x18 (Inherited: 0x0c)
struct FObjectFastArrayEntry : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct UObject* Object; // 0x10(0x08)
};

// ScriptStruct NetworkUtilities.ReplicationTimerData
// Size: 0x14 (Inherited: 0x00)
struct FReplicationTimerData {
	float Timestamp; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	struct FFloat_NetQuantize8 RemainingTimePercent; // 0x08(0x08)
	enum class ETimerState State; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

