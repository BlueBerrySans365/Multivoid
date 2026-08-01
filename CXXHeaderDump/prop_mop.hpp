#ifndef UE4SS_SDK_prop_mop_HPP
#define UE4SS_SDK_prop_mop_HPP

class Aprop_mop_C : public Aprop_sponge_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    void OnNotifyEnd_083CA2AD46C7B625ECE9D3A2E8117114(FName NotifyName);
    void OnNotifyBegin_083CA2AD46C7B625ECE9D3A2E8117114(FName NotifyName);
    void OnInterrupted_083CA2AD46C7B625ECE9D3A2E8117114(FName NotifyName);
    void OnBlendOut_083CA2AD46C7B625ECE9D3A2E8117114(FName NotifyName);
    void OnCompleted_083CA2AD46C7B625ECE9D3A2E8117114(FName NotifyName);
    void OnNotifyEnd_80BF1FE545088C366BAF8BB1C84B6EAD(FName NotifyName);
    void OnNotifyBegin_80BF1FE545088C366BAF8BB1C84B6EAD(FName NotifyName);
    void OnInterrupted_80BF1FE545088C366BAF8BB1C84B6EAD(FName NotifyName);
    void OnBlendOut_80BF1FE545088C366BAF8BB1C84B6EAD(FName NotifyName);
    void OnCompleted_80BF1FE545088C366BAF8BB1C84B6EAD(FName NotifyName);
    void OnNotifyEnd_BF0AA99D482317BA2CDAD884D64B57BF(FName NotifyName);
    void OnNotifyBegin_BF0AA99D482317BA2CDAD884D64B57BF(FName NotifyName);
    void OnInterrupted_BF0AA99D482317BA2CDAD884D64B57BF(FName NotifyName);
    void OnBlendOut_BF0AA99D482317BA2CDAD884D64B57BF(FName NotifyName);
    void OnCompleted_BF0AA99D482317BA2CDAD884D64B57BF(FName NotifyName);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_mop(int32 EntryPoint);
}; // Size: 0x3D0

#endif
