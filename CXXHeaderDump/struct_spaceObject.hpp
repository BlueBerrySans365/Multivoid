#ifndef UE4SS_SDK_struct_spaceObject_HPP
#define UE4SS_SDK_struct_spaceObject_HPP

struct Fstruct_spaceObject
{
    FText displayName_32_E43F595545EF3DCA0C14248EC38FD526;                            // 0x0000 (size: 0x18)
    FName signalName_50_CCF432D14D3327CA417861B174C2ABCF;                             // 0x0018 (size: 0x8)
    class UStaticMesh* mesh_9_69B5661B465BBFCEAD141CA8D89FBC05;                       // 0x0020 (size: 0x8)
    class UStaticMesh* ring_11_E678C67C4E77CCE273D333AA766FD234;                      // 0x0028 (size: 0x8)
    TSubclassOf<class AsignalObjectActorBase_C> asActor_56_F4A857DD452A8A27DA3FFA91D11CD399; // 0x0030 (size: 0x8)
    FRotator rotation_init_28_0E9BECA64B5EE975A643E4B328E5F3AF;                       // 0x0038 (size: 0xC)
    FRotator rotation_1_22_035746D14469D0FBF636A7A1B2B95040;                          // 0x0044 (size: 0xC)
    FRotator rotation_2_25_70C93B0A48E15CB3CD8D6491A895855E;                          // 0x0050 (size: 0xC)
    FRotator rotation_3_26_8AA709AC42465156BEB3FCAC1470B05A;                          // 0x005C (size: 0xC)
    TEnumAsByte<enum_objectType::Type> objectType_53_5B9417DB414109E4D75A76BE14C28BE2; // 0x0068 (size: 0x1)
    TEnumAsByte<enum_freq::Type> signal_frequency_52_53FFEF714ECD27B0E36CB2B575FA645F; // 0x0069 (size: 0x1)
    TEnumAsByte<enum_quality::Type> signal_qualiy_51_1B7620C741EFC772BFF875B43F2DF35A; // 0x006A (size: 0x1)

}; // Size: 0x6B

#endif
