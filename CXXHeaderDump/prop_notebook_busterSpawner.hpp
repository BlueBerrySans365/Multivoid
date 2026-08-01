#ifndef UE4SS_SDK_prop_notebook_busterSpawner_HPP
#define UE4SS_SDK_prop_notebook_busterSpawner_HPP

class Aprop_notebook_busterSpawner_C : public Aprop_notebook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    FVector Loc;                                                                      // 0x03A0 (size: 0xC)

    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_notebook_busterSpawner(int32 EntryPoint);
}; // Size: 0x3AC

#endif
