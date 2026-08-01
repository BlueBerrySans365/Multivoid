#ifndef UE4SS_SDK_ui_helpCategory_HPP
#define UE4SS_SDK_ui_helpCategory_HPP

class Uui_helpCategory_C : public UUserWidget
{
    class UExpandableArea* EA_example;                                                // 0x0260 (size: 0x8)
    class UTextBlock* text_header;                                                    // 0x0268 (size: 0x8)
    class UVerticalBox* vbox_subList;                                                 // 0x0270 (size: 0x8)
    class Uui_help_C* Owner;                                                          // 0x0278 (size: 0x8)
    TEnumAsByte<enum_helpCategory::Type> Category;                                    // 0x0280 (size: 0x1)
    TArray<FName> children_names;                                                     // 0x0288 (size: 0x10)
    TArray<class Uui_helpSubCategory_C*> children_slots;                              // 0x0298 (size: 0x10)
    TArray<FName> childrenTopic_names;                                                // 0x02A8 (size: 0x10)
    TArray<class Uui_helpCategoryButton_C*> childrenTopic_slots;                      // 0x02B8 (size: 0x10)

    void expand(bool IsExpanded);
    void Init(const Fstruct_help& struct_help);
}; // Size: 0x2C8

#endif
