// Class SpecialEventUtilities.RespawnableInteractable
// Size: 0x360 (Inherited: 0x338)
struct ARespawnableInteractable : AInteractable {
	struct FMulticastInlineDelegate OnInteractionEnded; // 0x338(0x10)
	struct FMulticastInlineDelegate OnIsInteractingChanged; // 0x348(0x10)
	bool _isHidden; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)

	void OnUnhidden(); // Function SpecialEventUtilities.RespawnableInteractable.OnUnhidden // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void OnRep_IsHidden(); // Function SpecialEventUtilities.RespawnableInteractable.OnRep_IsHidden // (Final|Native|Private) // @ game+0x566c110
	void OnHidden(); // Function SpecialEventUtilities.RespawnableInteractable.OnHidden // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	bool IsHidden(); // Function SpecialEventUtilities.RespawnableInteractable.IsHidden // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x566c0e0
};

// Class SpecialEventUtilities.RespawningEventComponent
// Size: 0xc8 (Inherited: 0xb8)
struct URespawningEventComponent : UActorComponent {
	struct URespawnableStrategy* _respawnableStrategy; // 0xb8(0x08)
	struct URespawnablePositioner* _respawnablePositioner; // 0xc0(0x08)

	void DBD_ForceRespawnSpecialEventObject(); // Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject // (Final|Exec|Native|Private) // @ game+0x4032ad0
	void Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(struct ARespawnableInteractable* RespawnableInteractable, bool IsInteracting); // Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged // (Native|Protected) // @ game+0x566cba0
};

// Class SpecialEventUtilities.DebugTimedRespawnableTriggerCountdownTimer
// Size: 0xc0 (Inherited: 0xb8)
struct UDebugTimedRespawnableTriggerCountdownTimer : UActorComponent {
	float _countdownTimeRemaining; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	void OnRep_CountdownTimeRemaining(); // Function SpecialEventUtilities.DebugTimedRespawnableTriggerCountdownTimer.OnRep_CountdownTimeRemaining // (Final|Native|Private) // @ game+0x4032ad0
};

// Class SpecialEventUtilities.DisableActorOnEventsComponent
// Size: 0xe0 (Inherited: 0xb8)
struct UDisableActorOnEventsComponent : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct TArray<struct FGameplayTag> _triggerEvents; // 0xd0(0x10)
};

// Class SpecialEventUtilities.RespawnableTrigger
// Size: 0xb8 (Inherited: 0xb8)
struct URespawnableTrigger : UActorComponent {
};

// Class SpecialEventUtilities.InteractionRespawnableTrigger
// Size: 0xc0 (Inherited: 0xb8)
struct UInteractionRespawnableTrigger : URespawnableTrigger {
	struct URespawningEventComponent* _respawningEventComponent; // 0xb8(0x08)

	void Authority_OnNewRespawnableSubscribed(struct ARespawnableInteractable* newRespawnableInteractable); // Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed // (Final|Native|Public) // @ game+0x566bb80
	void Authority_OnInteractionEnded(struct ARespawnableInteractable* RespawnableInteractable); // Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded // (Native|Public) // @ game+0x566baf0
};

// Class SpecialEventUtilities.PlayerEventDispatcher
// Size: 0x118 (Inherited: 0xb8)
struct UPlayerEventDispatcher : UActorComponent {
	char pad_B8[0x60]; // 0xb8(0x60)
};

// Class SpecialEventUtilities.RespawnablePositioner
// Size: 0xe0 (Inherited: 0xb8)
struct URespawnablePositioner : UActorComponent {
	struct FMulticastInlineDelegate OnIsInteractingWithAnyRespawnableInteractableChangedEvent; // 0xb8(0x10)
	struct TArray<struct ARespawnableInteractable*> _respawnableInteractables; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)

	void Authority_OnIsInteractingChangedEvent(struct ARespawnableInteractable* RespawnableInteractable, bool IsInteracting); // Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent // (Final|Native|Private) // @ game+0x566c3e0
	struct TArray<struct ARespawnableInteractable*> Authority_GetRespawnables(); // Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566c350
};

// Class SpecialEventUtilities.RespawnableStrategy
// Size: 0xb8 (Inherited: 0xb8)
struct URespawnableStrategy : UActorComponent {
};

// Class SpecialEventUtilities.RespawnAtRandomLocationStrategy
// Size: 0xb8 (Inherited: 0xb8)
struct URespawnAtRandomLocationStrategy : URespawnableStrategy {
};

// Class SpecialEventUtilities.RespawnFurthestFromPlayersStrategy
// Size: 0xc8 (Inherited: 0xb8)
struct URespawnFurthestFromPlayersStrategy : URespawnableStrategy {
	float _collisionCapsuleHalfHeight; // 0xb8(0x04)
	float _collisionCapsuleRadius; // 0xbc(0x04)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class SpecialEventUtilities.RespawningEventUtilities
// Size: 0x30 (Inherited: 0x30)
struct URespawningEventUtilities : UBlueprintFunctionLibrary {
};

// Class SpecialEventUtilities.SpecialEventPlayerComponent
// Size: 0xd8 (Inherited: 0xb8)
struct USpecialEventPlayerComponent : UActorComponent {
	struct TArray<struct FComponentToAddInfo> _componentsAddToSurvivor; // 0xb8(0x10)
	struct TArray<struct FComponentToAddInfo> _componentsAddToKiller; // 0xc8(0x10)
};

// Class SpecialEventUtilities.TimedInteractionRespawnableTrigger
// Size: 0xf8 (Inherited: 0xc0)
struct UTimedInteractionRespawnableTrigger : UInteractionRespawnableTrigger {
	char pad_C0[0x38]; // 0xc0(0x38)
};

// Class SpecialEventUtilities.TimedRespawnableTrigger
// Size: 0x100 (Inherited: 0xb8)
struct UTimedRespawnableTrigger : URespawnableTrigger {
	struct URespawningEventComponent* _respawningEventComponent; // 0xb8(0x08)
	char pad_C0[0x40]; // 0xc0(0x40)
};

