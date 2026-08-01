#ifndef UE4SS_SDK_propSpawner_editor_HPP
#define UE4SS_SDK_propSpawner_editor_HPP

class ApropSpawner_editor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    FName prop;                                                                       // 0x0238 (size: 0x8)
    TSubclassOf<class AActor> obj;                                                    // 0x0240 (size: 0x8)
    class AActor* Actor;                                                              // 0x0248 (size: 0x8)
    bool p_static;                                                                    // 0x0250 (size: 0x1)
    bool p_frozen;                                                                    // 0x0251 (size: 0x1)
    bool p_active;                                                                    // 0x0252 (size: 0x1)
    bool ignoreSave;                                                                  // 0x0253 (size: 0x1)
    FName spawnOnce;                                                                  // 0x0254 (size: 0x8)
    bool autoSpawn;                                                                   // 0x025C (size: 0x1)

    void spawn_treehouse(class Atreehouse_C* treehouse, class AActor*& OutputPin);
    void despawn();
    void Spawn(class AActor*& OutputPin);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_propSpawner_editor(int32 EntryPoint);
}; // Size: 0x25D

#endif
