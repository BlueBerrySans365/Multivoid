#ifndef UE4SS_SDK_dish_HPP
#define UE4SS_SDK_dish_HPP

class Adish_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UTextRenderComponent* textindex;                                            // 0x0250 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0258 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0260 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh; // 0x0268 (size: 0x8)
    class UChildActorComponent* navmeshBlock2;                                        // 0x0270 (size: 0x8)
    class UChildActorComponent* navmeshBlock1;                                        // 0x0278 (size: 0x8)
    class UTextRenderComponent* nme;                                                  // 0x0280 (size: 0x8)
    class UStaticMeshComponent* concreteFloor;                                        // 0x0288 (size: 0x8)
    class UChildActorComponent* lightroot;                                            // 0x0290 (size: 0x8)
    class UChildActorComponent* lightswitch;                                          // 0x0298 (size: 0x8)
    class UChildActorComponent* indoors;                                              // 0x02A0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem3;                                  // 0x02A8 (size: 0x8)
    class UBoxComponent* blockNav2;                                                   // 0x02B0 (size: 0x8)
    class UBoxComponent* blockNav1;                                                   // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C0 (size: 0x8)
    class UBillboardComponent* serverSpawn;                                           // 0x02C8 (size: 0x8)
    class UChildActorComponent* Light;                                                // 0x02D0 (size: 0x8)
    class UChildActorComponent* Console;                                              // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* cube;                                                 // 0x02E0 (size: 0x8)
    class UChildActorComponent* door;                                                 // 0x02E8 (size: 0x8)
    class UAudioComponent* satellite_moveStop;                                        // 0x02F0 (size: 0x8)
    class UAudioComponent* satellite_stop;                                            // 0x02F8 (size: 0x8)
    class UBillboardComponent* axis_Y;                                                // 0x0300 (size: 0x8)
    class UAudioComponent* satellite_move_Cue;                                        // 0x0308 (size: 0x8)
    class UAudioComponent* satellite_Cue;                                             // 0x0310 (size: 0x8)
    class UStaticMeshComponent* prot_satellite_rotat;                                 // 0x0318 (size: 0x8)
    class UBillboardComponent* axis_Z;                                                // 0x0320 (size: 0x8)
    class UStaticMeshComponent* prot_satellite_dish;                                  // 0x0328 (size: 0x8)
    class UStaticMeshComponent* prot_satellite_base;                                  // 0x0330 (size: 0x8)
    float Timeline_0_a_881EDE1C438C131B465ABEB8E066792B;                              // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_881EDE1C438C131B465ABEB8E066792B; // 0x033C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0340 (size: 0x8)
    float turnoff_a_9291585D4339A8FB0B26DC82C78FEBC0;                                 // 0x0348 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> turnoff__Direction_9291585D4339A8FB0B26DC82C78FEBC0; // 0x034C (size: 0x1)
    class UTimelineComponent* turnoff;                                                // 0x0350 (size: 0x8)
    int32 Index;                                                                      // 0x0358 (size: 0x4)
    FText nameDish;                                                                   // 0x0360 (size: 0x18)
    FVector lookAt;                                                                   // 0x0378 (size: 0xC)
    bool isMoving;                                                                    // 0x0384 (size: 0x1)
    FRotator rot_A;                                                                   // 0x0388 (size: 0xC)
    FRotator rot_B;                                                                   // 0x0394 (size: 0xC)
    bool isRotate;                                                                    // 0x03A0 (size: 0x1)
    int32 Axis;                                                                       // 0x03A4 (size: 0x4)
    float Speed;                                                                      // 0x03A8 (size: 0x4)
    float calibration;                                                                // 0x03AC (size: 0x4)
    float C_offset;                                                                   // 0x03B0 (size: 0x4)
    bool losePrec;                                                                    // 0x03B4 (size: 0x1)
    FVector2D maxSpeedRange;                                                          // 0x03B8 (size: 0x8)
    float MaxSpeed;                                                                   // 0x03C0 (size: 0x4)
    float calibLose;                                                                  // 0x03C4 (size: 0x4)
    bool randrot;                                                                     // 0x03C8 (size: 0x1)
    bool spawnChilds;                                                                 // 0x03C9 (size: 0x1)
    class AserverBox_C* server;                                                       // 0x03D0 (size: 0x8)
    FName serverKey;                                                                  // 0x03D8 (size: 0x8)
    FString hashcode;                                                                 // 0x03E0 (size: 0x10)
    FText nameClassic;                                                                // 0x03F0 (size: 0x18)
    FString techName;                                                                 // 0x0408 (size: 0x10)

    void respawnServer();
    void processKeys(bool& return);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    float getDir();
    void getFloppyData(FString& Data);
    void makeName();
    void generteHashcode();
    void buildRailing();
    void Stop();
    void getCoords(float& X, float& Y);
    void startMovingTo(FVector lookAt);
    void UserConstructionScript();
    void turnoff__FinishedFunc();
    void turnoff__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void startMove();
    void movePow();
    void ReceiveBeginPlay();
    void intComs_gamemodeBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_dish(int32 EntryPoint);
}; // Size: 0x418

#endif
