// Class SystemUtilities.DateTimeProvider
// Size: 0x30 (Inherited: 0x30)
struct UDateTimeProvider : UObject {
};

// Class SystemUtilities.ArrayExt
// Size: 0x30 (Inherited: 0x30)
struct UArrayExt : UBlueprintFunctionLibrary {
};

// Class SystemUtilities.BoolExt
// Size: 0x30 (Inherited: 0x30)
struct UBoolExt : UBlueprintFunctionLibrary {

	struct FString ToString(bool boolToConvert); // Function SystemUtilities.BoolExt.ToString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x81670f0
};

// Class SystemUtilities.TimeProviderMock
// Size: 0x38 (Inherited: 0x30)
struct UTimeProviderMock : UDateTimeProvider {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class SystemUtilities.DateTimerUpdater
// Size: 0xd8 (Inherited: 0x30)
struct UDateTimerUpdater : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TMap<struct UDateTimeProvider*, struct FDateTimerArray> _timers; // 0x38(0x50)
	struct TMap<struct UDateTimeProvider*, struct UDateTimeProvider*> _dateTimeProvider; // 0x88(0x50)
};

// Class SystemUtilities.DebugUtilities
// Size: 0x30 (Inherited: 0x30)
struct UDebugUtilities : UBlueprintFunctionLibrary {
};

// Class SystemUtilities.GameStreamingSubsytem
// Size: 0x38 (Inherited: 0x38)
struct UGameStreamingSubsytem : UGameInstanceSubsystem {
};

// Class SystemUtilities.GameStreamingGDK
// Size: 0x38 (Inherited: 0x38)
struct UGameStreamingGDK : UGameStreamingSubsytem {
};

// Class SystemUtilities.GameStreamingGeForceNow
// Size: 0x38 (Inherited: 0x38)
struct UGameStreamingGeForceNow : UGameStreamingSubsytem {
};

// Class SystemUtilities.PlatformUtilities
// Size: 0x30 (Inherited: 0x30)
struct UPlatformUtilities : UBlueprintFunctionLibrary {

	struct FString GetPlatform(); // Function SystemUtilities.PlatformUtilities.GetPlatform // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8168680
};

