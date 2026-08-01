#ifndef UE4SS_SDK_lib_getFunc_HPP
#define UE4SS_SDK_lib_getFunc_HPP

class Ulib_getFunc_C : public UBlueprintFunctionLibrary
{

    void getSignalPrice(TEnumAsByte<enum_signalPrice::Type> signal, class UObject* __WorldContext, int32& price);
    void getMainMap(class UObject* __WorldContext, FName& Level);
    class UMaterialInterface* getGrunge_leaves(int32 select, class UObject* __WorldContext);
    void getSandboxMaps(class UObject* __WorldContext, TArray<FName>& Maps);
    class UMaterialInterface* getGrunge_cracks(int32 select, class UObject* __WorldContext);
    class UMaterialInterface* getGrunge_dirt(int32 select, class UObject* __WorldContext);
    class UMaterialInterface* getGrunge_leakyWet(int32 select, class UObject* __WorldContext);
    class UMaterialInterface* getGrunge_leakyRusty(int32 select, class UObject* __WorldContext);
    class UMaterialInterface* getGrunge_leakyDry(int32 select, class UObject* __WorldContext);
    class UMaterialInterface* getGrunge_dusty(int32 select, class UObject* __WorldContext);
    class UMaterialInterface* getGrunge_light(int32 select, class UObject* __WorldContext);
    class UMaterialInterface* getGrunge_weak(int32 select, class UObject* __WorldContext);
    class UStaticMesh* getChipPileType(TEnumAsByte<enum_chipPileType::Type> Type, class UObject* __WorldContext);
}; // Size: 0x28

#endif
