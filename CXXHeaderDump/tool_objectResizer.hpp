#ifndef UE4SS_SDK_tool_objectResizer_HPP
#define UE4SS_SDK_tool_objectResizer_HPP

class Atool_objectResizer_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    FVector Size;                                                                     // 0x0538 (size: 0xC)

    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_objectResizer(int32 EntryPoint);
}; // Size: 0x544

#endif
