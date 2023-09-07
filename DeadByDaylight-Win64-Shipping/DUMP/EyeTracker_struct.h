// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8 {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3
};

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// Size: 0x40 (Inherited: 0x00)
struct FEyeTrackerStereoGazeData {
	struct FVector LeftEyeOrigin; // 0x00(0x0c)
	struct FVector LeftEyeDirection; // 0x0c(0x0c)
	struct FVector RightEyeOrigin; // 0x18(0x0c)
	struct FVector RightEyeDirection; // 0x24(0x0c)
	struct FVector FixationPoint; // 0x30(0x0c)
	float ConfidenceValue; // 0x3c(0x04)
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// Size: 0x34 (Inherited: 0x00)
struct FEyeTrackerGazeData {
	struct FVector GazeOrigin; // 0x00(0x0c)
	struct FVector GazeDirection; // 0x0c(0x0c)
	struct FVector FixationPoint; // 0x18(0x0c)
	float ConfidenceValue; // 0x24(0x04)
	bool bIsLeftEyeBlink; // 0x28(0x01)
	bool bIsRightEyeBlink; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float LeftPupilDiameter; // 0x2c(0x04)
	float RightPupilDiameter; // 0x30(0x04)
};

