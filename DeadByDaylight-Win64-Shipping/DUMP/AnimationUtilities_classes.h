// Class AnimationUtilities.SleepingAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct USleepingAnimInstance : UAnimInstance {
	char pad_2C0[0x10]; // 0x2c0(0x10)

	void Wakeup(); // Function AnimationUtilities.SleepingAnimInstance.Wakeup // (Final|Native|Public|BlueprintCallable) // @ game+0x824e2a0
	void SetNeverIdle(bool neverIdle); // Function AnimationUtilities.SleepingAnimInstance.SetNeverIdle // (Final|Native|Public|BlueprintCallable) // @ game+0x824e210
	void OnMontageStart(struct UAnimMontage* Montage); // Function AnimationUtilities.SleepingAnimInstance.OnMontageStart // (Final|Native|Public) // @ game+0x824e180
};

// Class AnimationUtilities.AnimCollection
// Size: 0x140 (Inherited: 0x38)
struct UAnimCollection : UDataAsset {
	struct TMap<struct FGameplayTag, struct UAnimSequence*> _taggedAnimSequences; // 0x38(0x50)
	struct TMap<struct FGameplayTag, struct UBlendSpaceBase*> _taggedAnimBlendspaces; // 0x88(0x50)
	struct TMap<struct FGameplayTag, struct FAnimSequenceSelector> _taggedAnimSelectors; // 0xd8(0x50)
	struct UAnimCollection* _parent; // 0x128(0x08)
	struct TArray<struct UAnimCollection*> _children; // 0x130(0x10)
};

// Class AnimationUtilities.AnimEffectBlackBoard
// Size: 0x80 (Inherited: 0x30)
struct UAnimEffectBlackBoard : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class AnimationUtilities.AnimEffectHandler
// Size: 0x30 (Inherited: 0x30)
struct UAnimEffectHandler : UObject {

	bool HandleAnimNotify(struct AActor* Player, struct FName& NotifyName); // Function AnimationUtilities.AnimEffectHandler.HandleAnimNotify // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x824bda0
};

// Class AnimationUtilities.AnimInstanceExt
// Size: 0x30 (Inherited: 0x30)
struct UAnimInstanceExt : UBlueprintFunctionLibrary {

	struct UAnimInstance* GetSubAnimInstance(struct UAnimInstance* Root, struct UObject* Type); // Function AnimationUtilities.AnimInstanceExt.GetSubAnimInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x824c2f0
	struct USkeletalMeshComponent* GetRootSkeletalMeshComponent(struct UAnimInstance* AnimInstance); // Function AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x824c260
	struct USkeletalMeshComponent* GetOwningCharacterSkeletalMeshComponent(struct UAnimInstance* AnimInstance); // Function AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x824c1d0
	struct ACharacter* GetOwningCharacter(struct UAnimInstance* AnimInstance); // Function AnimationUtilities.AnimInstanceExt.GetOwningCharacter // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x824c140
	struct AActor* GetOwningActor(struct UAnimInstance* AnimInstance); // Function AnimationUtilities.AnimInstanceExt.GetOwningActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x824c0b0
};

// Class AnimationUtilities.AnimLayerUpdateInterface
// Size: 0x30 (Inherited: 0x30)
struct UAnimLayerUpdateInterface : UInterface {
};

// Class AnimationUtilities.DetectionFanComponent
// Size: 0x280 (Inherited: 0x220)
struct UDetectionFanComponent : USceneComponent {
	struct FFloatRange _angleRange; // 0x218(0x10)
	struct FVector _originWorldOffset; // 0x228(0x0c)
	int32_t _numberOfSpots; // 0x234(0x04)
	float _defaultRingRadius; // 0x238(0x04)
	enum class ECollisionChannel _collisionChannel; // 0x23c(0x01)
	struct USkeletalMeshComponent* _meshComponent; // 0x240(0x08)
	char pad_24D[0x33]; // 0x24d(0x33)
};

// Class AnimationUtilities.ArmDetectionFanComponent
// Size: 0x310 (Inherited: 0x280)
struct UArmDetectionFanComponent : UDetectionFanComponent {
	struct FName _shoulderBone; // 0x278(0x0c)
	struct FName _elbowBone; // 0x284(0x0c)
	struct FName _handBone; // 0x290(0x0c)
	struct FName _indexBone; // 0x29c(0x0c)
	struct FName _hipBone; // 0x2a8(0x0c)
	char pad_2BC[0x54]; // 0x2bc(0x54)
};

