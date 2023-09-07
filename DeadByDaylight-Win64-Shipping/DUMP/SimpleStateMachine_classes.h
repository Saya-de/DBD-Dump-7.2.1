// Class SimpleStateMachine.SimpleStateMachineBaseState
// Size: 0x48 (Inherited: 0x30)
struct USimpleStateMachineBaseState : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct USimpleStateMachine* _stateMachine; // 0x40(0x08)
};

// Class SimpleStateMachine.SimpleStateMachineBaseTransition
// Size: 0x50 (Inherited: 0x30)
struct USimpleStateMachineBaseTransition : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct USimpleStateMachine* _stateMachine; // 0x48(0x08)
};

// Class SimpleStateMachine.SimpleStateMachine
// Size: 0x3d8 (Inherited: 0xb8)
struct USimpleStateMachine : UActorComponent {
	char pad_B8[0x18]; // 0xb8(0x18)
	struct USimpleStateMachineBaseState* _defaultStateClass; // 0xd0(0x08)
	struct TSet<struct USimpleStateMachineBaseState*> _stateClasses; // 0xd8(0x50)
	struct TSet<struct USimpleStateMachineBaseTransition*> _transitionsClasses; // 0x128(0x50)
	char pad_178[0x8]; // 0x178(0x08)
	struct USimpleStateMachineBaseState* _defaultState; // 0x180(0x08)
	struct USimpleStateMachineBaseState* _currentState; // 0x188(0x08)
	char pad_190[0x190]; // 0x190(0x190)
	struct TMap<struct FName, struct USimpleStateMachineBaseState*> _states; // 0x320(0x50)
	char pad_370[0x60]; // 0x370(0x60)
	bool _debugPrintState; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
};

