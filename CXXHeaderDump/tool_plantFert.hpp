#ifndef UE4SS_SDK_tool_plantFert_HPP
#define UE4SS_SDK_tool_plantFert_HPP

class Atool_plantFert_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    float fertilizer;                                                                 // 0x0538 (size: 0x4)

    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_plantFert(int32 EntryPoint);
}; // Size: 0x53C

#endif
