#ifndef UE4SS_SDK_minigameRoot_pawn_HPP
#define UE4SS_SDK_minigameRoot_pawn_HPP

class AminigameRoot_pawn_C : public APawn
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0280 (size: 0x8)

    void Ctrl();
    void Shift();
    void Enter();
    void Left();
    void Right();
    void Down();
    void Up();
}; // Size: 0x288

#endif
