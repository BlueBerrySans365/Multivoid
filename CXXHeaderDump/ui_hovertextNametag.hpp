#ifndef UE4SS_SDK_ui_hovertextNametag_HPP
#define UE4SS_SDK_ui_hovertextNametag_HPP

class Uui_hovertextNametag_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* back;                                                               // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel;                                                  // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class UCanvasPanel* CanvasPanel_31;                                               // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_41;                                                   // 0x0288 (size: 0x8)
    class AActor* Owner;                                                              // 0x0290 (size: 0x8)
    FText Text;                                                                       // 0x0298 (size: 0x18)
    FVector Offset;                                                                   // 0x02B0 (size: 0xC)
    FVector2D Size;                                                                   // 0x02BC (size: 0x8)
    class UPrimitiveComponent* Component;                                             // 0x02C8 (size: 0x8)
    bool isConstantScale;                                                             // 0x02D0 (size: 0x1)
    float cosntantScale;                                                              // 0x02D4 (size: 0x4)
    bool tickUpdate;                                                                  // 0x02D8 (size: 0x1)
    class USphereComponent* overlapRadius;                                            // 0x02E0 (size: 0x8)
    float textSize;                                                                   // 0x02E8 (size: 0x4)

    void Loc(FVector& Origin);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Update();
    void Dest(class AActor* DestroyedActor);
    void beginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void endOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_ui_hovertextNametag(int32 EntryPoint);
}; // Size: 0x2EC

#endif
