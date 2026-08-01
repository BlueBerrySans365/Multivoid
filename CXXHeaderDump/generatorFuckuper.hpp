#ifndef UE4SS_SDK_generatorFuckuper_HPP
#define UE4SS_SDK_generatorFuckuper_HPP

class AgeneratorFuckuper_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* e1;                                               // 0x0228 (size: 0x8)
    class UParticleSystemComponent* e2;                                               // 0x0230 (size: 0x8)
    class UParticleSystemComponent* e3;                                               // 0x0238 (size: 0x8)
    class UAudioComponent* fridgeLoop1;                                               // 0x0240 (size: 0x8)
    class UStaticMeshComponent* elecStatTran;                                         // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    int32 ind;                                                                        // 0x0258 (size: 0x4)
    TArray<class AeelecPole_C*> poles;                                                // 0x0260 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x0270 (size: 0x8)
    bool coordFirst;                                                                  // 0x0278 (size: 0x1)
    int32 coordTowerID;                                                               // 0x027C (size: 0x4)

    void setRandomCoordTowerIndex();
    void setRandomTRansfID();
    void upd();
    void ReceiveBeginPlay();
    void sendElec();
    void timer_transformers();
    void timer_coordTowers();
    void ExecuteUbergraph_generatorFuckuper(int32 EntryPoint);
}; // Size: 0x280

#endif
