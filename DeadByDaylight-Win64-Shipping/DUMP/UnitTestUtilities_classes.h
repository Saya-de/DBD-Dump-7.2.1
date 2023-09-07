// Class UnitTestUtilities.TestInterface
// Size: 0x30 (Inherited: 0x30)
struct UTestInterface : UInterface {
};

// Class UnitTestUtilities.TestActor
// Size: 0x230 (Inherited: 0x230)
struct ATestActor : AActor {
};

// Class UnitTestUtilities.TestActorComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UTestActorComponent : UActorComponent {
};

// Class UnitTestUtilities.TestActorComponentImplementingTestInterface
// Size: 0xc0 (Inherited: 0xb8)
struct UTestActorComponentImplementingTestInterface : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class UnitTestUtilities.TestActorImplementingTestInterface
// Size: 0x238 (Inherited: 0x230)
struct ATestActorImplementingTestInterface : AActor {
	char pad_230[0x8]; // 0x230(0x08)
};

// Class UnitTestUtilities.TestMovableActor
// Size: 0x238 (Inherited: 0x230)
struct ATestMovableActor : AActor {
	struct UBoxComponent* BoxComponent; // 0x230(0x08)
};

