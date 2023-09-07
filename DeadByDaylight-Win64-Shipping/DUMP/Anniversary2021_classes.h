// Class Anniversary2021.Anniversary2021EventComponent
// Size: 0xf0 (Inherited: 0xc8)
struct UAnniversary2021EventComponent : URespawningEventComponent {
	struct UInteractionRespawnableTrigger* _interactionRespawnableTrigger; // 0xc8(0x08)
	struct UTimedRespawnableTrigger* _timedRespawnableTrigger; // 0xd0(0x08)
	char pad_D8[0x18]; // 0xd8(0x18)

	void Authority_OnIntroComplete(); // Function Anniversary2021.Anniversary2021EventComponent.Authority_OnIntroComplete // (Final|Native|Private) // @ game+0x4a975a0
};

