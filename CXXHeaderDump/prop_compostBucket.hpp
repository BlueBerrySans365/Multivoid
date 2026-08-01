#ifndef UE4SS_SDK_prop_compostBucket_HPP
#define UE4SS_SDK_prop_compostBucket_HPP

class Aprop_compostBucket_C : public Aprop_openContainer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* compost;                                              // 0x03B8 (size: 0x8)
    int32 Level;                                                                      // 0x03C0 (size: 0x4)
    float accumulate;                                                                 // 0x03C4 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void checkFert();
    void upd();
    void UserConstructionScript();
    void freezed();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_compostBucket(int32 EntryPoint);
}; // Size: 0x3C8

#endif
