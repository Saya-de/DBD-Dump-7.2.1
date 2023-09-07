// Class ReversibleActionSystem.BaseReversibleInstantActionHandler
// Size: 0x30 (Inherited: 0x30)
struct UBaseReversibleInstantActionHandler : UObject {
};

// Class ReversibleActionSystem.ReversibleActionSystemComponent
// Size: 0x1a8 (Inherited: 0xb8)
struct UReversibleActionSystemComponent : UActorComponent {
	struct TMap<struct FActionPredictionKey, struct FPendingInstantActionList> _pendingInstantActionHandlers; // 0xb8(0x50)
	struct TMap<struct FActionPredictionKey, struct FInstantActionList> _predictedInstantActionHandlers; // 0x108(0x50)
	char pad_158[0x50]; // 0x158(0x50)
};

