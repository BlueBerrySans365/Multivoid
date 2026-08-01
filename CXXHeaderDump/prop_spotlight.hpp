#ifndef UE4SS_SDK_prop_spotlight_HPP
#define UE4SS_SDK_prop_spotlight_HPP

class Aprop_spotlight_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0370 (size: 0x8)
    class UChildActorComponent* head;                                                 // 0x0378 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0380 (size: 0x8)
    class Aprop_spotlightHead_C* lighHead;                                            // 0x0388 (size: 0x8)
    int32 Angle;                                                                      // 0x0390 (size: 0x4)

    void initSpotlight();
    void updAngle();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_spotlight(int32 EntryPoint);
}; // Size: 0x394

#endif
