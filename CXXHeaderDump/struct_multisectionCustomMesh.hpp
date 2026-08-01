#ifndef UE4SS_SDK_struct_multisectionCustomMesh_HPP
#define UE4SS_SDK_struct_multisectionCustomMesh_HPP

struct Fstruct_multisectionCustomMesh
{
    TArray<Fstruct_customMesh> geometry_4_CA5ADDA34263C93881C48E8FC97CCCAF;           // 0x0000 (size: 0x10)
    TArray<FString> sectionNames_7_1ED9F65C45C16DAB4475DB91FC868C20;                  // 0x0010 (size: 0x10)
    TArray<class UTexture2D*> textures_diffuse_13_A750D5AD4AF155F685402FA739EF0224;   // 0x0020 (size: 0x10)
    TArray<class UTexture2D*> textures_pbr_15_8D8D771B474A659BF02BCF8142A321A1;       // 0x0030 (size: 0x10)
    TArray<class UTexture2D*> textures_normal_17_361862C944F5A45004ACB7A467AFF2C8;    // 0x0040 (size: 0x10)
    TArray<class UTexture2D*> textures_emissive_21_9FEA928B45FDB34A66D45190D3DFFAE0;  // 0x0050 (size: 0x10)
    TArray<uint8> filters_diffuse_34_FBBA752E41C5DA9F91510A88555A6F84;                // 0x0060 (size: 0x10)
    TArray<uint8> filters_pbr_35_DBA0C4DE4D9980C050F52FB6E9F1B5F4;                    // 0x0070 (size: 0x10)
    TArray<uint8> filters_normal_36_2FC8FCD941E5419C567D29AF35C59872;                 // 0x0080 (size: 0x10)
    TArray<uint8> filters_emissive_38_F7134C8D40001B6CB4BA0F8E87EC373A;               // 0x0090 (size: 0x10)
    TArray<FString> names_diffuse_44_BF87E8264C0D9684953D9DB2DDF62B86;                // 0x00A0 (size: 0x10)
    TArray<FString> names_pbr_46_E8D812204C86E1CBC05CC293FE9D88E2;                    // 0x00B0 (size: 0x10)
    TArray<FString> names_normal_48_235807024784D0F4F8FF42A5BB68AB0A;                 // 0x00C0 (size: 0x10)
    TArray<FString> names_emissive_50_A93DDAAB4CD5EED7ABD0B8AEDF1F4051;               // 0x00D0 (size: 0x10)
    float emissiveStrength_24_93B0F0F34A9818A9C082AEB6B8784817;                       // 0x00E0 (size: 0x4)
    bool isLamp_52_AEF0123147FA9F29B11B44861A7A9021;                                  // 0x00E4 (size: 0x1)
    FLinearColor lampColor_59_7753EA5040097CC7ED7527B1CEDB524B;                       // 0x00E8 (size: 0x10)
    FVector lampOffset_58_F33D2CA84084EAB6DB9CA1B441ABD7B7;                           // 0x00F8 (size: 0xC)
    uint8 physicalMaterial_63_964AA8D14051A5C564595C9428201AED;                       // 0x0104 (size: 0x1)
    float lampIntensity_67_CEC7F09D45396B3523A02883CD13ECB8;                          // 0x0108 (size: 0x4)
    float lampAttenuation_69_5ED773D748CAFB6603F2C989A39E33D0;                        // 0x010C (size: 0x4)
    bool lamp_shadows_72_3EA690B84A3A64BE0A3D168963102D09;                            // 0x0110 (size: 0x1)
    float explotano_75_32C1C7574E505AF2BDCC3582CAB0B2FC;                              // 0x0114 (size: 0x4)
    float health_82_D40428204FC7A63D47FD36B1BAF9D239;                                 // 0x0118 (size: 0x4)
    float damageResistance_83_C32C4E7E493E85F640B16E9C8F5CBFDA;                       // 0x011C (size: 0x4)
    float impactResistance_84_D940B709410F5746CCC1EAB5095B8573;                       // 0x0120 (size: 0x4)
    bool lightToggle_87_16A2F536499B2BFF69EE90A9345FD11B;                             // 0x0124 (size: 0x1)

}; // Size: 0x125

#endif
