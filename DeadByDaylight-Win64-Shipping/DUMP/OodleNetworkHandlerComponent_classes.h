// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// Size: 0xa8 (Inherited: 0x88)
struct UOodleNetworkTrainerCommandlet : UCommandlet {
	bool bCompressionTest; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t HashTableSize; // 0x8c(0x04)
	int32_t DictionarySize; // 0x90(0x04)
	int32_t DictionaryTrials; // 0x94(0x04)
	int32_t TrialRandomness; // 0x98(0x04)
	int32_t TrialGenerations; // 0x9c(0x04)
	bool bNoTrials; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

