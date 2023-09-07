// Class DBDAnimationBudgetAllocator.DBDSkeletalMeshComponentBudgeted
// Size: 0x1030 (Inherited: 0xfc0)
struct UDBDSkeletalMeshComponentBudgeted : USkeletalMeshComponentBudgeted {
	char pad_FC0[0x49]; // 0xfc0(0x49)
	bool _autoRegisterToAnimBudgeter; // 0x1009(0x01)
	bool _autoComputeSignificance; // 0x100a(0x01)
	char pad_100B[0x5]; // 0x100b(0x05)
	struct USignificanceStrategy* _significanceStrategy; // 0x1010(0x08)
	struct UAnimBudgeterSignificanceStrategy* _animBudgeterSignificanceStrategy; // 0x1018(0x08)
	char pad_1020[0x10]; // 0x1020(0x10)

	void SetAnimationDependency(struct USkeletalMeshComponent* meshDependency); // Function DBDAnimationBudgetAllocator.DBDSkeletalMeshComponentBudgeted.SetAnimationDependency // (Native|Public|BlueprintCallable) // @ game+0x4bb6ca0
};

// Class DBDAnimationBudgetAllocator.AnimBudgeterSignificanceStrategy
// Size: 0x30 (Inherited: 0x30)
struct UAnimBudgeterSignificanceStrategy : UObject {
};

// Class DBDAnimationBudgetAllocator.SimpleAnimBudgeterSignificanceStrategy
// Size: 0x38 (Inherited: 0x30)
struct USimpleAnimBudgeterSignificanceStrategy : UAnimBudgeterSignificanceStrategy {
	bool _tickEvenIfNotRendered; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class DBDAnimationBudgetAllocator.DBDAnimationBudgetAllocator
// Size: 0x158 (Inherited: 0x38)
struct UDBDAnimationBudgetAllocator : UWorldSubsystem {
	char pad_38[0x120]; // 0x38(0x120)
};

// Class DBDAnimationBudgetAllocator.SkeletalMeshActorBudgeted
// Size: 0x2b8 (Inherited: 0x2b8)
struct ASkeletalMeshActorBudgeted : ASkeletalMeshActor {
};

