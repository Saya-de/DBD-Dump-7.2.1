// Class Competence.BaseModifierContainer
// Size: 0xf8 (Inherited: 0xb8)
struct UBaseModifierContainer : UActorComponent {
	char pad_B8[0x20]; // 0xb8(0x20)
	struct FName _id; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FModifierReplicatedEventConditionData _eventDrivenConditionData; // 0xe8(0x10)

	void OnRep_EventDrivenConditionData_Internal(struct FModifierReplicatedEventConditionData& oldReplicatedCondition); // Function Competence.BaseModifierContainer.OnRep_EventDrivenConditionData_Internal // (Final|Native|Private|HasOutParms) // @ game+0x823e890
	bool IsApplicable(); // Function Competence.BaseModifierContainer.IsApplicable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5a06e00
	struct UEventDrivenModifierCondition* CreateAndSetEventDrivenCondition(struct UEventDrivenModifierCondition* conditionType); // Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x823e7f0
	void Authority_OnInstantiateModifierConditions(); // Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x5e02c90
};

// Class Competence.BaseModifierCondition
// Size: 0xd0 (Inherited: 0xb8)
struct UBaseModifierCondition : UActorComponent {
	struct UBaseModifierContainer* _owningModifier; // 0xb8(0x08)
	struct UModifierSubjectProvider* _subjectProvider; // 0xc0(0x08)
	struct UObject* _subjectProviderClass; // 0xc8(0x08)

	void SetSubjectProviderClass(struct UObject* subjectProviderClass); // Function Competence.BaseModifierCondition.SetSubjectProviderClass // (Final|Native|Public|BlueprintCallable) // @ game+0x823e370
	void OnRep_SubjectProviderClass(); // Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass // (Final|Native|Private) // @ game+0x823e350
	void OnRep_OwningModifier(); // Function Competence.BaseModifierCondition.OnRep_OwningModifier // (Final|Native|Private) // @ game+0x823e330
	void InitializeSubjectProviderClass(); // Function Competence.BaseModifierCondition.InitializeSubjectProviderClass // (Native|Event|Protected|BlueprintEvent) // @ game+0x4af1ac0
	struct AActor* GetOwningActor(); // Function Competence.BaseModifierCondition.GetOwningActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x823e300
};

// Class Competence.EventDrivenModifierCondition
// Size: 0xe8 (Inherited: 0xd0)
struct UEventDrivenModifierCondition : UBaseModifierCondition {
	char pad_D0[0x18]; // 0xd0(0x18)
};

// Class Competence.RangeBasedCondition
// Size: 0xf0 (Inherited: 0xe8)
struct URangeBasedCondition : UEventDrivenModifierCondition {
	float _range; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)

	void SetRange(float newRange); // Function Competence.RangeBasedCondition.SetRange // (Final|Native|Public|BlueprintCallable) // @ game+0x8241880
	void OnRep_Range(); // Function Competence.RangeBasedCondition.OnRep_Range // (Final|Native|Private) // @ game+0x8241860
};

// Class Competence.ModifierSubjectProvider
// Size: 0x48 (Inherited: 0x30)
struct UModifierSubjectProvider : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Competence.SingleModifierCondition
// Size: 0xf8 (Inherited: 0xe8)
struct USingleModifierCondition : UEventDrivenModifierCondition {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct UEventDrivenModifierCondition* _condition; // 0xf0(0x08)

	void OnRep_Condition(); // Function Competence.SingleModifierCondition.OnRep_Condition // (Final|Native|Protected) // @ game+0x8241b30
};

// Class Competence.CompositeModifierCondition
// Size: 0x100 (Inherited: 0xe8)
struct UCompositeModifierCondition : UEventDrivenModifierCondition {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct TArray<struct UEventDrivenModifierCondition*> _conditions; // 0xf0(0x10)

	void OnRep_Conditions(); // Function Competence.CompositeModifierCondition.OnRep_Conditions // (Final|Native|Private) // @ game+0x823ece0
};

// Class Competence.AndModifierCondition
// Size: 0x100 (Inherited: 0x100)
struct UAndModifierCondition : UCompositeModifierCondition {
};

// Class Competence.CompetenceDebugger
// Size: 0x50 (Inherited: 0x30)
struct UCompetenceDebugger : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class Competence.ConditionFactory
// Size: 0x30 (Inherited: 0x30)
struct UConditionFactory : UBlueprintFunctionLibrary {

