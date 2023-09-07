// WidgetBlueprintGeneratedClass WBP_CoreStandardButton.WBP_CoreStandardButton_C
// Size: 0x4a8 (Inherited: 0x440)
struct UWBP_CoreStandardButton_C : UCoreKeyListenerButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWidgetAnimation* Disable; // 0x448(0x08)
	struct UWidgetAnimation* Pressed; // 0x450(0x08)
	struct UWidgetAnimation* Hover; // 0x458(0x08)
	struct UWidgetAnimation* Default; // 0x460(0x08)
	struct USizeBox* BackgroundContainer; // 0x468(0x08)
	struct UDBDImage* BG; // 0x470(0x08)
	struct UOverlay* Overlay; // 0x478(0x08)
	struct UDBDImage* RedTraitIMG; // 0x480(0x08)
	struct UDBDImage* SmokeBG; // 0x488(0x08)
	float PaddingText; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct FString ActionMapping; // 0x498(0x10)

	void OnAlignmentChanged(enum class ETextJustify newAlignment); // Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnAlignmentChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnHovered(); // Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnUnhovered(); // Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnPressed(); // Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnEnabledChanged(bool IsEnabled); // Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_WBP_CoreStandardButton(int32_t EntryPoint); // Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.ExecuteUbergraph_WBP_CoreStandardButton // (Final|UbergraphFunction) // @ game+0x5e02c90
};

