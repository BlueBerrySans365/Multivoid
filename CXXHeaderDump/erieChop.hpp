#ifndef UE4SS_SDK_erieChop_HPP
#define UE4SS_SDK_erieChop_HPP

class AerieChop_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UAudioComponent* audio_blood;                                               // 0x0250 (size: 0x8)
    class UAudioComponent* audio_chop;                                                // 0x0258 (size: 0x8)
    class UParticleSystemComponent* eff_blood2;                                       // 0x0260 (size: 0x8)
    class UParticleSystemComponent* eff_blood1;                                       // 0x0268 (size: 0x8)
    class USkeletalMeshComponent* partBottom_cloth1;                                  // 0x0270 (size: 0x8)
    class USkeletalMeshComponent* partTop_cloth1;                                     // 0x0278 (size: 0x8)
    class USkeletalMeshComponent* partBottom_cloth;                                   // 0x0280 (size: 0x8)
    class USkeletalMeshComponent* partTop_cloth;                                      // 0x0288 (size: 0x8)
    class USkeletalMeshComponent* partBottom;                                         // 0x0290 (size: 0x8)
    class USkeletalMeshComponent* partTop;                                            // 0x0298 (size: 0x8)
    float bodyfall_a_6B76AD9C423768E6854A9B88D266D574;                                // 0x02A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> bodyfall__Direction_6B76AD9C423768E6854A9B88D266D574; // 0x02A4 (size: 0x1)
    class UTimelineComponent* bodyfall;                                               // 0x02A8 (size: 0x8)
    float anim_skin_a_A868EB664E5BF5774C5CC1A3262C2971;                               // 0x02B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> anim_skin__Direction_A868EB664E5BF5774C5CC1A3262C2971; // 0x02B4 (size: 0x1)
    class UTimelineComponent* anim_skin;                                              // 0x02B8 (size: 0x8)
    float anim_clothes_3_3783BAFC459A77B7BED145A1BA52DB32;                            // 0x02C0 (size: 0x4)
    float anim_clothes_2_3783BAFC459A77B7BED145A1BA52DB32;                            // 0x02C4 (size: 0x4)
    float anim_clothes_1_3783BAFC459A77B7BED145A1BA52DB32;                            // 0x02C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> anim_clothes__Direction_3783BAFC459A77B7BED145A1BA52DB32; // 0x02CC (size: 0x1)
    class UTimelineComponent* anim_clothes;                                           // 0x02D0 (size: 0x8)
    float anim_body_feet_6DBEF8CA48B9C125144AA4AEB7762754;                            // 0x02D8 (size: 0x4)
    float anim_body_head_6DBEF8CA48B9C125144AA4AEB7762754;                            // 0x02DC (size: 0x4)
    float anim_body_limbs_limbs_6DBEF8CA48B9C125144AA4AEB7762754;                     // 0x02E0 (size: 0x4)
    float anim_body_torso_ass_6DBEF8CA48B9C125144AA4AEB7762754;                       // 0x02E4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> anim_body__Direction_6DBEF8CA48B9C125144AA4AEB7762754; // 0x02E8 (size: 0x1)
    class UTimelineComponent* anim_body;                                              // 0x02F0 (size: 0x8)

    void ignoreSave(bool& ignoreSave);
    void playFleshSound();
    float boing(float A);
    void anim_body__FinishedFunc();
    void anim_body__UpdateFunc();
    void anim_body__sound__EventFunc();
    void anim_clothes__FinishedFunc();
    void anim_clothes__UpdateFunc();
    void anim_clothes__sound__EventFunc();
    void anim_skin__FinishedFunc();
    void anim_skin__UpdateFunc();
    void anim_skin__sound__EventFunc();
    void bodyfall__FinishedFunc();
    void bodyfall__UpdateFunc();
    void ReceiveBeginPlay();
    void grow();
    void BndEvt__erieChop_eff_blood1_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
    void ReceiveDestroyed();
    void ExecuteUbergraph_erieChop(int32 EntryPoint);
}; // Size: 0x2F8

#endif
