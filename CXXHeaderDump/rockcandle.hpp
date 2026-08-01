#ifndef UE4SS_SDK_rockcandle_HPP
#define UE4SS_SDK_rockcandle_HPP

class Arockcandle_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* flame;                                                // 0x0250 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0258 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0260 (size: 0x8)

    void attemptIgnite();
    void ExecuteUbergraph_rockcandle(int32 EntryPoint);
}; // Size: 0x268

#endif
