#ifndef UE4SS_SDK_customPlank_DUPL_1_HPP
#define UE4SS_SDK_customPlank_DUPL_1_HPP

class AcustomPlank_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void Init();
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void Cut(const FHitResult& Hit);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void ExecuteUbergraph_customPlank(int32 EntryPoint);
}; // Size: 0x370

#endif
