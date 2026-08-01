#ifndef UE4SS_SDK_prop_firetankGastank_HPP
#define UE4SS_SDK_prop_firetankGastank_HPP

class Aprop_firetankGastank_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float fuel;                                                                       // 0x0370 (size: 0x4)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void refuel(class Aprop_gascan_C* gascan);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_firetankGastank(int32 EntryPoint);
}; // Size: 0x374

#endif
