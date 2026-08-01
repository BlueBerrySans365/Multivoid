#ifndef UE4SS_SDK_mann_HPP
#define UE4SS_SDK_mann_HPP

class Amann_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x04C8 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> A;                                          // 0x04D0 (size: 0x10)
    float dist;                                                                       // 0x04E0 (size: 0x4)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_mann(int32 EntryPoint);
}; // Size: 0x4E4

#endif
