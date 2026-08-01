#ifndef UE4SS_SDK_gayBabyJail_HPP
#define UE4SS_SDK_gayBabyJail_HPP

class AgayBabyJail_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class UChildActorComponent* light1;                                               // 0x0230 (size: 0x8)
    class UChildActorComponent* Light;                                                // 0x0238 (size: 0x8)
    class UStaticMeshComponent* gaybabyjailProt2;                                     // 0x0240 (size: 0x8)
    class UStaticMeshComponent* gaybabyjailProt1;                                     // 0x0248 (size: 0x8)
    class UChildActorComponent* indoors;                                              // 0x0250 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0258 (size: 0x8)
    class UStaticMeshComponent* gaybabyjailProt;                                      // 0x0260 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_gayBabyJail(int32 EntryPoint);
}; // Size: 0x268

#endif
