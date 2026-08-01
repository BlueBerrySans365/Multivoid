#ifndef UE4SS_SDK_prop_poster_HPP
#define UE4SS_SDK_prop_poster_HPP

class Aprop_poster_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0370 (size: 0x8)
    class UArrowComponent* spawnLoc;                                                  // 0x0378 (size: 0x8)
    int32 Type;                                                                       // 0x0380 (size: 0x4)
    int32 Index;                                                                      // 0x0384 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0388 (size: 0x8)
    class AmainPlayer_C* holdingPlayer;                                               // 0x0390 (size: 0x8)
    FName Filename;                                                                   // 0x0398 (size: 0x8)
    bool Custom;                                                                      // 0x03A0 (size: 0x1)
    TSubclassOf<class Aposter_c> posterClass;                                         // 0x03A8 (size: 0x8)

    FRotator normalRot(FVector InputPin);
    void setTex();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void put();
    void UserConstructionScript();
    void intComs_gamemodeBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ReceiveTick(float DeltaSeconds);
    void playerHoldPost(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void ExecuteUbergraph_prop_poster(int32 EntryPoint);
}; // Size: 0x3B0

#endif
