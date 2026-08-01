#ifndef UE4SS_SDK_prop_wallbuilder_HPP
#define UE4SS_SDK_prop_wallbuilder_HPP

class Aprop_wallbuilder_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* rot;                                                  // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0378 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0380 (size: 0x8)
    class UStaticMeshComponent* cube;                                                 // 0x0388 (size: 0x8)
    class UBillboardComponent* pivot_B;                                               // 0x0390 (size: 0x8)
    class UBillboardComponent* pivot_A;                                               // 0x0398 (size: 0x8)
    bool editing;                                                                     // 0x03A0 (size: 0x1)
    FVector prev;                                                                     // 0x03A4 (size: 0xC)
    FVector prevVec;                                                                  // 0x03B0 (size: 0xC)
    FVector Len;                                                                      // 0x03BC (size: 0xC)
    class Ucomp_nametag_C* visTextComp;                                               // 0x03C8 (size: 0x8)
    bool isHit;                                                                       // 0x03D0 (size: 0x1)
    bool isHeld;                                                                      // 0x03D1 (size: 0x1)
    int32 Shape;                                                                      // 0x03D4 (size: 0x4)
    FVector firstNorm;                                                                // 0x03D8 (size: 0xC)
    FVector firstHit;                                                                 // 0x03E4 (size: 0xC)
    bool centralMode;                                                                 // 0x03F0 (size: 0x1)
    bool cheat;                                                                       // 0x03F1 (size: 0x1)
    FVector prevLoc;                                                                  // 0x03F4 (size: 0xC)
    FVector preNorm;                                                                  // 0x0400 (size: 0xC)
    int32 Material;                                                                   // 0x040C (size: 0x4)
    TSubclassOf<class AActor> actorBuild;                                             // 0x0410 (size: 0x8)

    void editMat();
    void setRot(FVector Vector);
    void editShape();
    void setPivotLoc();
    void addWall();
    void Init();
    void OnNotifyEnd_8882420E4F2CF57684C98A8A5539FB1C(FName NotifyName);
    void OnNotifyBegin_8882420E4F2CF57684C98A8A5539FB1C(FName NotifyName);
    void OnInterrupted_8882420E4F2CF57684C98A8A5539FB1C(FName NotifyName);
    void OnBlendOut_8882420E4F2CF57684C98A8A5539FB1C(FName NotifyName);
    void OnCompleted_8882420E4F2CF57684C98A8A5539FB1C(FName NotifyName);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_wallbuilder(int32 EntryPoint);
}; // Size: 0x418

#endif
