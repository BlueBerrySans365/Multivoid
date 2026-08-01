#ifndef UE4SS_SDK_orderPlace_HPP
#define UE4SS_SDK_orderPlace_HPP

class AorderPlace_C : public AActor
{
    class UBoxComponent* Box;                                                         // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)

    void spawnOrder(Fstruct_storeOrder order);
}; // Size: 0x230

#endif
