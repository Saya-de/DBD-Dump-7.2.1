// Class FiniteStateMachine.FiniteStateMachine
// Size: 0xe8 (Inherited: 0xb8)
struct UFiniteStateMachine : UActorComponent {
	struct UFSM_State* _defaultStateClass; // 0xb8(0x08)
	struct UFSM_State* _currentState; // 0xc0(0x08)
	enum class EFiniteStateMachineStatus _currentStateMachineStatus; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UObject* _stateMachineOwner; // 0xd0(0x08)
	struct TArray<struct UFSM_State*> _stateInstances; // 0xd8(0x10)
};

// Class FiniteStateMachine.FSM_Condition
// Size: 0x38 (Inherited: 0x38)
struct UFSM_Condition : UDataAsset {
};

// Class FiniteStateMachine.FSM_AndCondition
// Size: 0x48 (Inherited: 0x38)
struct UFSM_AndCondition : UFSM_Condition {
	struct TArray<struct UFSM_Condition*> _conditions; // 0x38(0x10)
};

// Class FiniteStateMachine.FSM_HasStateRanForXSecondsCondition
// Size: 0x60 (Inherited: 0x38)
struct UFSM_HasStateRanForXSecondsCondition : UFSM_Condition {
	struct FDBDTunableRowHandle _minTimeInSecondsToSatisfyCondition; // 0x38(0x28)
};

// Class FiniteStateMachine.FSM_NotCondition
// Size: 0x40 (Inherited: 0x38)
struct UFSM_NotCondition : UFSM_Condition {
	struct UFSM_Condition* _condition; // 0x38(0x08)
};

// Class FiniteStateMachine.FSM_OrCondition
// Size: 0x48 (Inherited: 0x38)
struct UFSM_OrCondition : UFSM_Condition {
	struct TArray<struct UFSM_Condition*> _conditions; // 0x38(0x10)
};

// Class FiniteStateMachine.FSM_RefCondition
// Size: 0x40 (Inherited: 0x38)
struct UFSM_RefCondition : UFSM_Condition {
	struct UFSM_Condition* _refcondition; // 0x38(0x08)
};

// Class FiniteStateMachine.FSM_State
// Size: 0x78 (Inherited: 0x30)
struct UFSM_State : UObject {
	struct FName _stateName; // 0x30(0x0c)
	bool _shouldTick; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UFSM_State* _defaultChildStateClass; // 0x40(0x08)
	struct TArray<struct UFSM_Transition*> _transitions; // 0x48(0x10)
	struct UFiniteStateMachine* _stateMachine; // 0x58(0x08)
	struct UFSM_State* _parentState; // 0x60(0x08)
	struct UFSM_State* _currentChildState; // 0x68(0x08)
	float _startTimestamp; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class FiniteStateMachine.FSM_Transition
// Size: 0x60 (Inherited: 0x38)
struct UFSM_Transition : UDataAsset {
	struct FName _transitionName; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct UFSM_State* _transitionStateClass; // 0x48(0x08)
	struct TArray<struct UFSM_Condition*> _conditions; // 0x50(0x10)
};

