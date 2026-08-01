#ifndef UE4SS_SDK_eriePlushLive_good_HPP
#define UE4SS_SDK_eriePlushLive_good_HPP

class AeriePlushLive_good_C : public AeriePlushLive_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06F8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0700 (size: 0x8)

    void ReceiveBeginPlay();
    void CustomEvent_0();
    void ExecuteUbergraph_eriePlushLive_good(int32 EntryPoint);
}; // Size: 0x708

#endif
