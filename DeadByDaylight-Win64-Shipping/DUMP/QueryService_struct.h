// ScriptStruct QueryService.ActorPairQuery
// Size: 0x68 (Inherited: 0x00)
struct FActorPairQuery {
	char pad_0[0x10]; // 0x00(0x10)
	struct TMap<uint32_t, struct FDistanceTrackerCase> _distanceTrackerCases; // 0x10(0x50)
	uint32_t _caseIndex; // 0x60(0x04)
	bool _usePlanarDistance; // 0x64(0x01)
	bool _isHeightRangeLimited; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct QueryService.DistanceTrackerCase
// Size: 0x28 (Inherited: 0x00)
struct FDistanceTrackerCase {
	char pad_0[0x18]; // 0x00(0x18)
	float _distanceToTrackSquared; // 0x18(0x04)
	struct FActorPairQueryHeightRange _heightRange; // 0x1c(0x08)
	bool _inRange; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct QueryService.ActorPairQueryHeightRange
// Size: 0x08 (Inherited: 0x00)
struct FActorPairQueryHeightRange {
	float _lower; // 0x00(0x04)
	float _upper; // 0x04(0x04)
};

// ScriptStruct QueryService.ActorsInRangeBool
// Size: 0x40 (Inherited: 0x00)
struct FActorsInRangeBool {
	struct UActorPairQueryEvaluatorComponent* _actorPairQueryComponent; // 0x00(0x08)
	struct AActor* _sourceActor; // 0x08(0x08)
	struct AActor* _otherActor; // 0x10(0x08)
	float _range; // 0x18(0x04)
	bool _inRange; // 0x1c(0x01)
	char pad_1D[0x23]; // 0x1d(0x23)
};

