#ifndef UE4SS_SDK_meatEater_HPP
#define UE4SS_SDK_meatEater_HPP

class AmeatEater_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0250 (size: 0x8)
    float NewVar_0;                                                                   // 0x0258 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_meatEater(int32 EntryPoint);
}; // Size: 0x25C

#endif
