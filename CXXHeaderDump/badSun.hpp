#ifndef UE4SS_SDK_badSun_HPP
#define UE4SS_SDK_badSun_HPP

class AbadSun_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0250 (size: 0x8)
    float a_a_ADF069CE4A49B896D1064B954824CC67;                                       // 0x0258 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_ADF069CE4A49B896D1064B954824CC67; // 0x025C (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0260 (size: 0x8)
    class Uui_badSun_C* Widget;                                                       // 0x0268 (size: 0x8)
    bool endSiren;                                                                    // 0x0270 (size: 0x1)
    int32 destroy;                                                                    // 0x0274 (size: 0x4)
    bool Super;                                                                       // 0x0278 (size: 0x1)
    class ARuntimeVirtualTextureVolume* rvt;                                          // 0x0280 (size: 0x8)
    float NewVar_0;                                                                   // 0x0288 (size: 0x4)

    void a__FinishedFunc();
    void a__UpdateFunc();
    void ReceiveBeginPlay();
    void Remove();
    void siren();
    void updateRvt();
    void ExecuteUbergraph_badSun(int32 EntryPoint);
}; // Size: 0x28C

#endif
