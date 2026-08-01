#ifndef UE4SS_SDK_svtarget_HPP
#define UE4SS_SDK_svtarget_HPP

class Usvtarget_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FString Name;                                                                     // 0x00B8 (size: 0x10)

    void ReceiveBeginPlay();
    void Dest(class AActor* DestroyedActor);
    void ExecuteUbergraph_svtarget(int32 EntryPoint);
}; // Size: 0xC8

#endif
