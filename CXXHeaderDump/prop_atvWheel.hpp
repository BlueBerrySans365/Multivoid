#ifndef UE4SS_SDK_prop_atvWheel_HPP
#define UE4SS_SDK_prop_atvWheel_HPP

class Aprop_atvWheel_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float durability;                                                                 // 0x0370 (size: 0x4)
    float dirt;                                                                       // 0x0374 (size: 0x4)
    FVector cleanVec;                                                                 // 0x0378 (size: 0xC)
    int32 fixes;                                                                      // 0x0384 (size: 0x4)

    void getPriceMultiplier(float& priceMult);
    void toolboxFixTime(float& Time);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void toolboxCanFix(bool& return);
    void updDirt();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void UserConstructionScript();
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_atvWheel(int32 EntryPoint);
}; // Size: 0x388

#endif
