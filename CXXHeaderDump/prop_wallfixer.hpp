#ifndef UE4SS_SDK_prop_wallfixer_HPP
#define UE4SS_SDK_prop_wallfixer_HPP

class Aprop_wallfixer_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* audio_fix;                                                 // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0378 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0380 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0388 (size: 0x8)
    bool cheat;                                                                       // 0x0390 (size: 0x1)
    int32 concrete;                                                                   // 0x0394 (size: 0x4)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void updConcrete();
    void UserConstructionScript();
    void OnNotifyEnd_281BECD94263F241FAF2969DB65721E2(FName NotifyName);
    void OnNotifyBegin_281BECD94263F241FAF2969DB65721E2(FName NotifyName);
    void OnInterrupted_281BECD94263F241FAF2969DB65721E2(FName NotifyName);
    void OnBlendOut_281BECD94263F241FAF2969DB65721E2(FName NotifyName);
    void OnCompleted_281BECD94263F241FAF2969DB65721E2(FName NotifyName);
    void fixing();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_wallfixer(int32 EntryPoint);
}; // Size: 0x398

#endif
