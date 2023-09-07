// Class StartupInitializer.StartupInitializer
// Size: 0xa0 (Inherited: 0x30)
struct UStartupInitializer : UObject {
	char pad_30[0x70]; // 0x30(0x70)
};

// Class StartupInitializer.ClientStartupInitializer
// Size: 0x1c0 (Inherited: 0xa0)
struct UClientStartupInitializer : UStartupInitializer {
	char pad_A0[0x120]; // 0xa0(0x120)

	void OnHealthCheckTriggered(bool requestSuccess, int32_t ProviderError, bool datetimeIsSet, struct FDateTime& utcTime); // Function StartupInitializer.ClientStartupInitializer.OnHealthCheckTriggered // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x5687dd0
};

// Class StartupInitializer.DedicatedServerStartupInitializer
// Size: 0xe0 (Inherited: 0xa0)
struct UDedicatedServerStartupInitializer : UStartupInitializer {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct UDBDTimeUtilities* _dbdTimeUtilities; // 0xa8(0x08)
	char pad_B0[0x30]; // 0xb0(0x30)
};

