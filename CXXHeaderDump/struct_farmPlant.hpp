#ifndef UE4SS_SDK_struct_farmPlant_HPP
#define UE4SS_SDK_struct_farmPlant_HPP

struct Fstruct_farmPlant
{
    FText displayName_21_41960D974F29239BCB96D0906BDBEA56;                            // 0x0000 (size: 0x18)
    TSubclassOf<class AgrowingPlant_C> plantObject_57_5011E5D845C14E4593D11C876F297187; // 0x0018 (size: 0x8)
    class UStaticMesh* plantGrow_27_4F38A51C4590D9660F12C7AE06E85D58;                 // 0x0020 (size: 0x8)
    class UStaticMesh* plantRipe_30_6AF9004C4BE7D2175046B082AC102A03;                 // 0x0028 (size: 0x8)
    class UStaticMesh* plantSupport_32_5412CEBB47A5982F518ABAA83D92D9D1;              // 0x0030 (size: 0x8)
    FName drop_5_085ABC2F48074FD7E1BDE987E97A5250;                                    // 0x0038 (size: 0x8)
    FIntPoint amount_range_82_4F5577114B35C27F510BE1AC8DCCEB4A;                       // 0x0040 (size: 0x8)
    float growRate_8_F635204C40BD64BAE4DB369063AA13A8;                                // 0x0048 (size: 0x4)
    bool dirtOnly_26_518E3DF141C65542403963BAC554F6EC;                                // 0x004C (size: 0x1)
    FVector size_35_50E42E654C88BAFA0034708C205426BD;                                 // 0x0050 (size: 0xC)
    TEnumAsByte<enum_farmPlantType::Type> plantType_67_9C60606D49F087B9C47B2DA5AB8EEFE1; // 0x005C (size: 0x1)
    FName fruit_44_7BF3CC2643302C01DB52048FEA6E393E;                                  // 0x0060 (size: 0x8)
    float fruitGrowRate_49_47D346B047D97B04FDE10CA64BADFC47;                          // 0x0068 (size: 0x4)
    TArray<FTransform> fruits_48_E7291A6E4A706E81977708B083057BD5;                    // 0x0070 (size: 0x10)
    float fruitRotate_54_E90285AB407C646CDF859E9B642E2635;                            // 0x0080 (size: 0x4)
    bool ignoreScale_61_4E673D9C4CBF98E0A802C0B0711CD724;                             // 0x0084 (size: 0x1)
    float minSize_64_795FD20B4229774B0CDEF08B7269C437;                                // 0x0088 (size: 0x4)
    float maxDryness_70_90593F354BFF5836BEC71F980781FEAD;                             // 0x008C (size: 0x4)
    bool nocturnal_74_E1D6F8614794424BA520C3969E5020CB;                               // 0x0090 (size: 0x1)
    bool canGrowInPots_77_43AA5A6942F5175A7BC04CA21AC7204D;                           // 0x0091 (size: 0x1)
    bool canGrowInGround_79_E3E2F73A466330CB6084779671858A44;                         // 0x0092 (size: 0x1)

}; // Size: 0x93

#endif
