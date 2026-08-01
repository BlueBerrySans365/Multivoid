#ifndef UE4SS_SDK_tool_plantFruit_HPP
#define UE4SS_SDK_tool_plantFruit_HPP

class Atool_plantFruit_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)

    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_plantFruit(int32 EntryPoint);
}; // Size: 0x538

#endif
