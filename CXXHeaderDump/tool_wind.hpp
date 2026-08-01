#ifndef UE4SS_SDK_tool_wind_HPP
#define UE4SS_SDK_tool_wind_HPP

class Atool_wind_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    float wind_intensity;                                                             // 0x0538 (size: 0x4)
    float wind_angle;                                                                 // 0x053C (size: 0x4)
    float wind_speed;                                                                 // 0x0540 (size: 0x4)
    float wind_strength;                                                              // 0x0544 (size: 0x4)

    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_wind(int32 EntryPoint);
}; // Size: 0x548

#endif
