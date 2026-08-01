#ifndef UE4SS_SDK_editorKeyBuffer_HPP
#define UE4SS_SDK_editorKeyBuffer_HPP

class AeditorKeyBuffer_C : public AActor
{
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x0220 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    bool processEverything;                                                           // 0x0230 (size: 0x1)
    TArray<class AActor*> Objects;                                                    // 0x0238 (size: 0x10)
    TArray<FName> Keys;                                                               // 0x0248 (size: 0x10)
    class AActor* Actor;                                                              // 0x0258 (size: 0x8)
    TArray<Fstruct_actorKeyPair> pairs;                                               // 0x0260 (size: 0x10)
    bool checkWorldForDuplicates;                                                     // 0x0270 (size: 0x1)
    TArray<class AActor*> foundDuplicates;                                            // 0x0278 (size: 0x10)
    TArray<FName> foundDuplicates_keys;                                               // 0x0288 (size: 0x10)

    void onlyCheckForDuplicates();
    void createPairs();
    void process();
    void checkOnValid();
    void Add(const class AActor*& Actor, const FName& Key);
    void UserConstructionScript();
}; // Size: 0x298

#endif
