#ifndef UE4SS_SDK_droneSellLocation_HPP
#define UE4SS_SDK_droneSellLocation_HPP

class AdroneSellLocation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Loc;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x0238 (size: 0x8)
    class Adrone_C* drone;                                                            // 0x0240 (size: 0x8)

    int32 findDish(const TArray<FString>& TargetArray, const FString& ItemToFind);
    void canSell(class UObject* InputPin, bool& can, bool& isItembox);
    void sell(int32& Points, TEnumAsByte<enum_signalResponse::Type>& responseEmail, bool& checked, int32& soldAmountSig, FText& sellList);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_droneSellLocation(int32 EntryPoint);
}; // Size: 0x248

#endif
