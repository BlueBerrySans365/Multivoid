#ifndef UE4SS_SDK_atvMap_HPP
#define UE4SS_SDK_atvMap_HPP

class AatvMap_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0228 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x0248 (size: 0x8)
    class Uui_minimap_C* minimap;                                                     // 0x0250 (size: 0x8)
    class AATV_C* ATV;                                                                // 0x0258 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void checkDist();
    void ExecuteUbergraph_atvMap(int32 EntryPoint);
}; // Size: 0x260

#endif
