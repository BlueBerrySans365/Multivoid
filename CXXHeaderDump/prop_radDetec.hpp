#ifndef UE4SS_SDK_prop_radDetec_HPP
#define UE4SS_SDK_prop_radDetec_HPP

class Aprop_radDetec_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* coll;                                                     // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0378 (size: 0x8)
    class UBillboardComponent* Axis;                                                  // 0x0380 (size: 0x8)
    float A;                                                                          // 0x0388 (size: 0x4)
    float sm_a;                                                                       // 0x038C (size: 0x4)

    void detected(FVector Loc, float dist, float pow);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_radDetec(int32 EntryPoint);
}; // Size: 0x390

#endif
