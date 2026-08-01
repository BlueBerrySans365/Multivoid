#ifndef UE4SS_SDK_grayTest_HPP
#define UE4SS_SDK_grayTest_HPP

class AgrayTest_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x04C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x04D0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04D8 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x04E0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x04E8 (size: 0x8)
    TArray<class AgrayTest_C*> Team;                                                  // 0x04F0 (size: 0x10)
    class AgrayEventController_C* grayController;                                     // 0x0500 (size: 0x8)

    void deacCams();
    void OnFail_CA937A4B44017010BE0F229F9D202BD1(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_CA937A4B44017010BE0F229F9D202BD1(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_2C5AE44844E972BA129A2EAD6A77B621(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_2C5AE44844E972BA129A2EAD6A77B621(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveBeginPlay();
    void gatherTeam();
    void step(FVector Location);
    void Sound();
    void BndEvt__grayTest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void disableCams();
    void ExecuteUbergraph_grayTest(int32 EntryPoint);
}; // Size: 0x508

#endif
