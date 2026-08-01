#ifndef UE4SS_SDK_lib_converters_HPP
#define UE4SS_SDK_lib_converters_HPP

class Ulib_converters_C : public UBlueprintFunctionLibrary
{

    void filetypeToIcon(FString fileType, class UObject* __WorldContext, class UTexture2D*& tex);
    void getTireDamage(int32 Level, class UObject* __WorldContext, class UMaterialInstance*& inst);
}; // Size: 0x28

#endif
