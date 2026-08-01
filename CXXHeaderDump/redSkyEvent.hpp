#ifndef UE4SS_SDK_redSkyEvent_HPP
#define UE4SS_SDK_redSkyEvent_HPP

class AredSkyEvent_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    bool isred;                                                                       // 0x0230 (size: 0x1)

    void set(bool isred);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_redSkyEvent(int32 EntryPoint);
}; // Size: 0x231

#endif
