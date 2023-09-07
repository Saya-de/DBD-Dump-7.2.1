// Class DBDInput.ControlModeManager
// Size: 0x88 (Inherited: 0x30)
struct UControlModeManager : UObject {
	char pad_30[0x50]; // 0x30(0x50)
	struct UGameInstance* _gameInstance; // 0x80(0x08)
};

// Class DBDInput.DBDInputManager
// Size: 0x118 (Inherited: 0x38)
struct UDBDInputManager : UGameInstanceSubsystem {
	char pad_38[0x20]; // 0x38(0x20)
	struct UControlModeManager* _controlModeManager; // 0x58(0x08)
	struct USwitchDockStateManager* _switchDockStateManager; // 0x60(0x08)
	struct UVirtualKeyboardManager* _virtualKeyboardManager; // 0x68(0x08)
	struct UDataTable* _analogCursorDb; // 0x70(0x08)
	char pad_78[0xa0]; // 0x78(0xa0)

	void RemovePresenterRootWidget(struct UUserWidget* presenterRootWidget); // Function DBDInput.DBDInputManager.RemovePresenterRootWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x825baa0
	void AddPresenterRootWidget(struct UUserWidget* presenterRootWidget); // Function DBDInput.DBDInputManager.AddPresenterRootWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x825ba10
};

// Class DBDInput.InteractiveWidgetInterface
// Size: 0x30 (Inherited: 0x30)
struct UInteractiveWidgetInterface : UInterface {

	void HandleKeyUpEvent(struct FKeyEvent& InKeyEvent); // Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x825c580
	void HandleKeyHoldEvent(struct FKeyEvent& InKeyEvent); // Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x825c480
	void HandleKeyDownEvent(struct FKeyEvent& InKeyEvent); // Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x825c380
	void HandleAnalogInputEvent(struct FAnalogInputEvent& InAnalogInputEvent); // Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x825c260
};

// Class DBDInput.MultipleGamepadsControlModeInfo
// Size: 0x50 (Inherited: 0x38)
struct UMultipleGamepadsControlModeInfo : UGameInstanceSubsystem {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class DBDInput.SwitchDockStateManager
// Size: 0x50 (Inherited: 0x30)
struct USwitchDockStateManager : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class DBDInput.UIInputUtilities
// Size: 0x30 (Inherited: 0x30)
struct UUIInputUtilities : UBlueprintFunctionLibrary {

	bool ShouldUseAtlantaControls(struct UObject* WorldContextObject); // Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x825ce60
	bool IsInputKeyControlModePairValid(struct FKey InputKey, enum class EControlMode controlMode); // Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x825cd20
	struct FKey GetKeyFromUIAction(enum class EUIActionType ActionType, bool isUsingGamepad); // Function DBDInput.UIInputUtilities.GetKeyFromUIAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x825cbc0
	bool AreGamepadButtonsXOSwitched(); // Function DBDInput.UIInputUtilities.AreGamepadButtonsXOSwitched // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x825cb90
};

// Class DBDInput.VirtualKeyboardManager
// Size: 0x58 (Inherited: 0x30)
struct UVirtualKeyboardManager : UObject {
	struct UVirtualKeyboard* _virtualKeyboard; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)
};

