#ifndef UE4SS_SDK_weld_HPP
#define UE4SS_SDK_weld_HPP

class Aweld_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0250 (size: 0x8)
    class UStaticMeshComponent* B;                                                    // 0x0258 (size: 0x8)
    class UStaticMeshComponent* A;                                                    // 0x0260 (size: 0x8)
    class AActor* weld_A;                                                             // 0x0268 (size: 0x8)
    class AActor* weld_B;                                                             // 0x0270 (size: 0x8)
    FName weldKey_A;                                                                  // 0x0278 (size: 0x8)
    FName weldKey_B;                                                                  // 0x0280 (size: 0x8)
    FVector weldB;                                                                    // 0x0288 (size: 0xC)
    bool simulatePhys;                                                                // 0x0294 (size: 0x1)

    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void weld(class AActor* weld_A, class AActor* weld_B, FVector weldB);
    void assign();
    void dest_A(class AActor* DestroyedActor);
    void dest_B(class AActor* DestroyedActor);
    void ExecuteUbergraph_weld(int32 EntryPoint);
}; // Size: 0x295

#endif
