#ifndef UE4SS_SDK_prop_briefcase_HPP
#define UE4SS_SDK_prop_briefcase_HPP

class Aprop_briefcase_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void ignoreSave(bool& ignoreSave);
    void ReceiveBeginPlay();
    void CustomEvent_0();
    void ExecuteUbergraph_prop_briefcase(int32 EntryPoint);
}; // Size: 0x370

#endif
