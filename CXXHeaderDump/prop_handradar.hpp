#ifndef UE4SS_SDK_prop_handradar_HPP
#define UE4SS_SDK_prop_handradar_HPP

class Aprop_handradar_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0370 (size: 0x8)
    class Uui_handradar_C* Hand Radar;                                                // 0x0378 (size: 0x8)

    void OnNotifyEnd_24CE38C74EA5F51BE312D5B987A72F72(FName NotifyName);
    void OnNotifyBegin_24CE38C74EA5F51BE312D5B987A72F72(FName NotifyName);
    void OnInterrupted_24CE38C74EA5F51BE312D5B987A72F72(FName NotifyName);
    void OnBlendOut_24CE38C74EA5F51BE312D5B987A72F72(FName NotifyName);
    void OnCompleted_24CE38C74EA5F51BE312D5B987A72F72(FName NotifyName);
    void OnNotifyEnd_3D095B7742ACA77CDF23DA915B159D1D(FName NotifyName);
    void OnNotifyBegin_3D095B7742ACA77CDF23DA915B159D1D(FName NotifyName);
    void OnInterrupted_3D095B7742ACA77CDF23DA915B159D1D(FName NotifyName);
    void OnBlendOut_3D095B7742ACA77CDF23DA915B159D1D(FName NotifyName);
    void OnCompleted_3D095B7742ACA77CDF23DA915B159D1D(FName NotifyName);
    void ReceiveBeginPlay();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_handradar(int32 EntryPoint);
}; // Size: 0x380

#endif
