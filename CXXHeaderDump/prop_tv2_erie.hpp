#ifndef UE4SS_SDK_prop_tv2_erie_HPP
#define UE4SS_SDK_prop_tv2_erie_HPP

class Aprop_tv2_erie_C : public Aprop_tv2_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04B8 (size: 0x8)

    void UserConstructionScript();
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_tv2_erie(int32 EntryPoint);
}; // Size: 0x4C0

#endif
