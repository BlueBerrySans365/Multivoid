#ifndef UE4SS_SDK_trigger_agrav_HPP
#define UE4SS_SDK_trigger_agrav_HPP

class Atrigger_agrav_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* Bounds;                                                      // 0x0298 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02B0 (size: 0x8)
    class UAudioComponent* arirHover_Cue;                                             // 0x02B8 (size: 0x8)
    float b_a_DE080D9043B5FE98A3CAD9B8A5879F80;                                       // 0x02C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> b__Direction_DE080D9043B5FE98A3CAD9B8A5879F80; // 0x02C4 (size: 0x1)
    class UTimelineComponent* B;                                                      // 0x02C8 (size: 0x8)
    TArray<class AActor*> props;                                                      // 0x02D0 (size: 0x10)
    class AActor* prop;                                                               // 0x02E0 (size: 0x8)
    float vel;                                                                        // 0x02E8 (size: 0x4)
    TArray<class UPrimitiveComponent*> comps;                                         // 0x02F0 (size: 0x10)
    TArray<class UPrimitiveComponent*> buf;                                           // 0x0300 (size: 0x10)
    float Aa;                                                                         // 0x0310 (size: 0x4)
    float ime;                                                                        // 0x0314 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_0;                                         // 0x0318 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_1;                                         // 0x0320 (size: 0x8)
    float Time;                                                                       // 0x0328 (size: 0x4)
    float Duration;                                                                   // 0x032C (size: 0x4)

    void gatherDataFromKeyT(bool& gather);
    void gaher();
    void b__FinishedFunc();
    void b__UpdateFunc();
    void runTrigger(class AActor* Owner, int32 Index);
    void ReceiveBeginPlay();
    void cloak(bool Forward);
    void ReceiveTick(float DeltaSeconds);
    void photoTaken();
    void ExecuteUbergraph_trigger_agrav(int32 EntryPoint);
}; // Size: 0x330

#endif
