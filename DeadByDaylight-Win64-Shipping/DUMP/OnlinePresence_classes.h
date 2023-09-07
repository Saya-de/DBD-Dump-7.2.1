// Class OnlinePresence.MirrorsConfig
// Size: 0x30 (Inherited: 0x30)
struct UMirrorsConfig : UObject {
};

// Class OnlinePresence.OnlinePresenceExternalCommands
// Size: 0x48 (Inherited: 0x30)
struct UOnlinePresenceExternalCommands : UObject {
	char pad_30[0x18]; // 0x30(0x18)

	void DBD_MirrorsWalletWithdraw(struct FString CurrencyName, int32_t value); // Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw // (Final|Exec|Native|Public) // @ game+0x3eb30f0
	void DBD_MirrorsWalletGetCurrency(struct FString CurrencyName); // Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency // (Final|Exec|Native|Public) // @ game+0x3eb3000
	void DBD_MirrorsSaveTestValue(struct FString StateName, int32_t Version); // Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue // (Final|Exec|Native|Public) // @ game+0x3eb30f0
	void DBD_MirrorsGetValue(struct FString StateName); // Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue // (Final|Exec|Native|Public) // @ game+0x3eb3000
	bool DBD_IsDlcInstalled(struct FString inString); // Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled // (Final|Exec|Native|Public) // @ game+0x3eb2f50
	bool DBD_GrantPromoItems(); // Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems // (Final|Exec|Native|Public) // @ game+0x3eb2f20
	bool DBD_GenerateTestItems(); // Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems // (Final|Exec|Native|Public) // @ game+0x3eb2f20
};

// Class OnlinePresence.SteamConfig
// Size: 0x30 (Inherited: 0x30)
struct USteamConfig : UObject {
};

