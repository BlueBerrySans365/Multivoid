#ifndef UE4SS_SDK_dreamer_HPP
#define UE4SS_SDK_dreamer_HPP

class Adreamer_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    TSubclassOf<class AdreamBase_C> dream;                                            // 0x0250 (size: 0x8)
    int32 Day;                                                                        // 0x0258 (size: 0x4)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_dreamer(int32 EntryPoint);
}; // Size: 0x25C

#endif
