// WidgetBlueprintGeneratedClass WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C
// Size: 0x3f0 (Inherited: 0x3d8)
struct UWBP_CoreDailyRitualsPopupWidget_C : UDailyRitualsPopupWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UImage* BackgroundDetails; // 0x3e0(0x08)
	struct UDBDImage* Smoke; // 0x3e8(0x08)

	void SetProgressionButtonAlignmentAndPadding(bool isAfterTrial); // Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetProgressionButtonAlignmentAndPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetDailyRitualDetailAlignment(bool isAfterTrial); // Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetDailyRitualDetailAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetBackground(bool isAfterTrial); // Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void GetAfterTrialProgressionButtonPadding(float& Padding); // Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.GetAfterTrialProgressionButtonPadding // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void SetVisuals(bool isAfterTrial); // Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetVisuals // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget(int32_t EntryPoint); // Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget // (Final|UbergraphFunction) // @ game+0x5e02c90
};

