#ifndef UE4SS_SDK_comp_photographic_HPP
#define UE4SS_SDK_comp_photographic_HPP

class Ucomp_photographic_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    TEnumAsByte<enum_photographicType::Type> Type;                                    // 0x00B8 (size: 0x1)
    class AActor* Owner;                                                              // 0x00C0 (size: 0x8)
    int32 Size;                                                                       // 0x00C8 (size: 0x4)
    FName Key;                                                                        // 0x00CC (size: 0x8)
    float maxDist;                                                                    // 0x00D4 (size: 0x4)

    void getInfo(Fstruct_photoEntity& debug);
    void ReceiveBeginPlay();
    void Dest(class AActor* DestroyedActor);
    void ExecuteUbergraph_comp_photographic(int32 EntryPoint);
}; // Size: 0xD8

#endif
