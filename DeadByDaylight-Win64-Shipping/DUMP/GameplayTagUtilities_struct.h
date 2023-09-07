// ScriptStruct GameplayTagUtilities.TagStateBoolBase
// Size: 0x30 (Inherited: 0x00)
struct FTagStateBoolBase {
	bool _isTrue; // 0x00(0x01)
	char pad_1[0x2f]; // 0x01(0x2f)
};

// ScriptStruct GameplayTagUtilities.TagStateBool
// Size: 0x30 (Inherited: 0x30)
struct FTagStateBool : FTagStateBoolBase {
};

// ScriptStruct GameplayTagUtilities.QueryInstanceCollection
// Size: 0x10 (Inherited: 0x00)
struct FQueryInstanceCollection {
	struct TArray<struct UTagContainerQueryInstance*> Instances; // 0x00(0x10)
};

