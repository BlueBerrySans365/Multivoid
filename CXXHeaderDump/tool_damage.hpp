#ifndef UE4SS_SDK_tool_damage_HPP
#define UE4SS_SDK_tool_damage_HPP

class Atool_damage_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    float Damage;                                                                     // 0x0538 (size: 0x4)

    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_damage(int32 EntryPoint);
}; // Size: 0x53C

#endif
