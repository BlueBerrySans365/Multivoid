#ifndef UE4SS_SDK_propThrown_HPP
#define UE4SS_SDK_propThrown_HPP

class UpropThrown_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UPrimitiveComponent* Component;                                             // 0x00B8 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x00C0 (size: 0x10)
    FVector lastloc;                                                                  // 0x00D0 (size: 0xC)
    class Aprop_C* prop;                                                              // 0x00E0 (size: 0x8)
    bool canRepeat;                                                                   // 0x00E8 (size: 0x1)

    void Init(class Aprop_C* prop, class UPrimitiveComponent* Component);
    void repeat();
    void throw();
    void fin();
    void hitted(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_propThrown(int32 EntryPoint);
}; // Size: 0xE9

#endif
