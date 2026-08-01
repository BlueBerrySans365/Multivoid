#ifndef UE4SS_SDK_playerRagdoll_HPP
#define UE4SS_SDK_playerRagdoll_HPP

class AplayerRagdoll_C : public Aragdoll_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0248 (size: 0x8)

    void ignoreSave(bool& ignoreSave);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void enteredTheWater();
    void exitTheWater();
    void ReceiveBeginPlay();
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void impactSquishCPP(class UPrimitiveComponent* Component);
    void leaveWater(class AwaterVolume_C* Water);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void enterWater(class AwaterVolume_C* Water);
    void ExecuteUbergraph_playerRagdoll(int32 EntryPoint);
}; // Size: 0x250

#endif
