// ScriptStruct S3Command.AccessKey
// Size: 0x20 (Inherited: 0x00)
struct FAccessKey {
	struct FString KeyId; // 0x00(0x10)
	struct FString Key; // 0x10(0x10)
};

// ScriptStruct S3Command.EmblemTunableData
// Size: 0x60 (Inherited: 0x00)
struct FEmblemTunableData {
	struct TArray<struct FEmblemTunableItem> EmblemValues; // 0x00(0x10)
	struct TMap<struct FString, struct FEmblemThreshold> EmblemThresholds; // 0x10(0x50)
};

// ScriptStruct S3Command.EmblemThreshold
// Size: 0x10 (Inherited: 0x00)
struct FEmblemThreshold {
	struct TArray<int32_t> Thresholds; // 0x00(0x10)
};

// ScriptStruct S3Command.EmblemTunableItem
// Size: 0x18 (Inherited: 0x00)
struct FEmblemTunableItem {
	struct FString ID; // 0x00(0x10)
	double value; // 0x10(0x08)
};

// ScriptStruct S3Command.RankDefinitionData
// Size: 0x68 (Inherited: 0x00)
struct FRankDefinitionData {
	struct FRankThresholdsData RankThreshold; // 0x00(0x28)
	struct FRankGroups RankGroupDefinition; // 0x28(0x20)
	struct FRankGlobalData GlobalData; // 0x48(0x20)
};

// ScriptStruct S3Command.RankGlobalData
// Size: 0x20 (Inherited: 0x00)
struct FRankGlobalData {
	int32_t NoPipLossRankThreshold; // 0x00(0x04)
	int32_t NoRankLossThreshold; // 0x04(0x04)
	int32_t BaseTrialPips; // 0x08(0x04)
	int32_t MaxPips; // 0x0c(0x04)
	struct TArray<struct FRankResetDateData> RankResetDates; // 0x10(0x10)
};

// ScriptStruct S3Command.RankResetDateData
// Size: 0x10 (Inherited: 0x00)
struct FRankResetDateData {
	int32_t StartYear; // 0x00(0x04)
	int32_t StartMonth; // 0x04(0x04)
	int32_t ResetDay; // 0x08(0x04)
	int32_t ResetHour; // 0x0c(0x04)
};

// ScriptStruct S3Command.RankGroups
// Size: 0x20 (Inherited: 0x00)
struct FRankGroups {
	struct TArray<struct FRankGroupData> KillerRankGroup; // 0x00(0x10)
	struct TArray<struct FRankGroupData> SurvivorRankGroup; // 0x10(0x10)
};

// ScriptStruct S3Command.RankGroupData
// Size: 0x18 (Inherited: 0x00)
struct FRankGroupData {
	struct TArray<double> EmblemThreshold; // 0x00(0x10)
	int32_t RankThreshold; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct S3Command.RankThresholdsData
// Size: 0x28 (Inherited: 0x00)
struct FRankThresholdsData {
	struct TArray<int32_t> PipsRequired; // 0x00(0x10)
	struct TArray<int32_t> ResetStartingPips; // 0x10(0x10)
	bool ResetStartingPips_IsSet; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

