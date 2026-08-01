#ifndef UE4SS_SDK_prop_map_HPP
#define UE4SS_SDK_prop_map_HPP

class Aprop_map_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0370 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0378 (size: 0x8)
    class Uui_minimap_C* minimap;                                                     // 0x0380 (size: 0x8)

    void OnNotifyEnd_1BF788334BE9A102B33746BB6D4880F8(FName NotifyName);
    void OnNotifyBegin_1BF788334BE9A102B33746BB6D4880F8(FName NotifyName);
    void OnInterrupted_1BF788334BE9A102B33746BB6D4880F8(FName NotifyName);
    void OnBlendOut_1BF788334BE9A102B33746BB6D4880F8(FName NotifyName);
    void OnCompleted_1BF788334BE9A102B33746BB6D4880F8(FName NotifyName);
    void OnNotifyEnd_26407029439BD8B1D2873EAE3E829D0A(FName NotifyName);
    void OnNotifyBegin_26407029439BD8B1D2873EAE3E829D0A(FName NotifyName);
    void OnInterrupted_26407029439BD8B1D2873EAE3E829D0A(FName NotifyName);
    void OnBlendOut_26407029439BD8B1D2873EAE3E829D0A(FName NotifyName);
    void OnCompleted_26407029439BD8B1D2873EAE3E829D0A(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_map(int32 EntryPoint);
}; // Size: 0x388

#endif
