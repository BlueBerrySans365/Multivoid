#ifndef UE4SS_SDK_prop_fishingRod_HPP
#define UE4SS_SDK_prop_fishingRod_HPP

class Aprop_fishingRod_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* End;                                                   // 0x0370 (size: 0x8)
    class UCableComponent* c10;                                                       // 0x0378 (size: 0x8)
    class UCableComponent* c9;                                                        // 0x0380 (size: 0x8)
    class UCableComponent* c8;                                                        // 0x0388 (size: 0x8)
    class UCableComponent* c7;                                                        // 0x0390 (size: 0x8)
    class UCableComponent* c6;                                                        // 0x0398 (size: 0x8)
    class UCableComponent* c5;                                                        // 0x03A0 (size: 0x8)
    class UCableComponent* c4;                                                        // 0x03A8 (size: 0x8)
    class UCableComponent* C3;                                                        // 0x03B0 (size: 0x8)
    class UCableComponent* C2;                                                        // 0x03B8 (size: 0x8)
    class UCableComponent* C1;                                                        // 0x03C0 (size: 0x8)
    float test_a_B974BC7D4C129A0EC588759150B6DF4B;                                    // 0x03C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> test__Direction_B974BC7D4C129A0EC588759150B6DF4B; // 0x03CC (size: 0x1)
    class UTimelineComponent* test;                                                   // 0x03D0 (size: 0x8)
    class AfishingRodString_C* String;                                                // 0x03D8 (size: 0x8)
    float Length;                                                                     // 0x03E0 (size: 0x4)
    class AmainPlayer_C* Player;                                                      // 0x03E8 (size: 0x8)
    FName bait;                                                                       // 0x03F0 (size: 0x8)
    float luck;                                                                       // 0x03F8 (size: 0x4)
    float eat;                                                                        // 0x03FC (size: 0x4)
    float lure;                                                                       // 0x0400 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void test__FinishedFunc();
    void test__UpdateFunc();
    void scrollUp();
    void scrollDown();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveDestroyed();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void Down();
    void Up();
    void bind();
    void unbind();
    void ExecuteUbergraph_prop_fishingRod(int32 EntryPoint);
}; // Size: 0x404

#endif
