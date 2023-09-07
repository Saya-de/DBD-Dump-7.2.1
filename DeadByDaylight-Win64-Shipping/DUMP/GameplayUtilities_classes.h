// Class GameplayUtilities.CharacterPusherComponent
// Size: 0x170 (Inherited: 0xb8)
struct UCharacterPusherComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct TArray<struct ACharacter*> _charactersToPush; // 0xe8(0x10)
	struct TSet<struct ACharacter*> _ignoredCharacters; // 0xf8(0x50)
	struct UCapsuleComponent* _characterDetector; // 0x148(0x08)
	struct UCapsuleComponent* _characterCollision; // 0x150(0x08)
	struct UBasePushStrategyComponent* _pushStrategy; // 0x158(0x08)
	struct TArray<struct ACharacter*> _ignoredByPushedCharacters; // 0x160(0x10)

	void SetIgnoredCharacter(struct ACharacter* Character, bool ignore); // Function GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter // (Final|Native|Public|BlueprintCallable) // @ game+0x822b800
	void OnCharacterDetectorOverlapExit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit // (Final|Native|Protected) // @ game+0x822b490
	void Construct(struct UCapsuleComponent* characterDetector, struct UCapsuleComponent* characterCollision, struct UBasePushStrategyComponent* pushStrategy); // Function GameplayUtilities.CharacterPusherComponent.Construct // (Final|Native|Public|BlueprintCallable) // @ game+0x822adc0
};

// Class GameplayUtilities.BasePoolableActorComponent
// Size: 0xd0 (Inherited: 0xb8)
struct UBasePoolableActorComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnAcquiredChanged; // 0xc0(0x10)

	void SetAcquired(bool Active); // Function GameplayUtilities.BasePoolableActorComponent.SetAcquired // (Native|Public|BlueprintCallable) // @ game+0x822b770
	bool IsAcquired(); // Function GameplayUtilities.BasePoolableActorComponent.IsAcquired // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x59c6230
};

// Class GameplayUtilities.AuthoritativePoolableActorComponent
// Size: 0xd8 (Inherited: 0xd0)
struct UAuthoritativePoolableActorComponent : UBasePoolableActorComponent {
	bool _acquired; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	void OnRep_Acquired(); // Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired // (Final|Native|Private) // @ game+0x822b5f0
};

// Class GameplayUtilities.BaseInputAccelerationConstraintStrategy
// Size: 0xb8 (Inherited: 0xb8)
struct UBaseInputAccelerationConstraintStrategy : UActorComponent {
};

// Class GameplayUtilities.BaseCharacterVelocityAdditiveStrategy
// Size: 0xb8 (Inherited: 0xb8)
struct UBaseCharacterVelocityAdditiveStrategy : UActorComponent {
};

// Class GameplayUtilities.ActorPoolComponent
// Size: 0xf8 (Inherited: 0xb8)
struct UActorPoolComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct AActor* _actorClass; // 0xe8(0x08)
	int32_t _size; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)

	void OnActorsInPoolAcquiredChanged(bool acquired); // Function GameplayUtilities.ActorPoolComponent.OnActorsInPoolAcquiredChanged // (Final|Native|Protected) // @ game+0x822b400
	void OnActorDestroyed(struct AActor* DestroyedActor); // Function GameplayUtilities.ActorPoolComponent.OnActorDestroyed // (Final|Native|Private) // @ game+0x822b370
};

// Class GameplayUtilities.AuthoritativeActorPoolComponent
// Size: 0x118 (Inherited: 0xf8)
struct UAuthoritativeActorPoolComponent : UActorPoolComponent {
	struct TArray<struct AActor*> _replicatedPool; // 0xf8(0x10)
	struct TArray<struct AActor*> _local_oldPool; // 0x108(0x10)

	void OnRep_ReplicatedPool(); // Function GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_ReplicatedPool // (Final|Native|Private) // @ game+0x822b670
};

