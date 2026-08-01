#ifndef UE4SS_SDK_prop_keycard_HPP
#define UE4SS_SDK_prop_keycard_HPP

class Aprop_keycard_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    FString Open;                                                                     // 0x0370 (size: 0x10)
    class Ahook_C* hook;                                                              // 0x0380 (size: 0x8)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void hooked(class Ahook_C* hook);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_keycard(int32 EntryPoint);
}; // Size: 0x388

#endif
