// Class DBDProceduralCamera.CameraShotType
// Size: 0x258 (Inherited: 0x230)
struct ACameraShotType : AActor {
	bool bIsCameraRotationFixed; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float MinimumDistanceFromCamera; // 0x234(0x04)
	float MaximumDistanceFromCamera; // 0x238(0x04)
	float HorizontalAngleFreedom; // 0x23c(0x04)
	float VerticalAngleFreedom; // 0x240(0x04)
	enum class MotionType CameraMotionType; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	int32_t KeyPoseNumber; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct USplineComponent* CameraTrack; // 0x250(0x08)
};

// Class DBDProceduralCamera.ProceduralCameraRaD
// Size: 0x2e8 (Inherited: 0x298)
struct AProceduralCameraRaD : APawn {
	struct UCameraComponent* CameraComp; // 0x298(0x08)
	struct AActor* TargetActor; // 0x2a0(0x08)
	struct TArray<struct FCameraShot> Shots; // 0x2a8(0x10)
	float MaximumCinematicLengthWanted; // 0x2b8(0x04)
	float CinematicTotalLength; // 0x2bc(0x04)
	char pad_2C0[0x28]; // 0x2c0(0x28)

	void SelectTracks(); // Function DBDProceduralCamera.ProceduralCameraRaD.SelectTracks // (Final|Native|Public) // @ game+0x4944a30
	void PlayCinematic(); // Function DBDProceduralCamera.ProceduralCameraRaD.PlayCinematic // (Final|Native|Private) // @ game+0x4944a10
	void OnCameraTransition(float TransitionDuration, float BeginAt); // Function DBDProceduralCamera.ProceduralCameraRaD.OnCameraTransition // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void ComputeTrackObstructionScore(struct FCameraShot& CameraShot); // Function DBDProceduralCamera.ProceduralCameraRaD.ComputeTrackObstructionScore // (Final|Native|Private|HasOutParms) // @ game+0x4944960
	void BeginCinematic(); // Function DBDProceduralCamera.ProceduralCameraRaD.BeginCinematic // (Final|Native|Public) // @ game+0x4944940
};

