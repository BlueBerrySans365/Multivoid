#ifndef UE4SS_SDK_NewBlueprint_HPP
#define UE4SS_SDK_NewBlueprint_HPP

class ANewBlueprint_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0220 (size: 0x8)
    FString String;                                                                   // 0x0228 (size: 0x10)
    FString NewVar_0;                                                                 // 0x0238 (size: 0x10)
    bool NewVar_1;                                                                    // 0x0248 (size: 0x1)
    TArray<FString> files;                                                            // 0x0250 (size: 0x10)
    TArray<FString> Names;                                                            // 0x0260 (size: 0x10)
    TArray<FString> Paths;                                                            // 0x0270 (size: 0x10)
    TArray<FString> Strings;                                                          // 0x0280 (size: 0x10)
    TArray<FString> Results;                                                          // 0x0290 (size: 0x10)
    FString NewVar_2;                                                                 // 0x02A0 (size: 0x10)

    void UserConstructionScript();
}; // Size: 0x2B0

#endif
