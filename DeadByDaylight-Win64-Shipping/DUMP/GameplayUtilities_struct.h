// Enum GameplayUtilities.ESightStatus
enum class ESightStatus : uint8 {
	OutOfSight = 0,
	Discerned = 1,
	Sighted = 2,
	ESightStatus_MAX = 3
};

// Enum GameplayUtilities.EComparisonOperation
enum class EComparisonOperation : uint8 {
	EqualTo = 0,
	NotEqualTo = 1,
	GreaterThan = 2,
	GreaterThanOrEqualTo = 3,
	LesserThan = 4,
	LesserThanOrEqualTo = 5,
	EComparisonOperation_MAX = 6
};

// ScriptStruct GameplayUtilities.AuthorityDiscernedCharacter
// Size: 0x10 (Inherited: 0x00)
struct FAuthorityDiscernedCharacter {
	struct ACharacter* _character; // 0x00(0x08)
	bool _isSighted; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct GameplayUtilities.DiscernibleCharacter
// Size: 0x18 (Inherited: 0x00)
struct FDiscernibleCharacter {
	struct ACharacter* _character; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct GameplayUtilities.HitValidationReport
// Size: 0x160 (Inherited: 0x00)
struct FHitValidationReport {
	struct FHitValidatorInstigatorParams InstigatorParams; // 0x00(0x60)
	struct FHitValidatorTargetParams TargetParams; // 0x60(0x18)
	float ValidationTimestamp; // 0x78(0x04)
	struct FFloatRange TargetRecorderTimeRange; // 0x7c(0x10)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct ACharacter* InstigatorOwningCharacter; // 0x90(0x08)
	float MaximumDistance; // 0x98(0x04)
	float CapsuleInflation; // 0x9c(0x04)
	bool IsValidHit; // 0xa0(0x01)
	bool IsValidDistance; // 0xa1(0x01)
	bool IsValidNotStunned; // 0xa2(0x01)
	char pad_A3[0xd]; // 0xa3(0x0d)
	struct FTransform InstigatorTransform; // 0xb0(0x30)
	struct FVector RewindedTargetLocation; // 0xe0(0x0c)
	struct FVector targetLocation; // 0xec(0x0c)
	float SquareDistance; // 0xf8(0x04)
	bool HasPerformCollisionCheck; // 0xfc(0x01)
	bool IsValidCollision; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	struct FTransform HitPrimitiveTransform; // 0x100(0x30)
	struct FTransform HittablePrimitiveTransform; // 0x130(0x30)
};

// ScriptStruct GameplayUtilities.HitValidatorTargetParams
// Size: 0x18 (Inherited: 0x00)
struct FHitValidatorTargetParams {
	struct ACharacter* Target; // 0x00(0x08)
	struct UCapsuleComponent* HittableCapsule; // 0x08(0x08)
	float TargetLocationTimestamp; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct GameplayUtilities.HitValidatorInstigatorParams
// Size: 0x60 (Inherited: 0x00)
struct FHitValidatorInstigatorParams {
	struct AActor* Instigator; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
	struct UPrimitiveComponent* HitPrimitive; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

