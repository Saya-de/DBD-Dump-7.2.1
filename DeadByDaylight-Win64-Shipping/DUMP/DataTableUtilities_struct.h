// ScriptStruct DataTableUtilities.DBDTunableRowHandle
// Size: 0x28 (Inherited: 0x00)
struct FDBDTunableRowHandle {
	struct FDataTableRowHandle _dataTableRowHandle; // 0x00(0x18)
	float _defaultValue; // 0x18(0x04)
	char pad_1C[0xc]; // 0x1c(0x0c)
};

// ScriptStruct DataTableUtilities.DBDTableRowBase
// Size: 0x08 (Inherited: 0x08)
struct FDBDTableRowBase : FTableRowBase {
};

// ScriptStruct DataTableUtilities.DBDTableRowBaseWithId
// Size: 0x18 (Inherited: 0x08)
struct FDBDTableRowBaseWithId : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DataTableUtilities.DataTableProxy
// Size: 0x40 (Inherited: 0x00)
struct FDataTableProxy {
	struct TSoftObjectPtr<UDataTable> AssetPtr; // 0x00(0x30)
	struct UDataTable* _dataTable; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct DataTableUtilities.DBDTunableRowBase
// Size: 0x08 (Inherited: 0x08)
struct FDBDTunableRowBase : FDBDTableRowBase {
};

