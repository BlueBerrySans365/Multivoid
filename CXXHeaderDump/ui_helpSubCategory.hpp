#ifndef UE4SS_SDK_ui_helpSubCategory_HPP
#define UE4SS_SDK_ui_helpSubCategory_HPP

class Uui_helpSubCategory_C : public UUserWidget
{
    class UExpandableArea* subEA_example;                                             // 0x0260 (size: 0x8)
    class UTextBlock* text_header;                                                    // 0x0268 (size: 0x8)
    class UVerticalBox* vbox_list;                                                    // 0x0270 (size: 0x8)
    class Uui_help_C* Owner;                                                          // 0x0278 (size: 0x8)
    class Uui_helpCategory_C* Parent;                                                 // 0x0280 (size: 0x8)
    FName Name;                                                                       // 0x0288 (size: 0x8)
    TArray<FName> children_names;                                                     // 0x0290 (size: 0x10)
    TArray<class Uui_helpCategoryButton_C*> children_slots;                           // 0x02A0 (size: 0x10)

    void expand(bool IsExpanded);
    void Init(const Fstruct_help& struct_help);
}; // Size: 0x2B0

#endif
