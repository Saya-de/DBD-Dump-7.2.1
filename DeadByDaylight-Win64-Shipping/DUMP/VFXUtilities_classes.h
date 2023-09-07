// Class VFXUtilities.BaseVFX
// Size: 0x238 (Inherited: 0x230)
struct ABaseVFX : AActor {
	bool _shouldLoadOnServer; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// Class VFXUtilities.VFXUtilities
// Size: 0x30 (Inherited: 0x30)
struct UVFXUtilities : UBlueprintFunctionLibrary {

	void SetParticleSystemsActive(struct TSet<struct UFXSystemComponent*> particleSystems, bool Active, bool Reset); // Function VFXUtilities.VFXUtilities.SetParticleSystemsActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x82d78b0
	void SetParticleSystemActive(struct UFXSystemComponent* ParticleSystem, bool Active, bool Reset); // Function VFXUtilities.VFXUtilities.SetParticleSystemActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x82d77a0
};

