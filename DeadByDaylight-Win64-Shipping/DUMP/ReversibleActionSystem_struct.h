// ScriptStruct ReversibleActionSystem.ActionPredictionKey
// Size: 0x04 (Inherited: 0x00)
struct FActionPredictionKey {
	int32_t _keyValue; // 0x00(0x04)
};

// ScriptStruct ReversibleActionSystem.InstantActionList
// Size: 0x10 (Inherited: 0x00)
struct FInstantActionList {
	struct TArray<struct UBaseReversibleInstantActionHandler*> Actions; // 0x00(0x10)
};

// ScriptStruct ReversibleActionSystem.PendingInstantActionList
// Size: 0x10 (Inherited: 0x00)
struct FPendingInstantActionList {
	struct TArray<struct FPendingInstantAction> Actions; // 0x00(0x10)
};

// ScriptStruct ReversibleActionSystem.PendingInstantAction
// Size: 0x20 (Inherited: 0x00)
struct FPendingInstantAction {
	struct UBaseReversibleInstantActionHandler* Handler; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct FTimerHandle TimerHandle; // 0x18(0x08)
};

// ScriptStruct ReversibleActionSystem.ExecuteInstantActionParams
// Size: 0x08 (Inherited: 0x00)
struct FExecuteInstantActionParams {
	struct FActionPredictionKey PredictionKey; // 0x00(0x04)
	float PredictionDelay; // 0x04(0x04)
};

