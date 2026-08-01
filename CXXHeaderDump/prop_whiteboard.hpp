#ifndef UE4SS_SDK_prop_whiteboard_HPP
#define UE4SS_SDK_prop_whiteboard_HPP

class Aprop_whiteboard_C : public Aprop_wallAttachable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UChildActorComponent* whiteboard;                                           // 0x03E0 (size: 0x8)
    class Awhiteboard_C* whiteboardObj;                                               // 0x03E8 (size: 0x8)
    class UTextureRenderTarget2D* whiteboardRT;                                       // 0x03F0 (size: 0x8)
    FString Str;                                                                      // 0x03F8 (size: 0x10)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void Release(bool Pressed);
    void ExecuteUbergraph_prop_whiteboard(int32 EntryPoint);
}; // Size: 0x408

#endif
