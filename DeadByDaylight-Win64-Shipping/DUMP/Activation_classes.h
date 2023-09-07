// Class Activation.ActivatableMock
// Size: 0x108 (Inherited: 0xb8)
struct UActivatableMock : UActorComponent {
	char pad_B8[0x50]; // 0xb8(0x50)
};

// Class Activation.ActivatorComponent
// Size: 0xf8 (Inherited: 0xb8)
struct UActivatorComponent : UActorComponent {
	bool _searchForActivatableSubAnimInstances; // 0xb8(0x01)
	char pad_B9[0x3f]; // 0xb9(0x3f)

	void SetObjectState(struct UGameplayTagContainerComponent* objectState); // Function Activation.ActivatorComponent.SetObjectState // (Final|Native|Public|BlueprintCallable) // @ game+0x815d8d0
};

// Class Activation.Activatable
// Size: 0x30 (Inherited: 0x30)
struct UActivatable : UInterface {
};

