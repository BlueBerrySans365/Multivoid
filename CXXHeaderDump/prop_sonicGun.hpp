#ifndef UE4SS_SDK_prop_sonicGun_HPP
#define UE4SS_SDK_prop_sonicGun_HPP

class Aprop_sonicGun_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USoundBase* snd;                                                            // 0x0370 (size: 0x8)
    float pch;                                                                        // 0x0378 (size: 0x4)
    float playerForce;                                                                // 0x037C (size: 0x4)
    float Radius;                                                                     // 0x0380 (size: 0x4)
    float Damage;                                                                     // 0x0384 (size: 0x4)
    float forceMultiply;                                                              // 0x0388 (size: 0x4)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_sonicGun(int32 EntryPoint);
}; // Size: 0x38C

#endif