// Class AnimationUtilities.BaseGroundDetectorComponent
// Size: 0x1d0 (Inherited: 0xb8)
struct UBaseGroundDetectorComponent : UActorComponent {
	char pad_B8[0xb0]; // 0xb8(0xb0)
	struct FName _startTransformName; // 0x168(0x0c)
	enum class ECollisionChannel _walkableCollisionChannel; // 0x174(0x01)
	bool _traceComplex; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
	float _extraTraceDistance; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct USkinnedMeshComponent* _skinnedMeshComponent; // 0x180(0x08)
	char pad_188[0x8]; // 0x188(0x08)
	struct FName _startSlopeTransformName; // 0x190(0x0c)
	char pad_19C[0x34]; // 0x19c(0x34)

	void InitSkinnedMeshComponent(struct USkinnedMeshComponent* Mesh); // Function AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x824cb60
	struct FVector GetGroundPosition(struct FVector targetPos, struct FVector extraOffset); // Function AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x824ca60
};

// Class AnimationUtilities.BoneSocketLocalVelocityEvaluator
// Size: 0xe0 (Inherited: 0xb8)
struct UBoneSocketLocalVelocityEvaluator : UActorComponent {
	struct USkeletalMeshComponent* _meshComponent; // 0xb8(0x08)
	struct TArray<struct FName> _trackedBoneSocketNames; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)

	struct FVector GetLocalVelocity(struct FName BoneSocketName); // Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x824cd60
};

// Class AnimationUtilities.FootGroundDetectorComponent
// Size: 0x200 (Inherited: 0x1d0)
struct UFootGroundDetectorComponent : UBaseGroundDetectorComponent {
	struct FName _hipTransformName; // 0x1d0(0x0c)
	struct FVector _slopeStartOffset; // 0x1dc(0x0c)
	float _footLength; // 0x1e8(0x04)
	float _traceRadius; // 0x1ec(0x04)
	float _maxWalkableSlopeAngle; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct UCharacterMovementComponent* _movementComp; // 0x1f8(0x08)
};

// Class AnimationUtilities.FromBoneGroundDetectorComponent
// Size: 0x1e0 (Inherited: 0x1d0)
struct UFromBoneGroundDetectorComponent : UBaseGroundDetectorComponent {
	struct FVector _startOffset; // 0x1d0(0x0c)
	char pad_1DC[0x4]; // 0x1dc(0x04)
};

// Class AnimationUtilities.AnimationDependency
// Size: 0x30 (Inherited: 0x30)
struct UAnimationDependency : UInterface {
};

// Class AnimationUtilities.AnimInstanceLeader
// Size: 0x30 (Inherited: 0x30)
struct UAnimInstanceLeader : UInterface {
};

// Class AnimationUtilities.SleepableSkeletalMesh
// Size: 0x30 (Inherited: 0x30)
struct USleepableSkeletalMesh : UInterface {
};

// Class AnimationUtilities.MoveComponentToComponent
// Size: 0x100 (Inherited: 0xb8)
struct UMoveComponentToComponent : UActorComponent {
	char pad_B8[0x48]; // 0xb8(0x48)

	void Stop(); // Function AnimationUtilities.MoveComponentToComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x824db90
	void Start(struct USceneComponent* componentToMove, struct USceneComponent* Target, float Duration); // Function AnimationUtilities.MoveComponentToComponent.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x824da70
};

// Class AnimationUtilities.ResetControlPitchAnimNotify
// Size: 0x40 (Inherited: 0x40)
struct UResetControlPitchAnimNotify : UAnimNotify {
};

// Class AnimationUtilities.SlaveAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct USlaveAnimInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> _masterMesh; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)

	void SetMasterMesh(struct USkeletalMeshComponent* masterMesh); // Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x824dee0
	struct USkeletalMeshComponent* GetMasterMesh(); // Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x824deb0
};

// Class AnimationUtilities.SleepingSkinnedMeshRegisterer
// Size: 0xb8 (Inherited: 0xb8)
struct USleepingSkinnedMeshRegisterer : UActorComponent {
};

