#ifndef UE4SS_SDK_prop_yeeterDeleter_HPP
#define UE4SS_SDK_prop_yeeterDeleter_HPP

class Aprop_yeeterDeleter_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> Object Types;                               // 0x0370 (size: 0x10)

    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_yeeterDeleter(int32 EntryPoint);
}; // Size: 0x380

#endif
