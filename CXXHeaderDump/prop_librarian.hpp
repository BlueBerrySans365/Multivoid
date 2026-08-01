#ifndef UE4SS_SDK_prop_librarian_HPP
#define UE4SS_SDK_prop_librarian_HPP

class Aprop_librarian_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0378 (size: 0x8)
    bool lig;                                                                         // 0x0380 (size: 0x1)
    int32 secs;                                                                       // 0x0384 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void attemptIgnite();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_librarian(int32 EntryPoint);
}; // Size: 0x388

#endif
