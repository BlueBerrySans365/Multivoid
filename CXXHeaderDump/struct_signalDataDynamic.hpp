#ifndef UE4SS_SDK_struct_signalDataDynamic_HPP
#define UE4SS_SDK_struct_signalDataDynamic_HPP

struct Fstruct_signalDataDynamic
{
    FString name_15_4DC53B564EDE34E0A8A16A92BD26B4AD;                                 // 0x0000 (size: 0x10)
    int32 level_8_986E7CB3437BFD9FC9F6DF824C794EA8;                                   // 0x0010 (size: 0x4)
    FString id_26_DD9E8AA643A0BF449C8D1E8993752C16;                                   // 0x0018 (size: 0x10)
    float size_4_C0BC00CB4E2BC1C588F54A9817B305BC;                                    // 0x0028 (size: 0x4)
    float decoded_5_A9CAC26F480C342A406FFFB77DD0AB68;                                 // 0x002C (size: 0x4)
    FDateTime date_12_F50EB15345B9D56ABE75F0BEF6FBD1E1;                               // 0x0030 (size: 0x8)
    bool isCopy_18_CDA9083D42C1928C15981B83A970D261;                                  // 0x0038 (size: 0x1)
    int32 polarity_21_0FB3FE464F37A2FB75F40DB7178528EC;                               // 0x003C (size: 0x4)
    FVector2D signalLocation_36_9224BE954D1F5B5B6E90B987873DA5E4;                     // 0x0040 (size: 0x8)
    FName object_29_E761FBB84E89C2B5F7FEC98F5EB54F9E;                                 // 0x0048 (size: 0x8)
    FName signal_35_B233DB2C4C2201A4A75992ADBFC69B1B;                                 // 0x0050 (size: 0x8)
    Fstruct_byteImage image_32_E58FAF5C406E24C9CD24FC848CCC7F66;                      // 0x0058 (size: 0x10)
    TEnumAsByte<enum_freq::Type> frequency_39_69C38A4C41C47B47BA14A1B3EB2AE3EF;       // 0x0068 (size: 0x1)
    TEnumAsByte<enum_quality::Type> quality_42_EEFCBB3B4BD2BBFCEEEE369E68BE127C;      // 0x0069 (size: 0x1)
    TEnumAsByte<enum_objectType::Type> objectType_46_95397E754A4283526BEB559C9EE7D7EE; // 0x006A (size: 0x1)
    float downloadedAtQuality_49_3546D7D84353CAD71C3E9B9CC0A62472;                    // 0x006C (size: 0x4)

}; // Size: 0x70

#endif
