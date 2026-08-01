#ifndef UE4SS_SDK_dirthole_item_HPP
#define UE4SS_SDK_dirthole_item_HPP

class Adirthole_item_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_default;                                      // 0x0250 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0258 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0260 (size: 0x8)
    FName Name;                                                                       // 0x0268 (size: 0x8)
    TSubclassOf<class AActor> Object;                                                 // 0x0270 (size: 0x8)
    bool grab;                                                                        // 0x0278 (size: 0x1)
    Fstruct_save Data;                                                                // 0x0280 (size: 0x100)
    class UPrimitiveComponent* rootComp;                                              // 0x0380 (size: 0x8)
    class AActor* ac;                                                                 // 0x0388 (size: 0x8)
    float Time;                                                                       // 0x0390 (size: 0x4)
    float S;                                                                          // 0x0394 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> A;                                          // 0x0398 (size: 0x10)
    bool showItem;                                                                    // 0x03A8 (size: 0x1)

    void buryItem(class AActor* ac);
    void pullOut();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_dirthole_item(int32 EntryPoint);
}; // Size: 0x3A9

#endif
