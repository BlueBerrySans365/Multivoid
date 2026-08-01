#ifndef UE4SS_SDK_arg_whspawn_HPP
#define UE4SS_SDK_arg_whspawn_HPP

class Aarg_whspawn_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_B;                                            // 0x0250 (size: 0x8)
    class UParticleSystemComponent* eff_G;                                            // 0x0258 (size: 0x8)
    class UParticleSystemComponent* eff_Y;                                            // 0x0260 (size: 0x8)
    class UParticleSystemComponent* eff_M;                                            // 0x0268 (size: 0x8)
    class UParticleSystemComponent* eff_C;                                            // 0x0270 (size: 0x8)
    class UParticleSystemComponent* eff_R;                                            // 0x0278 (size: 0x8)
    class UPointLightComponent* ligh_Y;                                               // 0x0280 (size: 0x8)
    class UPointLightComponent* ligh_M;                                               // 0x0288 (size: 0x8)
    class UPointLightComponent* ligh_C;                                               // 0x0290 (size: 0x8)
    class UPointLightComponent* ligh_B;                                               // 0x0298 (size: 0x8)
    class UPointLightComponent* ligh_G;                                               // 0x02A0 (size: 0x8)
    class UPointLightComponent* ligh_R;                                               // 0x02A8 (size: 0x8)
    TArray<class AActor*> Args;                                                       // 0x02B0 (size: 0x10)
    TArray<float> angs;                                                               // 0x02C0 (size: 0x10)
    TArray<float> dists;                                                              // 0x02D0 (size: 0x10)
    TArray<float> angsDiffs;                                                          // 0x02E0 (size: 0x10)
    bool Active;                                                                      // 0x02F0 (size: 0x1)
    float S;                                                                          // 0x02F4 (size: 0x4)
    FVector middle;                                                                   // 0x02F8 (size: 0xC)

    void calcMiddle();
    void inCenter(bool& return);
    void sound1();
    void check(bool& return);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_arg_whspawn(int32 EntryPoint);
}; // Size: 0x304

#endif
