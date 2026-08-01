#ifndef UE4SS_SDK_prop_coingun_HPP
#define UE4SS_SDK_prop_coingun_HPP

class Aprop_coingun_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    FVector rnd(class UStaticMeshComponent* InputPin, class UPrimitiveComponent* C);
    void sell(int32 Index, class UPrimitiveComponent* comp);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_coingun(int32 EntryPoint);
}; // Size: 0x370

#endif
