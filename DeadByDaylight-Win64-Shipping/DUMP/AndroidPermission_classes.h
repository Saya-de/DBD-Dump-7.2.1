// Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x50 (Inherited: 0x30)
struct UAndroidPermissionCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary {

	bool CheckPermission(struct FString permission); // Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4a11160
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString>& Permissions); // Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4a11090
};

