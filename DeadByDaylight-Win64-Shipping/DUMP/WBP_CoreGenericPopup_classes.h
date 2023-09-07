// WidgetBlueprintGeneratedClass WBP_CoreGenericPopup.WBP_CoreGenericPopup_C
// Size: 0x3a0 (Inherited: 0x368)
struct UWBP_CoreGenericPopup_C : UCoreGenericPopupWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UWidgetAnimation* Anim_FadeOut; // 0x370(0x08)
	struct UWidgetAnimation* Anim_FadeIn; // 0x378(0x08)
	struct UDBDImage* BG; // 0x380(0x08)
	struct URetainerBox* Mask; // 0x388(0x08)
	struct UDBDScrollBox* MessageScrollBox; // 0x390(0x08)
	struct UDBDImage* PriorityHeader; // 0x398(0x08)

	void SetHeaderColor(struct UBasePopupViewData* Data); // Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.SetHeaderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Show(struct UBasePopupViewData* Data); // Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Show // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void Hide(); // Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Hide // (Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void HandleAnalogInputEvent(struct FAnalogInputEvent& InAnalogInputEvent); // Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.HandleAnalogInputEvent // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_WBP_CoreGenericPopup(int32_t EntryPoint); // Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.ExecuteUbergraph_WBP_CoreGenericPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

