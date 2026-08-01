#ifndef UE4SS_SDK_MagicNodeRuntime_HPP
#define UE4SS_SDK_MagicNodeRuntime_HPP

#include "MagicNodeRuntime_enums.hpp"

struct FMGC_SourceCode
{
    FString Header;                                                                   // 0x0000 (size: 0x10)
    FString Script;                                                                   // 0x0010 (size: 0x10)
    FString Types;                                                                    // 0x0020 (size: 0x10)
    TArray<FString> Includes;                                                         // 0x0030 (size: 0x10)
    TArray<FString> Macros;                                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

class UMGC_Settings : public UObject
{
}; // Size: 0x28

class UMagicNode : public UObject
{

    void Finish();
}; // Size: 0x48

class UMagicNodeScript : public UObject
{
    TSubclassOf<class UMagicNode> RuntimeScriptClass;                                 // 0x0028 (size: 0x8)

}; // Size: 0x30

#endif
