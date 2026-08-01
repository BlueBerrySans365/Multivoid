#ifndef UE4SS_SDK_uicomp_spawnmenuSlot_HPP
#define UE4SS_SDK_uicomp_spawnmenuSlot_HPP

class Uuicomp_spawnmenuSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_41;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_125;                                                          // 0x0270 (size: 0x8)
    class UImage* img_back;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0280 (size: 0x8)
    int32 Index;                                                                      // 0x0288 (size: 0x4)
    Fstruct_prop Data;                                                                // 0x0290 (size: 0x78)
    FName Name;                                                                       // 0x0308 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0310 (size: 0x8)
    class Uui_spawnmenu_C* Owner;                                                     // 0x0318 (size: 0x8)
    int32 visIndex;                                                                   // 0x0320 (size: 0x4)
    int32 gridIndex;                                                                  // 0x0324 (size: 0x4)

    void setGridLocation(int32 InputPin);
    void Filter();
    void Construct();
    void BndEvt__Button_41_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_41_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_spawnmenuSlot_Button_41_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BP_OnEntryReleased();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void ExecuteUbergraph_uicomp_spawnmenuSlot(int32 EntryPoint);
}; // Size: 0x328

#endif
