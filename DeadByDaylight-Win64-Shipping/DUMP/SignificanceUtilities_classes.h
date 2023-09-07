// Class SignificanceUtilities.SignificanceStrategy
// Size: 0x30 (Inherited: 0x30)
struct USignificanceStrategy : UObject {
};

// Class SignificanceUtilities.DistanceBasedTickDisabler
// Size: 0x180 (Inherited: 0xb8)
struct UDistanceBasedTickDisabler : UActorComponent {
	bool _autoRegisterOwner; // 0xb8(0x01)
	bool _autoRegisterTimelines; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct FBHVRPerDetailModeFloat _tickDisableDistance; // 0xc0(0xa0)
	bool _insignificantWhenBehindTheCamera; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct TArray<struct UActorComponent*> _components; // 0x168(0x10)
	char pad_178[0x8]; // 0x178(0x08)

	void UnregisterComponent(struct UActorComponent* Component); // Function SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x82503d0
	void RegisterComponent(struct UActorComponent* Component); // Function SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x8250340
};

// Class SignificanceUtilities.SignificanceManagerComponent
// Size: 0xf0 (Inherited: 0xb8)
struct USignificanceManagerComponent : UActorComponent {
	char pad_B8[0x20]; // 0xb8(0x20)
	struct USignificanceStrategy* _significanceStrategy; // 0xd8(0x08)
	struct TArray<struct AActor*> _dependentActorsToCheckSignficance; // 0xe0(0x10)
};

// Class SignificanceUtilities.LinearSignificanceStrategy
// Size: 0xd8 (Inherited: 0x30)
struct ULinearSignificanceStrategy : USignificanceStrategy {
	struct FBHVRPerDetailModeFloat _maxDistance; // 0x30(0xa0)
	bool _updateEvenIfNotRendered; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

