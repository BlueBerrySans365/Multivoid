#ifndef UE4SS_SDK_prop_inventoryContainer_drone_HPP
#define UE4SS_SDK_prop_inventoryContainer_drone_HPP

class Aprop_inventoryContainer_drone_C : public Aprop_container_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)

    void skipPreDelete(bool& Skip);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_inventoryContainer_drone(int32 EntryPoint);
}; // Size: 0x438

#endif
