// Class InputUtilities.AxisFlick
// Size: 0x60 (Inherited: 0x30)
struct UAxisFlick : UObject {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class InputUtilities.AxisFlickMasher
// Size: 0xf8 (Inherited: 0xb8)
struct UAxisFlickMasher : UActorComponent {
	struct UInputComponent* _inputComponent; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct UAxisFlick* _axisFlick1; // 0xc8(0x08)
	struct UAxisFlick* _axisFlick2; // 0xd0(0x08)
	char pad_D8[0x20]; // 0xd8(0x20)

	void OnAxisFlicked2(); // Function InputUtilities.AxisFlickMasher.OnAxisFlicked2 // (Final|Native|Private) // @ game+0x5651c80
	void OnAxisFlicked1(); // Function InputUtilities.AxisFlickMasher.OnAxisFlicked1 // (Final|Native|Private) // @ game+0x5651c60
};

// Class InputUtilities.ButtonPressTracker
// Size: 0x88 (Inherited: 0x38)
struct UButtonPressTracker : ULocalPlayerSubsystem {
	char pad_38[0x18]; // 0x38(0x18)
	struct TWeakObjectPtr<struct UInputComponent> _trackedInputComponent; // 0x50(0x08)
	struct TWeakObjectPtr<struct UPlayerInput> _playerInput; // 0x58(0x08)
	char pad_60[0x28]; // 0x60(0x28)
};

// Class InputUtilities.InputMasher
// Size: 0xf0 (Inherited: 0xb8)
struct UInputMasher : UActorComponent {
	struct UInputComponent* _inputComponent; // 0xb8(0x08)
	char pad_C0[0x30]; // 0xc0(0x30)
};

// Class InputUtilities.VirtualKeyboard
// Size: 0x40 (Inherited: 0x30)
struct UVirtualKeyboard : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

