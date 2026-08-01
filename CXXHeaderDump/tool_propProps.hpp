#ifndef UE4SS_SDK_tool_propProps_HPP
#define UE4SS_SDK_tool_propProps_HPP

class Atool_propProps_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    bool isStatic;                                                                    // 0x0538 (size: 0x1)
    bool isFrozen;                                                                    // 0x0539 (size: 0x1)
    bool IsActive;                                                                    // 0x053A (size: 0x1)
    bool isSleeping;                                                                  // 0x053B (size: 0x1)

    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_propProps(int32 EntryPoint);
}; // Size: 0x53C

#endif
