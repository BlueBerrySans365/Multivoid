#ifndef UE4SS_SDK_prop_beebox_HPP
#define UE4SS_SDK_prop_beebox_HPP

class Aprop_beebox_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0378 (size: 0x8)
    bool hasBees;                                                                     // 0x0380 (size: 0x1)
    bool full;                                                                        // 0x0381 (size: 0x1)
    int32 honey;                                                                      // 0x0384 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void checkHoney();
    void pollinate(float Delta);
    void Init();
    void upd();
    void ReceiveTick(float DeltaSeconds);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_beebox(int32 EntryPoint);
}; // Size: 0x388

#endif
