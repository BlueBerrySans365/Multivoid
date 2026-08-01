#ifndef UE4SS_SDK_comp_emf_HPP
#define UE4SS_SDK_comp_emf_HPP

class Ucomp_emf_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class USphereComponent* Radius;                                                   // 0x00B8 (size: 0x8)
    TArray<class AActor*> InRadius;                                                   // 0x00C0 (size: 0x10)
    Fcomp_emf_CReturnSignal returnSignal;                                             // 0x00D0 (size: 0x10)
    void returnSignal(float signalStrength);
    bool Active;                                                                      // 0x00E0 (size: 0x1)
    TArray<class Ucomp_paranormal_C*> comps;                                          // 0x00E8 (size: 0x10)

    void Count(float& signalStrength);
    void assign(class USphereComponent* radiusComponent);
    void overlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void endOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void check();
    void ExecuteUbergraph_comp_emf(int32 EntryPoint);
    void returnSignal__DelegateSignature(float signalStrength);
}; // Size: 0xF8

#endif
