#ifndef UE4SS_SDK_uicomp_equipmentSlot_HPP
#define UE4SS_SDK_uicomp_equipmentSlot_HPP

class Uuicomp_equipmentSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_100;                                                        // 0x0268 (size: 0x8)
    class UImage* img;                                                                // 0x0270 (size: 0x8)
    int32 Index;                                                                      // 0x0278 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0280 (size: 0x8)
    FName Name;                                                                       // 0x0288 (size: 0x8)
    class Uui_playerInventory_C* Parent;                                              // 0x0290 (size: 0x8)

    void upd();
    void Init();
    void Construct();
    void BndEvt__Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_equipmentSlot(int32 EntryPoint);
}; // Size: 0x298

#endif
