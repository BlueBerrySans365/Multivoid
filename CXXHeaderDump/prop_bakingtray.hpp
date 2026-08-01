#ifndef UE4SS_SDK_prop_bakingtray_HPP
#define UE4SS_SDK_prop_bakingtray_HPP

class Aprop_bakingtray_C : public Aprop_openContainer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)

    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_bakingtray(int32 EntryPoint);
}; // Size: 0x3B8

#endif
