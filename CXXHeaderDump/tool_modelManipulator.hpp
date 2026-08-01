#ifndef UE4SS_SDK_tool_modelManipulator_HPP
#define UE4SS_SDK_tool_modelManipulator_HPP

class Atool_modelManipulator_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    class UPrimitiveComponent* component_A;                                           // 0x0538 (size: 0x8)
    class UPrimitiveComponent* component_B;                                           // 0x0540 (size: 0x8)
    float Length;                                                                     // 0x0548 (size: 0x4)
    float linear_strength;                                                            // 0x054C (size: 0x4)
    float angular_strength;                                                           // 0x0550 (size: 0x4)
    FString Model;                                                                    // 0x0558 (size: 0x10)
    FString asProp;                                                                   // 0x0568 (size: 0x10)
    class Atool_modelManipulator_C* ref;                                              // 0x0578 (size: 0x8)

    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_modelManipulator(int32 EntryPoint);
}; // Size: 0x580

#endif
