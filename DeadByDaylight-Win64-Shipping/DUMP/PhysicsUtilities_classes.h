// Class PhysicsUtilities.DynamicCapsuleResizerComponent
// Size: 0xf0 (Inherited: 0xb8)
struct UDynamicCapsuleResizerComponent : UActorComponent {
	struct UCapsuleComponent* _capsule; // 0xb8(0x08)
	char pad_C0[0x14]; // 0xc0(0x14)
	float _shrinkPercent; // 0xd4(0x04)
	float _shrinkDuration; // 0xd8(0x04)
	float _expandDuration; // 0xdc(0x04)
	float _stayShrunkenDuration; // 0xe0(0x04)
	float _expandOverlapTestMinDeltaTime; // 0xe4(0x04)
	bool _isShrinkingEnabled; // 0xe8(0x01)
	bool _isShrinkingAlwaysEnabled; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)

	void SetShrinkingEnabled(bool Enabled); // Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x81632a0
	void OnRep_IsShrinkingAlwaysEnabled(); // Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnRep_IsShrinkingAlwaysEnabled // (Final|Native|Private) // @ game+0x8163280
	void OnHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x81630a0
};

// Class PhysicsUtilities.PrimitiveCollection
// Size: 0x80 (Inherited: 0x30)
struct UPrimitiveCollection : UObject {
	struct TSet<struct TWeakObjectPtr<struct UPrimitiveComponent>> _primitives; // 0x30(0x50)

	void Remove(struct UPrimitiveComponent* Primitive); // Function PhysicsUtilities.PrimitiveCollection.Remove // (Final|Native|Public|BlueprintCallable) // @ game+0x8163630
	void Add(struct UPrimitiveComponent* Primitive); // Function PhysicsUtilities.PrimitiveCollection.Add // (Final|Native|Public|BlueprintCallable) // @ game+0x81635a0
};

// Class PhysicsUtilities.PrimitivesRegistererComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UPrimitivesRegistererComponent : UActorComponent {
	struct TArray<struct UPrimitiveComponent*> _primitives; // 0xb8(0x10)
	struct TWeakObjectPtr<struct UPrimitiveCollection> _primitiveCollection; // 0xc8(0x08)

	void SetPrimitives(struct TArray<struct UPrimitiveComponent*>& primitives); // Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8163830
};

