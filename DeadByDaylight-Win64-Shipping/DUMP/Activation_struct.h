// Enum Activation.EActivationStrategy
enum class EActivationStrategy : uint8 {
	ActivateIfAnyTagMatches = 0,
	ActivateIfAllTagMatches = 1,
	DeactivateIfAnyTagMatches = 2,
	DeactivateIfAllTagMatches = 3,
	DeactivateWhenDependenciesAreDeactivated = 4,
	EActivationStrategy_MAX = 5
};

// ScriptStruct Activation.ActivationDefinition
// Size: 0x28 (Inherited: 0x00)
struct FActivationDefinition {
	enum class EActivationStrategy _activationStrategy; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FGameplayTagContainer _activationTags; // 0x08(0x20)
};

// ScriptStruct Activation.TestableActivationDefinition
// Size: 0x28 (Inherited: 0x28)
struct FTestableActivationDefinition : FActivationDefinition {
};

// ScriptStruct Activation.DependencyBasedActivationStrategy
// Size: 0x20 (Inherited: 0x00)
struct FDependencyBasedActivationStrategy {
	char pad_0[0x20]; // 0x00(0x20)
};