// Class GameplayUtilities.BaseCharacterRotationStrategy
// Size: 0xb8 (Inherited: 0xb8)
struct UBaseCharacterRotationStrategy : UActorComponent {
};

// Class GameplayUtilities.BaseReplicatedState
// Size: 0x50 (Inherited: 0x30)
struct UBaseReplicatedState : UObject {
	struct FGameplayTag _id; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UStateController* _stateController; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class GameplayUtilities.ActorPoolInitializer
// Size: 0xf8 (Inherited: 0xb8)
struct UActorPoolInitializer : UActorComponent {
	struct FDBDTunableRowHandle _poolSize; // 0xb8(0x28)
	char pad_E0[0x18]; // 0xe0(0x18)
};

// Class GameplayUtilities.BasePushStrategyComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UBasePushStrategyComponent : UActorComponent {
};

// Class GameplayUtilities.BoxOcclusionQueryComponent
// Size: 0x4c0 (Inherited: 0x4b0)
struct UBoxOcclusionQueryComponent : UBoxComponent {
	float TimeUntilOccluded; // 0x4a8(0x04)
	char pad_4B4[0xc]; // 0x4b4(0x0c)

	float GetVisiblePercentOfScreen(); // Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x822b1e0
	float GetNumberOfVisiblePixels(); // Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x822b120
	float GetEstimatedRenderedPixelCount(); // Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x822b030
};

// Class GameplayUtilities.CameraUtilities
// Size: 0x30 (Inherited: 0x30)
struct UCameraUtilities : UBlueprintFunctionLibrary {
};

// Class GameplayUtilities.CharacterPositionRecorderComponent
// Size: 0xd8 (Inherited: 0xb8)
struct UCharacterPositionRecorderComponent : UActorComponent {
	float _cacheTimespan; // 0xb8(0x04)
	char pad_BC[0x1c]; // 0xbc(0x1c)
};

// Class GameplayUtilities.CharacterSightableComponent
// Size: 0x1a0 (Inherited: 0xb8)
struct UCharacterSightableComponent : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct FMulticastInlineDelegate OnHighestSightStatusChangedBP; // 0xe8(0x10)
	struct TMap<struct TWeakObjectPtr<struct ACharacter>, struct FDelegateHandleWrapper> _sightDelegateHandles; // 0xf8(0x50)
	struct TMap<struct TWeakObjectPtr<struct ACharacter>, enum class ESightStatus> _sightersStatus; // 0x148(0x50)
	char pad_198[0x8]; // 0x198(0x08)

	void OnHighestSightStatusChangedBP__DelegateSignature(enum class ESightStatus Status); // DelegateFunction GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	enum class ESightStatus GetHighestSightStatus(); // Function GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x822b060
};

// Class GameplayUtilities.CharacterSightComponent
// Size: 0x190 (Inherited: 0xb8)
struct UCharacterSightComponent : UActorComponent {
	char pad_B8[0x38]; // 0xb8(0x38)
	float _minimumCharacterScreenPercentInZoneTrigger; // 0xf0(0x04)
	float _minimumCharacterScreenPercentInZoneUntrigger; // 0xf4(0x04)
	float _minimumCharacterScreenPercentNotInZoneTrigger; // 0xf8(0x04)
	float _minimumCharacterScreenPercentNotInZoneUntrigger; // 0xfc(0x04)
	float _minimumCharacterVisiblePixelsPercentTrigger; // 0x100(0x04)
	float _minimumCharacterVisiblePixelsPercentUntrigger; // 0x104(0x04)
	float _maximumSightDistance; // 0x108(0x04)
	float _screenVisibilityZoneRadiusPercentX; // 0x10c(0x04)
	float _screenVisibilityZoneRadiusPercentY; // 0x110(0x04)
	float _sightingDelay; // 0x114(0x04)
	float _discerningDelay; // 0x118(0x04)
	float _undiscerningDelay; // 0x11c(0x04)
	struct ACharacter* _sightableCharacterClass; // 0x120(0x08)
	struct TArray<struct FAuthorityDiscernedCharacter> _discernedCharacters; // 0x128(0x10)
	struct TArray<struct FDiscernibleCharacter> _localDiscernibleCharacters; // 0x138(0x10)
	char pad_148[0x10]; // 0x148(0x10)
	bool _debugMode; // 0x158(0x01)
	bool _canSee; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct FActivationDefinition _activationDefinition; // 0x160(0x28)
	char pad_188[0x8]; // 0x188(0x08)

