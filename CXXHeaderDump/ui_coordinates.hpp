#ifndef UE4SS_SDK_ui_coordinates_HPP
#define UE4SS_SDK_ui_coordinates_HPP

class Uui_coordinates_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canvas_edge_0;                                                // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_edge_1;                                                // 0x0270 (size: 0x8)
    class UCanvasPanel* canvas_edge_2;                                                // 0x0278 (size: 0x8)
    class UCanvasPanel* canvas_edgeC_0;                                               // 0x0280 (size: 0x8)
    class UCanvasPanel* canvas_edgeC_1;                                               // 0x0288 (size: 0x8)
    class UCanvasPanel* canvas_edgeC_2;                                               // 0x0290 (size: 0x8)
    class UCanvasPanel* canvas_pingCenter;                                            // 0x0298 (size: 0x8)
    class UCanvasPanel* canvas_spaceSigns;                                            // 0x02A0 (size: 0x8)
    class UCanvasPanel* canvas_vert_0;                                                // 0x02A8 (size: 0x8)
    class UCanvasPanel* canvas_vert_1;                                                // 0x02B0 (size: 0x8)
    class UCanvasPanel* canvas_vert_2;                                                // 0x02B8 (size: 0x8)
    class UCanvasPanel* canvas_vertPointer_0;                                         // 0x02C0 (size: 0x8)
    class UCanvasPanel* canvas_vertPointer_1;                                         // 0x02C8 (size: 0x8)
    class UCanvasPanel* canvas_vertPointer_2;                                         // 0x02D0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_245;                                              // 0x02D8 (size: 0x8)
    class UImage* im_coordBorder;                                                     // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02F8 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0300 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0308 (size: 0x8)
    class UImage* Image_61;                                                           // 0x0310 (size: 0x8)
    class UImage* Image_128;                                                          // 0x0318 (size: 0x8)
    class UImage* image_ping;                                                         // 0x0320 (size: 0x8)
    class UImage* img_crosshair_0;                                                    // 0x0328 (size: 0x8)
    class UImage* img_crosshair_1;                                                    // 0x0330 (size: 0x8)
    class UImage* img_crosshair_2;                                                    // 0x0338 (size: 0x8)
    class UImage* img_crosshair_3;                                                    // 0x0340 (size: 0x8)
    class UImage* img_edge_0;                                                         // 0x0348 (size: 0x8)
    class UImage* img_edge_1;                                                         // 0x0350 (size: 0x8)
    class UImage* img_edge_2;                                                         // 0x0358 (size: 0x8)
    class UImage* img_edgeC_0;                                                        // 0x0360 (size: 0x8)
    class UImage* img_edgeC_1;                                                        // 0x0368 (size: 0x8)
    class UImage* img_edgeC_2;                                                        // 0x0370 (size: 0x8)
    class UImage* img_triangle;                                                       // 0x0378 (size: 0x8)
    class UImage* img_vertPoint_0;                                                    // 0x0380 (size: 0x8)
    class UImage* img_vertPoint_1;                                                    // 0x0388 (size: 0x8)
    class UImage* img_vertPoint_2;                                                    // 0x0390 (size: 0x8)
    class URetainerBox* rettbox_space;                                                // 0x0398 (size: 0x8)
    class UTextBlock* text_coordDist_0;                                               // 0x03A0 (size: 0x8)
    class UTextBlock* text_coordDist_1;                                               // 0x03A8 (size: 0x8)
    class UTextBlock* text_coordDist_2;                                               // 0x03B0 (size: 0x8)
    FVector2D viewCoordinate;                                                         // 0x03B8 (size: 0x8)
    FVector2D Coordinate_0;                                                           // 0x03C0 (size: 0x8)
    FVector2D Coordinate_1;                                                           // 0x03C8 (size: 0x8)
    FVector2D Coordinate_2;                                                           // 0x03D0 (size: 0x8)
    int32 selected;                                                                   // 0x03D8 (size: 0x4)
    FVector2D coordinate_middle;                                                      // 0x03DC (size: 0x8)
    float innerCircleRadius;                                                          // 0x03E4 (size: 0x4)
    float Line_0;                                                                     // 0x03E8 (size: 0x4)
    float Line_1;                                                                     // 0x03EC (size: 0x4)
    float Line_2;                                                                     // 0x03F0 (size: 0x4)
    float perim;                                                                      // 0x03F4 (size: 0x4)
    TArray<class UMaterialInstanceDynamic*> dynmat_linesEdges;                        // 0x03F8 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> dynmat_linesInner;                        // 0x0408 (size: 0x10)
    class UMaterialInstanceDynamic* dynmat_ping;                                      // 0x0418 (size: 0x8)
    bool canPing;                                                                     // 0x0420 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat_triangle;                                  // 0x0428 (size: 0x8)
    FVector2D triangle_position;                                                      // 0x0430 (size: 0x8)
    FVector2D triangle_size;                                                          // 0x0438 (size: 0x8)
    bool exploreMode;                                                                 // 0x0440 (size: 0x1)
    bool Direction;                                                                   // 0x0441 (size: 0x1)
    class Uui_consolesAtlas_C* Atlas;                                                 // 0x0448 (size: 0x8)
    bool coordsInPlace;                                                               // 0x0450 (size: 0x1)
    bool activeCoord_0;                                                               // 0x0451 (size: 0x1)
    bool activeCoord_1;                                                               // 0x0452 (size: 0x1)
    bool activeCoord_2;                                                               // 0x0453 (size: 0x1)
    float coordRadarsSpeed;                                                           // 0x0454 (size: 0x4)

    void isAnyCoordinateWorking(bool& IsBroken);
    void isCoordinateWorking(int32 Index, bool& IsBroken);
    void movePointToCursor(int32 selected, bool& onCooldown);
    void getAreaSize(FVector2D& Size);
    void setCursorOpacity();
    void getHorizontalAngle(FVector2D vec, float& return);
    void changeCursor(int32 selected);
    FVector2D getCursorLocation();
    void updCursorLocations();
    void setCoordinateLocation(FVector2D Value);
    void updMainCursor();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ui_coordinates(int32 EntryPoint);
}; // Size: 0x458

#endif
