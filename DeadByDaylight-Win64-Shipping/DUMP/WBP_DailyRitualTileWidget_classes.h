// WidgetBlueprintGeneratedClass WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C
// Size: 0x468 (Inherited: 0x440)
struct UWBP_DailyRitualTileWidget_C : UDailyRitualTileWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWidgetAnimation* SheenAnim; // 0x448(0x08)
	struct UWidgetAnimation* FadeIn; // 0x450(0x08)
	struct UWidgetAnimation* FadeOut; // 0x458(0x08)
	struct UDBDImage* RewardIcon; // 0x460(0x08)

	void Finished_138C48CA45BF3996E8DAF7814D16D1ED(); // Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_138C48CA45BF3996E8DAF7814D16D1ED // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Finished_F2C6128D460D972B729F1FB6DE6530D6(); // Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_F2C6128D460D972B729F1FB6DE6530D6 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void Finished_97337F834CE4F10F60F9458FA83EBF61(); // Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_97337F834CE4F10F60F9458FA83EBF61 // (BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayFadeInAnimation(); // Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.PlayFadeInAnimation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void PlayFadeOutAnimation(); // Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.PlayFadeOutAnimation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void ExecuteUbergraph_WBP_DailyRitualTileWidget(int32_t EntryPoint); // Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.ExecuteUbergraph_WBP_DailyRitualTileWidget // (Final|UbergraphFunction) // @ game+0x5e02c90
};

