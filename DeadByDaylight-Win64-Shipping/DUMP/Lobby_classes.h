// Class Lobby.LobbyBeaconClient
// Size: 0x350 (Inherited: 0x2c8)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x2c8(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x2d0(0x08)
	char pad_2D8[0x1]; // 0x2d8(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x2d9(0x01)
	char pad_2DA[0x76]; // 0x2da(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3d13f10
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3d13ec0
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3d13d00
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3d13b60
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x3d13b10
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x3d13a50
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x3d138f0
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3d13850
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x3d13760
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x3d135e0
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x3d134b0
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3d13490
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x3d13470
};

// Class Lobby.LobbyBeaconHost
// Size: 0x2a0 (Inherited: 0x258)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char pad_258[0x10]; // 0x258(0x10)
	struct TSoftClassPtr<UObject> LobbyStateClass; // 0x268(0x30)
	struct ALobbyBeaconState* LobbyState; // 0x298(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x2f0 (Inherited: 0x230)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x230(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x248(0x28)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x270(0x28)
	bool bInLobby; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x2a0(0x08)
	char pad_2A8[0x48]; // 0x2a8(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0x3d13a10
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0x3d139f0
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0x3d139b0
};

// Class Lobby.LobbyBeaconState
// Size: 0x3d8 (Inherited: 0x230)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x238(0x08)
	char pad_240[0x8]; // 0x240(0x08)
	bool bLobbyStarted; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float WaitForPlayersTimeRemaining; // 0x24c(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x250(0x120)
	char pad_370[0x68]; // 0x370(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0x3d13a30
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0x3d139d0
};

