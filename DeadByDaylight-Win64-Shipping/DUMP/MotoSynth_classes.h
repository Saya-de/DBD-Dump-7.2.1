// Class MotoSynth.MotoSynthPreset
// Size: 0x98 (Inherited: 0x30)
struct UMotoSynthPreset : UObject {
	struct FMotoSynthRuntimeSettings Settings; // 0x30(0x68)
};

// Class MotoSynth.MotoSynthSource
// Size: 0x100 (Inherited: 0x30)
struct UMotoSynthSource : UObject {
	bool bConvertTo8Bit; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DownSampleFactor; // 0x34(0x04)
	struct FRuntimeFloatCurve RPMCurve; // 0x38(0x88)
	struct TArray<float> SourceData; // 0xc0(0x10)
	struct TArray<int16_t> SourceDataPCM; // 0xd0(0x10)
	int32_t SourceSampleRate; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FGrainTableEntry> GrainTable; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class MotoSynth.SynthComponentMoto
// Size: 0x7a0 (Inherited: 0x6e0)
struct USynthComponentMoto : USynthComponent {
	struct UMotoSynthPreset* MotoSynthPreset; // 0x6e0(0x08)
	float RPM; // 0x6e8(0x04)
	char pad_6EC[0xb4]; // 0x6ec(0xb4)

	void SetSettings(struct FMotoSynthRuntimeSettings& InSettings); // Function MotoSynth.SynthComponentMoto.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x49d4c40
	void SetRPM(float InRPM, float InTimeSec); // Function MotoSynth.SynthComponentMoto.SetRPM // (Final|Native|Public|BlueprintCallable) // @ game+0x49d4b70
	bool IsEnabled(); // Function MotoSynth.SynthComponentMoto.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x49d4b40
	void GetRPMRange(float& OutMinRPM, float& OutMaxRPM); // Function MotoSynth.SynthComponentMoto.GetRPMRange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x49d4a60
};

