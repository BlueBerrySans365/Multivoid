#ifndef UE4SS_SDK_uicomp_saveSlotFolder_HPP
#define UE4SS_SDK_uicomp_saveSlotFolder_HPP

class Uuicomp_saveSlotFolder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UExpandableArea* EA_example;                                                // 0x0268 (size: 0x8)
    class UTextBlock* text_amount;                                                    // 0x0270 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0278 (size: 0x8)
    class UVerticalBox* vbox_list;                                                    // 0x0280 (size: 0x8)
    FString SlotName;                                                                 // 0x0288 (size: 0x10)
    class Uui_saveSlots_C* Parent;                                                    // 0x0298 (size: 0x8)
    int32 ID;                                                                         // 0x02A0 (size: 0x4)
    bool generated;                                                                   // 0x02A4 (size: 0x1)
    FDateTime latestDate;                                                             // 0x02A8 (size: 0x8)

    void setDate();
    void initFolder();
    void BndEvt__ui_saveSlotFolder_EA_example_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
    void ExecuteUbergraph_uicomp_saveSlotFolder(int32 EntryPoint);
}; // Size: 0x2B0

#endif
