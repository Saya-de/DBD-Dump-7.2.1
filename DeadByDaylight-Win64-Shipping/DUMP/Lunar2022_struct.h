// Enum Lunar2022.ERedEnvelopeState
enum class ERedEnvelopeState : uint8 {
	AuraVisibleToOwner = 0,
	AuraVisibleToNonOwners = 1,
	Disappeared = 2,
	ERedEnvelopeState_MAX = 3
};

// ScriptStruct Lunar2022.RedEnvelopeData
// Size: 0x18 (Inherited: 0x00)
struct FRedEnvelopeData {
	enum class ERedEnvelopeState RedEnvelopeState; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ADBDPlayer* LastInteractingPlayer; // 0x08(0x08)
	bool IsJackpot; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

