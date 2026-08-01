#ifndef UE4SS_SDK_firetankCharacterController_HPP
#define UE4SS_SDK_firetankCharacterController_HPP

class AfiretankCharacterController_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_firetankCharacterController(int32 EntryPoint);
}; // Size: 0x4C8

#endif
