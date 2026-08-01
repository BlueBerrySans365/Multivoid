#ifndef UE4SS_SDK_prop_breadmold_HPP
#define UE4SS_SDK_prop_breadmold_HPP

class Aprop_breadmold_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_breadmold(int32 EntryPoint);
}; // Size: 0x370

#endif