	void SetScreenVisibilityZoneRadiusPercent(float ValueX, float ValueY); // Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent // (Final|Native|Public|BlueprintCallable) // @ game+0x822bbc0
	void SetMinimumCharacterVisiblePixelsPercent(float Trigger, float untrigger); // Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent // (Final|Native|Public|BlueprintCallable) // @ game+0x822baf0
	void SetMinimumCharacterScreenPercentNotInZone(float Trigger, float untrigger); // Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentNotInZone // (Final|Native|Public|BlueprintCallable) // @ game+0x822ba20
	void SetMinimumCharacterScreenPercentInZone(float Trigger, float untrigger); // Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentInZone // (Final|Native|Public|BlueprintCallable) // @ game+0x822b950
	void SetMaximumSightDistance(float value); // Function GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x822b8d0
	void Server_UpdateDiscernedCharacters(struct TArray<struct ACharacter*> Characters); // Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x822b6b0
	void OnRep_DiscernibleCharacters(); // Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters // (Final|Native|Private) // @ game+0x822b650
	void OnRep_CanSee(); // Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee // (Final|Native|Private) // @ game+0x822b630
};

// Class GameplayUtilities.ChargeableUtilities
// Size: 0x30 (Inherited: 0x30)
struct UChargeableUtilities : UBlueprintFunctionLibrary {

	float ConvertSecondsToAddToRateMultiplier(float secondsToAdd, float baseMaxSeconds, float baseRate); // Function GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x822aed0
};

// Class GameplayUtilities.CollectedObjectCollection
// Size: 0x158 (Inherited: 0xb8)
struct UCollectedObjectCollection : UActorComponent {
	char pad_B8[0xa0]; // 0xb8(0xa0)
};

// Class GameplayUtilities.ContainerUtilities
// Size: 0x30 (Inherited: 0x30)
struct UContainerUtilities : UBlueprintFunctionLibrary {
};

// Class GameplayUtilities.FallOutOfWorldPositionFinder
// Size: 0x30 (Inherited: 0x30)
struct UFallOutOfWorldPositionFinder : UInterface {
};

// Class GameplayUtilities.PoolableActor
// Size: 0x30 (Inherited: 0x30)
struct UPoolableActor : UInterface {
};

// Class GameplayUtilities.PotentialAttack
// Size: 0x30 (Inherited: 0x30)
struct UPotentialAttack : UInterface {
};

// Class GameplayUtilities.IsLookingTowardsQueryComponent
// Size: 0xc8 (Inherited: 0xb8)
struct UIsLookingTowardsQueryComponent : UActorComponent {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class GameplayUtilities.LocalActorPoolComponent
// Size: 0x108 (Inherited: 0xf8)
struct ULocalActorPoolComponent : UActorPoolComponent {
	struct TArray<struct AActor*> _pool; // 0xf8(0x10)
};

// Class GameplayUtilities.MockPoolableActor
// Size: 0x238 (Inherited: 0x230)
struct AMockPoolableActor : AActor {
	struct UPoolableActorComponent* _poolable; // 0x230(0x08)
};

// Class GameplayUtilities.MovableCamera
// Size: 0x2c0 (Inherited: 0x298)
struct AMovableCamera : APawn {
	float MovementSpeed; // 0x298(0x04)
	bool RequiresShiftModifierForInput; // 0x29c(0x01)
	char pad_29D[0x1b]; // 0x29d(0x1b)
	struct APlayerController* _playerController; // 0x2b8(0x08)
};

// Class GameplayUtilities.MoveActorToComponent
// Size: 0xf0 (Inherited: 0xb8)
struct UMoveActorToComponent : UActorComponent {
	char pad_B8[0x38]; // 0xb8(0x38)
};

// Class GameplayUtilities.MovementUtilities
// Size: 0x30 (Inherited: 0x30)
struct UMovementUtilities : UBlueprintFunctionLibrary {

