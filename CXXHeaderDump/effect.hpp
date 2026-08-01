#ifndef UE4SS_SDK_effect_HPP
#define UE4SS_SDK_effect_HPP

class Aeffect_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    float Time;                                                                       // 0x0250 (size: 0x4)
    float Strength;                                                                   // 0x0254 (size: 0x4)
    bool terminated;                                                                  // 0x0258 (size: 0x1)
    FName effectName;                                                                 // 0x025C (size: 0x8)
    float MaxTime;                                                                    // 0x0264 (size: 0x4)

    void effectDeleted();
    void removeRanout(bool destroy);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveTick(float DeltaSeconds);
    void gamemodeSafeBeginPlay();
    void ExecuteUbergraph_effect(int32 EntryPoint);
}; // Size: 0x268

#endif
