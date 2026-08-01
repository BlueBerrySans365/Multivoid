#ifndef UE4SS_SDK_customWall_HPP
#define UE4SS_SDK_customWall_HPP

class AcustomWall_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* box_navObstacle;                                             // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0258 (size: 0x8)
    float health;                                                                     // 0x0260 (size: 0x4)
    int32 Shape;                                                                      // 0x0264 (size: 0x4)
    float maxHealth;                                                                  // 0x0268 (size: 0x4)
    int32 material_obsolete;                                                          // 0x026C (size: 0x4)
    Fstruct_physSound phys;                                                           // 0x0270 (size: 0x98)
    FString wallType;                                                                 // 0x0308 (size: 0x10)
    float mult;                                                                       // 0x0318 (size: 0x4)
    bool wasBroken;                                                                   // 0x031C (size: 0x1)

    void setHealthCracks();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void setHealth();
    void Init();
    void fix(bool& isFine);
    void particleEffect();
    void Damage(float Damage, FVector Location, FRotator Rotation);
    void UserConstructionScript();
    void enteredTheWater();
    void exitTheWater();
    void impactSquishCPP(class UPrimitiveComponent* Component);
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_customWall(int32 EntryPoint);
}; // Size: 0x31D

#endif
