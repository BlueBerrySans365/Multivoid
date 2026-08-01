#ifndef UE4SS_SDK_struct_signalTableState_HPP
#define UE4SS_SDK_struct_signalTableState_HPP

struct Fstruct_signalTableState
{
    Fstruct_spaceObject DL_signalDownloadData_2_77E06BD14382E95538A728AE05DD156B;     // 0x0000 (size: 0x70)
    Fstruct_signalDataDynamic DL_SignalDownloadDLData_6_7D76FEBE464416F5B895FA97D83A762B; // 0x0070 (size: 0x70)
    float DL_poFilterOffset_9_546FEF5341FFA34ED52AC996DC8AD57E;                       // 0x00E0 (size: 0x4)
    float DL_FrFilterOffset_13_23B005514758AA3435E77DBBF16C7E4A;                      // 0x00E4 (size: 0x4)
    float DL_poFilterSpeed_14_1D67ADF24ACF2DA2D0AA8DBCD7D021E3;                       // 0x00E8 (size: 0x4)
    float DL_FrFilterSpeed_15_E87CE1B14F1D6763B34969A475F99BD7;                       // 0x00EC (size: 0x4)
    bool DL_activeFrFilter_20_093175FB4B289D831A14DDAC8B53D3EA;                       // 0x00F0 (size: 0x1)
    bool DL_activePoFilter_21_AD3ECDCC438488B46BFECF9FB6332072;                       // 0x00F1 (size: 0x1)
    float DL_downloading_24_193166CE46387C0289E8239442C48CD8;                         // 0x00F4 (size: 0x4)
    int32 DL_PolarityDir_27_B5FDF18946564EC5DC908D839FFDECCF;                         // 0x00F8 (size: 0x4)
    int32 comp_maxLevel_29_3069B855444E7D67AF1478B161F5ED92;                          // 0x00FC (size: 0x4)
    float comp_progress_32_B9CA1A6B466BA9BE3E824BA475CBC4BC;                          // 0x0100 (size: 0x4)
    Fstruct_signalDataDynamic comp_data_0_36_835D1BCE4860F30F2AEF92931A213A55;        // 0x0108 (size: 0x70)
    Fstruct_signal_data signalPlayData_39_249609CA4C05BD4809459B96291EE0DF;           // 0x0178 (size: 0x1C8)
    Fstruct_signal_spawn coord_signalData_43_14B8FB374899E0DDDF6D5C98B3F740C4;        // 0x0340 (size: 0x2C)
    float DL_resPercent_46_B1DF2DF4486FB202C7CA4E889D69F3A5;                          // 0x036C (size: 0x4)
    TArray<TEnumAsByte<enum_physicalModules::Type>> physMods_50_6AEAA1774063D1BCDEF1D0AD17C815FD; // 0x0370 (size: 0x10)
    TArray<bool> backPlatesStates_54_D5A2F63E4A69AECE81A1608213B029BC;                // 0x0380 (size: 0x10)
    TArray<bool> backPlatesUnscrew_56_A933C799453A14BFDF4CB6A25A38FB18;               // 0x0390 (size: 0x10)
    FVector2D remapVal_59_836CC48048A73420BB94D6B8996FF517;                           // 0x03A0 (size: 0x8)
    TArray<TEnumAsByte<enum_physicalModules::Type>> radarMods_63_628F5E324068A3726435FBAEB919066B; // 0x03A8 (size: 0x10)

}; // Size: 0x3B8

#endif
