// Class EyeTracker.EyeTrackerFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetEyeTrackedPlayer(struct APlayerController* PlayerController); // Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x61368a0
	bool IsStereoGazeDataAvailable(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6136870
	bool IsEyeTrackerConnected(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6136840
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData& OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x61367a0
	bool GetGazeData(struct FEyeTrackerGazeData& OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x61366f0
};

