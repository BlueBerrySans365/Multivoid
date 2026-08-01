#ifndef UE4SS_SDK_ufoDropper_pig_HPP
#define UE4SS_SDK_ufoDropper_pig_HPP

class AufoDropper_pig_C : public AufoDropper_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ufoDropper_pig(int32 EntryPoint);
}; // Size: 0x2E0

#endif
