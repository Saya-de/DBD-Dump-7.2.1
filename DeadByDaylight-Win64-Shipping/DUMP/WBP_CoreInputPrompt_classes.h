// WidgetBlueprintGeneratedClass WBP_CoreInputPrompt.WBP_CoreInputPrompt_C
// Size: 0x3e0 (Inherited: 0x350)
struct UWBP_CoreInputPrompt_C : UCoreInputPromptWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct USpacer* LeftSpacerForRect; // 0x358(0x08)
	struct UDBDImage* PromptIcon; // 0x360(0x08)
	struct USpacer* RightSpacerForRect; // 0x368(0x08)
	struct UTextBlock* TextLabel; // 0x370(0x08)
	struct TMap<enum class EControlMode, struct UDataTable*> ControlModeDataMap; // 0x378(0x50)
	bool IsPromptFound; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct UTexture2D* DefaultMouseKBIcon; // 0x3d0(0x08)
	enum class EHorizontalAlignment PaddingAlignment; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	float PaddingValue; // 0x3dc(0x04)

	void HandlePromptDataRow(struct FInputPromptDataRow& PromptDataRow); // Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandlePromptDataRow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void HandleUnfoundPrompt(); // Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandleUnfoundPrompt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void GetDataTable(struct UDataTable*& DataTable, bool& IsFound); // Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.GetDataTable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetIconTexture(struct UTexture2D*& iconTexture); // Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.SetIconTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PreConstruct(bool IsDesignTime); // Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x5e02c90
	void DisplayPrompt(); // Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.DisplayPrompt // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_WBP_CoreInputPrompt(int32_t EntryPoint); // Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.ExecuteUbergraph_WBP_CoreInputPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x5e02c90
};

