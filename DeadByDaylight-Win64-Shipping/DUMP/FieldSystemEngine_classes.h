// Class FieldSystemEngine.FieldSystemActor
// Size: 0x238 (Inherited: 0x230)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x230(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x40 (Inherited: 0x30)
struct UFieldSystem : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x550 (Inherited: 0x480)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x480(0x08)
	bool bIsWorldField; // 0x488(0x01)
	bool bIsChaosField; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x490(0x10)
	struct FFieldObjectCommands ConstructionCommands; // 0x4a0(0x30)
	struct FFieldObjectCommands BufferCommands; // 0x4d0(0x30)
	char pad_500[0x50]; // 0x500(0x50)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x80ddd10
	void RemovePersistentFields(); // Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields // (Final|Native|Public|BlueprintCallable) // @ game+0x80ddcf0
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x80ddb30
	void ApplyStrainField(bool Enabled, struct FVector position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x80dd960
	void ApplyStayDynamicField(bool Enabled, struct FVector position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x80dd830
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x80dd6a0
	void ApplyRadialForce(bool Enabled, struct FVector position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x80dd570
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x80dd410
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x80dd2e0
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField // (Final|Native|Public|BlueprintCallable) // @ game+0x80dd180
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x80dd020
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xb8 (Inherited: 0xb8)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xc0 (Inherited: 0xb8)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80de120
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xc0 (Inherited: 0xb8)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80de090
};

// Class FieldSystemEngine.FieldSystemMetaDataFilter
// Size: 0xc0 (Inherited: 0xb8)
struct UFieldSystemMetaDataFilter : UFieldSystemMetaData {
	enum class EFieldFilterType FilterType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)

	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType); // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80de090
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xb8 (Inherited: 0xb8)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xb8 (Inherited: 0xb8)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xb8 (Inherited: 0xb8)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xb8 (Inherited: 0xb8)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xc0 (Inherited: 0xb8)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80de120
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xd8 (Inherited: 0xb8)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb8(0x04)
	struct FVector position; // 0xbc(0x0c)
	int32_t InteriorValue; // 0xc8(0x04)
	int32_t ExteriorValue; // 0xcc(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80de9a0
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xc0 (Inherited: 0xb8)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80dec70
};

// Class FieldSystemEngine.WaveScalar
// Size: 0xd8 (Inherited: 0xb8)
struct UWaveScalar : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	struct FVector position; // 0xbc(0x0c)
	float Wavelength; // 0xc8(0x04)
	float Period; // 0xcc(0x04)
	enum class EWaveFunctionType Function; // 0xd0(0x01)
	enum class EFieldFalloffType Falloff; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)

	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector position, float Wavelength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.WaveScalar.SetWaveScalar // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80dedd0
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0xe0 (Inherited: 0xb8)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	float MinRange; // 0xbc(0x04)
	float MaxRange; // 0xc0(0x04)
	float Default; // 0xc4(0x04)
	float Radius; // 0xc8(0x04)
	struct FVector position; // 0xcc(0x0c)
	enum class EFieldFalloffType Falloff; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80de750
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0xe8 (Inherited: 0xb8)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	float MinRange; // 0xbc(0x04)
	float MaxRange; // 0xc0(0x04)
	float Default; // 0xc4(0x04)
	float distance; // 0xc8(0x04)
	struct FVector position; // 0xcc(0x0c)
	struct FVector Normal; // 0xd8(0x0c)
	enum class EFieldFalloffType Falloff; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float distance, struct FVector position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80de4b0
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x110 (Inherited: 0xb8)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	float MinRange; // 0xbc(0x04)
	float MaxRange; // 0xc0(0x04)
	float Default; // 0xc4(0x04)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FTransform Transform; // 0xd0(0x30)
	enum class EFieldFalloffType Falloff; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80ddd30
};

// Class FieldSystemEngine.NoiseField
// Size: 0xf0 (Inherited: 0xb8)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb8(0x04)
	float MaxRange; // 0xbc(0x04)
	struct FTransform Transform; // 0xc0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80de1c0
};

// Class FieldSystemEngine.UniformVector
// Size: 0xc8 (Inherited: 0xb8)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb8(0x04)
	struct FVector Direction; // 0xbc(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80deb80
};

// Class FieldSystemEngine.RadialVector
// Size: 0xc8 (Inherited: 0xb8)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb8(0x04)
	struct FVector position; // 0xbc(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x80deb80
};

// Class FieldSystemEngine.RandomVector
// Size: 0xc0 (Inherited: 0xb8)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80dec70
};

// Class FieldSystemEngine.OperatorField
// Size: 0xd8 (Inherited: 0xb8)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UFieldNodeBase* RightField; // 0xc0(0x08)
	struct UFieldNodeBase* LeftField; // 0xc8(0x08)
	enum class EFieldOperationType Operation; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80de350
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xc0 (Inherited: 0xb8)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xb8(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80ded30
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xc0 (Inherited: 0xb8)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xb8(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80ded30
};

// Class FieldSystemEngine.CullingField
// Size: 0xd0 (Inherited: 0xb8)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xb8(0x08)
	struct UFieldNodeBase* Field; // 0xc0(0x08)
	enum class EFieldCullingOperationType Operation; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80ddf80
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xb8 (Inherited: 0xb8)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x80ded00
};

