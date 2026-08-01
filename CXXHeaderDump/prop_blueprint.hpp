#ifndef UE4SS_SDK_prop_blueprint_HPP
#define UE4SS_SDK_prop_blueprint_HPP

class Aprop_blueprint_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    FText blueprintName;                                                              // 0x0370 (size: 0x18)
    FString Blueprint;                                                                // 0x0388 (size: 0x10)
    FString craftOrigin;                                                              // 0x0398 (size: 0x10)
    FString ingredients;                                                              // 0x03A8 (size: 0x10)

    void ignoreSave(bool& ignoreSave);
    void makeRecipe();
    void skipPreDelete(bool& Skip);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_blueprint(int32 EntryPoint);
}; // Size: 0x3B8

#endif
