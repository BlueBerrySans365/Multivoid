#ifndef UE4SS_SDK_ui_badSun_HPP
#define UE4SS_SDK_ui_badSun_HPP

class Uui_badSun_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canv;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_45;                                                           // 0x0270 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0278 (size: 0x10)
    float A;                                                                          // 0x0288 (size: 0x4)
    bool hide;                                                                        // 0x028C (size: 0x1)
    class AbadSun_C* sunObj;                                                          // 0x0290 (size: 0x8)
    TArray<class UPhysicalMaterial*> seeThrough;                                      // 0x0298 (size: 0x10)
    bool D;                                                                           // 0x02A8 (size: 0x1)
    float dryAlpha;                                                                   // 0x02AC (size: 0x4)
    bool dry;                                                                         // 0x02B0 (size: 0x1)
    bool Super;                                                                       // 0x02B1 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x02B8 (size: 0x8)
    TArray<class AActor*> ignores;                                                    // 0x02C0 (size: 0x10)
    bool turnCam;                                                                     // 0x02D0 (size: 0x1)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ui_badSun(int32 EntryPoint);
}; // Size: 0x2D1

#endif
