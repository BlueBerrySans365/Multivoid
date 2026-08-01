#ifndef UE4SS_SDK_toolObject_HPP
#define UE4SS_SDK_toolObject_HPP

class AtoolObject_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    bool committed;                                                                   // 0x0250 (size: 0x1)
    FName keyParent;                                                                  // 0x0254 (size: 0x8)
    Fstruct_toolData Data;                                                            // 0x0260 (size: 0x48)
    Fstruct_toolParameters Params;                                                    // 0x02A8 (size: 0x280)
    bool reference;                                                                   // 0x0528 (size: 0x1)
    int32 ind;                                                                        // 0x052C (size: 0x4)

    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
    void toolgunChangedTool(class Aprop_toolgun_C* toolgun);
    void toolgunRemoved(class Aprop_toolgun_C* toolgun);
    void toolgunEquipped(class Aprop_toolgun_C* toolgun);
    void updateParameters();
    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void Commit(class Aprop_toolgun_C* toolgun);
    void Init(class Aprop_toolgun_C* toolgun);
    void toolgunLookedAt(class Aprop_toolgun_C* toolgun, class AmainPlayer_C* Player, FHitResult Hit);
    void toolgunLookedAway(class Aprop_toolgun_C* toolgun, class AmainPlayer_C* Player);
    void toolgunLookingAt(class Aprop_toolgun_C* toolgun, class AmainPlayer_C* Player, FHitResult Hit);
    void parameterUpdated();
    void ExecuteUbergraph_toolObject(int32 EntryPoint);
}; // Size: 0x530

#endif
