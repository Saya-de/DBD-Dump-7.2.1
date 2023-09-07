// Enum ScaleformUI.GFxHitTestType
enum class GFxHitTestType : uint8 {
	HitTest_Bounds = 0,
	HitTest_Shapes = 1,
	HitTest_ButtonEvents = 2,
	HitTest_ShapesNoInvisible = 3,
	HitTest_MAX = 4
};

// Enum ScaleformUI.EGFxTimingMode
enum class EGFxTimingMode : uint8 {
	Game = 0,
	Real = 1,
	EGFxTimingMode_MAX = 2
};

// Enum ScaleformUI.EGFxRenderTextureMode
enum class EGFxRenderTextureMode : uint8 {
	Opaque = 0,
	Alpha = 1,
	AlphaComposite = 2,
	EGFxRenderTextureMode_MAX = 3
};

// Enum ScaleformUI.EGFxScaleMode
enum class EGFxScaleMode : uint8 {
	NoScale = 0,
	ShowAll = 1,
	ExactFit = 2,
	NoBorder = 3,
	EGFxScaleMode_MAX = 4
};

// Enum ScaleformUI.EGFxAlign
enum class EGFxAlign : uint8 {
	Center = 0,
	TopCenter = 1,
	BottomCenter = 2,
	CenterLeft = 3,
	CenterRight = 4,
	TopLeft = 5,
	TopRight = 6,
	BottomLeft = 7,
	BottomRight = 8,
	EGFxAlign_MAX = 9
};

// Enum ScaleformUI.EASType
enum class EASType : uint8 {
	Undefined = 0,
	Null = 1,
	Boolean = 2,
	Int = 3,
	Number = 4,
	String = 5,
	StringW = 6,
	Object = 7,
	DisplayObject = 8,
	EASType_MAX = 9
};

// Enum ScaleformUI.FlashTextureRescale
enum class FlashTextureRescale : uint8 {
	FlashTextureScale_High = 0,
	FlashTextureScale_Low = 1,
	FlashTextureScale_NextLow = 2,
	FlashTextureScale_Mult4 = 3,
	FlashTextureScale_None = 4,
	FlashTextureScale_MAX = 5
};

// ScriptStruct ScaleformUI.GCReference
// Size: 0x10 (Inherited: 0x00)
struct FGCReference {
	struct UObject* Object; // 0x00(0x08)
	int32_t RefCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ScaleformUI.GFxWidgetBinding
// Size: 0x18 (Inherited: 0x00)
struct FGFxWidgetBinding {
	struct FName WidgetName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UObject* WidgetClass; // 0x10(0x08)
};

// ScriptStruct ScaleformUI.ExternalTexture
// Size: 0x18 (Inherited: 0x00)
struct FExternalTexture {
	struct FString Resource; // 0x00(0x10)
	struct UTexture* Texture; // 0x10(0x08)
};

// ScriptStruct ScaleformUI.ASPerspectiveTransform
// Size: 0x40 (Inherited: 0x00)
struct FASPerspectiveTransform {
	struct FVector4 Row0; // 0x00(0x10)
	struct FVector4 Row1; // 0x10(0x10)
	struct FVector4 Row2; // 0x20(0x10)
	struct FVector4 Row3; // 0x30(0x10)
};

// ScriptStruct ScaleformUI.ASColorTransform
// Size: 0x20 (Inherited: 0x00)
struct FASColorTransform {
	struct FLinearColor Multiply; // 0x00(0x10)
	struct FLinearColor Add; // 0x10(0x10)
};

// ScriptStruct ScaleformUI.ASDisplayInfo
// Size: 0x2c (Inherited: 0x00)
struct FASDisplayInfo {
	struct FVector position; // 0x00(0x0c)
	struct FVector Scale; // 0x0c(0x0c)
	float Rotation; // 0x18(0x04)
	float XRotation; // 0x1c(0x04)
	float YRotation; // 0x20(0x04)
	float alpha; // 0x24(0x04)
	bool visible; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct ScaleformUI.ASValue
// Size: 0x38 (Inherited: 0x00)
struct FASValue {
	enum class EASType ASType; // 0x00(0x01)
	bool ASBoolean; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t ASInt; // 0x04(0x04)
	float ASNumber; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ASString; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
	struct UGFxObject* ASObject; // 0x30(0x08)
};

