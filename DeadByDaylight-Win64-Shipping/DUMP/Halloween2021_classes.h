// Class Halloween2021.Pumpkin
// Size: 0x538 (Inherited: 0x378)
struct APumpkin : ASpecialBehaviourInteractable {
	char pad_378[0x18]; // 0x378(0x18)
	struct FName _specialBehaviourId; // 0x390(0x0c)
	enum class EPumpkinType _pumpkinType; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	struct UPumpkinInteraction* _pumpkinInteraction; // 0x3a0(0x08)
	struct UPumpkinInteraction* _pumpkinInteractionKiller; // 0x3a8(0x08)
	struct UChargeableComponent* _pumpkinInteractionChargeable; // 0x3b0(0x08)
	struct UChargeableComponent* _pumpkinInteractionChargeableKiller; // 0x3b8(0x08)
	struct UInteractor* _pumpkinInteractor; // 0x3c0(0x08)
	struct UPrimitiveComponent* _pumpkinInteractionZone; // 0x3c8(0x08)
	struct FDBDTunableRowHandle _pumpkinInteractionSecondsToCharge; // 0x3d0(0x28)
	struct FDBDTunableRowHandle _pumpkinInteractionSecondsToChargeKiller; // 0x3f8(0x28)
	struct FLinearColor _auraColorWhileInteracting; // 0x420(0x10)
	struct FDBDTunableRowHandle _pumpkinTreatChance; // 0x430(0x28)
	struct FDBDTunableRowHandle _pumpkinTrickChance; // 0x458(0x28)
	struct FDBDTunableRowHandle _pumpkinTreatDuration; // 0x480(0x28)
	struct FDBDTunableRowHandle _pumpkinTrickDuration; // 0x4a8(0x28)
	struct FDBDTunableRowHandle _pumpkinSpeedBoost; // 0x4d0(0x28)
	struct FDBDTunableRowHandle _pumpkinSpeedDebuff; // 0x4f8(0x28)
	struct UStatusEffect* _pumpkinTreatEffect; // 0x520(0x08)
	struct UStatusEffect* _pumpkinTrickEffect; // 0x528(0x08)
	struct UStatusEffect* _pumpkinStatusEffect; // 0x530(0x08)

	void OnInteractionCompleted(struct ADBDPlayer* interactingPlayer); // Function Halloween2021.Pumpkin.OnInteractionCompleted // (Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStoppedInteracting(); // Function Halloween2021.Pumpkin.Cosmetic_OnStoppedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnStartedInteracting(struct ADBDPlayer* interactingPlayer, float interactionDuration); // Function Halloween2021.Pumpkin.Cosmetic_OnStartedInteracting // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnIntroCompleted(); // Function Halloween2021.Pumpkin.Cosmetic_OnIntroCompleted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
	void Cosmetic_OnInteractionCompleted(struct ADBDPlayer* interactingPlayer); // Function Halloween2021.Pumpkin.Cosmetic_OnInteractionCompleted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Halloween2021.PumpkinInteraction
// Size: 0x790 (Inherited: 0x760)
struct UPumpkinInteraction : UChargeableInteractionDefinition {
	char pad_760[0x30]; // 0x760(0x30)
};

