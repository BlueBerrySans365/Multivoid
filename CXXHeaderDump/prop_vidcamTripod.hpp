#ifndef UE4SS_SDK_prop_vidcamTripod_HPP
#define UE4SS_SDK_prop_vidcamTripod_HPP

class Aprop_vidcamTripod_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPhysicsConstraintComponent* nocollide;                                     // 0x0370 (size: 0x8)
    class UStaticMeshComponent* camPos;                                               // 0x0378 (size: 0x8)
    class UArrowComponent* Axis;                                                      // 0x0380 (size: 0x8)
    class Aprop_vidcam_C* camOn;                                                      // 0x0388 (size: 0x8)
    int32 angle_Y;                                                                    // 0x0390 (size: 0x4)
    class AmainPlayer_C* pl;                                                          // 0x0398 (size: 0x8)
    int32 angle_X;                                                                    // 0x03A0 (size: 0x4)
    int32 angle_Z;                                                                    // 0x03A4 (size: 0x4)
    int32 axisType;                                                                   // 0x03A8 (size: 0x4)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void setAngle();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void used(bool Pressed);
    void scrollUp();
    void scrollDown();
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void putCamOn(class Aprop_vidcam_C* cam);
    void ExecuteUbergraph_prop_vidcamTripod(int32 EntryPoint);
}; // Size: 0x3AC

#endif
