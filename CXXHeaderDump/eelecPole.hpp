#ifndef UE4SS_SDK_eelecPole_HPP
#define UE4SS_SDK_eelecPole_HPP

class AeelecPole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem3;                                  // 0x0228 (size: 0x8)
    class UParticleSystemComponent* eff_elec2;                                        // 0x0230 (size: 0x8)
    class UAudioComponent* audio_spark3;                                              // 0x0238 (size: 0x8)
    class UAudioComponent* audio_spark2;                                              // 0x0240 (size: 0x8)
    class UAudioComponent* audio_spark1;                                              // 0x0248 (size: 0x8)
    class UAudioComponent* audio_spark;                                               // 0x0250 (size: 0x8)
    class UParticleSystemComponent* eff_elec1;                                        // 0x0258 (size: 0x8)
    class UBillboardComponent* cn4;                                                   // 0x0260 (size: 0x8)
    class UBillboardComponent* cn3;                                                   // 0x0268 (size: 0x8)
    class UBillboardComponent* cn2;                                                   // 0x0270 (size: 0x8)
    class UBillboardComponent* cn1;                                                   // 0x0278 (size: 0x8)
    class UCableComponent* C1;                                                        // 0x0280 (size: 0x8)
    class UCableComponent* c4;                                                        // 0x0288 (size: 0x8)
    class UCableComponent* C3;                                                        // 0x0290 (size: 0x8)
    class UCableComponent* C2;                                                        // 0x0298 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    bool conn;                                                                        // 0x02B0 (size: 0x1)
    bool makeArr;                                                                     // 0x02B1 (size: 0x1)
    class AeelecPole_C* connectPole;                                                  // 0x02B8 (size: 0x8)
    class AeelecPole_C* connectBack;                                                  // 0x02C0 (size: 0x8)
    class AgeneratorBuilding_C* transformerBuilding;                                  // 0x02C8 (size: 0x8)
    TArray<class UCableComponent*> wires;                                             // 0x02D0 (size: 0x10)
    TArray<class UBillboardComponent*> conns;                                         // 0x02E0 (size: 0x10)
    class AActor* attach_0;                                                           // 0x02F0 (size: 0x8)
    class AActor* attach_1;                                                           // 0x02F8 (size: 0x8)
    class AActor* attach_2;                                                           // 0x0300 (size: 0x8)
    class AActor* attach_3;                                                           // 0x0308 (size: 0x8)
    float elec;                                                                       // 0x0310 (size: 0x4)
    int32 ind;                                                                        // 0x0314 (size: 0x4)
    bool isRoot;                                                                      // 0x0318 (size: 0x1)
    FParticleSysParam Param;                                                          // 0x0320 (size: 0x80)
    bool transformer;                                                                 // 0x03A0 (size: 0x1)
    bool blinking;                                                                    // 0x03A1 (size: 0x1)
    bool isBlink;                                                                     // 0x03A2 (size: 0x1)
    float elec_0;                                                                     // 0x03A4 (size: 0x4)

    void rot();
    void makeArray();
    void Connect();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void runElec();
    void rend();
    void blink();
    void lightningStrike();
    void ExecuteUbergraph_eelecPole(int32 EntryPoint);
}; // Size: 0x3A8

#endif
