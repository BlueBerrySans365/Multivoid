#ifndef UE4SS_SDK_prop_lighter_HPP
#define UE4SS_SDK_prop_lighter_HPP

class Aprop_lighter_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)
    bool opened;                                                                      // 0x0378 (size: 0x1)
    float Alpha;                                                                      // 0x037C (size: 0x4)
    int32 uses;                                                                       // 0x0380 (size: 0x4)

    void showUses(FText& Result);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void UserConstructionScript();
    void OnNotifyEnd_FBED7E6740590F83EA0294A86484A7A2(FName NotifyName);
    void OnNotifyBegin_FBED7E6740590F83EA0294A86484A7A2(FName NotifyName);
    void OnInterrupted_FBED7E6740590F83EA0294A86484A7A2(FName NotifyName);
    void OnBlendOut_FBED7E6740590F83EA0294A86484A7A2(FName NotifyName);
    void OnCompleted_FBED7E6740590F83EA0294A86484A7A2(FName NotifyName);
    void ReceiveTick(float DeltaSeconds);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_lighter(int32 EntryPoint);
}; // Size: 0x384

#endif
