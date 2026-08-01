#ifndef UE4SS_SDK_nail_HPP
#define UE4SS_SDK_nail_HPP

class Anail_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* nail;                                                 // 0x0250 (size: 0x8)
    class UStaticMeshComponent* ghostOut;                                             // 0x0258 (size: 0x8)
    class UStaticMeshComponent* ghostIn;                                              // 0x0260 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Pin;                                                  // 0x0270 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0278 (size: 0x8)
    class UPrimitiveComponent* comp_A;                                                // 0x0280 (size: 0x8)
    class UPrimitiveComponent* comb_B;                                                // 0x0288 (size: 0x8)
    class AActor* actor_a;                                                            // 0x0290 (size: 0x8)
    class AActor* actor_b;                                                            // 0x0298 (size: 0x8)
    FVector Normal;                                                                   // 0x02A0 (size: 0xC)
    FName actor_A_key;                                                                // 0x02AC (size: 0x8)
    FName actor_B_key;                                                                // 0x02B4 (size: 0x8)
    FVector pinLoc_A;                                                                 // 0x02BC (size: 0xC)
    FVector pinLoc_B;                                                                 // 0x02C8 (size: 0xC)
    bool A;                                                                           // 0x02D4 (size: 0x1)
    FVector pinNormal;                                                                // 0x02D8 (size: 0xC)
    bool broken;                                                                      // 0x02E4 (size: 0x1)
    bool Static;                                                                      // 0x02E5 (size: 0x1)
    bool nailed;                                                                      // 0x02E6 (size: 0x1)
    int32 Type;                                                                       // 0x02E8 (size: 0x4)
    FRotator pinRot_A;                                                                // 0x02EC (size: 0xC)
    FRotator pinRot_B;                                                                // 0x02F8 (size: 0xC)
    FTransform pin_A;                                                                 // 0x0310 (size: 0x30)
    FTransform pin_B;                                                                 // 0x0340 (size: 0x30)
    float Length;                                                                     // 0x0370 (size: 0x4)
    TSubclassOf<class Aprop_nail_C> nailDrop;                                         // 0x0378 (size: 0x8)
    float Depth;                                                                      // 0x0380 (size: 0x4)
    float depthOut;                                                                   // 0x0384 (size: 0x4)

    void SetDepth();
    void stickNoise();
    void detached();
    void setRefLoc(bool Static);
    void attach(bool A, bool& fail);
    void nailNail(bool A, bool& fail);
    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void N(FVector& A, FVector& B);
    void UserConstructionScript();
    void ReceiveDestroyed();
    void aea();
    void assign();
    void d1(class AActor* DestroyedActor);
    void ReceiveBeginPlay();
    void d2(class AActor* DestroyedActor);
    void BndEvt__PhysicsConstraint_K2Node_ComponentBoundEvent_0_ConstraintBrokenSignature__DelegateSignature(int32 ConstraintIndex);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void FrameDelay();
    void ExecuteUbergraph_nail(int32 EntryPoint);
}; // Size: 0x388

#endif
