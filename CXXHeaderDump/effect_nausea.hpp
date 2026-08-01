#ifndef UE4SS_SDK_effect_nausea_HPP
#define UE4SS_SDK_effect_nausea_HPP

class Aeffect_nausea_C : public Aeffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class Uui_ariralVaccine_C* Widget;                                                // 0x0270 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_effect_nausea(int32 EntryPoint);
}; // Size: 0x278

#endif
