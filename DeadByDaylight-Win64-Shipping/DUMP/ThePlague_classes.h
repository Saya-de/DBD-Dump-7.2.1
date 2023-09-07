// Class ThePlague.CleanseSickness
// Size: 0x760 (Inherited: 0x760)
struct UCleanseSickness : UChargeableInteractionDefinition {

	void OnCleanseComplete(struct ADBDPlayer* Player); // Function ThePlague.CleanseSickness.OnCleanseComplete // (Final|Native|Private|BlueprintCallable) // @ game+0x5a363f0
};

// Class ThePlague.PlagueSurvivorAnalyticsComponent
// Size: 0x160 (Inherited: 0xb8)
struct UPlagueSurvivorAnalyticsComponent : UActorComponent {
	uint32_t _replicatedRegularVomitHits; // 0xb8(0x04)
	char pad_BC[0xa4]; // 0xbc(0xa4)
};

// Class ThePlague.SicknessSurvivorSubAnimInstance
// Size: 0x5c0 (Inherited: 0x550)
struct USicknessSurvivorSubAnimInstance : UBaseSurvivorAnimInstance {
	struct FString _vomitingEnteredStatEvent; // 0x550(0x10)
	float _hitByVomitTime; // 0x560(0x04)
	bool _isSick; // 0x564(0x01)
	bool _isVomiting; // 0x565(0x01)
	bool _hasRecentlyBeenHitByVomit; // 0x566(0x01)
	bool _isOpeningExitGate; // 0x567(0x01)
	bool _isHooked; // 0x568(0x01)
	bool _isCrawling; // 0x569(0x01)
	bool _isDead; // 0x56a(0x01)
	bool _isFrightScreaming; // 0x56b(0x01)
	enum class EGuidedState _guidedAction; // 0x56c(0x01)
	enum class EInteractionAnimation _interactionType; // 0x56d(0x01)
	bool _isInsideCloset; // 0x56e(0x01)
	bool _isInteracting; // 0x56f(0x01)
	bool _isCrouched; // 0x570(0x01)
	bool _isHoldingAimItem; // 0x571(0x01)
	bool _isIdle; // 0x572(0x01)
	bool _isHoldingHandleItem; // 0x573(0x01)
	bool _isHoldingFlashbang; // 0x574(0x01)
	bool _isHoldingFirecracker; // 0x575(0x01)
	bool _isHoldingSmallItem; // 0x576(0x01)
	char pad_577[0x49]; // 0x577(0x49)
};

