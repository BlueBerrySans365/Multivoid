#ifndef UE4SS_SDK_bunnySpawner_HPP
#define UE4SS_SDK_bunnySpawner_HPP

class AbunnySpawner_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_bunnySpawner(int32 EntryPoint);
}; // Size: 0x250

#endif
