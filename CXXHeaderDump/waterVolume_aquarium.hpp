#ifndef UE4SS_SDK_waterVolume_aquarium_HPP
#define UE4SS_SDK_waterVolume_aquarium_HPP

class AwaterVolume_aquarium_C : public AwaterVolume_C
{
    class UStaticMeshComponent* wallsIn;                                              // 0x0308 (size: 0x8)
    class UStaticMeshComponent* borderY1;                                             // 0x0310 (size: 0x8)
    class UStaticMeshComponent* borderx1;                                             // 0x0318 (size: 0x8)
    class UStaticMeshComponent* borderY;                                              // 0x0320 (size: 0x8)
    class UStaticMeshComponent* borderx;                                              // 0x0328 (size: 0x8)
    class UStaticMeshComponent* walls_Out;                                            // 0x0330 (size: 0x8)
    class UStaticMeshComponent* walls;                                                // 0x0338 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x340

#endif
