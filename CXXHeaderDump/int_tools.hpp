#ifndef UE4SS_SDK_int_tools_HPP
#define UE4SS_SDK_int_tools_HPP

class Iint_tools_C : public IInterface
{

    void parameterUpdated();
    void toolgunLookingAt(class Aprop_toolgun_C* toolgun, class AmainPlayer_C* Player, FHitResult Hit);
    void toolgunLookedAway(class Aprop_toolgun_C* toolgun, class AmainPlayer_C* Player);
    void toolgunLookedAt(class Aprop_toolgun_C* toolgun, class AmainPlayer_C* Player, FHitResult Hit);
    void assignParameters(Fstruct_toolParameters Parameters, bool& return);
    void setParameters(Fstruct_toolParameters Parameters, bool& return);
    void getParameters(Fstruct_toolParameters& Parameters);
}; // Size: 0x28

#endif
