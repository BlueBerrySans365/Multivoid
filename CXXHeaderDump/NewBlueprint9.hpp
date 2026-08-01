#ifndef UE4SS_SDK_NewBlueprint9_HPP
#define UE4SS_SDK_NewBlueprint9_HPP

class ANewBlueprint9_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0220 (size: 0x8)
    TMap<class FString, class FText> A;                                               // 0x0228 (size: 0x50)
    TMap<class FString, class FString> B;                                             // 0x0278 (size: 0x50)
    TMap<class FString, class FText> A_0;                                             // 0x02C8 (size: 0x50)

    void UserConstructionScript();
}; // Size: 0x318

#endif
