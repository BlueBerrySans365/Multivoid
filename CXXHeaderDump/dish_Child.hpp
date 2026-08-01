#ifndef UE4SS_SDK_dish_Child_HPP
#define UE4SS_SDK_dish_Child_HPP

class Adish_Child_C : public Adish_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x0420 (size: 0x8)
    class UChildActorComponent* ChildActor_0;                                         // 0x0428 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x0430 (size: 0x8)
    class UBoxComponent* Bounds;                                                      // 0x0438 (size: 0x8)
    class UChildActorComponent* ladder;                                               // 0x0440 (size: 0x8)
    class UStaticMeshComponent* cube1_0;                                              // 0x0448 (size: 0x8)
    class UStaticMeshComponent* wall7;                                                // 0x0450 (size: 0x8)
    class UStaticMeshComponent* wall6;                                                // 0x0458 (size: 0x8)
    class UStaticMeshComponent* wall5;                                                // 0x0460 (size: 0x8)
    class UStaticMeshComponent* wall3;                                                // 0x0468 (size: 0x8)
    class UStaticMeshComponent* wall2;                                                // 0x0470 (size: 0x8)
    class UStaticMeshComponent* wall1;                                                // 0x0478 (size: 0x8)
    class UBillboardComponent* Billboard1;                                            // 0x0480 (size: 0x8)
    class ANewBlueprint3_C* R;                                                        // 0x0488 (size: 0x8)
    class AwaterVolume_C* W;                                                          // 0x0490 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_dish_Child(int32 EntryPoint);
}; // Size: 0x498

#endif
