#ifndef UE4SS_SDK_prop_paper_drawable_HPP
#define UE4SS_SDK_prop_paper_drawable_HPP

class Aprop_paper_drawable_C : public Aprop_paper_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 Index;                                                                      // 0x0370 (size: 0x4)
    class UTexture2D* loadTexture;                                                    // 0x0378 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0380 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0388 (size: 0x8)
    class Aprop_pencil_C* pencil;                                                     // 0x0390 (size: 0x8)

    void initDraw();
    void setRT();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_paper_drawable(int32 EntryPoint);
}; // Size: 0x398

#endif
