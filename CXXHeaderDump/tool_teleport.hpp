#ifndef UE4SS_SDK_tool_teleport_HPP
#define UE4SS_SDK_tool_teleport_HPP

class Atool_teleport_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    float fuel;                                                                       // 0x0538 (size: 0x4)
    FVector xum;                                                                      // 0x053C (size: 0xC)
    int32 am;                                                                         // 0x0548 (size: 0x4)

    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_teleport(int32 EntryPoint);
}; // Size: 0x54C

#endif
