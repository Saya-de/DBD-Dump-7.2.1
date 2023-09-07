// ScriptStruct DBDVideoPlayer.VideoThumbnailProperties
// Size: 0x50 (Inherited: 0x08)
struct FVideoThumbnailProperties : FDBDTableRowBase {
	struct FName _id; // 0x08(0x0c)
	bool _hasAudio; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector2D _size; // 0x18(0x08)
	struct TSoftObjectPtr<UMediaSource> _source; // 0x20(0x30)
};

