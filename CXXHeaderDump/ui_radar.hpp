#ifndef UE4SS_SDK_ui_radar_HPP
#define UE4SS_SDK_ui_radar_HPP

class Uui_radar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canvas_moabImpact;                                            // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_moabPoints;                                            // 0x0270 (size: 0x8)
    class UCanvasPanel* canvas_offset;                                                // 0x0278 (size: 0x8)
    class UCanvasPanel* canvas_points;                                                // 0x0280 (size: 0x8)
    class UCanvasPanel* canvas_zoom;                                                  // 0x0288 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_172;                                                          // 0x02A0 (size: 0x8)
    class UImage* Image_372;                                                          // 0x02A8 (size: 0x8)
    class UImage* img_2;                                                              // 0x02B0 (size: 0x8)
    class UImage* img_map;                                                            // 0x02B8 (size: 0x8)
    class UImage* img_map_1;                                                          // 0x02C0 (size: 0x8)
    class UImage* img_moabCam;                                                        // 0x02C8 (size: 0x8)
    class UImage* img_radar;                                                          // 0x02D0 (size: 0x8)
    class UImage* img_radarBorderCorners;                                             // 0x02D8 (size: 0x8)
    class UImage* img_tracks;                                                         // 0x02E0 (size: 0x8)
    class UTextBlock* text_height;                                                    // 0x02E8 (size: 0x8)
    class UTextBlock* text_impact;                                                    // 0x02F0 (size: 0x8)
    class UTextBlock* text_loading;                                                   // 0x02F8 (size: 0x8)
    class UTextBlock* text_missle_distance;                                           // 0x0300 (size: 0x8)
    class UTextBlock* text_missle_time;                                               // 0x0308 (size: 0x8)
    class UTextBlock* text_missle_velocity;                                           // 0x0310 (size: 0x8)
    class UTextBlock* text_offsetA;                                                   // 0x0318 (size: 0x8)
    class UTextBlock* text_offsetD;                                                   // 0x0320 (size: 0x8)
    class UTextBlock* text_offsetx;                                                   // 0x0328 (size: 0x8)
    class UTextBlock* text_offsety;                                                   // 0x0330 (size: 0x8)
    class UTextBlock* text_zoom_1;                                                    // 0x0338 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_29;                                         // 0x0340 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0348 (size: 0x8)
    float Zoom;                                                                       // 0x0350 (size: 0x4)
    FVector2D Offset;                                                                 // 0x0354 (size: 0x8)
    int32 move_up;                                                                    // 0x035C (size: 0x4)
    int32 move_right;                                                                 // 0x0360 (size: 0x4)
    int32 move_zoom;                                                                  // 0x0364 (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x0368 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_map;                                       // 0x0370 (size: 0x8)
    float DeltaTime;                                                                  // 0x0378 (size: 0x4)
    FVector Hloc;                                                                     // 0x037C (size: 0xC)
    float Lerp;                                                                       // 0x0388 (size: 0x4)
    class Aprop_moabRocket_C* rocket;                                                 // 0x0390 (size: 0x8)
    class USceneCaptureComponent2D* moabCam;                                          // 0x0398 (size: 0x8)
    class UTextureRenderTarget2D* moabRT;                                             // 0x03A0 (size: 0x8)
    TArray<class Uui_radarMoabPoint_C*> moabPoints;                                   // 0x03A8 (size: 0x10)
    bool loadingMortar;                                                               // 0x03B8 (size: 0x1)
    int32 L;                                                                          // 0x03BC (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_drawPath;                                  // 0x03C0 (size: 0x8)
    bool NewVar_0;                                                                    // 0x03C8 (size: 0x1)
    class UTextureRenderTarget2D* rt_path;                                            // 0x03D0 (size: 0x8)
    float zoomMax;                                                                    // 0x03D8 (size: 0x4)
    float zoomMin;                                                                    // 0x03DC (size: 0x4)
    bool hasRadar;                                                                    // 0x03E0 (size: 0x1)

    void setRadarRadius(bool Index);
    void drawPathClear();
    void drawPathFadeout();
    void drawPath(FVector2D A, FVector2D B);
    void clearMoabPoints();
    void makeRadarMoabPoints();
    void translationToCoords(FVector2D InputPin, FVector2D& OutputPin);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void setZoom();
    void setColor(FLinearColor Color);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void fireMoab();
    void HitTarget(class AActor* DestroyedActor);
    void launchMoab();
    void ExecuteUbergraph_ui_radar(int32 EntryPoint);
}; // Size: 0x3E1

#endif
