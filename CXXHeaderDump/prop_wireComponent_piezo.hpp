#ifndef UE4SS_SDK_prop_wireComponent_piezo_HPP
#define UE4SS_SDK_prop_wireComponent_piezo_HPP

class Aprop_wireComponent_piezo_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0380 (size: 0x8)
    float Pitch;                                                                      // 0x0388 (size: 0x4)

    void UserConstructionScript();
    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_piezo(int32 EntryPoint);
}; // Size: 0x38C

#endif
