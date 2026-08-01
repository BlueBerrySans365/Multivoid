#ifndef UE4SS_SDK_prop_dreamplush_HPP
#define UE4SS_SDK_prop_dreamplush_HPP

class Aprop_dreamplush_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* eff_eye2;                                         // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_eye1;                                         // 0x0378 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0380 (size: 0x8)
    class USphereComponent* dreamrad;                                                 // 0x0388 (size: 0x8)
    bool isEvil;                                                                      // 0x0390 (size: 0x1)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void upd();
    void BndEvt__prop_dreamplush_dreamrad_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_dreamplush_dreamrad_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void enteredTheWater();
    void ignite(float fuel);
    void fireDamage(float Damage);
    void ExecuteUbergraph_prop_dreamplush(int32 EntryPoint);
}; // Size: 0x391

#endif
