#ifndef UE4SS_SDK_prop_plankLockLocker_HPP
#define UE4SS_SDK_prop_plankLockLocker_HPP

class Aprop_plankLockLocker_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Alocker_C* locker;                                                          // 0x0370 (size: 0x8)

    void ReceiveDestroyed();
    void ExecuteUbergraph_prop_plankLockLocker(int32 EntryPoint);
}; // Size: 0x378

#endif
