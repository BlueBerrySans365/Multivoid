#ifndef UE4SS_SDK_prop_toolgun_HPP
#define UE4SS_SDK_prop_toolgun_HPP

class Aprop_toolgun_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* muzzle;                                                // 0x0370 (size: 0x8)
    class Uui_hovertextNametag_C* Widget;                                             // 0x0378 (size: 0x8)
    FName activeTool;                                                                 // 0x0380 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0388 (size: 0x8)
    FHitResult OutHit;                                                                // 0x0390 (size: 0x88)
    class AtoolObject_C* toolObject;                                                  // 0x0418 (size: 0x8)
    class AActor* SelectObject;                                                       // 0x0420 (size: 0x8)
    class UObject* lookAtActor;                                                       // 0x0428 (size: 0x8)
    class AtoolObject_C* activeToolReference;                                         // 0x0430 (size: 0x8)
    bool isRMB;                                                                       // 0x0438 (size: 0x1)
    class Uui_spawnmenu_C* spawnmenu;                                                 // 0x0440 (size: 0x8)
    FHitResult lookatHit;                                                             // 0x0448 (size: 0x88)

    void updateText();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void playerHoldPre(class AmainPlayer_C* Player);
    void destroyed(class AActor* DestroyedActor);
    void ReceiveTick(float DeltaSeconds);
    void toolPicked(class AtoolObject_C* toolReference);
    void toolgunuse(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void cancelToolObject();
    void ReceiveDestroyed();
    void ExecuteUbergraph_prop_toolgun(int32 EntryPoint);
}; // Size: 0x4D0

#endif
