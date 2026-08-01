#ifndef UE4SS_SDK_prop_explodVehicle_HPP
#define UE4SS_SDK_prop_explodVehicle_HPP

class Aprop_explodVehicle_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    bool canexplode;                                                                  // 0x0370 (size: 0x1)

    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void ReceiveBeginPlay();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void postExp();
    void ExecuteUbergraph_prop_explodVehicle(int32 EntryPoint);
}; // Size: 0x371

#endif
