// Class DBDAudio.AmbienceBoxComponent
// Size: 0x4b0 (Inherited: 0x4b0)
struct UAmbienceBoxComponent : UBoxComponent {
};

// Class DBDAudio.AnimNotify_PostInteractionSoundEvent
// Size: 0x78 (Inherited: 0x40)
struct UAnimNotify_PostInteractionSoundEvent : UAnimNotify {
	struct UAkAudioEvent* SoundEvent; // 0x40(0x08)
	struct TSoftClassPtr<UObject> InteractionAudioClass; // 0x48(0x30)
};

// Class DBDAudio.AudioCustomMeshComponent
// Size: 0x550 (Inherited: 0x550)
struct UAudioCustomMeshComponent : UStaticMeshComponent {
};

// Class DBDAudio.AudioUtilities
// Size: 0x30 (Inherited: 0x30)
struct UAudioUtilities : UBlueprintFunctionLibrary {

	void PostAkAudioEvent(struct UAkAudioEvent* AudioEvent); // Function DBDAudio.AudioUtilities.PostAkAudioEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4bbcb20
	void DBD_PostUiEvent(struct UAkAudioEvent* Event); // Function DBDAudio.AudioUtilities.DBD_PostUiEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4bbcb20
	struct UObject* DBD_LoadPersistentBankByAssetPtr(struct TSoftObjectPtr<UAkAudioBank> Bank, struct UObject* WorldContextObject); // Function DBDAudio.AudioUtilities.DBD_LoadPersistentBankByAssetPtr // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4bbc9d0
	void DBD_LoadPersistentBankAsync(struct UAkAudioBank* Bank, struct UObject* WorldContextObject); // Function DBDAudio.AudioUtilities.DBD_LoadPersistentBankAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4bbc910
	void DBD_LoadPersistentBank(struct UAkAudioBank* Bank, struct UObject* WorldContextObject); // Function DBDAudio.AudioUtilities.DBD_LoadPersistentBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4bbc850
};

// Class DBDAudio.InteractionAudioComponent
// Size: 0x120 (Inherited: 0xb8)
struct UInteractionAudioComponent : UActorComponent {
	struct UAkComponent* _audioComponent; // 0xb8(0x08)
	struct FNonTunableStat _audioRadius; // 0xc0(0x60)

	bool PostAkEvent(struct UAkAudioEvent* AkEvent); // Function DBDAudio.InteractionAudioComponent.PostAkEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4bbcd40
};

// Class DBDAudio.LoadAsyncBankData
// Size: 0x40 (Inherited: 0x30)
struct ULoadAsyncBankData : UObject {
	struct UAkAudioBank* Bank; // 0x30(0x08)
	struct USoundBankLoader* SoundBankLoader; // 0x38(0x08)
};

// Class DBDAudio.SoundBankLoader
// Size: 0x80 (Inherited: 0x38)
struct USoundBankLoader : UGameInstanceSubsystem {
	char pad_38[0x28]; // 0x38(0x28)
	struct TArray<struct UAkAudioBank*> _audioBanks; // 0x60(0x10)
	struct TArray<struct ULoadAsyncBankData*> _asyncAudioBanksPendingLoadData; // 0x70(0x10)
};

