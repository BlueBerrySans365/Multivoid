#ifndef UE4SS_SDK_prop_grenade_poop_HPP
#define UE4SS_SDK_prop_grenade_poop_HPP

class Aprop_grenade_poop_C : public Aprop_grenade_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0388 (size: 0x8)
    TArray<class TSubclassOf<Aprop_poo_C>> poos;                                      // 0x0390 (size: 0x10)

    void explode(class Aexplosion_C* explosion);
    void ExecuteUbergraph_prop_grenade_poop(int32 EntryPoint);
}; // Size: 0x3A0

#endif
