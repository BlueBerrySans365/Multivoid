#ifndef UE4SS_SDK_prop_tvremote_HPP
#define UE4SS_SDK_prop_tvremote_HPP

class Aprop_tvremote_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0370 (size: 0x8)
    class UAudioComponent* audio_blip;                                                // 0x0378 (size: 0x8)
    class UBillboardComponent* textcenter;                                            // 0x0380 (size: 0x8)
    class AActor* objectUse;                                                          // 0x0388 (size: 0x8)
    FName objectKey;                                                                  // 0x0390 (size: 0x8)
    uint8 useType;                                                                    // 0x0398 (size: 0x1)
    bool Super;                                                                       // 0x0399 (size: 0x1)
    class Uui_hovertextNametag_C* Widget;                                             // 0x03A0 (size: 0x8)

    void updateText();
    TEnumAsByte<enum_interactionActions::Type> Action();
    bool Filter(const class AActor* Object);
    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void wireConnected(class Awire_C* wire, bool side);
    void wireDisconnected(class Awire_C* wire, bool side);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_tvremote(int32 EntryPoint);
}; // Size: 0x3A8

#endif
