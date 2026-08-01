#ifndef UE4SS_SDK_door_pryable_HPP
#define UE4SS_SDK_door_pryable_HPP

class Adoor_pryable_C : public Adoor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UChildActorComponent* crowbar2;                                             // 0x0438 (size: 0x8)
    class UChildActorComponent* crowbar1;                                             // 0x0440 (size: 0x8)

    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void ExecuteUbergraph_door_pryable(int32 EntryPoint);
}; // Size: 0x448

#endif
