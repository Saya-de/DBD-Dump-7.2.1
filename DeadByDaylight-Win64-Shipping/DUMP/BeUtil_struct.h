// ScriptStruct BeUtil.BeMaterialTexture
// Size: 0x18 (Inherited: 0x00)
struct FBeMaterialTexture {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture* Texture; // 0x10(0x08)
};

// ScriptStruct BeUtil.BeMaterialScalar
// Size: 0x10 (Inherited: 0x00)
struct FBeMaterialScalar {
	struct FName Name; // 0x00(0x0c)
	float Scalar; // 0x0c(0x04)
};

// ScriptStruct BeUtil.BeMaterialVector
// Size: 0x1c (Inherited: 0x00)
struct FBeMaterialVector {
	struct FName Name; // 0x00(0x0c)
	struct FLinearColor Vector; // 0x0c(0x10)
};

