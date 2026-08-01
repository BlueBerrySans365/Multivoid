#ifndef UE4SS_SDK_ui_damageIndicator_HPP
#define UE4SS_SDK_ui_damageIndicator_HPP

class Uui_damageIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* dmg_down;                                                           // 0x0268 (size: 0x8)
    class UImage* dmg_full;                                                           // 0x0270 (size: 0x8)
    class UImage* dmg_heal;                                                           // 0x0278 (size: 0x8)
    class UImage* dmg_left;                                                           // 0x0280 (size: 0x8)
    class UImage* dmg_right;                                                          // 0x0288 (size: 0x8)
    class UImage* dmg_tunnel;                                                         // 0x0290 (size: 0x8)
    class UImage* dmg_up;                                                             // 0x0298 (size: 0x8)
    float damage_right;                                                               // 0x02A0 (size: 0x4)
    float damage_left;                                                                // 0x02A4 (size: 0x4)
    float damage_up;                                                                  // 0x02A8 (size: 0x4)
    float damage_down;                                                                // 0x02AC (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_right;                                     // 0x02B0 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_left;                                      // 0x02B8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_up;                                        // 0x02C0 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_down;                                      // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_tunnel;                                    // 0x02D0 (size: 0x8)
    float damage_heal;                                                                // 0x02D8 (size: 0x4)
    float healOpacity;                                                                // 0x02DC (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x02E0 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_ui_damageIndicator(int32 EntryPoint);
}; // Size: 0x2E8

#endif
