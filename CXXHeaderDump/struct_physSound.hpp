#ifndef UE4SS_SDK_struct_physSound_HPP
#define UE4SS_SDK_struct_physSound_HPP

struct Fstruct_physSound
{
    class USoundBase* step_2_264EF62E47692AC3EC4D1DB1D2EFDB37;                        // 0x0000 (size: 0x8)
    class USoundBase* impact_4_B669AE3D4B8D794F27201B972A9C256C;                      // 0x0008 (size: 0x8)
    class USoundBase* soft_30_1E6AA0474C29728BFC6F82AF9108D822;                       // 0x0010 (size: 0x8)
    class USoundBase* damaged_7_BE976D7C45CF1D5F920305B1CB262187;                     // 0x0018 (size: 0x8)
    class USoundBase* destroyed_9_755C91FF493AF4A154B5AFA566C4EDB4;                   // 0x0020 (size: 0x8)
    class USoundBase* scrape_12_D33ECAAF4F65CE405E09C693C27B7C40;                     // 0x0028 (size: 0x8)
    class UParticleSystem* particles_damage_16_95FC380F43EFC12B3D6D898494E55ADC;      // 0x0030 (size: 0x8)
    class UParticleSystem* particles_destroy_18_931F4A3B4D11F18EEB1F9CA953CE116C;     // 0x0038 (size: 0x8)
    bool staticSound_20_882C181F4ED7AD6803CAC3A3B025613D;                             // 0x0040 (size: 0x1)
    TMap<class UStaticMesh*, class UParticleSystem*> pTypes_destroy_27_97200A304E4BCEB4B5A2C195BE99C887; // 0x0048 (size: 0x50)

}; // Size: 0x98

#endif
