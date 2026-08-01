#ifndef UE4SS_SDK_dream_dreambase_HPP
#define UE4SS_SDK_dream_dreambase_HPP

class Adream_dreambase_C : public AdreamBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UStaticMeshComponent* dreambase;                                            // 0x0290 (size: 0x8)

    void ReceiveBeginPlay();
    void PlaySound();
    void ExecuteUbergraph_dream_dreambase(int32 EntryPoint);
}; // Size: 0x298

#endif
