#ifndef UE4SS_SDK_dream_room_HPP
#define UE4SS_SDK_dream_room_HPP

class Adream_room_C : public AdreamBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UChildActorComponent* prop1;                                                // 0x0290 (size: 0x8)
    class UChildActorComponent* prop16;                                               // 0x0298 (size: 0x8)
    class UChildActorComponent* prop15;                                               // 0x02A0 (size: 0x8)
    class UChildActorComponent* prop14;                                               // 0x02A8 (size: 0x8)
    class UChildActorComponent* prop13;                                               // 0x02B0 (size: 0x8)
    class UChildActorComponent* prop12;                                               // 0x02B8 (size: 0x8)
    class UChildActorComponent* prop11;                                               // 0x02C0 (size: 0x8)
    class UChildActorComponent* prop10;                                               // 0x02C8 (size: 0x8)
    class UChildActorComponent* prop8;                                                // 0x02D0 (size: 0x8)
    class UChildActorComponent* prop7;                                                // 0x02D8 (size: 0x8)
    class UChildActorComponent* prop6;                                                // 0x02E0 (size: 0x8)
    class UChildActorComponent* prop5;                                                // 0x02E8 (size: 0x8)
    class UChildActorComponent* prop4;                                                // 0x02F0 (size: 0x8)
    class UChildActorComponent* prop3;                                                // 0x02F8 (size: 0x8)
    class UChildActorComponent* prop2;                                                // 0x0300 (size: 0x8)
    class UChildActorComponent* prop9;                                                // 0x0308 (size: 0x8)
    class UChildActorComponent* prop0;                                                // 0x0310 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0318 (size: 0x8)
    float a_a_775C86EB44887BD8F8F0279EED56208A;                                       // 0x0320 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_775C86EB44887BD8F8F0279EED56208A; // 0x0324 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0328 (size: 0x8)

    void a__FinishedFunc();
    void a__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_dream_room(int32 EntryPoint);
}; // Size: 0x330

#endif
