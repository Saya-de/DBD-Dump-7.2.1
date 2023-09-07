// Enum TheDemogorgon.EDemogorgonPortalState
enum class EDemogorgonPortalState : uint8 {
	Hidden = 0,
	InUse = 1,
	Exposed = 2,
	EDemogorgonPortalState_MAX = 3
};

// ScriptStruct TheDemogorgon.PortalRestrictedLocation
// Size: 0x10 (Inherited: 0x00)
struct FPortalRestrictedLocation {
	struct FVector Location; // 0x00(0x0c)
	float DistanceSquared; // 0x0c(0x04)
};

