#ifndef UE4SS_SDK_prop_cubicle_HPP
#define UE4SS_SDK_prop_cubicle_HPP

class Aprop_cubicle_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UChildActorComponent* obstacle3;                                            // 0x0370 (size: 0x8)
    class UChildActorComponent* obstacle2;                                            // 0x0378 (size: 0x8)
    class UChildActorComponent* obstacle1;                                            // 0x0380 (size: 0x8)
    class UChildActorComponent* obstacle;                                             // 0x0388 (size: 0x8)
    bool instaBreak;                                                                  // 0x0390 (size: 0x1)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_cubicle(int32 EntryPoint);
}; // Size: 0x391

#endif
