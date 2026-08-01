#ifndef UE4SS_SDK_ariralThrowStuff_HPP
#define UE4SS_SDK_ariralThrowStuff_HPP

class AariralThrowStuff_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    int32 Type;                                                                       // 0x0240 (size: 0x4)
    TMap<TSubclassOf<AActor>, float> poisonFoods;                                     // 0x0248 (size: 0x50)
    TMap<TSubclassOf<AActor>, float> goodFoods;                                       // 0x0298 (size: 0x50)
    bool IsGood;                                                                      // 0x02E8 (size: 0x1)

    void throwFoods_good();
    void throwType(int32 Type);
    void throwFoods();
    void throw();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ariralThrowStuff(int32 EntryPoint);
}; // Size: 0x2E9

#endif
