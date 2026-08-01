#ifndef UE4SS_SDK_effect_ariralVaccine_HPP
#define UE4SS_SDK_effect_ariralVaccine_HPP

class Aeffect_ariralVaccine_C : public Aeffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class Uui_ariralVaccine_C* Widget;                                                // 0x0270 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_effect_ariralVaccine(int32 EntryPoint);
}; // Size: 0x278

#endif
