#ifndef UE4SS_SDK_effect_bloodLoss_HPP
#define UE4SS_SDK_effect_bloodLoss_HPP

class Aeffect_bloodLoss_C : public Aeffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class Uui_bloodLossBlur_C* widgetBlur;                                            // 0x0270 (size: 0x8)

    void getData(Fstruct_save& Data);
    void ReceiveBeginPlay();
    void dropTimer();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void ExecuteUbergraph_effect_bloodLoss(int32 EntryPoint);
}; // Size: 0x278

#endif
