#ifndef UE4SS_SDK_rug_HPP
#define UE4SS_SDK_rug_HPP

class Arug_c : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    class UProceduralMeshComponent* ProceduralMesh;                                   // 0x0258 (size: 0x8)
    FIntPoint res;                                                                    // 0x0260 (size: 0x8)
    TArray<FVector> ps;                                                               // 0x0268 (size: 0x10)
    TArray<int32> ris;                                                                // 0x0278 (size: 0x10)
    TArray<FVector2D> UVs;                                                            // 0x0288 (size: 0x10)
    int32 Type;                                                                       // 0x0298 (size: 0x4)
    float R;                                                                          // 0x029C (size: 0x4)
    FName Name;                                                                       // 0x02A0 (size: 0x8)
    bool smoo;                                                                        // 0x02A8 (size: 0x1)
    int32 smh;                                                                        // 0x02AC (size: 0x4)
    int32 skin;                                                                       // 0x02B0 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x02B8 (size: 0x8)
    TArray<FVector> norms;                                                            // 0x02C0 (size: 0x10)
    FName Filename;                                                                   // 0x02D0 (size: 0x8)
    bool Custom;                                                                      // 0x02D8 (size: 0x1)
    int32 Size X;                                                                     // 0x02DC (size: 0x4)
    int32 Size Y;                                                                     // 0x02E0 (size: 0x4)
    float Size;                                                                       // 0x02E4 (size: 0x4)
    float Height;                                                                     // 0x02E8 (size: 0x4)
    float lift;                                                                       // 0x02EC (size: 0x4)
    float Trace Size;                                                                 // 0x02F0 (size: 0x4)
    float Max Rad;                                                                    // 0x02F4 (size: 0x4)
    int32 Max Sm;                                                                     // 0x02F8 (size: 0x4)

    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void asContainer(class Aprop_container_C*& container);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFood(class Aprop_food_C*& food);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void canBePutInContainer(bool& return);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void setSkin();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void IsValid(int32 ID, int32 Max, FVector def, FVector& Output);
    bool checkWall(FVector A, bool Condition, class UPrimitiveComponent* Target, FVector B, FVector& Location);
    void smooh(TArray<FVector>& A1, TArray<FVector>& B1);
    void check(FVector InputPin, FVector curr, FVector& OutputPin, int32& is);
    void gen();
    void UserConstructionScript();
    void unequpped(class AmainPlayer_C* Player);
    void playerHoldPre(class AmainPlayer_C* Player);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void playerStepped(FHitResult Hit);
    void ReceiveBeginPlay();
    void sendName(FName Name);
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void kicked(bool kick);
    void playerHoldPost(class AmainPlayer_C* Player);
    void playerUnequip(class AmainPlayer_C* Player);
    void updateStrAgl();
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void driveDetached();
    void thrown(class AmainPlayer_C* Player);
    void broken_fire();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void broken();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void ExecuteUbergraph_rug(int32 EntryPoint);
}; // Size: 0x2FC

#endif
