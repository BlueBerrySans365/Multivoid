#ifndef UE4SS_SDK_ui_hovertext_typing_HPP
#define UE4SS_SDK_ui_hovertext_typing_HPP

class Uui_hovertext_typing_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* back;                                                               // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_root;                                                  // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class UImage* image_line;                                                         // 0x0288 (size: 0x8)
    class UImage* image_lineEnd;                                                      // 0x0290 (size: 0x8)
    class UTextBlock* text_next;                                                      // 0x0298 (size: 0x8)
    class UTextBlock* text_total;                                                     // 0x02A0 (size: 0x8)
    class UTextBlock* TextBlock_41;                                                   // 0x02A8 (size: 0x8)
    class AActor* Owner;                                                              // 0x02B0 (size: 0x8)
    FText Text;                                                                       // 0x02B8 (size: 0x18)
    FVector Offset;                                                                   // 0x02D0 (size: 0xC)
    bool autoType;                                                                    // 0x02DC (size: 0x1)
    FString textToType;                                                               // 0x02E0 (size: 0x10)
    float typeProgress;                                                               // 0x02F0 (size: 0x4)
    float typeSpeed;                                                                  // 0x02F4 (size: 0x4)
    bool isTyping;                                                                    // 0x02F8 (size: 0x1)
    class UAudioComponent* audio1;                                                    // 0x0300 (size: 0x8)
    int32 characterPos;                                                               // 0x0308 (size: 0x4)
    int32 characterPos_check;                                                         // 0x030C (size: 0x4)
    class UAudioComponent* audio2;                                                    // 0x0310 (size: 0x8)
    class UAudioComponent* audio3;                                                    // 0x0318 (size: 0x8)
    int32 typeSoundIndex;                                                             // 0x0320 (size: 0x4)
    float typeDelay;                                                                  // 0x0324 (size: 0x4)
    TMap<FString, float> characterDelays;                                             // 0x0328 (size: 0x50)
    Fui_hovertext_typing_CFinishedTyping finishedTyping;                              // 0x0378 (size: 0x10)
    void finishedTyping(bool skipped, bool forceFinish);
    bool pointing;                                                                    // 0x0388 (size: 0x1)
    FVector pointing_location;                                                        // 0x038C (size: 0xC)
    float dist;                                                                       // 0x0398 (size: 0x4)
    float LineLength;                                                                 // 0x039C (size: 0x4)
    Fui_hovertext_typing_CStartedTyping startedTyping;                                // 0x03A0 (size: 0x10)
    void startedTyping();
    class UMaterialInstanceDynamic* dynmat_line;                                      // 0x03B0 (size: 0x8)
    Fstruct_tutorialHelpText tutorialData;                                            // 0x03B8 (size: 0x58)
    class AActor* pointToActor;                                                       // 0x0410 (size: 0x8)
    class UPrimitiveComponent* pointToComponent;                                      // 0x0418 (size: 0x8)

    void showFullText();
    void stopTalking();
    void getPointLocation(FVector& pointing_location);
    void resetText();
    void typeText(float typeSpeed, Fstruct_tutorialHelpText Data, bool& skipped);
    void startPointing(bool& return);
    void isFinished(bool Index);
    void setTotal(int32 Current, int32 Total);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ui_hovertext_typing(int32 EntryPoint);
    void startedTyping__DelegateSignature();
    void finishedTyping__DelegateSignature(bool skipped, bool forceFinish);
}; // Size: 0x420

#endif
