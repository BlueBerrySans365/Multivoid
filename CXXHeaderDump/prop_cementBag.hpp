#ifndef UE4SS_SDK_prop_cementBag_HPP
#define UE4SS_SDK_prop_cementBag_HPP

class Aprop_cementBag_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    int32 units;                                                                      // 0x0378 (size: 0x4)
    int32 maxUnits;                                                                   // 0x037C (size: 0x4)

    void transferUnit(class Aprop_cementBag_C* from, class Aprop_cementBag_C* to);
    void getPriceMultiplier(float& priceMult);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void crafted();
    void ExecuteUbergraph_prop_cementBag(int32 EntryPoint);
}; // Size: 0x380

#endif
