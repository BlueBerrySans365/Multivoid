#ifndef UE4SS_SDK_tool_identify_HPP
#define UE4SS_SDK_tool_identify_HPP

class Atool_identify_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)

    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_identify(int32 EntryPoint);
}; // Size: 0x538

#endif
