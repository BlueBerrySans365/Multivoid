#ifndef UE4SS_SDK_prop_dodec_HPP
#define UE4SS_SDK_prop_dodec_HPP

class Aprop_dodec_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_doohickey;                                    // 0x0378 (size: 0x8)
    float power;                                                                      // 0x0380 (size: 0x4)
    int32 shoots;                                                                     // 0x0384 (size: 0x4)
    bool IsActive;                                                                    // 0x0388 (size: 0x1)
    bool isShooting;                                                                  // 0x0389 (size: 0x1)
    bool Deactivate;                                                                  // 0x038A (size: 0x1)
    float anger;                                                                      // 0x038C (size: 0x4)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void Activate(bool IsActive);
    void ReceiveTick(float DeltaSeconds);
    void fire();
    void StartFire();
    void fireDamage(float Damage);
    void ExecuteUbergraph_prop_dodec(int32 EntryPoint);
}; // Size: 0x390

#endif
