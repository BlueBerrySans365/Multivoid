#ifndef UE4SS_SDK_3dPrinterAnim_HPP
#define UE4SS_SDK_3dPrinterAnim_HPP

class A3dPrinterAnim_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBoxComponent* box_s;                                                       // 0x0370 (size: 0x8)
    class UBoxComponent* box_b;                                                       // 0x0378 (size: 0x8)
    class UStaticMeshComponent* printer_prot2_mover_Y;                                // 0x0380 (size: 0x8)
    class UStaticMeshComponent* printer_prot2_body;                                   // 0x0388 (size: 0x8)
    class UStaticMeshComponent* printer_prot2_mover_Z;                                // 0x0390 (size: 0x8)
    class UStaticMeshComponent* printer_prot2_mover_X;                                // 0x0398 (size: 0x8)
    class UBillboardComponent* Size;                                                  // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* Console;                                              // 0x03A8 (size: 0x8)
    class UProceduralMeshComponent* Mesh;                                             // 0x03B0 (size: 0x8)
    class UAudioComponent* loop;                                                      // 0x03B8 (size: 0x8)
    class UBillboardComponent* snd;                                                   // 0x03C0 (size: 0x8)
    class UBillboardComponent* H;                                                     // 0x03C8 (size: 0x8)
    class UBillboardComponent* head;                                                  // 0x03D0 (size: 0x8)
    int32 q_rad;                                                                      // 0x03D8 (size: 0x4)
    int32 q_lin;                                                                      // 0x03DC (size: 0x4)
    TArray<FVector> locRads;                                                          // 0x03E0 (size: 0x10)
    TArray<FVector> locLins;                                                          // 0x03F0 (size: 0x10)
    int32 ind;                                                                        // 0x0400 (size: 0x4)
    bool Mode;                                                                        // 0x0404 (size: 0x1)
    bool Active;                                                                      // 0x0405 (size: 0x1)
    float Height;                                                                     // 0x0408 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0410 (size: 0x8)
    int32 maxStep;                                                                    // 0x0418 (size: 0x4)
    float L_height;                                                                   // 0x041C (size: 0x4)
    int32 step;                                                                       // 0x0420 (size: 0x4)
    float Speed;                                                                      // 0x0424 (size: 0x4)
    FString meshName;                                                                 // 0x0428 (size: 0x10)
    int32 objectIndex;                                                                // 0x0438 (size: 0x4)
    bool canPrint;                                                                    // 0x043C (size: 0x1)
    FString meshMaterial;                                                             // 0x0440 (size: 0x10)
    TEnumAsByte<TextureFilter> filter_tex;                                            // 0x0450 (size: 0x1)
    TEnumAsByte<TextureFilter> filter_pbr;                                            // 0x0451 (size: 0x1)
    TEnumAsByte<TextureFilter> filter_normal;                                         // 0x0452 (size: 0x1)
    uint8 PhysMaterial;                                                               // 0x0453 (size: 0x1)
    Fstruct_multisectionCustomMesh multisectionMeshData;                              // 0x0458 (size: 0x128)
    TArray<FVector> sumOfVerts;                                                       // 0x0580 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> dynmats;                                  // 0x0590 (size: 0x10)
    class AmainGamemode_C* Target;                                                    // 0x05A0 (size: 0x8)
    float S;                                                                          // 0x05A8 (size: 0x4)
    FVector Offset;                                                                   // 0x05AC (size: 0xC)
    float MaxHeight;                                                                  // 0x05B8 (size: 0x4)

    void displayBox(FVector S, FVector B);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void Point(FVector& Output);
    TArray<FVector> Array();
    void makePath();
    void Placement();
    void UserConstructionScript();
    void scrollUp();
    void scrollDown();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void print();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void selectMesh(FString meshName);
    void Finish();
    void ExecuteUbergraph_3dPrinterAnim(int32 EntryPoint);
}; // Size: 0x5BC

#endif
