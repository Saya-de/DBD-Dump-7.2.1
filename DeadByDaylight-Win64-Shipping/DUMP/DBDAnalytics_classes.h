// Class DBDAnalytics.AnalyticsDelegates
// Size: 0x38 (Inherited: 0x38)
struct UAnalyticsDelegates : UGameInstanceSubsystem {
};

// Class DBDAnalytics.AnalyticsFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAnalyticsFunctionLibrary : UBlueprintFunctionLibrary {

	void IncrementHookSpawned(); // Function DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b76910
};

// Class DBDAnalytics.AnalyticsManager
// Size: 0x3150 (Inherited: 0x38)
struct UAnalyticsManager : UAbstractAnalyticsManager {
	char pad_38[0x3118]; // 0x38(0x3118)
};

// Class DBDAnalytics.ClosetAnalytics
// Size: 0x30 (Inherited: 0x30)
struct UClosetAnalytics : UBlueprintFunctionLibrary {

	void RecordClosetSearchSuccess(struct ASlasherPlayer* killer); // Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b769b0
	void RecordClosetSearchFail(struct ASlasherPlayer* killer); // Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b76930
	void IncrementClosetEnter(struct ACamperPlayer* Survivor); // Function DBDAnalytics.ClosetAnalytics.IncrementClosetEnter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b76890
};

// Class DBDAnalytics.DBDAnalytics
// Size: 0x30 (Inherited: 0x30)
struct UDBDAnalytics : UBHVRAnalytics {

	void RecordGameProgress(struct FString InProgressType); // Function DBDAnalytics.DBDAnalytics.RecordGameProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b76a30
};

// Class DBDAnalytics.EmblemAnalyticsComponent
// Size: 0x1b0 (Inherited: 0xb8)
struct UEmblemAnalyticsComponent : UActorComponent {
	char pad_B8[0xf8]; // 0xb8(0xf8)
};

// Class DBDAnalytics.InteractionAnalyticsComponent
// Size: 0x180 (Inherited: 0xb8)
struct UInteractionAnalyticsComponent : UActorComponent {
	char pad_B8[0xc8]; // 0xb8(0xc8)
};

// Class DBDAnalytics.PerkAnalyticsLibrary
// Size: 0x30 (Inherited: 0x30)
struct UPerkAnalyticsLibrary : UBlueprintFunctionLibrary {

	void SendTinkererUndetectableInterruptAnalytics(struct ADBDPlayer* interruptedPlayer, struct ADBDPlayer* Slasher); // Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b81aa0
	void SendTinkererUndetectableHitNearGeneratorAnalytics(struct ADBDPlayer* hitPlayer, struct ADBDPlayer* Slasher); // Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b819e0
	void SendLightbornAuraRevealedAnalytics(struct ADBDPlayer* revealedPlayer, struct ADBDPlayer* Slasher); // Function DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b81920
	void SendKnockoutSurvivorFoundAnalytics(struct ADBDPlayer* findingSurvivor, struct ADBDPlayer* foundSurvivor); // Function DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b81860
	void SendFranklinsHitSurvivorNearDroppedItemAnalytics(struct ADBDPlayer* hitSurvivor, struct ADBDPlayer* Slasher); // Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b817a0
	void SendFranklinsConsumeItemAnalytics(struct ADBDPlayer* previousOwner); // Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b81720
};

// Class DBDAnalytics.PigAnalytics
// Size: 0x30 (Inherited: 0x30)
struct UPigAnalytics : UBlueprintFunctionLibrary {

	void RecordRBTSearch(struct ACamperPlayer* searchingPlayer, bool success); // Function DBDAnalytics.PigAnalytics.RecordRBTSearch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b84c60
	void OnRBTAttached_Analytics(struct ASlasherPlayer* attacher, struct ACamperPlayer* attachee); // Function DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b84ba0
	void IncrementRBTTimerActived(struct ACamperPlayer* attachedPlayer); // Function DBDAnalytics.PigAnalytics.IncrementRBTTimerActived // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b84b20
	void IncrementRBTKilledCount(struct ACamperPlayer* playerKilled, bool killedByExecutionZone); // Function DBDAnalytics.PigAnalytics.IncrementRBTKilledCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b84a60
};

// Class DBDAnalytics.PlayerHookAnalyticsComponent
// Size: 0x3f0 (Inherited: 0xb8)
struct UPlayerHookAnalyticsComponent : UActorComponent {
	char pad_B8[0x338]; // 0xb8(0x338)
};

// Class DBDAnalytics.PulldownAnalytics
// Size: 0x30 (Inherited: 0x30)
struct UPulldownAnalytics : UBlueprintFunctionLibrary {

	void IncrementPalletStun(struct ACamperPlayer* Survivor); // Function DBDAnalytics.PulldownAnalytics.IncrementPalletStun // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b849e0
	void IncrementPalletSpawned(struct AActor* Actor); // Function DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b84960
	void IncrementPalletDrop(struct ACamperPlayer* Survivor); // Function DBDAnalytics.PulldownAnalytics.IncrementPalletDrop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b848e0
	void IncrementPalletDestroy(struct ASlasherPlayer* killer); // Function DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b84860
};

// Class DBDAnalytics.SurvivorAnalyticsComponent
// Size: 0x168 (Inherited: 0xb8)
struct USurvivorAnalyticsComponent : UActorComponent {
	char pad_B8[0xb0]; // 0xb8(0xb0)
};

// Class DBDAnalytics.SurvivorInteractionAnalytics
// Size: 0x30 (Inherited: 0x30)
struct USurvivorInteractionAnalytics : UBlueprintFunctionLibrary {

	void RecordHealSuccess(struct ACamperPlayer* Survivor); // Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b87bf0
	void RecordHatchEscape(struct ACamperPlayer* Survivor); // Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b87b70
	void IncrementHealCount(struct ACamperPlayer* Survivor); // Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4b87af0
};

