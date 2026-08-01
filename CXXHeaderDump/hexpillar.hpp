#ifndef UE4SS_SDK_hexpillar_HPP
#define UE4SS_SDK_hexpillar_HPP

class Ahexpillar_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* hexpillar;                                            // 0x0250 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0258 (size: 0x8)
    class Ucomp_physicsImpact_C* physicsImpact;                                       // 0x0260 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0268 (size: 0x8)
    class UArrowComponent* dir;                                                       // 0x0270 (size: 0x8)
    float A;                                                                          // 0x0278 (size: 0x4)
    int32 I;                                                                          // 0x027C (size: 0x4)
    bool ticking;                                                                     // 0x0280 (size: 0x1)

    void setPath(const TArray<FVector>& Path, bool& return);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void processKeys(bool& return);
    void getOnlyKey(FName& Key);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void ReceiveBeginPlay();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void intComs_gamemodeBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void ExecuteUbergraph_hexpillar(int32 EntryPoint);
}; // Size: 0x281

#endif
