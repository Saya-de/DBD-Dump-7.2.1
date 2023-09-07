// ScriptStruct TheCannibal.CannibalAnalytics
// Size: 0xe8 (Inherited: 0xc8)
struct FCannibalAnalytics : FChainsawAnalytics {
	struct TArray<struct FChainsawHitWithPowerCharge> HitWithPowerChargeEvents; // 0xc8(0x10)
	struct TArray<struct FChainsawEvent> RevToTantrumEvents; // 0xd8(0x10)
};

// ScriptStruct TheCannibal.ChainsawHitWithPowerCharge
// Size: 0x08 (Inherited: 0x04)
struct FChainsawHitWithPowerCharge : FChainsawEvent {
	int32_t NumPowerCharges; // 0x04(0x04)
};

