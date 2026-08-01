#ifndef UE4SS_SDK_hook_HPP
#define UE4SS_SDK_hook_HPP

class Ahook_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Empty;                                                // 0x0250 (size: 0x8)
    class UPhysicsConstraintComponent* throwConstraint;                               // 0x0258 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0260 (size: 0x8)
    class UBillboardComponent* H;                                                     // 0x0268 (size: 0x8)
    class UStaticMeshComponent* hook_single1;                                         // 0x0270 (size: 0x8)
    class UStaticMeshComponent* hook_single;                                          // 0x0278 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0280 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0288 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0290 (size: 0x8)
    class UArrowComponent* B;                                                         // 0x0298 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x02A0 (size: 0x8)
    class UArrowComponent* A;                                                         // 0x02A8 (size: 0x8)
    class AActor* actor_a;                                                            // 0x02B0 (size: 0x8)
    class AActor* actor_b;                                                            // 0x02B8 (size: 0x8)
    float dist;                                                                       // 0x02C0 (size: 0x4)
    bool attached_a;                                                                  // 0x02C4 (size: 0x1)
    bool attached_b;                                                                  // 0x02C5 (size: 0x1)
    class UPrimitiveComponent* component_A;                                           // 0x02C8 (size: 0x8)
    class UPrimitiveComponent* component_B;                                           // 0x02D0 (size: 0x8)
    bool isThrown;                                                                    // 0x02D8 (size: 0x1)
    FVector lastloc;                                                                  // 0x02DC (size: 0xC)
    class USphereComponent* phys;                                                     // 0x02E8 (size: 0x8)
    float maxDist;                                                                    // 0x02F0 (size: 0x4)
    FVector addVel;                                                                   // 0x02F4 (size: 0xC)
    bool dontDrop;                                                                    // 0x0300 (size: 0x1)
    float tensionLinear;                                                              // 0x0304 (size: 0x4)
    float throwSpeed;                                                                 // 0x0308 (size: 0x4)
    float scroll;                                                                     // 0x030C (size: 0x4)
    float playerVelDiv;                                                               // 0x0310 (size: 0x4)
    class Ucomp_nametag_C* hoverText;                                                 // 0x0318 (size: 0x8)
    Fhook_CHooked_A hooked_A;                                                         // 0x0320 (size: 0x10)
    void hooked_A();
    Fhook_CHooked_B hooked_B;                                                         // 0x0330 (size: 0x10)
    void hooked_B();
    class Aprop_hook_C* hookObject;                                                   // 0x0340 (size: 0x8)
    FVector attachLoc_A;                                                              // 0x0348 (size: 0xC)
    FVector attachLoc_B;                                                              // 0x0354 (size: 0xC)
    FVector locW;                                                                     // 0x0360 (size: 0xC)
    FName attachKey_A;                                                                // 0x036C (size: 0x8)
    FName attachKey_B;                                                                // 0x0374 (size: 0x8)
    bool playerHooked;                                                                // 0x037C (size: 0x1)
    bool isProp_A;                                                                    // 0x037D (size: 0x1)
    bool isProp_B;                                                                    // 0x037E (size: 0x1)
    FVector scaleComp_A;                                                              // 0x0380 (size: 0xC)
    FVector scaleComp_B;                                                              // 0x038C (size: 0xC)
    FName attachComponentName_A;                                                      // 0x0398 (size: 0x8)
    FName attachComponentName_B;                                                      // 0x03A0 (size: 0x8)

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
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void makeAttachments();
    void setLocs();
    void processKeys(bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void chk(bool& NewParam);
    class Aprop_hook_C* drophook(class AActor* self2);
    void setLength();
    void attach_b(FHitResult Hit, bool checkLen, class AActor* actorReplace, class UPrimitiveComponent* componentReplace, FVector locationReplace, FVector normalReplace, bool resetLen);
    void attach_a(FHitResult Hit, class AActor* ActorAttach, bool checkLen, class AActor* actorReplace, class UPrimitiveComponent* componentReplace, FVector locationReplace, FVector normalReplace, bool unfreezeFrozen);
    void d_a(class AActor* DestroyedActor);
    void assign();
    void playerStepped(FHitResult Hit);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerHoldPre(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void unequpped(class AmainPlayer_C* Player);
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void CustomEvent_0();
    void CustomEvent();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHoldPost(class AmainPlayer_C* Player);
    void playerUnequip(class AmainPlayer_C* Player);
    void updateStrAgl();
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void thrown(class AmainPlayer_C* Player);
    void broken_fire();
    void broken();
    void sendName(FName Name);
    void kicked(bool kick);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void throw(class AActor* Target);
    void driveDetached();
    void d_b(class AActor* DestroyedActor);
    void tension();
    void unhook_(bool spawnHook);
    void FrameDelay();
    void ExecuteUbergraph_hook(int32 EntryPoint);
    void hooked_B__DelegateSignature();
    void hooked_A__DelegateSignature();
}; // Size: 0x3A8

#endif
