#ifndef UE4SS_SDK_prop_birdnest_HPP
#define UE4SS_SDK_prop_birdnest_HPP

class Aprop_birdnest_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0370 (size: 0x8)

    void Spawn(float Weight, float Up, FName prop);
    void genEgg();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_birdnest(int32 EntryPoint);
}; // Size: 0x378

#endif
