#ifndef UE4SS_SDK_keycardLooker_HPP
#define UE4SS_SDK_keycardLooker_HPP

class AkeycardLooker_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBillboardComponent* tp;                                                    // 0x0250 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0258 (size: 0x8)
    class Aprop_keycard_C* keycard;                                                   // 0x0260 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_keycardLooker(int32 EntryPoint);
}; // Size: 0x268

#endif
