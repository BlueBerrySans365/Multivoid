#ifndef UE4SS_SDK_prop_wireComponent_laserSensor_HPP
#define UE4SS_SDK_prop_wireComponent_laserSensor_HPP

class Aprop_wireComponent_laserSensor_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UParticleSystemComponent* beam;                                             // 0x0378 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0380 (size: 0x8)
    TArray<class Awire_C*> wires;                                                     // 0x0388 (size: 0x10)
    float Length;                                                                     // 0x0398 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x03A0 (size: 0x10)

    void UserConstructionScript();
    void wireConnected(class Awire_C* wire, bool side);
    void wireDisconnected(class Awire_C* wire, bool side);
    void wirePass(class Awire_C* wire);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_wireComponent_laserSensor(int32 EntryPoint);
}; // Size: 0x3B0

#endif
