#ifndef UE4SS_SDK_argc_spawn_HPP
#define UE4SS_SDK_argc_spawn_HPP

class Aargc_spawn_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0250 (size: 0x8)

    void check();
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void ExecuteUbergraph_argc_spawn(int32 EntryPoint);
}; // Size: 0x258

#endif
