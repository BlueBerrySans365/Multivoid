#ifndef UE4SS_SDK_prop_hose_HPP
#define UE4SS_SDK_prop_hose_HPP

class Aprop_hose_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USplineMeshComponent* End;                                                  // 0x0370 (size: 0x8)
    class AgroundHose_C* groundHose;                                                  // 0x0378 (size: 0x8)
    bool placed;                                                                      // 0x0380 (size: 0x1)
    bool placing;                                                                     // 0x0381 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveDestroyed();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_hose(int32 EntryPoint);
}; // Size: 0x382

#endif
