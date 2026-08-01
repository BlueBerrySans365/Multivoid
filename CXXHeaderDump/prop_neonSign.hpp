#ifndef UE4SS_SDK_prop_neonSign_HPP
#define UE4SS_SDK_prop_neonSign_HPP

class Aprop_neonSign_C : public Aprop_wallAttachable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x03E0 (size: 0x8)
    bool power;                                                                       // 0x03E8 (size: 0x1)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void upd();
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ExecuteUbergraph_prop_neonSign(int32 EntryPoint);
}; // Size: 0x3E9

#endif
