// Enum DBDProceduralCamera.MotionType
enum class MotionType : uint8 {
	Static = 0,
	FreeCamera = 1,
	Pan = 2,
	Tilt = 3,
	Orbital = 4,
	Crab = 5,
	Boom = 6,
	MotionType_MAX = 7
};

// ScriptStruct DBDProceduralCamera.CameraShot
// Size: 0x18 (Inherited: 0x00)
struct FCameraShot {
	struct ACameraShotType* CameraShotType; // 0x00(0x08)
	float ShotDuration; // 0x08(0x04)
	float PriorityWeight; // 0x0c(0x04)
	int32_t TrackSamplingNumberForObstructionComputation; // 0x10(0x04)
	float ObstructionScore; // 0x14(0x04)
};

