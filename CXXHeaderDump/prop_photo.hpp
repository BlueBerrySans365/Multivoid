#ifndef UE4SS_SDK_prop_photo_HPP
#define UE4SS_SDK_prop_photo_HPP

class Aprop_photo_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 Index;                                                                      // 0x0370 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0378 (size: 0x8)
    int32 originalIndex;                                                              // 0x0380 (size: 0x4)

    void loadImage();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_photo(int32 EntryPoint);
}; // Size: 0x384

#endif
