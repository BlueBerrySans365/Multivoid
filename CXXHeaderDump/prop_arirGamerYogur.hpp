#ifndef UE4SS_SDK_prop_arirGamerYogur_HPP
#define UE4SS_SDK_prop_arirGamerYogur_HPP

class Aprop_arirGamerYogur_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    bool Open;                                                                        // 0x0370 (size: 0x1)
    bool Cap;                                                                         // 0x0371 (size: 0x1)
    int32 uses;                                                                       // 0x0374 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void set();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_arirGamerYogur(int32 EntryPoint);
}; // Size: 0x378

#endif
