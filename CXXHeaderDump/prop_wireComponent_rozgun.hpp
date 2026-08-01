#ifndef UE4SS_SDK_prop_wireComponent_rozgun_HPP
#define UE4SS_SDK_prop_wireComponent_rozgun_HPP

class Aprop_wireComponent_rozgun_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0378 (size: 0x8)
    float reload;                                                                     // 0x0380 (size: 0x4)
    bool fired;                                                                       // 0x0384 (size: 0x1)
    bool Spread;                                                                      // 0x0385 (size: 0x1)
    int32 Type;                                                                       // 0x0388 (size: 0x4)

    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_rozgun(int32 EntryPoint);
}; // Size: 0x38C

#endif
