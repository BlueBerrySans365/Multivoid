#ifndef UE4SS_SDK_lib_obj_HPP
#define UE4SS_SDK_lib_obj_HPP

class Ulib_obj_C : public UBlueprintFunctionLibrary
{

    void obj_statDynPawnPhys(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_dynamic(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_water(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_statDynPawn(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_physPawn(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_dynPhysPawn(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_pawn(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_phys(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_dynPhys(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_statDynPhysVeh(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_triggerStat(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_trigger(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_statDynPhys(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_statDyn(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
    void obj_static(class UObject* __WorldContext, TArray<TEnumAsByte<EObjectTypeQuery>>& obj);
}; // Size: 0x28

#endif
