#ifndef UE4SS_SDK_spaceRenderer_HPP
#define UE4SS_SDK_spaceRenderer_HPP

class AspaceRenderer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UInstancedStaticMeshComponent* pings;                                       // 0x0228 (size: 0x8)
    class USceneCaptureComponent2D* spaceSceneCapture;                                // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class Uui_consolesAtlas_C* Atlas;                                                 // 0x0248 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0250 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0258 (size: 0x8)
    bool move_right;                                                                  // 0x0260 (size: 0x1)
    bool move_left;                                                                   // 0x0261 (size: 0x1)
    bool move_up;                                                                     // 0x0262 (size: 0x1)
    bool move_down;                                                                   // 0x0263 (size: 0x1)
    FVector2D coords;                                                                 // 0x0264 (size: 0x8)
    FVector2D coords_rot;                                                             // 0x026C (size: 0x8)
    bool isMoving;                                                                    // 0x0274 (size: 0x1)
    TArray<Fstruct_signal_spawn> signals;                                             // 0x0278 (size: 0x10)
    class UMaterialInstanceDynamic* dynmat_signals;                                   // 0x0288 (size: 0x8)
    float sensorSpd;                                                                  // 0x0290 (size: 0x4)
    TArray<class Uui_signal_C*> signals_a;                                            // 0x0298 (size: 0x10)
    class AtriggerBase_C* trigger_OnPinged;                                           // 0x02A8 (size: 0x8)
    class AtriggerBase_C* trigger_OnFound;                                            // 0x02B0 (size: 0x8)
    bool soundActive;                                                                 // 0x02B8 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x02C0 (size: 0x8)
    class Uui_coordinates_C* coordinatesUI;                                           // 0x02C8 (size: 0x8)
    float movementVelocity;                                                           // 0x02D0 (size: 0x4)
    FVector2D movementDirection;                                                      // 0x02D4 (size: 0x8)
    FVector2D Movement;                                                               // 0x02DC (size: 0x8)
    float maxMovementVelocity;                                                        // 0x02E4 (size: 0x4)
    float coordinateDrift;                                                            // 0x02E8 (size: 0x4)
    float movementSpeed;                                                              // 0x02EC (size: 0x4)
    float triangleLevel;                                                              // 0x02F0 (size: 0x4)

    void resetMomentum();
    void deleteSignal(const class Uui_signal_C*& ItemToFind);
    void stopMoving();
    void addSignal_cursor();
    void addSignal(FVector InVec);
    void gatherSignal(bool skipCheck, bool& return, int32& Index, Fstruct_signal_spawn& Data, bool& dir, class Uui_signal_C*& element, bool& radiusCheck, bool& caughtAtLeastOne);
    void convertCoords(FVector2D InVec, FVector& return);
    void generate();
    void getCoords(FVector2D InVec, FVector& return);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void signalFound();
    void spawnSignal();
    void upgraded_pcUpgrades();
    void ExecuteUbergraph_spaceRenderer(int32 EntryPoint);
}; // Size: 0x2F4

#endif
