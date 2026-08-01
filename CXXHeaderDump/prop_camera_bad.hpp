#ifndef UE4SS_SDK_prop_camera_bad_HPP
#define UE4SS_SDK_prop_camera_bad_HPP

class Aprop_camera_bad_C : public Aprop_wallAttachable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UAudioComponent* Audio_zoom;                                                // 0x03E0 (size: 0x8)
    class UAudioComponent* Audio_move;                                                // 0x03E8 (size: 0x8)
    class UCameraComponent* Preview;                                                  // 0x03F0 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x03F8 (size: 0x8)
    class USceneCaptureComponent2D* cam_ir;                                           // 0x0400 (size: 0x8)
    class UParticleSystemComponent* ligh;                                             // 0x0408 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0410 (size: 0x8)
    class UParticleSystemComponent* L;                                                // 0x0418 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0420 (size: 0x8)
    class UAudioComponent* Audio_button;                                              // 0x0428 (size: 0x8)
    class USceneCaptureComponent2D* cam;                                              // 0x0430 (size: 0x8)
    class UStaticMeshComponent* head;                                                 // 0x0438 (size: 0x8)
    float rot_X;                                                                      // 0x0440 (size: 0x4)
    float rot_Y;                                                                      // 0x0444 (size: 0x4)
    int32 Index_0;                                                                    // 0x0448 (size: 0x4)
    FString cameraName;                                                               // 0x0450 (size: 0x10)
    bool Active;                                                                      // 0x0460 (size: 0x1)
    bool spec;                                                                        // 0x0461 (size: 0x1)
    FIntPoint res;                                                                    // 0x0464 (size: 0x8)
    float updRate;                                                                    // 0x046C (size: 0x4)
    float Zoom;                                                                       // 0x0470 (size: 0x4)
    bool IsGood;                                                                      // 0x0474 (size: 0x1)
    bool isIR;                                                                        // 0x0475 (size: 0x1)
    bool ignoreMove;                                                                  // 0x0476 (size: 0x1)
    bool isLight;                                                                     // 0x0477 (size: 0x1)
    bool Hidden;                                                                      // 0x0478 (size: 0x1)
    FVector2D clamp_X;                                                                // 0x047C (size: 0x8)
    FVector2D clamp_Y;                                                                // 0x0484 (size: 0x8)
    FVector2D clamp_Z;                                                                // 0x048C (size: 0x8)
    FVector Speed;                                                                    // 0x0494 (size: 0xC)
    bool supportAudio;                                                                // 0x04A0 (size: 0x1)

    void addAngle(float rot_X, float rot_Y, float Zoom);
    void updState();
    void Init();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void capture_light();
    void getInfo(FIntPoint& res, float& updRate, float& rot_X, float& rot_Y, float& Zoom);
    void upd();
    void Capture();
    void setAngle(float rot_X, float rot_Y, float Zoom);
    void saveInit();
    void setRot();
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void UserConstructionScript();
    void move();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_camera_bad(int32 EntryPoint);
}; // Size: 0x4A1

#endif
