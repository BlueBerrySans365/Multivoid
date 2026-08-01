#ifndef UE4SS_SDK_fishingRodString_HPP
#define UE4SS_SDK_fishingRodString_HPP

class AfishingRodString_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* baitMesh;                                             // 0x0228 (size: 0x8)
    class UPhysicsConstraintComponent* buoy2hook;                                     // 0x0230 (size: 0x8)
    class UCableComponent* cBuoyToHook;                                               // 0x0238 (size: 0x8)
    class UPhysicsConstraintComponent* con1;                                          // 0x0240 (size: 0x8)
    class UBillboardComponent* buoyEnd;                                               // 0x0248 (size: 0x8)
    class UCableComponent* cEndToBuoy;                                                // 0x0250 (size: 0x8)
    class UChildActorComponent* hook;                                                 // 0x0258 (size: 0x8)
    class UChildActorComponent* buoy;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Root;                                                 // 0x0268 (size: 0x8)
    class UBillboardComponent* hookEnd;                                               // 0x0270 (size: 0x8)
    FVector vel;                                                                      // 0x0278 (size: 0xC)
    class AActor* catched;                                                            // 0x0288 (size: 0x8)
    TMap<FName, float> Drop;                                                          // 0x0290 (size: 0x50)
    class UPrimitiveComponent* buoyComp;                                              // 0x02E0 (size: 0x8)
    class UPrimitiveComponent* hookComp;                                              // 0x02E8 (size: 0x8)
    class Aprop_fishingRod_C* rod;                                                    // 0x02F0 (size: 0x8)
    class UPhysicsConstraintComponent* A;                                             // 0x02F8 (size: 0x8)
    class UPrimitiveComponent* C;                                                     // 0x0300 (size: 0x8)
    float chance;                                                                     // 0x0308 (size: 0x4)
    float luck;                                                                       // 0x030C (size: 0x4)
    FName bait;                                                                       // 0x0310 (size: 0x8)
    float eat;                                                                        // 0x0318 (size: 0x4)
    TMap<FName, float> Temp;                                                          // 0x0320 (size: 0x50)

    void processDrops();
    void debugRandom(int32 LastIndex, float Exponent);
    void setHookLoc();
    void setLength(float Len);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void restoreString();
    void Dest(class AActor* DestroyedActor);
    void ExecuteUbergraph_fishingRodString(int32 EntryPoint);
}; // Size: 0x370

#endif