	void Local_MoveActorTo(struct AActor* Actor, struct FVector& Location, struct FRotator& Rotation, float Duration); // Function GameplayUtilities.MovementUtilities.Local_MoveActorTo // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x822b210
};

// Class GameplayUtilities.PawnUtilities
// Size: 0x30 (Inherited: 0x30)
struct UPawnUtilities : UBlueprintFunctionLibrary {

	struct APawn* GetOwningPawn(struct AActor* Origin); // Function GameplayUtilities.PawnUtilities.GetOwningPawn // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x822b150
	struct APawn* GetLocallyObservedPawn(struct UObject* WorldContext); // Function GameplayUtilities.PawnUtilities.GetLocallyObservedPawn // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x822b090
};

// Class GameplayUtilities.PlayerStateExt
// Size: 0x30 (Inherited: 0x30)
struct UPlayerStateExt : UBlueprintFunctionLibrary {
};

// Class GameplayUtilities.PoolableActorComponent
// Size: 0xd8 (Inherited: 0xd0)
struct UPoolableActorComponent : UBasePoolableActorComponent {
	char pad_D0[0x8]; // 0xd0(0x08)
};

// Class GameplayUtilities.SceneComponentExt
// Size: 0x30 (Inherited: 0x30)
struct USceneComponentExt : UBlueprintFunctionLibrary {
};

// Class GameplayUtilities.SidePushStrategyComponent
// Size: 0xc8 (Inherited: 0xb8)
struct USidePushStrategyComponent : UBasePushStrategyComponent {
	float _maxImpulseStrength; // 0xb8(0x04)
	float _minImpulseStrength; // 0xbc(0x04)
	float _detectorCapsuleInflation; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class GameplayUtilities.StateController
// Size: 0x150 (Inherited: 0xb8)
struct UStateController : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	struct FMulticastInlineDelegate OnStateChangedBlueprintEvent; // 0xe8(0x10)
	struct TArray<struct UBaseReplicatedState*> _stateClasses; // 0xf8(0x10)
	struct UBaseReplicatedState* _defaultStateClass; // 0x108(0x08)
	struct TArray<struct UBaseReplicatedState*> _states; // 0x110(0x10)
	char pad_120[0x10]; // 0x120(0x10)
	struct UBaseReplicatedState* _local_currentState; // 0x130(0x08)
	struct UBaseReplicatedState* _authority_RepCurrentState; // 0x138(0x08)
	char pad_140[0x10]; // 0x140(0x10)

	void OnStateChangedBlueprintEvent__DelegateSignature(struct FGameplayTag oldState, struct FGameplayTag NewState); // DelegateFunction GameplayUtilities.StateController.OnStateChangedBlueprintEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x5e02c90
	void OnRep_States(); // Function GameplayUtilities.StateController.OnRep_States // (Final|Native|Private) // @ game+0x822b690
	void OnRep_AuthorityRepCurrentState(); // Function GameplayUtilities.StateController.OnRep_AuthorityRepCurrentState // (Final|Native|Private) // @ game+0x822b610
	struct FGameplayTag GetCurrentStateID(); // Function GameplayUtilities.StateController.GetCurrentStateID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x822aff0
};

// Class GameplayUtilities.VisualLoggerExt
// Size: 0x30 (Inherited: 0x30)
struct UVisualLoggerExt : UObject {
};

