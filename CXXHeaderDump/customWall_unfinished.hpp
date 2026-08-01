#ifndef UE4SS_SDK_customWall_unfinished_HPP
#define UE4SS_SDK_customWall_unfinished_HPP

class AcustomWall_unfinished_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* Overlap;                                                     // 0x0250 (size: 0x8)
    class UStaticMeshComponent* ghostOut;                                             // 0x0258 (size: 0x8)
    class UStaticMeshComponent* buildProg;                                            // 0x0260 (size: 0x8)
    class UStaticMeshComponent* ghostIn;                                              // 0x0268 (size: 0x8)
    int32 requirement;                                                                // 0x0270 (size: 0x4)
    int32 bricks;                                                                     // 0x0274 (size: 0x4)
    class Ucomp_nametag_C* nametagComponent;                                          // 0x0278 (size: 0x8)
    int32 Shape;                                                                      // 0x0280 (size: 0x4)
    int32 Material;                                                                   // 0x0284 (size: 0x4)
    class USoundBase* snd;                                                            // 0x0288 (size: 0x8)
    Fstruct_physSound phys;                                                           // 0x0290 (size: 0x98)
    FString wallType;                                                                 // 0x0328 (size: 0x10)
    TSubclassOf<class AcustomWall_C> Class;                                           // 0x0338 (size: 0x8)
    int32 brickAdd;                                                                   // 0x0340 (size: 0x4)

    void getBrickSize(FName prop);
    void getPhys();
    void findMat(FName B, bool& return);
    void Init();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void setShape();
    void buildWall(bool isCheat);
    void upd();
    void Msg();
    void UserConstructionScript();
    void exitTheWater();
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void impactSquishCPP(class UPrimitiveComponent* Component);
    void ReceiveBeginPlay();
    void BndEvt__customWall_unfinished_overlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveDestroyed();
    void enteredTheWater();
    void ExecuteUbergraph_customWall_unfinished(int32 EntryPoint);
}; // Size: 0x344

#endif
