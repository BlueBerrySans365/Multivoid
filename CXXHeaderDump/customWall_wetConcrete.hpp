#ifndef UE4SS_SDK_customWall_wetConcrete_HPP
#define UE4SS_SDK_customWall_wetConcrete_HPP

class AcustomWall_wetConcrete_C : public AcustomWall_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    float dryTime;                                                                    // 0x0328 (size: 0x4)
    float timeToDry;                                                                  // 0x032C (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_customWall_wetConcrete(int32 EntryPoint);
}; // Size: 0x330

#endif
