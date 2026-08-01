#ifndef UE4SS_SDK_kavotiaPatrolController_HPP
#define UE4SS_SDK_kavotiaPatrolController_HPP

class AkavotiaPatrolController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere2;                                                  // 0x0228 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0230 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0238 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    int32 I;                                                                          // 0x0250 (size: 0x4)
    class Aigetis_C* igetis;                                                          // 0x0258 (size: 0x8)
    TArray<class Akavotia_C*> kavotias;                                               // 0x0260 (size: 0x10)
    class Aevent_bottomHoleController_C* eventObject;                                 // 0x0270 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_kavotiaPatrolController(int32 EntryPoint);
}; // Size: 0x278

#endif
