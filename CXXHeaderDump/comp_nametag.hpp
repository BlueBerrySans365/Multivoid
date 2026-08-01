#ifndef UE4SS_SDK_comp_nametag_HPP
#define UE4SS_SDK_comp_nametag_HPP

class Ucomp_nametag_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class Aprop_C* prop;                                                              // 0x00B8 (size: 0x8)
    class Uui_hovertextNametag_C* Widget;                                             // 0x00C0 (size: 0x8)
    class USphereComponent* sphereColl;                                               // 0x00C8 (size: 0x8)
    class AActor* Owner;                                                              // 0x00D0 (size: 0x8)
    class UPrimitiveComponent* Component;                                             // 0x00D8 (size: 0x8)
    ESlateVisibility defaultVisibility;                                               // 0x00E0 (size: 0x1)
    float Scale;                                                                      // 0x00E4 (size: 0x4)

    void ReceiveBeginPlay();
    void Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void endOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Dest(class AActor* DestroyedActor);
    void ExecuteUbergraph_comp_nametag(int32 EntryPoint);
}; // Size: 0xE8

#endif
