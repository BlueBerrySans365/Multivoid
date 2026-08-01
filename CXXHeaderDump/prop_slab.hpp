#ifndef UE4SS_SDK_prop_slab_HPP
#define UE4SS_SDK_prop_slab_HPP

class Aprop_slab_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void OnNotifyEnd_63133FA64B24BB03D6ACED9E97197268(FName NotifyName);
    void OnNotifyBegin_63133FA64B24BB03D6ACED9E97197268(FName NotifyName);
    void OnInterrupted_63133FA64B24BB03D6ACED9E97197268(FName NotifyName);
    void OnBlendOut_63133FA64B24BB03D6ACED9E97197268(FName NotifyName);
    void OnCompleted_63133FA64B24BB03D6ACED9E97197268(FName NotifyName);
    void OnNotifyEnd_F33B765A4B89B8480705839F48D37A17(FName NotifyName);
    void OnNotifyBegin_F33B765A4B89B8480705839F48D37A17(FName NotifyName);
    void OnInterrupted_F33B765A4B89B8480705839F48D37A17(FName NotifyName);
    void OnBlendOut_F33B765A4B89B8480705839F48D37A17(FName NotifyName);
    void OnCompleted_F33B765A4B89B8480705839F48D37A17(FName NotifyName);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_slab(int32 EntryPoint);
}; // Size: 0x370

#endif
