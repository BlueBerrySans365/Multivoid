#ifndef UE4SS_SDK_navModifierBox_HPP
#define UE4SS_SDK_navModifierBox_HPP

class AnavModifierBox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    TSubclassOf<class UNavArea> Class;                                                // 0x0240 (size: 0x8)

    void setClass(TSubclassOf<class UNavArea> NewAreaClass);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_navModifierBox(int32 EntryPoint);
}; // Size: 0x248

#endif
