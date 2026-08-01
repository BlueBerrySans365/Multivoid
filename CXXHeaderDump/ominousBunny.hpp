#ifndef UE4SS_SDK_ominousBunny_HPP
#define UE4SS_SDK_ominousBunny_HPP

class AominousBunny_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UChildActorComponent* message_eggsCollected;                                // 0x0250 (size: 0x8)
    class UChildActorComponent* message_eggGotReply;                                  // 0x0258 (size: 0x8)
    class UChildActorComponent* message_eggExistsReply;                               // 0x0260 (size: 0x8)
    class UArrowComponent* throwDirection;                                            // 0x0268 (size: 0x8)
    class UChildActorComponent* message_noGive;                                       // 0x0270 (size: 0x8)
    class UChildActorComponent* message_repeat;                                       // 0x0278 (size: 0x8)
    class UChildActorComponent* message_start;                                        // 0x0280 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0288 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Collision;                                            // 0x0298 (size: 0x8)
    class Uevilominousbunny_rig_Skeleton_AnimBlueprint_C* Anim;                       // 0x02A0 (size: 0x8)
    class AtutorialHint_C* talkobject_start;                                          // 0x02A8 (size: 0x8)
    class AtutorialHint_C* talkobject_repeat;                                         // 0x02B0 (size: 0x8)
    class AtutorialHint_C* talkobject_nogive;                                         // 0x02B8 (size: 0x8)
    TArray<FText> paperNoteText;                                                      // 0x02C0 (size: 0x10)
    TArray<FName> requiredEggs;                                                       // 0x02D0 (size: 0x10)
    class AtutorialHint_C* talkobject_GotReply;                                       // 0x02E0 (size: 0x8)
    class AtutorialHint_C* talkobject_ExistsReply;                                    // 0x02E8 (size: 0x8)
    class AtutorialHint_C* talkobject_eggsCollected;                                  // 0x02F0 (size: 0x8)
    bool collectedEggs;                                                               // 0x02F8 (size: 0x1)
    bool spawnedEggs;                                                                 // 0x02F9 (size: 0x1)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void giveEgg();
    void throwItems();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void fin();
    void CustomEvent();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ReceiveDestroyed();
    void finishTalking_eggsCollected();
    void ExecuteUbergraph_ominousBunny(int32 EntryPoint);
}; // Size: 0x2FA

#endif
