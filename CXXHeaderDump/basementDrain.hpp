#ifndef UE4SS_SDK_basementDrain_HPP
#define UE4SS_SDK_basementDrain_HPP

class AbasementDrain_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x0250 (size: 0x8)
    class UParticleSystemComponent* eff_waterDrain;                                   // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0260 (size: 0x8)
    class AwaterVolume_basementFlooder_C* waterVolume;                                // 0x0268 (size: 0x8)
    TArray<class AburstWaterPipe_C*> pipes;                                           // 0x0270 (size: 0x10)
    class ApowerControl_C* powerblock;                                                // 0x0280 (size: 0x8)
    float blockage;                                                                   // 0x0288 (size: 0x4)
    float waterloggedLevel;                                                           // 0x028C (size: 0x4)

    void checkBlockage();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void UserConstructionScript();
    void checkBreaker();
    void tryBurstPipe();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void checkWater();
    void ExecuteUbergraph_basementDrain(int32 EntryPoint);
}; // Size: 0x290

#endif
