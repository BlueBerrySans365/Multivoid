#ifndef UE4SS_SDK_prop_glue_HPP
#define UE4SS_SDK_prop_glue_HPP

class Aprop_glue_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UArrowComponent* glue;                                                      // 0x0370 (size: 0x8)
    bool glued;                                                                       // 0x0378 (size: 0x1)

    void obj(const TArray<TEnumAsByte<EObjectTypeQuery>>& OutputPin);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_glue(int32 EntryPoint);
}; // Size: 0x379

#endif
