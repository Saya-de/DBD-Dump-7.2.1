// Enum SharedAuthenticationUtilities.ESharedAuthenticationTokenType
enum class ESharedAuthenticationTokenType : uint8 {
	None = 0,
	AccessToken = 1,
	AuthorizationCode = 2,
	IdentityToken = 3,
	ESharedAuthenticationTokenType_MAX = 4
};

// Enum SharedAuthenticationUtilities.ESharedAuthenticationProvider
enum class ESharedAuthenticationProvider : uint8 {
	None = 0,
	Facebook = 1,
	Google = 2,
	NetEase = 3,
	Kraken = 4,
	SignInWithApple = 5,
	ESharedAuthenticationProvider_MAX = 6
};

// ScriptStruct SharedAuthenticationUtilities.AuthenticationRequestState
// Size: 0x30 (Inherited: 0x00)
struct FAuthenticationRequestState {
	char pad_0[0x30]; // 0x00(0x30)
};

