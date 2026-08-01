#ifndef UE4SS_SDK_prop_coalVein_HPP
#define UE4SS_SDK_prop_coalVein_HPP

class Aprop_coalVein_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 hits;                                                                       // 0x0370 (size: 0x4)
    int32 coals;                                                                      // 0x0374 (size: 0x4)
    FName spawnResource;                                                              // 0x0378 (size: 0x8)
    FIntPoint hitsRange;                                                              // 0x0380 (size: 0x8)
    FIntPoint coalsRange;                                                             // 0x0388 (size: 0x8)
    float scaleMult;                                                                  // 0x0390 (size: 0x4)

    void setHits();
    void UserConstructionScript();
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_coalVein(int32 EntryPoint);
}; // Size: 0x394

#endif
