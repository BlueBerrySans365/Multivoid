#ifndef UE4SS_SDK_saltpile_HPP
#define UE4SS_SDK_saltpile_HPP

class Asaltpile_C : public Aactor_save_C
{
    class UStaticMeshComponent* heart;                                                // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0250 (size: 0x8)

    void dropHeart();
}; // Size: 0x258

#endif
