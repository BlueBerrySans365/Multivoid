#ifndef UE4SS_SDK_tool_rain_HPP
#define UE4SS_SDK_tool_rain_HPP

class Atool_rain_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    bool Active;                                                                      // 0x0538 (size: 0x1)
    float wind_speed;                                                                 // 0x053C (size: 0x4)
    float wind_strength;                                                              // 0x0540 (size: 0x4)
    float lightningChance;                                                            // 0x0544 (size: 0x4)
    float rainStopChance;                                                             // 0x0548 (size: 0x4)
    bool instant;                                                                     // 0x054C (size: 0x1)
    bool updateParameters_0;                                                          // 0x054D (size: 0x1)

    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_rain(int32 EntryPoint);
}; // Size: 0x54E

#endif
