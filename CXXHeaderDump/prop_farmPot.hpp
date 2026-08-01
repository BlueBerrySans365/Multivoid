#ifndef UE4SS_SDK_prop_farmPot_HPP
#define UE4SS_SDK_prop_farmPot_HPP

class Aprop_farmPot_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* Root;                                                  // 0x0370 (size: 0x8)
    class AActor* obj;                                                                // 0x0378 (size: 0x8)
    class AgrowingPlant_C* plant;                                                     // 0x0380 (size: 0x8)

    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ReceiveDestroyed();
    void ExecuteUbergraph_prop_farmPot(int32 EntryPoint);
}; // Size: 0x388

#endif
