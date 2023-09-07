// Enum AnimationUtilities.EEditorCollectionType
enum class EEditorCollectionType : uint8 {
	Animation = 0,
	BlendSpace = 1,
	Selector = 2,
	EEditorCollectionType_MAX = 3
};

// ScriptStruct AnimationUtilities.AnimationMontageDescriptor
// Size: 0x20 (Inherited: 0x00)
struct FAnimationMontageDescriptor {
	struct FName MontageID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> Tags; // 0x10(0x10)
};

// ScriptStruct AnimationUtilities.MontagePlaybackDefinition
// Size: 0x28 (Inherited: 0x00)
struct FMontagePlaybackDefinition {
	struct FAnimationMontageDescriptor Descriptor; // 0x00(0x20)
	float PlayRate; // 0x20(0x04)
	bool Follower; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AnimationUtilities.SocketOrBoneCache
// Size: 0x60 (Inherited: 0x00)
struct FSocketOrBoneCache {
	struct TSoftObjectPtr<UAnimSequence> _sourceAnimation; // 0x00(0x30)
	struct FName _socketName; // 0x30(0x0c)
	struct FName _notifyName; // 0x3c(0x0c)
	struct FVector _location; // 0x48(0x0c)
	struct FRotator _rotation; // 0x54(0x0c)
};

// ScriptStruct AnimationUtilities.MontageStopDefinition
// Size: 0x28 (Inherited: 0x00)
struct FMontageStopDefinition {
	struct FAnimationMontageDescriptor Descriptor; // 0x00(0x20)
	float BlendOutTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AnimationUtilities.EditorAnimCollectionDisplay
// Size: 0xf0 (Inherited: 0x00)
struct FEditorAnimCollectionDisplay {
	struct TMap<struct FGameplayTag, struct FEditorCollectionMetadata> _taggedAnimSequencesMetadata; // 0x00(0x50)
	struct TMap<struct FGameplayTag, struct FEditorCollectionMetadata> _taggedAnimBlendspacesMetadata; // 0x50(0x50)
	struct TMap<struct FGameplayTag, struct FEditorCollectionMetadata> _taggedAnimSelectorsMetadata; // 0xa0(0x50)
};

// ScriptStruct AnimationUtilities.EditorCollectionMetadata
// Size: 0x01 (Inherited: 0x00)
struct FEditorCollectionMetadata {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct AnimationUtilities.AnimSequenceSelector
// Size: 0x18 (Inherited: 0x00)
struct FAnimSequenceSelector {
	struct UAnimSequence* _selected; // 0x00(0x08)
	struct TArray<struct FTaggedAnimSequence> _taggedSequences; // 0x08(0x10)
};

// ScriptStruct AnimationUtilities.TaggedAnimSequence
// Size: 0x28 (Inherited: 0x00)
struct FTaggedAnimSequence {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	struct FGameplayTagContainer Tags; // 0x08(0x20)
};

// ScriptStruct AnimationUtilities.TaggedAnimCollection
// Size: 0x40 (Inherited: 0x00)
struct FTaggedAnimCollection {
	struct FGameplayTag Tag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<UAnimCollection> AnimCollection; // 0x10(0x30)
};

