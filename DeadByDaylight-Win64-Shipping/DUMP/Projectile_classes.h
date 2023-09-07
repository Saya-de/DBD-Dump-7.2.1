// Class Projectile.BaseProjectile
// Size: 0x2b0 (Inherited: 0x230)
struct ABaseProjectile : AActor {
	float OnImpactAINoiseEventRange; // 0x230(0x04)
	char pad_234[0x44]; // 0x234(0x44)
	bool _multicastLaunch; // 0x278(0x01)
	bool _allowMultipleHits; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
	struct FGameplayTagContainer _semanticGameplayTags; // 0x280(0x20)
	bool _notifyClientOfServerHitValidationResult; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UBaseProjectileReplicationComponent* _replicationComponent; // 0x2a8(0x08)

	bool SphereTraceSingle(struct FVector Start, struct FVector End, struct USphereComponent* Sphere, struct FHitResult& outHitResult); // Function Projectile.BaseProjectile.SphereTraceSingle // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x82a5b00
	void OnSetActive(bool Active); // Function Projectile.BaseProjectile.OnSetActive // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnLaunch(struct FLaunchInfo LaunchInfo, bool hasImpactOnLaunch); // Function Projectile.BaseProjectile.OnLaunch // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnDetectPlayer(struct FImpactInfo ImpactInfo); // Function Projectile.BaseProjectile.OnDetectPlayer // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnDetectCollision(struct FImpactInfo ImpactInfo); // Function Projectile.BaseProjectile.OnDetectCollision // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool Local_TryDetectCollision(struct FImpactInfo ImpactInfo, bool force); // Function Projectile.BaseProjectile.Local_TryDetectCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x82a59c0
	bool Local_SweepImpactCollision(struct FVector& Start, struct FVector& End, struct FRotator& colliderRotation, struct FHitResult& OutHit); // Function Projectile.BaseProjectile.Local_SweepImpactCollision // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x82a57d0
	bool Local_OnPlayerDetected(struct FImpactInfo ImpactInfo, struct FVector& projectileLocation); // Function Projectile.BaseProjectile.Local_OnPlayerDetected // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x82a5690
	bool IsValidPlayerDetection(struct FImpactInfo ImpactInfo); // Function Projectile.BaseProjectile.IsValidPlayerDetection // (Native|Event|Protected|BlueprintEvent) // @ game+0x82a55b0
	bool IsValidImpactDetection(struct FImpactInfo ImpactInfo); // Function Projectile.BaseProjectile.IsValidImpactDetection // (Native|Event|Protected|BlueprintEvent) // @ game+0x82a54d0
	bool IsOwningPawnLocallyControlled(); // Function Projectile.BaseProjectile.IsOwningPawnLocallyControlled // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x82a54a0
	struct UBaseProjectileLauncher* GetLauncher(); // Function Projectile.BaseProjectile.GetLauncher // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x82a5470
	struct UPrimitiveComponent* GetImpactPrimitiveComponent(); // Function Projectile.BaseProjectile.GetImpactPrimitiveComponent // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0x82a5440
	float GetAddLauncherVeloctyFactor(); // Function Projectile.BaseProjectile.GetAddLauncherVeloctyFactor // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x82a5400
	bool Authority_TryDetectCollision(struct FImpactInfo ImpactInfo, bool force); // Function Projectile.BaseProjectile.Authority_TryDetectCollision // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x82a52c0
};

// Class Projectile.PhysicsBasedProjectile
// Size: 0x2b8 (Inherited: 0x2b0)
struct APhysicsBasedProjectile : ABaseProjectile {
	struct UPhysicsBasedProjectileMovementComponent* Movement; // 0x2b0(0x08)
};

// Class Projectile.BaseProjectileLauncher
// Size: 0x180 (Inherited: 0xb8)
struct UBaseProjectileLauncher : UActorComponent {
	char pad_B8[0x30]; // 0xb8(0x30)
	bool _requireLaunchImpactDetection; // 0xe8(0x01)
	bool _hasInfiniteAmmunition; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct ABaseProjectile* ProjectileClass; // 0xf0(0x08)
	int32_t _ammo; // 0xf8(0x04)
	int32_t _maxAmmo; // 0xfc(0x04)
	bool _canLaunchWhileOutOfAmmo; // 0x100(0x01)
	char pad_101[0x2f]; // 0x101(0x2f)
	struct ABaseProjectile* _debugProjectile; // 0x130(0x08)
	char pad_138[0x40]; // 0x138(0x40)
	struct UBaseProjectileReplicationComponent* _projectileReplicationComponent; // 0x178(0x08)

