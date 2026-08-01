#ifndef UE4SS_SDK_waterVolume_basementFlooder_HPP
#define UE4SS_SDK_waterVolume_basementFlooder_HPP

class AwaterVolume_basementFlooder_C : public AwaterVolume_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class UBoxComponent* Box1_0;                                                      // 0x0310 (size: 0x8)
    FVector loc_A;                                                                    // 0x0318 (size: 0xC)
    FVector loc_B;                                                                    // 0x0324 (size: 0xC)
    float Height;                                                                     // 0x0330 (size: 0x4)
    bool moveTo;                                                                      // 0x0334 (size: 0x1)
    float dist;                                                                       // 0x0338 (size: 0x4)

    void setLevel(float Alpha);
    void getLevel(float& Level);
    void addWater(float DeltaTime, float power);
    void startMoving(bool moveTo);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void loadLevel(float Alpha);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_waterVolume_basementFlooder(int32 EntryPoint);
}; // Size: 0x33C

#endif
