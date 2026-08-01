#ifndef UE4SS_SDK_waterVolume_spawnable_HPP
#define UE4SS_SDK_waterVolume_spawnable_HPP

class AwaterVolume_spawnable_C : public AwaterVolume_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_waterVolume_spawnable(int32 EntryPoint);
}; // Size: 0x310

#endif