	void SetProjectileVar(struct FName VarName, float value); // Function Projectile.BaseProjectileLauncher.SetProjectileVar // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void SetProjectileProvider(struct TScriptInterface<IProjectileProvider> ProjectileProvider); // Function Projectile.BaseProjectileLauncher.SetProjectileProvider // (Final|Native|Public|BlueprintCallable) // @ game+0x82a7280
	void Server_LaunchWithImpact(struct FLaunchInfo LaunchInfo, struct FImpactInfo ImpactInfo, struct ABaseProjectile* Projectile); // Function Projectile.BaseProjectileLauncher.Server_LaunchWithImpact // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x82a70f0
	void Server_Launch(struct FLaunchInfo LaunchInfo, struct ABaseProjectile* Projectile); // Function Projectile.BaseProjectileLauncher.Server_Launch // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x82a6fc0
	void OnRep_MaxAmmo(int32_t oldMaxAmmo); // Function Projectile.BaseProjectileLauncher.OnRep_MaxAmmo // (Native|Protected) // @ game+0x82a6f30
	void OnRep_Ammo(int32_t oldAmmo); // Function Projectile.BaseProjectileLauncher.OnRep_Ammo // (Native|Protected) // @ game+0x82a6ea0
	void OnLaunch(struct FLaunchInfo LaunchInfo, struct ABaseProjectile* Projectile); // Function Projectile.BaseProjectileLauncher.OnLaunch // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Local_Launch(); // Function Projectile.BaseProjectileLauncher.Local_Launch // (Final|Native|Public|BlueprintCallable) // @ game+0x82a6e80
	bool IsLocallyControlled(); // Function Projectile.BaseProjectileLauncher.IsLocallyControlled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x82a6e50
	bool IsAmmoFull(); // Function Projectile.BaseProjectileLauncher.IsAmmoFull // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x82a6e20
	bool HasProjectile(); // Function Projectile.BaseProjectileLauncher.HasProjectile // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x82a6df0
	bool HasAuthority(); // Function Projectile.BaseProjectileLauncher.HasAuthority // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x82a6dc0
	struct ABaseProjectile* GetProjectileToLaunch(); // Function Projectile.BaseProjectileLauncher.GetProjectileToLaunch // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x82a6d90
	struct APawn* GetOwningPawn(); // Function Projectile.BaseProjectileLauncher.GetOwningPawn // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x82a6d60
	float GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio); // Function Projectile.BaseProjectileLauncher.GetLaunchSpeedAtThrowPowerRatio // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x82a6cc0
	float GetLaunchSpeed(); // Function Projectile.BaseProjectileLauncher.GetLaunchSpeed // (Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x82a6c80
	struct FVector GetLaunchPosition(); // Function Projectile.BaseProjectileLauncher.GetLaunchPosition // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x82a6c40
	struct FVector GetLaunchDirectionAtViewAndThrowPowerRatio(struct FRotator viewRotation, float throwPowerRatio); // Function Projectile.BaseProjectileLauncher.GetLaunchDirectionAtViewAndThrowPowerRatio // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x82a6b40
	struct FVector GetLaunchDirection(); // Function Projectile.BaseProjectileLauncher.GetLaunchDirection // (Native|Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x82a6b00
	int32_t GetAmmo(); // Function Projectile.BaseProjectileLauncher.GetAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x82a6ad0
	void Cosmetic_OnOutOfAmmo(); // Function Projectile.BaseProjectileLauncher.Cosmetic_OnOutOfAmmo // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Authority_SetMaxAmmo(int32_t newMaxAmmo, bool isMaxAmmoImmutable); // Function Projectile.BaseProjectileLauncher.Authority_SetMaxAmmo // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x82a6a00
	void Authority_ReturnAmmoUnits(int32_t amountOfAmmoUnitsReturned); // Function Projectile.BaseProjectileLauncher.Authority_ReturnAmmoUnits // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x82a6970
	void Authority_Reload(); // Function Projectile.BaseProjectileLauncher.Authority_Reload // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x82a6950
	void Authority_Launch(); // Function Projectile.BaseProjectileLauncher.Authority_Launch // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x82a6930
	void Authority_AddMaxAmmo(int32_t ammoToAdd); // Function Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x82a68a0
};

