#ifndef UE4SS_SDK_prop_funGun_HPP
#define UE4SS_SDK_prop_funGun_HPP

class Aprop_funGun_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* audio_clickSecondary;                                      // 0x0370 (size: 0x8)
    class UAudioComponent* audio_reloadSecondary;                                     // 0x0378 (size: 0x8)
    class UAudioComponent* audio_reloadPrimary;                                       // 0x0380 (size: 0x8)
    class UAudioComponent* audio_clickPrimary;                                        // 0x0388 (size: 0x8)
    class UAudioComponent* audio_bulletSecondary;                                     // 0x0390 (size: 0x8)
    class UAudioComponent* audio_bulletPrimary;                                       // 0x0398 (size: 0x8)
    class UArrowComponent* muzzle;                                                    // 0x03A0 (size: 0x8)
    class UTextRenderComponent* text_magazine;                                        // 0x03A8 (size: 0x8)
    class UArrowComponent* ammoDrop;                                                  // 0x03B0 (size: 0x8)
    float reload_primary;                                                             // 0x03B8 (size: 0x4)
    float reload_secondary;                                                           // 0x03BC (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> D;                                          // 0x03C0 (size: 0x10)
    float reloadTime_primary;                                                         // 0x03D0 (size: 0x4)
    float reloadTime_secondary;                                                       // 0x03D4 (size: 0x4)
    float bulletReload;                                                               // 0x03D8 (size: 0x4)
    float Damage;                                                                     // 0x03DC (size: 0x4)
    float bulletImpactForce;                                                          // 0x03E0 (size: 0x4)
    int32 maxMagazine_primary;                                                        // 0x03E4 (size: 0x4)
    class USoundBase* fireSound_primary;                                              // 0x03E8 (size: 0x8)
    float bulletSpread;                                                               // 0x03F0 (size: 0x4)
    int32 bulletAmount;                                                               // 0x03F4 (size: 0x4)
    bool automatic;                                                                   // 0x03F8 (size: 0x1)
    bool hold;                                                                        // 0x03F9 (size: 0x1)
    class AmainPlayer_C* Player;                                                      // 0x0400 (size: 0x8)
    float spreadPower;                                                                // 0x0408 (size: 0x4)
    int32 ammo_primary;                                                               // 0x040C (size: 0x4)
    int32 maxMagazine_secondary;                                                      // 0x0410 (size: 0x4)
    class USoundBase* reloadSound_primary;                                            // 0x0418 (size: 0x8)
    int32 ammo_secondary;                                                             // 0x0420 (size: 0x4)
    bool isAlt;                                                                       // 0x0424 (size: 0x1)
    bool useAlt;                                                                      // 0x0425 (size: 0x1)
    class USoundBase* click_primary;                                                  // 0x0428 (size: 0x8)
    class UParticleSystem* muzzleFlash;                                               // 0x0430 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> fireShake_primary;                            // 0x0438 (size: 0x8)
    float shakePower_primary;                                                         // 0x0440 (size: 0x4)
    class USoundBase* fireSound_secondary;                                            // 0x0448 (size: 0x8)
    class USoundBase* reloadSound_secondary;                                          // 0x0450 (size: 0x8)
    class USoundBase* click_secondary;                                                // 0x0458 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> fireShake_secondary;                          // 0x0460 (size: 0x8)
    float shakePower_secondary;                                                       // 0x0468 (size: 0x4)
    bool spawnShellOnReload_secondary;                                                // 0x046C (size: 0x1)
    FName shell_secondary;                                                            // 0x0470 (size: 0x8)
    bool ignoteTickCheck;                                                             // 0x0478 (size: 0x1)
    float recoilForce;                                                                // 0x047C (size: 0x4)
    class ACharacter* Character;                                                      // 0x0480 (size: 0x8)
    int32 mags;                                                                       // 0x0488 (size: 0x4)
    int32 ind;                                                                        // 0x048C (size: 0x4)
    bool spawnShellOnReload_primary;                                                  // 0x0490 (size: 0x1)
    FName shell_primary;                                                              // 0x0494 (size: 0x8)
    TSubclassOf<class Aprop_fungunAmmo_C> ammoItem_primary;                           // 0x04A0 (size: 0x8)
    class AActor* ignoreActor;                                                        // 0x04A8 (size: 0x8)
    bool playerHolding;                                                               // 0x04B0 (size: 0x1)
    TArray<class UAudioComponent*> audioset_bulletPrimary;                            // 0x04B8 (size: 0x10)
    TArray<class UAudioComponent*> audioset_bulletSecondary;                          // 0x04C8 (size: 0x10)
    int32 audiosetCounter_bulletPrimary;                                              // 0x04D8 (size: 0x4)
    int32 audiosetCounter_bulletSecondary;                                            // 0x04DC (size: 0x4)
    TSubclassOf<class Aprop_fungunAmmo_C> ammoItem_secondary;                         // 0x04E0 (size: 0x8)
    bool ignoreStory;                                                                 // 0x04E8 (size: 0x1)

    void reloaded_secondary();
    void reloaded_primary();
    void dropShell(FName shell);
    void playSoundFromAudioset(TArray<class UAudioComponent*>& audioSet, int32& counter);
    void createSoundComponents();
    void reloaded();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void findMag(bool checkOnly, UClass* ammo, bool& return);
    void getView(FVector& OutLocation, FRotator& OutRotation);
    void checkActorTick();
    void fireBulletSecondary();
    void fireBulletPrimary();
    void updateMag();
    void UserConstructionScript();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void firePrimary();
    void ReceiveBeginPlay();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void fireSecondary();
    void fireCharacter(class ACharacter* Character);
    void ReceiveDestroyed();
    void playerHoldPost(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_funGun(int32 EntryPoint);
}; // Size: 0x4E9

#endif
