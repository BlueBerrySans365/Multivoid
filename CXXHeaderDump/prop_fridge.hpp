#ifndef UE4SS_SDK_prop_fridge_HPP
#define UE4SS_SDK_prop_fridge_HPP

class Aprop_fridge_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UAudioComponent* audio_topLoop_closed;                                      // 0x03B0 (size: 0x8)
    class UAudioComponent* audio_topLoop_opened;                                      // 0x03B8 (size: 0x8)
    class UAudioComponent* audio_bottomLoop_closed;                                   // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* inshelf1;                                             // 0x03C8 (size: 0x8)
    class UPhysicsConstraintComponent* nocollShelf3;                                  // 0x03D0 (size: 0x8)
    class UPhysicsConstraintComponent* nocollShelf2;                                  // 0x03D8 (size: 0x8)
    class UPhysicsConstraintComponent* nocollShelf1;                                  // 0x03E0 (size: 0x8)
    class UChildActorComponent* shelf3;                                               // 0x03E8 (size: 0x8)
    class UChildActorComponent* shelf2;                                               // 0x03F0 (size: 0x8)
    class UChildActorComponent* shelf1;                                               // 0x03F8 (size: 0x8)
    class UBoxComponent* freezer;                                                     // 0x0400 (size: 0x8)
    class UBoxComponent* fridge;                                                      // 0x0408 (size: 0x8)
    class UAudioComponent* audio_bottomLoop_opened;                                   // 0x0410 (size: 0x8)
    class UPhysicsConstraintComponent* nocoll;                                        // 0x0418 (size: 0x8)
    class UPhysicsConstraintComponent* doorBAx;                                       // 0x0420 (size: 0x8)
    class UChildActorComponent* door_b;                                               // 0x0428 (size: 0x8)
    class UPhysicsConstraintComponent* doorTAx;                                       // 0x0430 (size: 0x8)
    class UChildActorComponent* door_t;                                               // 0x0438 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0440 (size: 0x8)
    bool openedTop;                                                                   // 0x0448 (size: 0x1)
    bool openedBottom;                                                                // 0x0449 (size: 0x1)
    bool Active;                                                                      // 0x044A (size: 0x1)
    float Time;                                                                       // 0x044C (size: 0x4)
    bool canCloseTop;                                                                 // 0x0450 (size: 0x1)
    bool canCloseBottom;                                                              // 0x0451 (size: 0x1)
    TArray<class AActor*> frdigeObjects;                                              // 0x0458 (size: 0x10)
    TArray<class AActor*> freezerObjects;                                             // 0x0468 (size: 0x10)
    bool powered;                                                                     // 0x0478 (size: 0x1)
    class Acord_C* objCord1;                                                          // 0x0480 (size: 0x8)
    class AcordSocket_C* connectTo;                                                   // 0x0488 (size: 0x8)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    bool Filter(const class UObject* Object);
    void skipPreDelete(bool& Skip);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void ignoreSave(bool& ignoreSave);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void Set Light();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__prop_fridge_fridge_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_fridge_fridge_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__prop_fridge_freezer_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_fridge_freezer_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ReceiveDestroyed();
    void setColl();
    void doorTopOpened();
    void doorTopClosed();
    void doorBottomOpened();
    void doorBottomClosed();
    void ExecuteUbergraph_prop_fridge(int32 EntryPoint);
}; // Size: 0x490

#endif
