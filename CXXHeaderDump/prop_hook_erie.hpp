#ifndef UE4SS_SDK_prop_hook_erie_HPP
#define UE4SS_SDK_prop_hook_erie_HPP

class Aprop_hook_erie_C : public Aprop_hook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    int32 cheeses;                                                                    // 0x0388 (size: 0x4)
    class Aprop_food_cheese_C* cheeseHopObject;                                       // 0x0390 (size: 0x8)
    int32 lone;                                                                       // 0x0398 (size: 0x4)

    void sortObjects(const class AActor* A, const class AActor* B, bool& Result);
    void findCheese(TArray<class AActor*>& InputPin, class AActor*& Array Element, FVector& Velocity);
    void eatCheeseClass(UClass* InputPin, bool& eaten);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void cheeseHop();
    void hitHand(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void loneTimer();
    void ExecuteUbergraph_prop_hook_erie(int32 EntryPoint);
}; // Size: 0x39C

#endif
