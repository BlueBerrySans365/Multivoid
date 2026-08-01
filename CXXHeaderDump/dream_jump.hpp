#ifndef UE4SS_SDK_dream_jump_HPP
#define UE4SS_SDK_dream_jump_HPP

class Adream_jump_C : public AdreamBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Cube8;                                                // 0x0290 (size: 0x8)
    class UChildActorComponent* door4;                                                // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Cube7;                                                // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Cube6;                                                // 0x02A8 (size: 0x8)
    class UChildActorComponent* door3;                                                // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Cube5;                                                // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Cube4;                                                // 0x02C0 (size: 0x8)
    class UChildActorComponent* door2;                                                // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x02D8 (size: 0x8)
    class UChildActorComponent* door1;                                                // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* cube1;                                                // 0x02E8 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* cube;                                                 // 0x02F8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0300 (size: 0x8)
    class UStaticMeshComponent* fill;                                                 // 0x0308 (size: 0x8)
    class UChildActorComponent* door0;                                                // 0x0310 (size: 0x8)
    class UBillboardComponent* pillarsGen;                                            // 0x0318 (size: 0x8)
    class UBillboardComponent* pillars;                                               // 0x0320 (size: 0x8)
    class UStaticMeshComponent* wall4;                                                // 0x0328 (size: 0x8)
    class UStaticMeshComponent* wall3;                                                // 0x0330 (size: 0x8)
    class UStaticMeshComponent* wall2;                                                // 0x0338 (size: 0x8)
    class UStaticMeshComponent* wall1;                                                // 0x0340 (size: 0x8)
    class UBillboardComponent* walls;                                                 // 0x0348 (size: 0x8)
    float A;                                                                          // 0x0350 (size: 0x4)

    void gen();
    void UserConstructionScript();
    void BndEvt__dream_climb_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_dream_jump(int32 EntryPoint);
}; // Size: 0x354

#endif
