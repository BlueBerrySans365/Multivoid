#ifndef UE4SS_SDK_prop_toolbox_HPP
#define UE4SS_SDK_prop_toolbox_HPP

class Aprop_toolbox_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 fixes;                                                                      // 0x0370 (size: 0x4)
    class AmainPlayer_C* Player;                                                      // 0x0378 (size: 0x8)
    class AActor* fixingActor;                                                        // 0x0380 (size: 0x8)
    float complete;                                                                   // 0x0388 (size: 0x4)
    class Uui_linearProgress_C* Widget;                                               // 0x0390 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0398 (size: 0x8)
    float Time;                                                                       // 0x03A0 (size: 0x4)
    bool destroyOnUse;                                                                // 0x03A4 (size: 0x1)
    class USoundBase* fixAudio;                                                       // 0x03A8 (size: 0x8)

    void usesMessage();
    void completeSaw();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void sawSound();
    void ReceiveDestroyed();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_toolbox(int32 EntryPoint);
}; // Size: 0x3B0

#endif
