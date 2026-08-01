#ifndef UE4SS_SDK_prop_ABfriend_HPP
#define UE4SS_SDK_prop_ABfriend_HPP

class Aprop_ABfriend_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0370 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0378 (size: 0x8)
    class UStaticMeshComponent* ab_friend_crys;                                       // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0388 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void ExecuteUbergraph_prop_ABfriend(int32 EntryPoint);
}; // Size: 0x390

#endif
