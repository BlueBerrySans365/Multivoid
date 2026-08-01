#ifndef UE4SS_SDK_signalCam_HPP
#define UE4SS_SDK_signalCam_HPP

class AsignalCam_C : public AActor
{
    class UArrowComponent* Arrow;                                                     // 0x0220 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    FName signal;                                                                     // 0x0238 (size: 0x8)
    float FOV;                                                                        // 0x0240 (size: 0x4)
    bool breath;                                                                      // 0x0244 (size: 0x1)
    class AActor* Trigger;                                                            // 0x0248 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x250

#endif
