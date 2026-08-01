#ifndef UE4SS_SDK_prop_tv_OBSOLETE_HPP
#define UE4SS_SDK_prop_tv_OBSOLETE_HPP

class Aprop_tv_OBSOLETE_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0370 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x0378 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0380 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0388 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0390 (size: 0x8)
    bool playvid;                                                                     // 0x0398 (size: 0x1)
    class Uui_videobrowser_C* W;                                                      // 0x03A0 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x03A8 (size: 0x8)
    FString URL;                                                                      // 0x03B0 (size: 0x10)
    class UMediaTexture* MediaTexture;                                                // 0x03C0 (size: 0x8)
    class UObject* Interface;                                                         // 0x03C8 (size: 0x8)
    TEnumAsByte<enum_playlist::Type> PlayMode;                                        // 0x03D0 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void ExecuteUbergraph_prop_tv_OBSOLETE(int32 EntryPoint);
}; // Size: 0x3D1

#endif
