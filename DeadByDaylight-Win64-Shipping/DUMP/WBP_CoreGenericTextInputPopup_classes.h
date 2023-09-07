// WidgetBlueprintGeneratedClass WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C
// Size: 0x410 (Inherited: 0x3d0)
struct UWBP_CoreGenericTextInputPopup_C : UCoreGenericTextInputPopupWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UWidgetAnimation* Anim_FadeOut; // 0x3d8(0x08)
	struct UWidgetAnimation* Anim_FadeIn; // 0x3e0(0x08)
	struct UDBDImage* BG_3; // 0x3e8(0x08)
	struct UImage* BG_scratches_L; // 0x3f0(0x08)
	struct UImage* BG_scratches_R; // 0x3f8(0x08)
	struct URetainerBox* Mask; // 0x400(0x08)
	struct UDBDImage* PriorityHeader; // 0x408(0x08)

	void Set Header Color(struct UBasePopupViewData* Data); // Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Set Header Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetHeaderColor(struct UBasePopupViewData* Data); // Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.SetHeaderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Show(struct UBasePopupViewData* Data); // Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Show // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Hide(); // Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Hide // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void HandleAnalogInputEvent(struct FAnalogInputEvent& InAnalogInputEvent); // Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.HandleAnalogInputEvent // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_WBP_CoreGenericTextInputPopup(int32_t EntryPoint); // Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.ExecuteUbergraph_WBP_CoreGenericTextInputPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

