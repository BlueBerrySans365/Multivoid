#ifndef UE4SS_SDK_ui_signal_HPP
#define UE4SS_SDK_ui_signal_HPP

class Uui_signal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_59;                                                           // 0x0268 (size: 0x8)
    FLinearColor Loc;                                                                 // 0x0270 (size: 0x10)
    bool Direction;                                                                   // 0x0280 (size: 0x1)
    float Alpha;                                                                      // 0x0284 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0288 (size: 0x8)
    float LifeTime;                                                                   // 0x0290 (size: 0x4)
    class AspaceRenderer_C* spaceRenderer;                                            // 0x0298 (size: 0x8)
    float MaxLifetime;                                                                // 0x02A0 (size: 0x4)
    FVector2D Coordinates;                                                            // 0x02A4 (size: 0x8)

    void reduceLifetime(float DeltaTime);
    void Construct();
    void ExecuteUbergraph_ui_signal(int32 EntryPoint);
}; // Size: 0x2AC

#endif
