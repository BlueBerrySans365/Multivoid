#ifndef UE4SS_SDK_radiator_DUPL_1_HPP
#define UE4SS_SDK_radiator_DUPL_1_HPP

class Aradiator_C : public Aprop_asologoPiece_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UChildActorComponent* pryingCrowbar2;                                       // 0x03E0 (size: 0x8)
    class UChildActorComponent* pryingCrowbar1;                                       // 0x03E8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03F0 (size: 0x8)
    class UChildActorComponent* pryingCrowbar;                                        // 0x03F8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0400 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0408 (size: 0x8)
    float DeltaSeconds;                                                               // 0x0410 (size: 0x4)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void doDamage(float Sub);
    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_radiator(int32 EntryPoint);
}; // Size: 0x414

#endif
