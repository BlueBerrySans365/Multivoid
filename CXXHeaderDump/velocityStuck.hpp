#ifndef UE4SS_SDK_velocityStuck_HPP
#define UE4SS_SDK_velocityStuck_HPP

class UvelocityStuck_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class AActor* Owner;                                                              // 0x00B8 (size: 0x8)
    class UPrimitiveComponent* comp;                                                  // 0x00C0 (size: 0x8)
    class Aprop_C* prop;                                                              // 0x00C8 (size: 0x8)
    FVector vec;                                                                      // 0x00D0 (size: 0xC)
    class UPrimitiveComponent* ocomp;                                                 // 0x00E0 (size: 0x8)
    class AActor* oac;                                                                // 0x00E8 (size: 0x8)
    float thr;                                                                        // 0x00F0 (size: 0x4)
    bool Abs;                                                                         // 0x00F4 (size: 0x1)
    bool flip;                                                                        // 0x00F5 (size: 0x1)
    float Threshold;                                                                  // 0x00F8 (size: 0x4)

    void Hit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Init();
    void dd(class AActor* DestroyedActor);
    void ExecuteUbergraph_velocityStuck(int32 EntryPoint);
}; // Size: 0xFC

#endif
