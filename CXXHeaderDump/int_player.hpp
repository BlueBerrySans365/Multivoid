#ifndef UE4SS_SDK_int_player_HPP
#define UE4SS_SDK_int_player_HPP

class Iint_player_C : public IInterface
{

    void playerStepped(FHitResult Hit);
    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void asContainer(class Aprop_container_C*& container);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFood(class Aprop_food_C*& food);
    void playerHoldPre(class AmainPlayer_C* Player);
    void unequpped(class AmainPlayer_C* Player);
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void playerHoldPost(class AmainPlayer_C* Player);
    void playerUnequip(class AmainPlayer_C* Player);
    void updateStrAgl();
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void thrown(class AmainPlayer_C* Player);
    void broken_fire();
    void canBePutInContainer(bool& return);
    void broken();
    void sendName(FName Name);
    void kicked(bool kick);
    void asProp(class Aprop_C*& return);
    void canPickup(bool& return);
    void noRespawn(bool noRespawn, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void isButtonUsed(bool& failed);
    void driveDetached();
}; // Size: 0x28

#endif
