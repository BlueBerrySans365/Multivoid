#ifndef UE4SS_SDK_prop_grenade_soap_HPP
#define UE4SS_SDK_prop_grenade_soap_HPP

class Aprop_grenade_soap_C : public Aprop_grenade_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0388 (size: 0x8)

    void explode(class Aexplosion_C* explosion);
    void ExecuteUbergraph_prop_grenade_soap(int32 EntryPoint);
}; // Size: 0x390

#endif
