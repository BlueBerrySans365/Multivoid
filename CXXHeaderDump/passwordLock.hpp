#ifndef UE4SS_SDK_passwordLock_HPP
#define UE4SS_SDK_passwordLock_HPP

class ApasswordLock_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* card;                                                        // 0x0298 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02A0 (size: 0x8)
    class UBoxComponent* key_deny;                                                    // 0x02A8 (size: 0x8)
    class UBoxComponent* key_acc;                                                     // 0x02B0 (size: 0x8)
    class UBoxComponent* Key_0;                                                       // 0x02B8 (size: 0x8)
    class UBoxComponent* Key_9;                                                       // 0x02C0 (size: 0x8)
    class UBoxComponent* Key_8;                                                       // 0x02C8 (size: 0x8)
    class UBoxComponent* Key_7;                                                       // 0x02D0 (size: 0x8)
    class UBoxComponent* Key_6;                                                       // 0x02D8 (size: 0x8)
    class UBoxComponent* Key_5;                                                       // 0x02E0 (size: 0x8)
    class UBoxComponent* Key_4;                                                       // 0x02E8 (size: 0x8)
    class UBoxComponent* Key_3;                                                       // 0x02F0 (size: 0x8)
    class UBoxComponent* Key_2;                                                       // 0x02F8 (size: 0x8)
    class UBoxComponent* Key_1;                                                       // 0x0300 (size: 0x8)
    class UBillboardComponent* Keys_0;                                                // 0x0308 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem3;                                  // 0x0310 (size: 0x8)
    class UStaticMeshComponent* cube;                                                 // 0x0318 (size: 0x8)
    class ApasswordLock_C* Pair;                                                      // 0x0320 (size: 0x8)
    FName pair_key;                                                                   // 0x0328 (size: 0x8)
    bool Active;                                                                      // 0x0330 (size: 0x1)
    class Adoor_C* door;                                                              // 0x0338 (size: 0x8)
    FName door_key;                                                                   // 0x0340 (size: 0x8)
    bool entering;                                                                    // 0x0348 (size: 0x1)
    bool enterFalse;                                                                  // 0x0349 (size: 0x1)
    bool FALSE;                                                                       // 0x034A (size: 0x1)
    FString password;                                                                 // 0x0350 (size: 0x10)
    bool isReset;                                                                     // 0x0360 (size: 0x1)
    bool protected;                                                                   // 0x0361 (size: 0x1)
    TArray<class UPrimitiveComponent*> Keys_1;                                        // 0x0368 (size: 0x10)
    int32 Num;                                                                        // 0x0378 (size: 0x4)
    bool isAcc;                                                                       // 0x037C (size: 0x1)
    bool isDeny;                                                                      // 0x037D (size: 0x1)
    FString inPassword;                                                               // 0x0380 (size: 0x10)
    bool isCard;                                                                      // 0x0390 (size: 0x1)
    bool isFocused;                                                                   // 0x0391 (size: 0x1)
    bool particleSystemCrashesThisShitFuckYou;                                        // 0x0392 (size: 0x1)

    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void asContainer(class Aprop_container_C*& container);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFood(class Aprop_food_C*& food);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void canBePutInContainer(bool& return);
    void asProp(class Aprop_C*& return);
    void canPickup(bool& return);
    void noRespawn(bool noRespawn, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void isButtonUsed(bool& failed);
    void gatherDataFromKeyT(bool& gather);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void processKeys(bool& return);
    void ignoreSave_trigger(bool& ignore);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void beep();
    void SetActive(bool isPairCall);
    void UserConstructionScript();
    void playerHoldPost(class AmainPlayer_C* Player);
    void playerUnequip(class AmainPlayer_C* Player);
    void powerChanged(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    void falseEnterEvent();
    void updateStrAgl();
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void thrown(class AmainPlayer_C* Player);
    void Open(bool Active);
    void broken_fire();
    void broken();
    void sendName(FName Name);
    void kicked(bool kick);
    void ReceiveBeginPlay();
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void playerStepped(FHitResult Hit);
    void driveDetached();
    void Reset();
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void runTrigger(class AActor* Owner, int32 Index);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void open2();
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerHoldPre(class AmainPlayer_C* Player);
    void focusOn();
    void playerAnykey(FKey Key, bool Pressed);
    void playerLookAway(class AmainPlayer_C* Player);
    void inputNumber(int32 Num);
    void unfocus();
    void unequpped(class AmainPlayer_C* Player);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_passwordLock(int32 EntryPoint);
}; // Size: 0x393

#endif
