// Class SentryIo.SentryIoBaseSubsystem
// Size: 0x38 (Inherited: 0x38)
struct USentryIoBaseSubsystem : UGameInstanceSubsystem {
};

// Class SentryIo.SentryIoLinuxSubsystem
// Size: 0xd8 (Inherited: 0x38)
struct USentryIoLinuxSubsystem : USentryIoBaseSubsystem {
	char pad_38[0xa0]; // 0x38(0xa0)
};

// Class SentryIo.SentryIoSubsystem
// Size: 0x48 (Inherited: 0x38)
struct USentryIoSubsystem : USentryIoBaseSubsystem {
	char pad_38[0x10]; // 0x38(0x10)
};

