// ScriptStruct GenericGameMessages.OpenCurrentCalendarMessage
// Size: 0x04 (Inherited: 0x00)
struct FOpenCurrentCalendarMessage {
	int32_t RemainingDailyRewards; // 0x00(0x04)
};

// ScriptStruct GenericGameMessages.LoginMessage
// Size: 0x10 (Inherited: 0x00)
struct FLoginMessage {
	struct FString MirrorsId; // 0x00(0x10)
};

// ScriptStruct GenericGameMessages.RateAppMessage
// Size: 0x01 (Inherited: 0x00)
struct FRateAppMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.UserCenterMessage
// Size: 0x01 (Inherited: 0x00)
struct FUserCenterMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.ForceLogoutMessage
// Size: 0x01 (Inherited: 0x00)
struct FForceLogoutMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.SkuDetailsMessage
// Size: 0x50 (Inherited: 0x00)
struct FSkuDetailsMessage {
	struct TMap<struct FString, struct FString> BundlePrices; // 0x00(0x50)
};

// ScriptStruct GenericGameMessages.BuyTipsMessage
// Size: 0x04 (Inherited: 0x00)
struct FBuyTipsMessage {
	int32_t Result; // 0x00(0x04)
};

// ScriptStruct GenericGameMessages.OrderDoneMessage
// Size: 0x28 (Inherited: 0x00)
struct FOrderDoneMessage {
	int32_t Code; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString OrderId; // 0x08(0x10)
	struct FString OrderChannel; // 0x18(0x10)
};

// ScriptStruct GenericGameMessages.BuyCurrencyMessage
// Size: 0x10 (Inherited: 0x00)
struct FBuyCurrencyMessage {
	struct FString ItemId; // 0x00(0x10)
};

// ScriptStruct GenericGameMessages.FAQMessage
// Size: 0x01 (Inherited: 0x00)
struct FFAQMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.LanguageMessage
// Size: 0x10 (Inherited: 0x00)
struct FLanguageMessage {
	struct FString Language; // 0x00(0x10)
};

// ScriptStruct GenericGameMessages.PlayerNameMessage
// Size: 0x10 (Inherited: 0x00)
struct FPlayerNameMessage {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct GenericGameMessages.GameVersionMessage
// Size: 0x10 (Inherited: 0x00)
struct FGameVersionMessage {
	struct FString Version; // 0x00(0x10)
};

// ScriptStruct GenericGameMessages.MatchEndMessage
// Size: 0x01 (Inherited: 0x00)
struct FMatchEndMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.RoleUnlockMessage
// Size: 0x01 (Inherited: 0x00)
struct FRoleUnlockMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.PlayerLevelMessage
// Size: 0x08 (Inherited: 0x00)
struct FPlayerLevelMessage {
	int32_t Level; // 0x00(0x04)
	int32_t TotalXp; // 0x04(0x04)
};

// ScriptStruct GenericGameMessages.TutorialEndMessage
// Size: 0x01 (Inherited: 0x00)
struct FTutorialEndMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.LoginJsonMessage
// Size: 0x38 (Inherited: 0x00)
struct FLoginJsonMessage {
	struct FString LoginJson; // 0x00(0x10)
	struct FString LoginType; // 0x10(0x10)
	struct FString RoleID; // 0x20(0x10)
	bool IsNewAccount; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GenericGameMessages.LoadEndMessage
// Size: 0x01 (Inherited: 0x00)
struct FLoadEndMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.LoadStartMessage
// Size: 0x01 (Inherited: 0x00)
struct FLoadStartMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.SDKEndMessage
// Size: 0x01 (Inherited: 0x00)
struct FSDKEndMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.SDKUIMessage
// Size: 0x01 (Inherited: 0x00)
struct FSDKUIMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.PatchFailMessage
// Size: 0x01 (Inherited: 0x00)
struct FPatchFailMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.PatchEndMessage
// Size: 0x01 (Inherited: 0x00)
struct FPatchEndMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GenericGameMessages.PatchStartMessage
// Size: 0x01 (Inherited: 0x00)
struct FPatchStartMessage {
	char pad_0[0x1]; // 0x00(0x01)
};

