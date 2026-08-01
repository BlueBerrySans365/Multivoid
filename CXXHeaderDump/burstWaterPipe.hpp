#ifndef UE4SS_SDK_burstWaterPipe_HPP
#define UE4SS_SDK_burstWaterPipe_HPP

class AburstWaterPipe_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0250 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0258 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0260 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0270 (size: 0x8)
    class AwaterVolume_basementFlooder_C* waterVolume;                                // 0x0278 (size: 0x8)
    bool damaged;                                                                     // 0x0280 (size: 0x1)
    bool oneSide;                                                                     // 0x0281 (size: 0x1)

    void skipPreDelete(bool& Skip);
    void toolboxFixTime(float& Time);
    void toolboxCanFix(bool& return);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void State(bool damaged);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void ExecuteUbergraph_burstWaterPipe(int32 EntryPoint);
}; // Size: 0x282

#endif
