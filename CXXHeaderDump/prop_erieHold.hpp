#ifndef UE4SS_SDK_prop_erieHold_HPP
#define UE4SS_SDK_prop_erieHold_HPP

class Aprop_erieHold_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0370 (size: 0x8)
    TSubclassOf<class AeriePlushLive_C> NPC;                                          // 0x0378 (size: 0x8)
    TSubclassOf<class AerieDrag_C> throw;                                             // 0x0380 (size: 0x8)
    float rep;                                                                        // 0x0388 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_erieHold(int32 EntryPoint);
}; // Size: 0x38C

#endif
