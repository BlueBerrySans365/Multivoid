#ifndef UE4SS_SDK_ui_toolParameter_HPP
#define UE4SS_SDK_ui_toolParameter_HPP

class Uui_toolParameter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCheckBox* checkbox_bool;                                                   // 0x0268 (size: 0x8)
    class UEditableTextBox* etb_floats;                                               // 0x0270 (size: 0x8)
    class UEditableTextBox* etb_ints;                                                 // 0x0278 (size: 0x8)
    class UEditableTextBox* etb_string;                                               // 0x0280 (size: 0x8)
    class UEditableTextBox* etb_vectorX;                                              // 0x0288 (size: 0x8)
    class UEditableTextBox* etb_vectorY;                                              // 0x0290 (size: 0x8)
    class UEditableTextBox* etb_vectorZ;                                              // 0x0298 (size: 0x8)
    class USpinBox* spinbox_byte;                                                     // 0x02A0 (size: 0x8)
    class USpinBox* SpinBox_pitch;                                                    // 0x02A8 (size: 0x8)
    class USpinBox* SpinBox_roll;                                                     // 0x02B0 (size: 0x8)
    class USpinBox* SpinBox_yaw;                                                      // 0x02B8 (size: 0x8)
    class UWidgetSwitcher* switcher;                                                  // 0x02C0 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x02C8 (size: 0x8)
    TEnumAsByte<enum_toolParameterType::Type> Type;                                   // 0x02D0 (size: 0x1)
    FName Name;                                                                       // 0x02D4 (size: 0x8)
    class Uui_spawnmenu_C* Owner;                                                     // 0x02E0 (size: 0x8)
    int32 referenceIndex;                                                             // 0x02E8 (size: 0x4)
    class AtoolObject_C* Object;                                                      // 0x02F0 (size: 0x8)
    float comp_vectorX;                                                               // 0x02F8 (size: 0x4)
    float comp_vectorY;                                                               // 0x02FC (size: 0x4)
    float comp_vectorZ;                                                               // 0x0300 (size: 0x4)
    float comp_rotX;                                                                  // 0x0304 (size: 0x4)
    float comp_rotY;                                                                  // 0x0308 (size: 0x4)
    float comp_rotZ;                                                                  // 0x030C (size: 0x4)
    bool slide;                                                                       // 0x0310 (size: 0x1)

    void updFields();
    void Update(TEnumAsByte<enum_toolParameterType::Type> Type, FName Name, int32 referenceIndex);
    void setParam(const bool Bool, const uint8 Byte, const int32 integer, const float Float, const FString String, const FVector Vector, const FRotator Rotator, const UClass* Class);
    void Init();
    void BndEvt__ui_toolParameter_etb_floats_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ui_toolParameter_spinbox_byte_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_toolParameter_etb_ints_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_toolParameter_checkbox_bool_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__ui_toolParameter_etb_vectorX_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_toolParameter_etb_vectorY_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_toolParameter_etb_vectorZ_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_toolParameter_etb_string_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_toolParameter_SpinBox_pitch_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__ui_toolParameter_SpinBox_roll_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__ui_toolParameter_SpinBox_yaw_K2Node_ComponentBoundEvent_14_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__ui_toolParameter_SpinBox_roll_K2Node_ComponentBoundEvent_16_OnSpinBoxBeginSliderMovement__DelegateSignature();
    void BndEvt__ui_toolParameter_SpinBox_yaw_K2Node_ComponentBoundEvent_17_OnSpinBoxBeginSliderMovement__DelegateSignature();
    void BndEvt__ui_toolParameter_SpinBox_pitch_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__ui_toolParameter_SpinBox_roll_K2Node_ComponentBoundEvent_19_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__ui_toolParameter_SpinBox_yaw_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__ui_toolParameter_SpinBox_pitch_K2Node_ComponentBoundEvent_23_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_toolParameter_SpinBox_roll_K2Node_ComponentBoundEvent_24_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_toolParameter_SpinBox_yaw_K2Node_ComponentBoundEvent_25_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_toolParameter_SpinBox_pitch_K2Node_ComponentBoundEvent_8_OnSpinBoxBeginSliderMovement__DelegateSignature();
    void ExecuteUbergraph_ui_toolParameter(int32 EntryPoint);
}; // Size: 0x311

#endif
