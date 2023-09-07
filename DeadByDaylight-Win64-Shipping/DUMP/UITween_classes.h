// Class UITween.UITween
// Size: 0x50 (Inherited: 0x38)
struct UUITween : UGameInstanceSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct UUITweenInstance*> ActiveInstances; // 0x40(0x10)

	struct UUITweenInstance* Create(struct UWidget* targetWidget, float Duration, float Delay, enum class EEasingType Easing); // Function UITween.UITween.Create // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x46d9900
	void Clear(struct UWidget* targetWidget); // Function UITween.UITween.Clear // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x46d9880
};

// Class UITween.UITweenMaterialScalarProperties
// Size: 0x58 (Inherited: 0x30)
struct UUITweenMaterialScalarProperties : UObject {
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)
};

// Class UITween.UITweenMaterialVectorProperties
// Size: 0x78 (Inherited: 0x30)
struct UUITweenMaterialVectorProperties : UObject {
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x30(0x08)
	char pad_38[0x40]; // 0x38(0x40)
};

// Class UITween.UITweenInstance
// Size: 0x118 (Inherited: 0x30)
struct UUITweenInstance : UObject {
	struct FMulticastInlineDelegate TweenCompletedDelegate; // 0x30(0x10)
	struct FMulticastInlineDelegate TweenUpdatedDelegate; // 0x40(0x10)
	char pad_50[0x98]; // 0x50(0x98)
	struct TArray<struct UUITweenMaterialScalarProperties*> _materialScalarProperties; // 0xe8(0x10)
	struct TArray<struct UUITweenMaterialVectorProperties*> _materialVectorProperties; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)

	struct UUITweenInstance* TweenFloatProperty(float startValue, float targetValue); // Function UITween.UITweenInstance.TweenFloatProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x46da680
	struct UUITweenInstance* ToTranslation(struct FVector2D targetValue); // Function UITween.UITweenInstance.ToTranslation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46da5e0
	struct UUITweenInstance* ToScale(struct FVector2D targetValue); // Function UITween.UITweenInstance.ToScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46da540
	struct UUITweenInstance* ToReset(); // Function UITween.UITweenInstance.ToReset // (Final|Native|Public|BlueprintCallable) // @ game+0x46da4c0
	struct UUITweenInstance* ToOpacity(float targetValue); // Function UITween.UITweenInstance.ToOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x46da420
	struct UUITweenInstance* ToMaterialVectorParameter(struct UMaterialInstanceDynamic* targetMaterialInstance, struct FName targetParameterName, struct FLinearColor targetValue); // Function UITween.UITweenInstance.ToMaterialVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46da2d0
	struct UUITweenInstance* ToMaterialScalarParameter(struct UMaterialInstanceDynamic* targetMaterialInstance, struct FName targetParameterName, float targetValue); // Function UITween.UITweenInstance.ToMaterialScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x46da190
	struct UUITweenInstance* ToColor(struct FLinearColor targetValue); // Function UITween.UITweenInstance.ToColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46da100
	struct UWidget* GetTargetWidget(); // Function UITween.UITweenInstance.GetTargetWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da0d0
	float GetProgress(); // Function UITween.UITweenInstance.GetProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da0b0
	float GetFloatValue(); // Function UITween.UITweenInstance.GetFloatValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da070
	enum class EEasingType GetEasing(); // Function UITween.UITweenInstance.GetEasing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da050
	float GetDuration(); // Function UITween.UITweenInstance.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da030
	float GetDelay(); // Function UITween.UITweenInstance.GetDelay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x46da010
	struct UUITweenInstance* FromTranslation(struct FVector2D startValue); // Function UITween.UITweenInstance.FromTranslation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46d9f60
	struct UUITweenInstance* FromScale(struct FVector2D startValue); // Function UITween.UITweenInstance.FromScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46d9eb0
	struct UUITweenInstance* FromOpacity(float startValue); // Function UITween.UITweenInstance.FromOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x46d9e10
	struct UUITweenInstance* FromMaterialVectorParameter(struct UMaterialInstanceDynamic* targetMaterialInstance, struct FName targetParameterName, struct FLinearColor targetValue); // Function UITween.UITweenInstance.FromMaterialVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46d9cc0
	struct UUITweenInstance* FromMaterialScalarParameter(struct UMaterialInstanceDynamic* targetMaterialInstance, struct FName targetParameterName, float targetValue); // Function UITween.UITweenInstance.FromMaterialScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x46d9b80
	struct UUITweenInstance* FromColor(struct FLinearColor startValue); // Function UITween.UITweenInstance.FromColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x46d9ae0
	struct UUITweenInstance* Easing(enum class EEasingType InType); // Function UITween.UITweenInstance.Easing // (Final|Native|Public|BlueprintCallable) // @ game+0x46d9a50
	void Begin(); // Function UITween.UITweenInstance.Begin // (Final|Native|Public|BlueprintCallable) // @ game+0x46d9860
};

