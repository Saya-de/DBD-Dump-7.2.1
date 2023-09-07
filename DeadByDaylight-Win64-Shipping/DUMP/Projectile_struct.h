// ScriptStruct Projectile.ComponentSweepInfo
// Size: 0x14 (Inherited: 0x00)
struct FComponentSweepInfo {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Projectile.ImpactInfo
// Size: 0x30 (Inherited: 0x00)
struct FImpactInfo {
	struct FVector position; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* Actor; // 0x10(0x08)
	struct UPrimitiveComponent* Component; // 0x18(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector ImpactNormal; // 0x24(0x0c)
};

// ScriptStruct Projectile.LaunchInfo
// Size: 0x1c (Inherited: 0x00)
struct FLaunchInfo {
	struct FVector_NetQuantize StartPosition; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal Direction; // 0x0c(0x0c)
	float Speed; // 0x18(0x04)
};

