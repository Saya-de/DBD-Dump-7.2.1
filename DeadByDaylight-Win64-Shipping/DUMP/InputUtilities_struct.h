// ScriptStruct InputUtilities.ButtonSequenceData
// Size: 0x48 (Inherited: 0x08)
struct FButtonSequenceData : FTableRowBase {
	struct FName SequenceId; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FName> Sequence; // 0x18(0x10)
	int32_t TIMEOUT; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FString> Platforms; // 0x30(0x10)
	int32_t MinKeysForFailedAttempt; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

