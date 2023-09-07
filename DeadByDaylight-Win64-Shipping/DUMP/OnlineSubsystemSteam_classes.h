// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size: 0x30 (Inherited: 0x30)
struct USteamAuthComponentModuleInterface : UHandlerComponentFactory {
};

// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x1c70 (Inherited: 0x1c68)
struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1c68(0x01)
	char pad_1C69[0x7]; // 0x1c69(0x07)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x7f8 (Inherited: 0x7f0)
struct USteamNetDriver : UIpNetDriver {
	char pad_7F0[0x8]; // 0x7f0(0x08)
};

