#ifndef UE4SS_SDK_prop_dingusDies_HPP
#define UE4SS_SDK_prop_dingusDies_HPP

class Aprop_dingusDies_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* DUDUDUWU_DUWU;                                             // 0x0370 (size: 0x8)
    class UStaticMeshComponent* bone17;                                               // 0x0378 (size: 0x8)
    class UStaticMeshComponent* bone16;                                               // 0x0380 (size: 0x8)
    class UStaticMeshComponent* bone15;                                               // 0x0388 (size: 0x8)
    class UStaticMeshComponent* bone14;                                               // 0x0390 (size: 0x8)
    class UStaticMeshComponent* bone13;                                               // 0x0398 (size: 0x8)
    class UStaticMeshComponent* bone12;                                               // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* bone11;                                               // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* bone10;                                               // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* bone9;                                                // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* bone8;                                                // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* bone5;                                                // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* bone4;                                                // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* Bone3;                                                // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* Bone2;                                                // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* Bone1;                                                // 0x03E8 (size: 0x8)
    class UStaticMeshComponent* Bone;                                                 // 0x03F0 (size: 0x8)
    TArray<FName> gibs;                                                               // 0x03F8 (size: 0x10)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__prop_dingusDies_DUDUDUWU_DUWU_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void ExecuteUbergraph_prop_dingusDies(int32 EntryPoint);
}; // Size: 0x408

#endif
