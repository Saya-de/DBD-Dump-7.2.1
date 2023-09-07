// ScriptStruct Customization.EquippedPlayerCustomization
// Size: 0x38 (Inherited: 0x00)
struct FEquippedPlayerCustomization {
	struct FCharacterCustomization _equippedCustomization; // 0x00(0x24)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FCharmIdSlot> _equippedCharms; // 0x28(0x10)
};

// ScriptStruct Customization.CharmIdSlot
// Size: 0x10 (Inherited: 0x00)
struct FCharmIdSlot {
	int8_t slotIndex; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName CharmId; // 0x04(0x0c)
};

// ScriptStruct Customization.CharacterCustomization
// Size: 0x24 (Inherited: 0x00)
struct FCharacterCustomization {
	struct FName Head; // 0x00(0x0c)
	struct FName TorsoOrBody; // 0x0c(0x0c)
	struct FName LegsOrWeapon; // 0x18(0x0c)
};