// Class Projectile.DBDProjectileMovementComponent
// Size: 0x260 (Inherited: 0x1e0)
struct UDBDProjectileMovementComponent : UProjectileMovementComponent {
	char pad_1E0[0x18]; // 0x1e0(0x18)
	struct FMulticastInlineDelegate OnComponentToSweepCollisionBP; // 0x1f8(0x10)
	char pad_208[0x18]; // 0x208(0x18)
	struct TArray<struct FComponentSweepInfo> _componentsToSweep; // 0x220(0x10)
	struct FVector _previousPosition; // 0x230(0x0c)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct USceneComponent* _cachedUpdatedComponent; // 0x240(0x08)
	struct FVector _initialLocation; // 0x248(0x0c)
	float _distanceTravelled; // 0x254(0x04)
	bool _hasMaximumDistance; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float _maximumTravelDistance; // 0x25c(0x04)

	void OnComponentToSweepCollisionBP__DelegateSignature(struct UPrimitiveComponent* PrimitiveComponent, struct FHitResult& HitResult); // DelegateFunction Projectile.DBDProjectileMovementComponent.OnComponentToSweepCollisionBP__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x5e02c90
	struct FVector GetPreviousLocation(); // Function Projectile.DBDProjectileMovementComponent.GetPreviousLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x82a87b0
	void AddComponentToSweep(struct UPrimitiveComponent* Component); // Function Projectile.DBDProjectileMovementComponent.AddComponentToSweep // (Final|Native|Public|BlueprintCallable) // @ game+0x82a8720
};

// Class Projectile.PhysicsBasedProjectileMovementComponent
// Size: 0x260 (Inherited: 0x260)
struct UPhysicsBasedProjectileMovementComponent : UDBDProjectileMovementComponent {
};

// Class Projectile.SingleProjectileProviderComponent
// Size: 0xe8 (Inherited: 0xb8)
struct USingleProjectileProviderComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct ABaseProjectile* _projectileClass; // 0xc0(0x08)
	struct ABaseProjectile* _projectile; // 0xc8(0x08)
	char pad_D0[0x18]; // 0xd0(0x18)

	void OnRep_Projectile(); // Function Projectile.SingleProjectileProviderComponent.OnRep_Projectile // (Final|Native|Private) // @ game+0x82a9060
};

// Class Projectile.BaseProjectileReplicationComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UBaseProjectileReplicationComponent : UActorComponent {

	void Server_TryDetectPlayer(struct ABaseProjectile* Projectile, struct FImpactInfo ImpactInfo, struct FVector_NetQuantize100 projectileLocation, struct FVector_NetQuantize10 projectileRotation, float TargetLocationTimestamp); // Function Projectile.BaseProjectileReplicationComponent.Server_TryDetectPlayer // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x82a80d0
	void Multicast_SendAuthorityDetectPlayer(struct ABaseProjectile* Projectile, struct FImpactInfo ImpactInfo); // Function Projectile.BaseProjectileReplicationComponent.Multicast_SendAuthorityDetectPlayer // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x82a7fa0
	void Multicast_OnLaunchWithImpact(struct ABaseProjectile* Projectile, struct FLaunchInfo LaunchInfo, struct FImpactInfo ImpactInfo); // Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunchWithImpact // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x82a7e00
	void Multicast_OnLaunch(struct ABaseProjectile* Projectile, struct FLaunchInfo LaunchInfo); // Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunch // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x82a7ce0
	void Multicast_DetectPlayer(struct ABaseProjectile* Projectile, struct FImpactInfo ImpactInfo); // Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectPlayer // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x82a7bb0
	void Multicast_DetectImpact(struct ABaseProjectile* Projectile, struct FImpactInfo ImpactInfo); // Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectImpact // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x82a7a80
	void Client_ReceiveDetectPlayerValidation(struct ABaseProjectile* Projectile, bool success); // Function Projectile.BaseProjectileReplicationComponent.Client_ReceiveDetectPlayerValidation // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x5530070
	void Client_LaunchRefusedByServer(struct ABaseProjectile* Projectile); // Function Projectile.BaseProjectileReplicationComponent.Client_LaunchRefusedByServer // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x82a79f0
};

// Class Projectile.AuthoritativePoolProjectileProviderAdapter
// Size: 0x40 (Inherited: 0x30)
struct UAuthoritativePoolProjectileProviderAdapter : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UAuthoritativeActorPoolComponent* _pool; // 0x38(0x08)

	void Init(struct UAuthoritativeActorPoolComponent* pool); // Function Projectile.AuthoritativePoolProjectileProviderAdapter.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x82a4b00
};

// Class Projectile.ProjectileProvider
// Size: 0x30 (Inherited: 0x30)
struct UProjectileProvider : UInterface {
};

