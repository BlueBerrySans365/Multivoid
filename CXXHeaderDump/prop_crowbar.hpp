#ifndef UE4SS_SDK_prop_crowbar_HPP
#define UE4SS_SDK_prop_crowbar_HPP

class Aprop_crowbar_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UvelocityStuck_C* velocityStuck;                                            // 0x0370 (size: 0x8)

    void activatePrying(class AmainPlayer_C* Player, FVector atLocation);
    void afterplay();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_crowbar(int32 EntryPoint);
}; // Size: 0x378

#endif
