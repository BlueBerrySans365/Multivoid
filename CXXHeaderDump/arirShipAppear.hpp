#ifndef UE4SS_SDK_arirShipAppear_HPP
#define UE4SS_SDK_arirShipAppear_HPP

class AarirShipAppear_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Sphere_0;                                             // 0x02A0 (size: 0x8)
    class UBillboardComponent* air;                                                   // 0x02A8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    float a_a_2C6617ED4975EC563C73D5B0DBE0638B;                                       // 0x02C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_2C6617ED4975EC563C73D5B0DBE0638B; // 0x02C4 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x02C8 (size: 0x8)
    bool Visible;                                                                     // 0x02D0 (size: 0x1)
    TArray<FString> String;                                                           // 0x02D8 (size: 0x10)
    FString AAA;                                                                      // 0x02E8 (size: 0x10)
    int32 lenn;                                                                       // 0x02F8 (size: 0x4)

    void ignoreSave_trigger(bool& ignore);
    void make(FText& OutputPin);
    void UserConstructionScript();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void a__air_diss__EventFunc();
    void a__air_app__EventFunc();
    void appear(bool dir);
    void ReceiveBeginPlay();
    void runTrigger(class AActor* Owner, int32 Index);
    void ReceiveTick(float DeltaSeconds);
    void photoTaken();
    void ExecuteUbergraph_arirShipAppear(int32 EntryPoint);
}; // Size: 0x2FC

#endif
