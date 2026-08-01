#ifndef UE4SS_SDK_effect_foodPoison_HPP
#define UE4SS_SDK_effect_foodPoison_HPP

class Aeffect_foodPoison_C : public Aeffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    float Alpha;                                                                      // 0x0270 (size: 0x4)
    float initTime;                                                                   // 0x0274 (size: 0x4)

    void loadData(Fstruct_save Data, bool& return);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_effect_foodPoison(int32 EntryPoint);
}; // Size: 0x278

#endif