	struct UOrModifierCondition* Or(struct TScriptInterface<IConditionReceiver> ConditionReceiver); // Function Competence.ConditionFactory.Or // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x823f7d0
	struct UNotModifierCondition* Not(struct TScriptInterface<IConditionReceiver> ConditionReceiver); // Function Competence.ConditionFactory.Not // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x823f730
	struct ULingeringModifierCondition* Lingering(struct TScriptInterface<IConditionReceiver> ConditionReceiver, float timeToTrack); // Function Competence.ConditionFactory.Lingering // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x823f640
	struct UIsTimerDoneCondition* IsTimerDone(struct TScriptInterface<IConditionReceiver> ConditionReceiver, struct UTimerObject* Timer); // Function Competence.ConditionFactory.IsTimerDone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x823f550
	struct URangeBasedCondition* CreateRangeBasedConditionWithSubject(struct TScriptInterface<IConditionReceiver> ConditionReceiver, struct URangeBasedCondition* conditionType, float Range, struct UObject* subjectProviderClass); // Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x823f3e0
	struct URangeBasedCondition* CreateRangeBasedCondition(struct TScriptInterface<IConditionReceiver> ConditionReceiver, struct URangeBasedCondition* conditionType, float Range); // Function Competence.ConditionFactory.CreateRangeBasedCondition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x823f2a0
	struct UEventDrivenModifierCondition* CreateAndReceiveConditionWithSubjectForBP(struct TScriptInterface<IConditionReceiver> ConditionReceiver, struct UEventDrivenModifierCondition* conditionType, struct UObject* subjectProviderClass); // Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x823f170
	struct UEventDrivenModifierCondition* CreateAndReceiveConditionForBP(struct TScriptInterface<IConditionReceiver> ConditionReceiver, struct UEventDrivenModifierCondition* conditionType); // Function Competence.ConditionFactory.CreateAndReceiveConditionForBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x823f080
	struct UAndModifierCondition* And(struct TScriptInterface<IConditionReceiver> ConditionReceiver); // Function Competence.ConditionFactory.And // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x823efe0
};

// Class Competence.HasObjectState
// Size: 0x120 (Inherited: 0xe8)
struct UHasObjectState : UEventDrivenModifierCondition {
	struct FGameplayTag _state; // 0xe8(0x0c)
	char pad_F4[0x2c]; // 0xf4(0x2c)

	void SetState(struct FGameplayTag State); // Function Competence.HasObjectState.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0x8240550
};

// Class Competence.HasObjectStateWithMaxDuration
// Size: 0x158 (Inherited: 0x120)
struct UHasObjectStateWithMaxDuration : UHasObjectState {
	char pad_120[0x30]; // 0x120(0x30)
	float _maxDuration; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)

	void SetMaxDuration(float Duration); // Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x8240760
};

// Class Competence.CompetenceFlagProvider
// Size: 0x30 (Inherited: 0x30)
struct UCompetenceFlagProvider : UInterface {
};

// Class Competence.ConditionReceiver
// Size: 0x30 (Inherited: 0x30)
struct UConditionReceiver : UInterface {
};

// Class Competence.ModifierProvider
// Size: 0x30 (Inherited: 0x30)
struct UModifierProvider : UInterface {
};

// Class Competence.IsTimerDoneCondition
// Size: 0xf8 (Inherited: 0xe8)
struct UIsTimerDoneCondition : UEventDrivenModifierCondition {
	struct UTimerObject* _timer; // 0xe8(0x08)
	char pad_F0[0x8]; // 0xf0(0x08)

	void SetTimer(struct UTimerObject* Timer); // Function Competence.IsTimerDoneCondition.SetTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x8240d60
	void OnRep_Timer(); // Function Competence.IsTimerDoneCondition.OnRep_Timer // (Final|Native|Private) // @ game+0x8240d40
};

// Class Competence.LingeringModifierCondition
// Size: 0x130 (Inherited: 0xf8)
struct ULingeringModifierCondition : USingleModifierCondition {
	char pad_F8[0x30]; // 0xf8(0x30)
	float _timeConditionIsTracked; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)

	void OnTimerEnd(); // Function Competence.LingeringModifierCondition.OnTimerEnd // (Final|Native|Private) // @ game+0x82410b0
};

// Class Competence.NotModifierCondition
// Size: 0xf8 (Inherited: 0xf8)
struct UNotModifierCondition : USingleModifierCondition {
};

// Class Competence.OrModifierCondition
// Size: 0x100 (Inherited: 0x100)
struct UOrModifierCondition : UCompositeModifierCondition {
};

// Class Competence.OwnerSubjectProvider
// Size: 0x48 (Inherited: 0x48)
struct UOwnerSubjectProvider : UModifierSubjectProvider {
};

// Class Competence.TestEventDrivenModifierCondition
// Size: 0xe8 (Inherited: 0xe8)
struct UTestEventDrivenModifierCondition : UEventDrivenModifierCondition {
};

// Class Competence.TestObjectStateProviderComponent
// Size: 0xc8 (Inherited: 0xb8)
struct UTestObjectStateProviderComponent : UActorComponent {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UGameplayTagContainerComponent* GameplayTagContainerComponent; // 0xc0(0x08)
};

