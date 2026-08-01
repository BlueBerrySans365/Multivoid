#ifndef UE4SS_SDK_uicomp_shopCartSlot_HPP
#define UE4SS_SDK_uicomp_shopCartSlot_HPP

class Uuicomp_shopCartSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_del;                                                        // 0x0268 (size: 0x8)
    class UTextBlock* txt_item;                                                       // 0x0270 (size: 0x8)
    class UTextBlock* txt_price;                                                      // 0x0278 (size: 0x8)
    class Uui_laptop_C* Owner;                                                        // 0x0280 (size: 0x8)
    int32 Index;                                                                      // 0x0288 (size: 0x4)

    void getSearchName(FName& Name);
    void upd(FText Name, int32 price);
    void triggerRandom();
    void BndEvt__Button_del_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void setIndex(int32 Index);
    void resume();
    void ExecuteUbergraph_uicomp_shopCartSlot(int32 EntryPoint);
}; // Size: 0x28C

#endif
