#ifndef UE4SS_SDK_fishingDropSpot_HPP
#define UE4SS_SDK_fishingDropSpot_HPP

class AfishingDropSpot_C : public AActor
{
    class USphereComponent* Sphere;                                                   // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    float Radius;                                                                     // 0x0230 (size: 0x4)
    TMap<FName, float> Drop;                                                          // 0x0238 (size: 0x50)

    void appendDrop(TMap<FName, float> InputPin, TMap<FName, float>& NewParam);
    void UserConstructionScript();
}; // Size: 0x288

#endif
