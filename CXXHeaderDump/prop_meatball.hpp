#ifndef UE4SS_SDK_prop_meatball_HPP
#define UE4SS_SDK_prop_meatball_HPP

class Aprop_meatball_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class USkeletalMeshComponent* flag;                                               // 0x03E0 (size: 0x8)

    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_meatball(int32 EntryPoint);
}; // Size: 0x3E8

#endif
