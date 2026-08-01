#ifndef UE4SS_SDK_mg_invaders_HPP
#define UE4SS_SDK_mg_invaders_HPP

class Amg_invaders_C : public AminigameRoot_pawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UAudioComponent* beep;                                                      // 0x0290 (size: 0x8)
    class USceneCaptureComponent2D* Capture;                                          // 0x0298 (size: 0x8)
    class UInstancedStaticMeshComponent* inst_ship;                                   // 0x02A0 (size: 0x8)
    class UInstancedStaticMeshComponent* inst_invBullets;                             // 0x02A8 (size: 0x8)
    class UInstancedStaticMeshComponent* inst_shipBullets;                            // 0x02B0 (size: 0x8)
    class UBillboardComponent* ships_ints;                                            // 0x02B8 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x02C0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x02C8 (size: 0x8)
    TArray<FIntVector> ships;                                                         // 0x02D0 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> dynmat_inv;                               // 0x02E0 (size: 0x10)
    TArray<class UInstancedStaticMeshComponent*> invaders;                            // 0x02F0 (size: 0x10)
    bool dir;                                                                         // 0x0300 (size: 0x1)
    class Uumg_invaders_C* invWidget;                                                 // 0x0308 (size: 0x8)
    float upd_time;                                                                   // 0x0310 (size: 0x4)
    float upd_delay;                                                                  // 0x0314 (size: 0x4)
    bool Playing;                                                                     // 0x0318 (size: 0x1)
    bool Frame;                                                                       // 0x0319 (size: 0x1)
    TArray<FIntVector> bullets_pos;                                                   // 0x0320 (size: 0x10)
    TArray<FIntVector> bullets_inv_pos;                                               // 0x0330 (size: 0x10)
    FIntVector ship;                                                                  // 0x0340 (size: 0xC)
    TArray<FIntVector> barriers_pos;                                                  // 0x0350 (size: 0x10)
    TArray<class UInstancedStaticMeshComponent*> barriers;                            // 0x0360 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> dynmat_barriers;                          // 0x0370 (size: 0x10)
    float bull_time;                                                                  // 0x0380 (size: 0x4)
    float bull_delay;                                                                 // 0x0384 (size: 0x4)
    TArray<FIntVector> ships_buff;                                                    // 0x0388 (size: 0x10)
    bool moveDown;                                                                    // 0x0398 (size: 0x1)
    bool shot;                                                                        // 0x0399 (size: 0x1)
    TArray<FIntVector> barriers_buff_pos;                                             // 0x03A0 (size: 0x10)
    int32 Score;                                                                      // 0x03B0 (size: 0x4)
    int32 hscore;                                                                     // 0x03B4 (size: 0x4)
    bool Possess;                                                                     // 0x03B8 (size: 0x1)
    class Uui_arcade_invaders_C* screenWidget;                                        // 0x03C0 (size: 0x8)
    int32 Wave;                                                                       // 0x03C8 (size: 0x4)
    Fmg_invaders_CBeepBoop beepBoop;                                                  // 0x03D0 (size: 0x10)
    void beepBoop(class USoundBase* Sound, float Volume, float Pitch);
    bool par;                                                                         // 0x03E0 (size: 0x1)

    void generateShips();
    void generateBarriers();
    void generateInvBullets();
    void generateBullets();
    void PlaySound(class USoundBase* NewSound, float NewVolumeMultiplier, float NewPitchMultiplier);
    void win();
    void died();
    void bullets();
    void Play();
    void move();
    void Init();
    void gen();
    void UserConstructionScript();
    void InpActEvt_Enter_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Right_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Left_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Up_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void step_ships();
    void ReceiveTick(float DeltaSeconds);
    void step_bullets();
    void Right();
    void Left();
    void Up();
    void Enter();
    void ExecuteUbergraph_mg_invaders(int32 EntryPoint);
    void beepBoop__DelegateSignature(class USoundBase* Sound, float Volume, float Pitch);
}; // Size: 0x3E1

#endif
