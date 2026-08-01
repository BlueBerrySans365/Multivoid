#ifndef UE4SS_SDK_prop_rune_HPP
#define UE4SS_SDK_prop_rune_HPP

class Aprop_rune_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0370 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x0378 (size: 0x8)
    class UPointLightComponent* light2;                                               // 0x0380 (size: 0x8)
    class UPointLightComponent* Light;                                                // 0x0388 (size: 0x8)
    int32 Type;                                                                       // 0x0390 (size: 0x4)
    Fprop_rune_CGrabbed grabbed;                                                      // 0x0398 (size: 0x10)
    void grabbed();
    bool Active;                                                                      // 0x03A8 (size: 0x1)

    void SetActive(bool Active);
    void UserConstructionScript();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_rune(int32 EntryPoint);
    void grabbed__DelegateSignature();
}; // Size: 0x3A9

#endif
