// Class OnlineTransactions.BloodwebManagerMock
// Size: 0x48 (Inherited: 0x30)
struct UBloodwebManagerMock : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class OnlineTransactions.OnlineTransactionResponseBase
// Size: 0x30 (Inherited: 0x30)
struct UOnlineTransactionResponseBase : UObject {
};

// Class OnlineTransactions.ForceRefreshBloodMarketTransactionResponse
// Size: 0x38 (Inherited: 0x30)
struct UForceRefreshBloodMarketTransactionResponse : UOnlineTransactionResponseBase {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class OnlineTransactions.ForceRefreshBloodMarketTransaction
// Size: 0x78 (Inherited: 0x30)
struct UForceRefreshBloodMarketTransaction : UObject {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class OnlineTransactions.OnlineTransaction
// Size: 0x30 (Inherited: 0x30)
struct UOnlineTransaction : UInterface {
};

// Class OnlineTransactions.OnlineTransactionServiceComponent
// Size: 0x120 (Inherited: 0xb8)
struct UOnlineTransactionServiceComponent : UActorComponent {
	char pad_B8[0x68]; // 0xb8(0x68)
};

// Class OnlineTransactions.WalletHandlerMock
// Size: 0x48 (Inherited: 0x30)
struct UWalletHandlerMock : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

