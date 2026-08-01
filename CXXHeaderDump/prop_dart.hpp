#ifndef UE4SS_SDK_prop_dart_HPP
#define UE4SS_SDK_prop_dart_HPP

class Aprop_dart_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UvelocityStuck_C* velocityStuck;                                            // 0x0370 (size: 0x8)
    bool Active;                                                                      // 0x0378 (size: 0x1)

    void afterplay();
    void thrown(class AmainPlayer_C* Player);
    void throw();
    void BndEvt__prop_dart_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_prop_dart(int32 EntryPoint);
}; // Size: 0x379

#endif
