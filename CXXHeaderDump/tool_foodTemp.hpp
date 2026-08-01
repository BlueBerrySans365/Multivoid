#ifndef UE4SS_SDK_tool_foodTemp_HPP
#define UE4SS_SDK_tool_foodTemp_HPP

class Atool_foodTemp_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    float foodTemp;                                                                   // 0x0538 (size: 0x4)

    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_foodTemp(int32 EntryPoint);
}; // Size: 0x53C

#endif
