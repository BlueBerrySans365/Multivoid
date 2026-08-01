#ifndef UE4SS_SDK_hexahiveSPawner_HPP
#define UE4SS_SDK_hexahiveSPawner_HPP

class AhexahiveSPawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    int32 Size;                                                                       // 0x0230 (size: 0x4)

    void gen(bool Spawn);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_hexahiveSPawner(int32 EntryPoint);
}; // Size: 0x234

#endif
