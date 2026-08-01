#ifndef UE4SS_SDK_prop_food_soap_HPP
#define UE4SS_SDK_prop_food_soap_HPP

class Aprop_food_soap_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UAudioComponent* audio_soap;                                                // 0x03E0 (size: 0x8)
    class UParticleSystemComponent* eff_bubbles;                                      // 0x03E8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x03F8 (size: 0x8)
    float foam;                                                                       // 0x0400 (size: 0x4)
    int32 soapAmount;                                                                 // 0x0404 (size: 0x4)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void microwave(class Aprop_microwave_C* microwave);
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_food_soap(int32 EntryPoint);
}; // Size: 0x408

#endif
