#ifndef UE4SS_SDK_event_consoleWrite_HPP
#define UE4SS_SDK_event_consoleWrite_HPP

class Aevent_consoleWrite_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    class Uui_console_C* C;                                                           // 0x0230 (size: 0x8)
    FString NewVar_0;                                                                 // 0x0238 (size: 0x10)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_event_consoleWrite(int32 EntryPoint);
}; // Size: 0x248

#endif
