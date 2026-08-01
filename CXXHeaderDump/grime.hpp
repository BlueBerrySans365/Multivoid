#ifndef UE4SS_SDK_grime_HPP
#define UE4SS_SDK_grime_HPP

class Agrime_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    bool snap;                                                                        // 0x0248 (size: 0x1)
    int32 Type;                                                                       // 0x024C (size: 0x4)
    float process;                                                                    // 0x0250 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0258 (size: 0x8)
    FName cleanParameter;                                                             // 0x0260 (size: 0x8)
    float maxProcess;                                                                 // 0x0268 (size: 0x4)
    float cleanStrength;                                                              // 0x026C (size: 0x4)
    class UMaterialInterface* Material;                                               // 0x0270 (size: 0x8)
    bool randomOrientation;                                                           // 0x0278 (size: 0x1)
    bool snapOrientation;                                                             // 0x0279 (size: 0x1)
    bool isCleanable;                                                                 // 0x027A (size: 0x1)
    bool resistRain;                                                                  // 0x027B (size: 0x1)

    void loadPrimitiveData(Fstruct_primitiveSave Data, bool& return);
    void getPrimitiveData(Fstruct_primitiveSave& Data);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void skipPreDelete(bool& Skip);
    void SetMaterial();
    void clean(class Aprop_sponge_C* sponge, float Sub, bool noSound, bool& return);
    void applyMaterial();
    void UserConstructionScript();
    void setIgnoreSave(bool ignore);
    void Sound();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_grime(int32 EntryPoint);
}; // Size: 0x27C

#endif
