#ifndef UE4SS_SDK_tool_setDishCalibration_HPP
#define UE4SS_SDK_tool_setDishCalibration_HPP

class Atool_setDishCalibration_C : public AtoolObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0530 (size: 0x8)
    float calibration;                                                                // 0x0538 (size: 0x4)
    int32 Index;                                                                      // 0x053C (size: 0x4)
    FString Name;                                                                     // 0x0540 (size: 0x10)

    void findDish(TArray<class Adish_C*>& Array);
    void Info(class Adish_C* dish);
    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void Init(class Aprop_toolgun_C* toolgun);
    void ExecuteUbergraph_tool_setDishCalibration(int32 EntryPoint);
}; // Size: 0x550

#endif
