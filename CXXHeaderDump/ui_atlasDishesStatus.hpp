#ifndef UE4SS_SDK_ui_atlasDishesStatus_HPP
#define UE4SS_SDK_ui_atlasDishesStatus_HPP

class Uui_atlasDishesStatus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_0;                                       // 0x0268 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_1;                                       // 0x0270 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_2;                                       // 0x0278 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_3;                                       // 0x0280 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_4;                                       // 0x0288 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_5;                                       // 0x0290 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_6;                                       // 0x0298 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_7;                                       // 0x02A0 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_8;                                       // 0x02A8 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_9;                                       // 0x02B0 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_10;                                      // 0x02B8 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_11;                                      // 0x02C0 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_12;                                      // 0x02C8 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_13;                                      // 0x02D0 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_14;                                      // 0x02D8 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_15;                                      // 0x02E0 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_16;                                      // 0x02E8 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_17;                                      // 0x02F0 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_18;                                      // 0x02F8 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_19;                                      // 0x0300 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_20;                                      // 0x0308 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_21;                                      // 0x0310 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_22;                                      // 0x0318 (size: 0x8)
    class Uuicomp_dishStatusSlot_C* dishslot_23;                                      // 0x0320 (size: 0x8)
    TArray<class Uuicomp_dishStatusSlot_C*> Slots;                                    // 0x0328 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> dynmat_slots;                             // 0x0338 (size: 0x10)

    void setColors(FLinearColor color_base, FLinearColor color_mid, FLinearColor color_low);
    void Construct();
    void ExecuteUbergraph_ui_atlasDishesStatus(int32 EntryPoint);
}; // Size: 0x348

#endif
