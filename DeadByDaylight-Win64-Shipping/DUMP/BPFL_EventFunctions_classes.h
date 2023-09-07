// BlueprintGeneratedClass BPFL_EventFunctions.BPFL_EventFunctions_C
// Size: 0x30 (Inherited: 0x30)
struct UBPFL_EventFunctions_C : UBlueprintFunctionLibrary {

	void UnregisterEventListener(struct FGameEventDispatcherHandleBP Game Event Delegate Handle, struct UObject* __WorldContext); // Function BPFL_EventFunctions.BPFL_EventFunctions_C.UnregisterEventListener // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void LocallyDispatchEvent(struct FGameplayTag gameEventType, struct ADBDPlayer* Instigator, struct AActor* Target, float Custom Value, struct UObject* __WorldContext); // Function BPFL_EventFunctions.BPFL_EventFunctions_C.LocallyDispatchEvent // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void RemotelyDispatchEvent(struct FGameplayTag gameEventType, struct ADBDPlayer* Instigator, struct AActor* Target, float Custom Value, struct UObject* __WorldContext); // Function BPFL_EventFunctions.BPFL_EventFunctions_C.RemotelyDispatchEvent // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
	void RegisterEventListener(struct FDelegate Game Event Delegate, struct FGameplayTag Filter, struct UObject* __WorldContext, struct FGameEventDispatcherHandleBP& GameEventDispatcherHandle); // Function BPFL_EventFunctions.BPFL_EventFunctions_C.RegisterEventListener // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x5e02c90
};

