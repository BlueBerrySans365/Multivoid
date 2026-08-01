#ifndef UE4SS_SDK_grime_uv_HPP
#define UE4SS_SDK_grime_uv_HPP

class Agrime_uv_C : public Agrime_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    float UV;                                                                         // 0x0288 (size: 0x4)
    bool noUV;                                                                        // 0x028C (size: 0x1)
    float uvLerp;                                                                     // 0x0290 (size: 0x4)

    void upd();
    void applyMaterial();
    void UserConstructionScript();
    void receiveUV(class AUVlight_C* Source, float Intensity);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_grime_uv(int32 EntryPoint);
}; // Size: 0x294

#endif
