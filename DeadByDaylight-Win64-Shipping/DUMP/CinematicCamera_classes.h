// Class CinematicCamera.CameraRig_Crane
// Size: 0x260 (Inherited: 0x230)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x230(0x04)
	float CraneYaw; // 0x234(0x04)
	float CraneArmLength; // 0x238(0x04)
	bool bLockMountPitch; // 0x23c(0x01)
	bool bLockMountYaw; // 0x23d(0x01)
	char pad_23E[0x2]; // 0x23e(0x02)
	struct USceneComponent* TransformComponent; // 0x240(0x08)
	struct USceneComponent* CraneYawControl; // 0x248(0x08)
	struct USceneComponent* CranePitchControl; // 0x250(0x08)
	struct USceneComponent* CraneCameraMount; // 0x258(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x250 (Inherited: 0x230)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x230(0x04)
	bool bLockOrientationToRail; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct USceneComponent* TransformComponent; // 0x238(0x08)
	struct USplineComponent* RailSplineComponent; // 0x240(0x08)
	struct USceneComponent* RailCameraMount; // 0x248(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x58c1bb0
};

// Class CinematicCamera.CineCameraActor
// Size: 0x830 (Inherited: 0x7c0)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7c0(0x58)
	char pad_818[0x18]; // 0x818(0x18)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74c97b0
};

// Class CinematicCamera.CineCameraComponent
// Size: 0x8f0 (Inherited: 0x7f0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x7f0(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x7fc(0x0c)
	struct FCameraLensSettings LensSettings; // 0x808(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x820(0x60)
	float CurrentFocalLength; // 0x880(0x04)
	float CurrentAperture; // 0x884(0x04)
	float CurrentFocusDistance; // 0x888(0x04)
	char pad_88C[0xc]; // 0x88c(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x898(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x8a8(0x10)
	struct FString DefaultFilmbackPresetName; // 0x8b8(0x10)
	struct FString DefaultFilmbackPreset; // 0x8c8(0x10)
	struct FString DefaultLensPresetName; // 0x8d8(0x10)
	float DefaultLensFocalLength; // 0x8e8(0x04)
	float DefaultLensFStop; // 0x8ec(0x04)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x74c9cd0
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x74c9c30
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0x74c9bb0
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74c9b80
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74c9aa0
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74c9a20
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74c99f0
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74c9910
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74c9890
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74c97d0
};

