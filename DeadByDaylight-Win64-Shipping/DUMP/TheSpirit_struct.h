// ScriptStruct TheSpirit.PhaseWalkInfo
// Size: 0x20 (Inherited: 0x00)
struct FPhaseWalkInfo {
	bool IsActivePhaseWalking; // 0x00(0x01)
	bool IsPassivePhaseWalking; // 0x01(0x01)
	bool IsInteractionPhaseWalking; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FVector HuskLocation; // 0x04(0x0c)
	struct FRotator HuskRotation; // 0x10(0x0c)
	bool TeleportToHusk; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

