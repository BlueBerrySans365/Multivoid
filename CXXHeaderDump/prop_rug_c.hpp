#ifndef UE4SS_SDK_prop_rug_c_HPP
#define UE4SS_SDK_prop_rug_c_HPP

class Aprop_rug_c_C : public Aprop_rug_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x03B0 (size: 0x8)

    void placeOnGround();
    void placeFromHand();
    void setSkin();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void intComs_gamemodeBeginPlay();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void ExecuteUbergraph_prop_rug_c(int32 EntryPoint);
}; // Size: 0x3B8

#endif
