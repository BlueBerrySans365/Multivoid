#ifndef UE4SS_SDK_RHIManager_HPP
#define UE4SS_SDK_RHIManager_HPP

#include "RHIManager_enums.hpp"

class URHIManagerBPLibrary : public UBlueprintFunctionLibrary
{

    void SetGraphicsRHI(EGraphicsRHI GraphicsRHI);
    float RHIManagerSampleFunction(float Param);
    EGraphicsRHI GetCurrentGraphicsRHI();
}; // Size: 0x28

#endif
