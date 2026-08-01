#ifndef UE4SS_SDK_prop_concreteBucket_HPP
#define UE4SS_SDK_prop_concreteBucket_HPP

class Aprop_concreteBucket_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* audio_take;                                                // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0378 (size: 0x8)
    int32 units;                                                                      // 0x0380 (size: 0x4)
    bool dry;                                                                         // 0x0384 (size: 0x1)
    float dryTimer;                                                                   // 0x0388 (size: 0x4)
    int32 stage;                                                                      // 0x038C (size: 0x4)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void takeConcrete(bool& dry);
    void updDry();
    void updStage();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_concreteBucket(int32 EntryPoint);
}; // Size: 0x390

#endif
