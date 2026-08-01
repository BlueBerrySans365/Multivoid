#ifndef UE4SS_SDK_prop_soos_HPP
#define UE4SS_SDK_prop_soos_HPP

class Aprop_soos_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* eff_radCapsUnderwater;                            // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)
    class Ucomp_radiation_C* radComp;                                                 // 0x0380 (size: 0x8)
    float Max;                                                                        // 0x0388 (size: 0x4)
    float Time;                                                                       // 0x038C (size: 0x4)
    float alphaD;                                                                     // 0x0390 (size: 0x4)
    bool isExploding;                                                                 // 0x0394 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void Light(float NewIntensity);
    void Exp(bool Skip);
    void microwave(class Aprop_microwave_C* microwave);
    void exitTheWater();
    void enteredTheWater();
    void leaveWater(class AwaterVolume_C* Water);
    void ExecuteUbergraph_prop_soos(int32 EntryPoint);
}; // Size: 0x395

#endif
