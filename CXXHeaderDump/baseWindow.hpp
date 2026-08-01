#ifndef UE4SS_SDK_baseWindow_HPP
#define UE4SS_SDK_baseWindow_HPP

class AbaseWindow_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0250 (size: 0x8)
    class UArrowComponent* inside;                                                    // 0x0258 (size: 0x8)
    float clean;                                                                      // 0x0260 (size: 0x4)
    FVector cleanVec;                                                                 // 0x0264 (size: 0xC)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void setClean();
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void UserConstructionScript();
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_baseWindow(int32 EntryPoint);
}; // Size: 0x270

#endif
