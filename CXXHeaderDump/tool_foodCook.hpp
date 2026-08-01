#ifndef UE4SS_SDK_tool_foodCook_HPP
#define UE4SS_SDK_tool_foodCook_HPP

class Atool_foodCook_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)

    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_foodCook(int32 EntryPoint);
}; // Size: 0x538

#endif
