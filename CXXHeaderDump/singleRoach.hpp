#ifndef UE4SS_SDK_singleRoach_HPP
#define UE4SS_SDK_singleRoach_HPP

class AsingleRoach_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_singleRoach(int32 EntryPoint);
}; // Size: 0x230

#endif
