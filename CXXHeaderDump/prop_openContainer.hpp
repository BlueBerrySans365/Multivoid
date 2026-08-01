#ifndef UE4SS_SDK_prop_openContainer_HPP
#define UE4SS_SDK_prop_openContainer_HPP

class Aprop_openContainer_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0370 (size: 0x8)
    TArray<class AActor*> itemsInside;                                                // 0x0378 (size: 0x10)
    bool skipPhysics;                                                                 // 0x0388 (size: 0x1)
    class UPrimitiveComponent* testMesh;                                              // 0x0390 (size: 0x8)
    bool useVelocityCheck;                                                            // 0x0398 (size: 0x1)
    class AmainGamemode_C* As Main Gamemode;                                          // 0x03A0 (size: 0x8)
    bool isHolding;                                                                   // 0x03A8 (size: 0x1)

    void checkPickup();
    void getData(Fstruct_save& Data);
    void freezed();
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveTick(float DeltaSeconds);
    void propAwoken();
    void ReceiveDestroyed();
    void doStuff();
    void ReceiveBeginPlay();
    void glueInside();
    void playerHoldPre(class AmainPlayer_C* Player);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_openContainer(int32 EntryPoint);
}; // Size: 0x3A9

#endif
