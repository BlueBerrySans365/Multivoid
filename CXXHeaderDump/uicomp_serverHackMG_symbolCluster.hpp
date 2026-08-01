#ifndef UE4SS_SDK_uicomp_serverHackMG_symbolCluster_HPP
#define UE4SS_SDK_uicomp_serverHackMG_symbolCluster_HPP

class Uuicomp_serverHackMG_symbolCluster_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_34;                                                         // 0x0268 (size: 0x8)
    class UTextBlock* text_text;                                                      // 0x0270 (size: 0x8)
    FString Text;                                                                     // 0x0278 (size: 0x10)
    int32 Amount;                                                                     // 0x0288 (size: 0x4)
    int32 Length;                                                                     // 0x028C (size: 0x4)
    class Uui_serverMinigame_C* Owner;                                                // 0x0290 (size: 0x8)
    FIntPoint Index;                                                                  // 0x0298 (size: 0x8)

    void SetText(FString inString);
    void GetLength(int32& Output);
    void generateRandomSymbols(bool rofl);
    void BndEvt__uicomp_serverHackMG_symbolCluster_Button_34_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__uicomp_serverHackMG_symbolCluster_Button_34_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__uicomp_serverHackMG_symbolCluster_Button_34_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_serverHackMG_symbolCluster(int32 EntryPoint);
}; // Size: 0x2A0

#endif
