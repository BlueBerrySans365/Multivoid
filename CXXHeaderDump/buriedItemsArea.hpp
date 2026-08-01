#ifndef UE4SS_SDK_buriedItemsArea_HPP
#define UE4SS_SDK_buriedItemsArea_HPP

class AburiedItemsArea_C : public AActor
{
    class USphereComponent* Sphere;                                                   // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    float Radius;                                                                     // 0x0230 (size: 0x4)
    TMap<FName, float> Items;                                                         // 0x0238 (size: 0x50)

    void UserConstructionScript();
}; // Size: 0x288

#endif
