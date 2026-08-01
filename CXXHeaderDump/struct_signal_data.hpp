#ifndef UE4SS_SDK_struct_signal_data_HPP
#define UE4SS_SDK_struct_signal_data_HPP

struct Fstruct_signal_data
{
    FString name_73_1AF14C284ED1662FF52A6D96FF1DEC6A;                                 // 0x0000 (size: 0x10)
    FString unique_ID_93_3B2470FB4FA54361FA2858916834375A;                            // 0x0010 (size: 0x10)
    int32 decodedLevel_142_601E52FF4BF8B63A0440DA8CAC072798;                          // 0x0020 (size: 0x4)
    float size_61_AC87FA6F474CCBFD4A53A283B59F8E53;                                   // 0x0024 (size: 0x4)
    float downloaded_143_BD2FD3404A9E3AE102E7F2A40CED061E;                            // 0x0028 (size: 0x4)
    float downloadedAtQuality_147_8581564E4DD5AAE419B5EB8A03C150F3;                   // 0x002C (size: 0x4)
    FDateTime date_57_5BF184664B434DA21A911387B956499F;                               // 0x0030 (size: 0x8)
    TEnumAsByte<enum_signalPrice::Type> price_140_7C5186B94C31D1A990F23CBAA86770CD;   // 0x0038 (size: 0x1)
    FVector2D signalLocation_114_F9DDA5C344672EB06EBB6CAC9334FDDE;                    // 0x003C (size: 0x8)
    int32 polarityDir_115_5AD01FF44CC64307106F8A9036D994D9;                           // 0x0044 (size: 0x4)
    bool isACopy_100_B1BF09584271A2DAB5592BA7EC86CDC4;                                // 0x0048 (size: 0x1)
    class UTexture2D* image_raw_35_7149A06F430853FE3D31D1AFAB32AF7D;                  // 0x0050 (size: 0x8)
    class UTexture2D* image_low_80_112D06294087F45E84A67EB3C2809FF9;                  // 0x0058 (size: 0x8)
    class UTexture2D* image_noisy_81_6C9F477348D8060C7D9F33B450007C1D;                // 0x0060 (size: 0x8)
    class UTexture2D* image_high_29_10F5A07644F72A16E664F0914813E0D2;                 // 0x0068 (size: 0x8)
    class USoundBase* sound_raw_45_31832F2B497C09C78171268E6D2E49B9;                  // 0x0070 (size: 0x8)
    class USoundBase* sound_low_84_E9B069CC489EC4F4E89475BD572E868C;                  // 0x0078 (size: 0x8)
    class USoundBase* sound_noisy_85_32C5BC80466B7890090CD59F6EECDDB5;                // 0x0080 (size: 0x8)
    class USoundBase* sound_high_42_6520C74945264C483D56DAA4E1833C45;                 // 0x0088 (size: 0x8)
    FText text_raw_54_3A6BCDA74F3BE9C4AACC84BDD46CFC42;                               // 0x0090 (size: 0x18)
    FText text_low_86_9B154E664B709A5AB02E26A49F6099C0;                               // 0x00A8 (size: 0x18)
    FText text_noisy_87_F1A4990B4F4D4CF2A2AF789EB021C7E4;                             // 0x00C0 (size: 0x18)
    FText text_high_48_A4A12DFB44D0242555BAD1B10DD44A1A;                              // 0x00D8 (size: 0x18)
    TEnumAsByte<enum_signalResponse::Type> response_raw_103_B2D945C746759AB2A53B4592A87ACFCD; // 0x00F0 (size: 0x1)
    TEnumAsByte<enum_signalResponse::Type> response_low_107_84A32F0B467B5FECA0E9549161310FF1; // 0x00F1 (size: 0x1)
    TEnumAsByte<enum_signalResponse::Type> response_noisy_108_4A04B10E405DDA7D4D0318B813A1A47C; // 0x00F2 (size: 0x1)
    TEnumAsByte<enum_signalResponse::Type> response_clear_109_4E777DE54D79D0883E8F31882D133683; // 0x00F3 (size: 0x1)
    FString specialResponse_135_9BA54D8E4C097F8D700033905A5B82BE;                     // 0x00F8 (size: 0x10)
    int32 specialPriority_138_5AFA19AA439E02923CB4E18796C7CF91;                       // 0x0108 (size: 0x4)
    Fstruct_byteImage objectImage_144_270C18764880B3876E76708CDFA9DB36;               // 0x0110 (size: 0x10)
    Fstruct_spaceObject objectData_98_9820AEB440ED69CBAF5FF3AC4E5561AC;               // 0x0120 (size: 0x70)
    TArray<FString> properties_119_1EA3E5964841884938003C878DC99744;                  // 0x0190 (size: 0x10)
    TArray<FIntPoint> dayIntervals_127_E5C8B5C346E35A63DD512990FCE8A368;              // 0x01A0 (size: 0x10)
    TArray<FIntPoint> hourIntervals_130_8A025F574FEC857E36D7619C78039149;             // 0x01B0 (size: 0x10)
    bool unique_123_D831C713433CAD415EB3E3ABEFAB07EF;                                 // 0x01C0 (size: 0x1)
    bool isFunny_132_331D31E2467124D72694FBB16FAAFE2F;                                // 0x01C1 (size: 0x1)

}; // Size: 0x1C2

#endif
