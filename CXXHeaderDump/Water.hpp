#ifndef UE4SS_SDK_Water_HPP
#define UE4SS_SDK_Water_HPP

#include "Water_enums.hpp"

struct FBuoyancyData
{
    TArray<FSphericalPontoon> Pontoons;                                               // 0x0000 (size: 0x10)
    float BuoyancyCoefficient;                                                        // 0x0010 (size: 0x4)
    float BuoyancyDamp;                                                               // 0x0014 (size: 0x4)
    float BuoyancyDamp2;                                                              // 0x0018 (size: 0x4)
    float BuoyancyRampMinVelocity;                                                    // 0x001C (size: 0x4)
    float BuoyancyRampMaxVelocity;                                                    // 0x0020 (size: 0x4)
    float BuoyancyRampMax;                                                            // 0x0024 (size: 0x4)
    float MaxBuoyantForce;                                                            // 0x0028 (size: 0x4)
    float WaterShorePushFactor;                                                       // 0x002C (size: 0x4)
    float WaterVelocityStrength;                                                      // 0x0030 (size: 0x4)
    float MaxWaterForce;                                                              // 0x0034 (size: 0x4)
    float DragCoefficient;                                                            // 0x0038 (size: 0x4)
    float DragCoefficient2;                                                           // 0x003C (size: 0x4)
    float AngularDragCoefficient;                                                     // 0x0040 (size: 0x4)
    float MaxDragSpeed;                                                               // 0x0044 (size: 0x4)
    bool bApplyDragForcesInWater;                                                     // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FGerstnerWave
{
    float WaveLength;                                                                 // 0x0000 (size: 0x4)
    float Amplitude;                                                                  // 0x0004 (size: 0x4)
    float Steepness;                                                                  // 0x0008 (size: 0x4)
    FVector Direction;                                                                // 0x000C (size: 0xC)
    FVector2D WaveVector;                                                             // 0x0018 (size: 0x8)
    float WaveSpeed;                                                                  // 0x0020 (size: 0x4)
    float WKA;                                                                        // 0x0024 (size: 0x4)
    float Q;                                                                          // 0x0028 (size: 0x4)
    float PhaseOffset;                                                                // 0x002C (size: 0x4)

}; // Size: 0x30

struct FGerstnerWaveOctave
{
    int32 NumWaves;                                                                   // 0x0000 (size: 0x4)
    float AmplitudeScale;                                                             // 0x0004 (size: 0x4)
    float MainDirection;                                                              // 0x0008 (size: 0x4)
    float SpreadAngle;                                                                // 0x000C (size: 0x4)
    bool bUniformSpread;                                                              // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FSphericalPontoon
{
    FName CenterSocket;                                                               // 0x0000 (size: 0x8)
    FVector RelativeLocation;                                                         // 0x0008 (size: 0xC)
    float Radius;                                                                     // 0x0014 (size: 0x4)
    FVector LocalForce;                                                               // 0x0018 (size: 0xC)
    FVector CenterLocation;                                                           // 0x0024 (size: 0xC)
    FQuat SocketRotation;                                                             // 0x0030 (size: 0x10)
    FVector Offset;                                                                   // 0x0040 (size: 0xC)
    float WaterHeight;                                                                // 0x0050 (size: 0x4)
    float WaterDepth;                                                                 // 0x0054 (size: 0x4)
    float ImmersionDepth;                                                             // 0x0058 (size: 0x4)
    FVector WaterPlaneLocation;                                                       // 0x005C (size: 0xC)
    FVector WaterPlaneNormal;                                                         // 0x0068 (size: 0xC)
    FVector WaterSurfacePosition;                                                     // 0x0074 (size: 0xC)
    FVector WaterVelocity;                                                            // 0x0080 (size: 0xC)
    int32 WaterBodyIndex;                                                             // 0x008C (size: 0x4)
    class AWaterBody* CurrentWaterBody;                                               // 0x0208 (size: 0x8)

}; // Size: 0x220

struct FUnderwaterPostProcessSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float Priority;                                                                   // 0x0004 (size: 0x4)
    float BlendRadius;                                                                // 0x0008 (size: 0x4)
    float BlendWeight;                                                                // 0x000C (size: 0x4)
    FPostProcessSettings PostProcessSettings;                                         // 0x0010 (size: 0x560)
    class UMaterialInterface* UnderwaterPostProcessMaterial;                          // 0x0570 (size: 0x8)

}; // Size: 0x580

struct FWaterBodyHeightmapSettings
{
    EWaterBrushBlendType BlendMode;                                                   // 0x0000 (size: 0x1)
    bool bInvertShape;                                                                // 0x0001 (size: 0x1)
    FWaterFalloffSettings FalloffSettings;                                            // 0x0004 (size: 0x14)
    FWaterBrushEffects Effects;                                                       // 0x0018 (size: 0x60)
    int32 Priority;                                                                   // 0x0078 (size: 0x4)

}; // Size: 0x80

struct FWaterBodyWeightmapSettings
{
    float FalloffWidth;                                                               // 0x0000 (size: 0x4)
    float EdgeOffset;                                                                 // 0x0004 (size: 0x4)
    class UTexture2D* ModulationTexture;                                              // 0x0008 (size: 0x8)
    float TextureTiling;                                                              // 0x0010 (size: 0x4)
    float TextureInfluence;                                                           // 0x0014 (size: 0x4)
    float Midpoint;                                                                   // 0x0018 (size: 0x4)
    float FinalOpacity;                                                               // 0x001C (size: 0x4)

}; // Size: 0x20

struct FWaterBrushEffectBlurring
{
    bool bBlurShape;                                                                  // 0x0000 (size: 0x1)
    int32 Radius;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWaterBrushEffectCurlNoise
{
    float Curl1Amount;                                                                // 0x0000 (size: 0x4)
    float Curl2Amount;                                                                // 0x0004 (size: 0x4)
    float Curl1Tiling;                                                                // 0x0008 (size: 0x4)
    float Curl2Tiling;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FWaterBrushEffectCurves
{
    bool bUseCurveChannel;                                                            // 0x0000 (size: 0x1)
    class UCurveFloat* ElevationCurveAsset;                                           // 0x0008 (size: 0x8)
    float ChannelEdgeOffset;                                                          // 0x0010 (size: 0x4)
    float ChannelDepth;                                                               // 0x0014 (size: 0x4)
    float CurveRampWidth;                                                             // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FWaterBrushEffectDisplacement
{
    float DisplacementHeight;                                                         // 0x0000 (size: 0x4)
    float DisplacementTiling;                                                         // 0x0004 (size: 0x4)
    class UTexture2D* Texture;                                                        // 0x0008 (size: 0x8)
    float Midpoint;                                                                   // 0x0010 (size: 0x4)
    FLinearColor Channel;                                                             // 0x0014 (size: 0x10)
    float WeightmapInfluence;                                                         // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FWaterBrushEffectSmoothBlending
{
    float InnerSmoothDistance;                                                        // 0x0000 (size: 0x4)
    float OuterSmoothDistance;                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWaterBrushEffectTerracing
{
    float TerraceAlpha;                                                               // 0x0000 (size: 0x4)
    float TerraceSpacing;                                                             // 0x0004 (size: 0x4)
    float TerraceSmoothness;                                                          // 0x0008 (size: 0x4)
    float MaskLength;                                                                 // 0x000C (size: 0x4)
    float MaskStartOffset;                                                            // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FWaterBrushEffects
{
    FWaterBrushEffectBlurring Blurring;                                               // 0x0000 (size: 0x8)
    FWaterBrushEffectCurlNoise CurlNoise;                                             // 0x0008 (size: 0x10)
    FWaterBrushEffectDisplacement Displacement;                                       // 0x0018 (size: 0x28)
    FWaterBrushEffectSmoothBlending SmoothBlending;                                   // 0x0040 (size: 0x8)
    FWaterBrushEffectTerracing Terracing;                                             // 0x0048 (size: 0x14)

}; // Size: 0x60

struct FWaterCurveSettings
{
    bool bUseCurveChannel;                                                            // 0x0000 (size: 0x1)
    class UCurveFloat* ElevationCurveAsset;                                           // 0x0008 (size: 0x8)
    float ChannelEdgeOffset;                                                          // 0x0010 (size: 0x4)
    float ChannelDepth;                                                               // 0x0014 (size: 0x4)
    float CurveRampWidth;                                                             // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FWaterFalloffSettings
{
    EWaterBrushFalloffMode FalloffMode;                                               // 0x0000 (size: 0x1)
    float FalloffAngle;                                                               // 0x0004 (size: 0x4)
    float FalloffWidth;                                                               // 0x0008 (size: 0x4)
    float EdgeOffset;                                                                 // 0x000C (size: 0x4)
    float ZOffset;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FWaterSplineCurveDefaults
{
    float DefaultDepth;                                                               // 0x0000 (size: 0x4)
    float DefaultWidth;                                                               // 0x0004 (size: 0x4)
    float DefaultVelocity;                                                            // 0x0008 (size: 0x4)
    float DefaultAudioIntensity;                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

class ABuoyancyManager : public AActor
{
    TArray<class UBuoyancyComponent*> BuoyancyComponents;                             // 0x0270 (size: 0x10)

    bool GetBuoyancyComponentManager(const class UObject* WorldContextObject, class ABuoyancyManager*& Manager);
}; // Size: 0x2D8

class AWaterBody : public AActor
{
    class UPhysicalMaterial* PhysicalMaterial;                                        // 0x0230 (size: 0x8)
    float TargetWaveMaskDepth;                                                        // 0x0238 (size: 0x4)
    float MaxWaveHeightOffset;                                                        // 0x023C (size: 0x4)
    int32 WaterBodyIndex;                                                             // 0x0240 (size: 0x4)
    bool bFillCollisionUnderWaterBodiesForNavmesh;                                    // 0x0244 (size: 0x1)
    FUnderwaterPostProcessSettings UnderwaterPostProcessSettings;                     // 0x0250 (size: 0x580)
    EWaterBodyType WaterBodyType;                                                     // 0x07D0 (size: 0x1)
    FWaterCurveSettings CurveSettings;                                                // 0x07D8 (size: 0x20)
    class UMaterialInterface* WaterMaterial;                                          // 0x07F8 (size: 0x8)
    class UMaterialInterface* UnderwaterPostProcessMaterial;                          // 0x0800 (size: 0x8)
    bool bAffectsLandscape;                                                           // 0x0808 (size: 0x1)
    bool bGenerateCollisions;                                                         // 0x0809 (size: 0x1)
    bool bOverrideWaterMesh;                                                          // 0x080A (size: 0x1)
    class UStaticMesh* WaterMeshOverride;                                             // 0x0810 (size: 0x8)
    int32 OverlapMaterialPriority;                                                    // 0x0818 (size: 0x4)
    FName CollisionProfileName;                                                       // 0x081C (size: 0x8)
    class UWaterSplineComponent* SplineComp;                                          // 0x0828 (size: 0x8)
    class UWaterSplineMetadata* WaterSplineMetadata;                                  // 0x0830 (size: 0x8)
    class UMaterialInstanceDynamic* WaterMID;                                         // 0x0838 (size: 0x8)
    class UMaterialInstanceDynamic* UnderwaterPostProcessMID;                         // 0x0840 (size: 0x8)
    TArray<TLazyObjectPtr<AWaterBodyIsland>> Islands;                                 // 0x0848 (size: 0x10)
    TArray<TLazyObjectPtr<AWaterBodyExclusionVolume>> ExclusionVolumes;               // 0x0858 (size: 0x10)
    TWeakObjectPtr<class ALandscapeProxy> Landscape;                                  // 0x0868 (size: 0x8)
    FPostProcessSettings CurrentPostProcessSettings;                                  // 0x0870 (size: 0x560)
    bool bCanAffectNavigation;                                                        // 0x0DD0 (size: 0x1)
    TSubclassOf<class UNavAreaBase> WaterNavAreaClass;                                // 0x0DD8 (size: 0x8)
    class UWaterWavesBase* WaterWaves;                                                // 0x0DE0 (size: 0x8)

    void SetWaterWaves(class UWaterWavesBase* InWaterWaves);
    void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
    class UWaterSplineComponent* GetWaterSpline();
    class UMaterialInstanceDynamic* GetWaterMaterialInstance();
    class UMaterialInterface* GetWaterMaterial();
    class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
    class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
    class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
    float GetMaxWaveHeight();
    TArray<class AWaterBodyIsland*> GetIslands();
    TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
}; // Size: 0xDF0

class AWaterBodyCustom : public AWaterBody
{
    class UCustomMeshGenerator* CustomGenerator;                                      // 0x0DE8 (size: 0x8)

}; // Size: 0xDF0

class AWaterBodyExclusionVolume : public APhysicsVolume
{
    bool bIgnoreAllOverlappingWaterBodies;                                            // 0x0268 (size: 0x1)
    TArray<class AWaterBody*> WaterBodiesToIgnore;                                    // 0x0270 (size: 0x10)

}; // Size: 0x280

class AWaterBodyIsland : public AActor
{
    class UWaterSplineComponent* SplineComp;                                          // 0x0228 (size: 0x8)

    class UWaterSplineComponent* GetWaterSpline();
}; // Size: 0x230

class AWaterBodyLake : public AWaterBody
{
    class ULakeGenerator* LakeGenerator;                                              // 0x0DE8 (size: 0x8)

}; // Size: 0xDF0

class AWaterBodyOcean : public AWaterBody
{
    class UOceanGenerator* OceanGenerator;                                            // 0x0DE8 (size: 0x8)
    FVector CollisionExtents;                                                         // 0x0DF0 (size: 0xC)
    float HeightOffset;                                                               // 0x0DFC (size: 0x4)

}; // Size: 0xE00

class AWaterBodyRiver : public AWaterBody
{
    class URiverGenerator* RiverGenerator;                                            // 0x0DE8 (size: 0x8)
    class UMaterialInterface* LakeTransitionMaterial;                                 // 0x0DF0 (size: 0x8)
    class UMaterialInstanceDynamic* LakeTransitionMID;                                // 0x0DF8 (size: 0x8)
    class UMaterialInterface* OceanTransitionMaterial;                                // 0x0E00 (size: 0x8)
    class UMaterialInstanceDynamic* OceanTransitionMID;                               // 0x0E08 (size: 0x8)

}; // Size: 0xE10

class AWaterMeshActor : public AActor
{
    class UTexture2D* WaterVelocityTexture;                                           // 0x0220 (size: 0x8)
    class UWaterMeshComponent* WaterMesh;                                             // 0x0228 (size: 0x8)

}; // Size: 0x230

class IWaterBrushActorInterface : public IInterface
{
}; // Size: 0x28

class UBuoyancyComponent : public UActorComponent
{
    TArray<FSphericalPontoon> Pontoons;                                               // 0x00B0 (size: 0x10)
    FBuoyancyComponentOnEnteredWaterDelegate OnEnteredWaterDelegate;                  // 0x00C0 (size: 0x10)
    void OnPontoonEnteredWater(const FSphericalPontoon& Pontoon);
    FBuoyancyComponentOnExitedWaterDelegate OnExitedWaterDelegate;                    // 0x00D0 (size: 0x10)
    void OnPontoonExitedWater(const FSphericalPontoon& Pontoon);
    FBuoyancyData BuoyancyData;                                                       // 0x00E0 (size: 0x50)
    TArray<class AWaterBody*> CurrentWaterBodies;                                     // 0x0130 (size: 0x10)
    class UPrimitiveComponent* SimulatingComponent;                                   // 0x0140 (size: 0x8)

    void OnPontoonExitedWater(const FSphericalPontoon& Pontoon);
    void OnPontoonEnteredWater(const FSphericalPontoon& Pontoon);
    bool IsInWaterBody();
    void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32& OutWaterBodyIdx, FVector& OutWaterVelocity);
}; // Size: 0x1D8

class UConvertWaterBodyActorsCommandlet : public UCommandlet
{
}; // Size: 0x80

class UCustomMeshGenerator : public UWaterBodyGenerator
{
    class UStaticMeshComponent* MeshComp;                                             // 0x0028 (size: 0x8)

}; // Size: 0x30

class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{
    bool bIncludeWaves;                                                               // 0x01F8 (size: 0x1)
    bool bSimpleWaves;                                                                // 0x01F9 (size: 0x1)
    bool bIgnoreExclusionVolumes;                                                     // 0x01FA (size: 0x1)

}; // Size: 0x200

class UGerstnerWaterWaveGeneratorBase : public UObject
{

    void GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves);
}; // Size: 0x28

class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{
    int32 NumWaves;                                                                   // 0x0028 (size: 0x4)
    int32 Seed;                                                                       // 0x002C (size: 0x4)
    float Randomness;                                                                 // 0x0030 (size: 0x4)
    float MinWavelength;                                                              // 0x0034 (size: 0x4)
    float MaxWavelength;                                                              // 0x0038 (size: 0x4)
    float WavelengthFalloff;                                                          // 0x003C (size: 0x4)
    float MinAmplitude;                                                               // 0x0040 (size: 0x4)
    float MaxAmplitude;                                                               // 0x0044 (size: 0x4)
    float AmplitudeFalloff;                                                           // 0x0048 (size: 0x4)
    float WindAngleDeg;                                                               // 0x004C (size: 0x4)
    float DirectionAngularSpreadDeg;                                                  // 0x0050 (size: 0x4)
    float SmallWaveSteepness;                                                         // 0x0054 (size: 0x4)
    float LargeWaveSteepness;                                                         // 0x0058 (size: 0x4)
    float SteepnessFalloff;                                                           // 0x005C (size: 0x4)

}; // Size: 0x60

class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{
    EWaveSpectrumType SpectrumType;                                                   // 0x0028 (size: 0x1)
    TArray<FGerstnerWaveOctave> Octaves;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{
}; // Size: 0x48

class UGerstnerWaterWaves : public UWaterWaves
{
    class UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator;                     // 0x0028 (size: 0x8)
    TArray<FGerstnerWave> GerstnerWaves;                                              // 0x0030 (size: 0x10)
    float MaxWaveHeight;                                                              // 0x0040 (size: 0x4)

}; // Size: 0x48

class ULakeCollisionComponent : public UPrimitiveComponent
{
    class UBodySetup* CachedBodySetup;                                                // 0x0450 (size: 0x8)
    FVector BoxExtent;                                                                // 0x0458 (size: 0xC)

}; // Size: 0x470

class ULakeGenerator : public UWaterBodyGenerator
{
    class UStaticMeshComponent* LakeMeshComp;                                         // 0x0028 (size: 0x8)
    class UBoxComponent* LakeCollisionComp;                                           // 0x0030 (size: 0x8)
    class ULakeCollisionComponent* LakeCollision;                                     // 0x0038 (size: 0x8)

}; // Size: 0x40

class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{
    class AWaterBody* SourceBody;                                                     // 0x0038 (size: 0x8)

}; // Size: 0x40

class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetWaterBody(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class AWaterBody* WaterBody);
}; // Size: 0x28

class UOceanBoxCollisionComponent : public UBoxComponent
{
}; // Size: 0x480

class UOceanCollisionComponent : public UPrimitiveComponent
{
    class UBodySetup* CachedBodySetup;                                                // 0x0450 (size: 0x8)

}; // Size: 0x480

class UOceanGenerator : public UWaterBodyGenerator
{
    TArray<class UOceanBoxCollisionComponent*> CollisionBoxes;                        // 0x0028 (size: 0x10)
    TArray<class UOceanCollisionComponent*> CollisionHullSets;                        // 0x0038 (size: 0x10)

}; // Size: 0x48

class URiverGenerator : public UWaterBodyGenerator
{
    TArray<class USplineMeshComponent*> SplineMeshComponents;                         // 0x0028 (size: 0x10)

}; // Size: 0x38

class UWaterBodyGenerator : public UObject
{
}; // Size: 0x28

class UWaterMeshComponent : public UMeshComponent
{
    int32 ForceCollapseDensityLevel;                                                  // 0x0478 (size: 0x4)
    float TileSize;                                                                   // 0x047C (size: 0x4)
    FIntPoint ExtentInTiles;                                                          // 0x0480 (size: 0x8)
    class UMaterialInterface* FarDistanceMaterial;                                    // 0x0488 (size: 0x8)
    float FarDistanceMeshExtent;                                                      // 0x0490 (size: 0x4)
    FVector RTWorldLocation;                                                          // 0x0494 (size: 0xC)
    FVector RTWorldSizeVector;                                                        // 0x04A0 (size: 0xC)
    TSet<UMaterialInterface*> UsedMaterials;                                          // 0x0510 (size: 0x50)
    int32 TessellationFactor;                                                         // 0x0590 (size: 0x4)
    float LODScale;                                                                   // 0x0594 (size: 0x4)

    bool IsEnabled();
}; // Size: 0x5A0

class UWaterRuntimeSettings : public UDeveloperSettings
{
    TEnumAsByte<ECollisionChannel> CollisionChannelForWaterTraces;                    // 0x0038 (size: 0x1)
    TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection;         // 0x0040 (size: 0x28)
    float WaterBodyIconWorldSize;                                                     // 0x0068 (size: 0x4)
    float WaterBodyIconWorldZOffset;                                                  // 0x006C (size: 0x4)
    FName DefaultWaterCollisionProfileName;                                           // 0x0070 (size: 0x8)

}; // Size: 0x78

class UWaterSplineComponent : public USplineComponent
{
    FWaterSplineCurveDefaults WaterSplineDefaults;                                    // 0x0548 (size: 0x10)
    FWaterSplineCurveDefaults PreviousWaterSplineDefaults;                            // 0x0558 (size: 0x10)

}; // Size: 0x570

class UWaterSplineMetadata : public USplineMetadata
{
    FInterpCurveFloat Depth;                                                          // 0x0028 (size: 0x18)
    FInterpCurveFloat WaterVelocityScalar;                                            // 0x0040 (size: 0x18)
    FInterpCurveFloat RiverWidth;                                                     // 0x0058 (size: 0x18)
    FInterpCurveFloat AudioIntensity;                                                 // 0x0070 (size: 0x18)
    FInterpCurveVector WaterVelocity;                                                 // 0x0088 (size: 0x18)

}; // Size: 0xA0

class UWaterSubsystem : public UTickableWorldSubsystem
{
    class ABuoyancyManager* BuoyancyManager;                                          // 0x0078 (size: 0x8)
    FWaterSubsystemOnCameraUnderwaterStateChanged OnCameraUnderwaterStateChanged;     // 0x0080 (size: 0x10)
    void OnCameraUnderwaterStateChanged(bool bIsUnderWater, float DepthUnderwater);
    FWaterSubsystemOnWaterScalabilityChanged OnWaterScalabilityChanged;               // 0x0090 (size: 0x10)
    void OnWaterScalabilityChanged();
    class UStaticMesh* DefaultRiverMesh;                                              // 0x00A0 (size: 0x8)
    class UStaticMesh* DefaultLakeMesh;                                               // 0x00A8 (size: 0x8)
    class AWaterMeshActor* WaterMeshActor;                                            // 0x00B0 (size: 0x8)
    class UMaterialParameterCollection* MaterialParameterCollection;                  // 0x00E0 (size: 0x8)

    void SetOceanFloodHeight(float InFloodHeight);
    void PrintToWaterLog(FString Message, bool bWarning);
    bool IsWaterRenderingEnabled();
    bool IsUnderwaterPostProcessEnabled();
    bool IsShallowWaterSimulationEnabled();
    float GetWaterTimeSeconds();
    float GetSmoothedWorldTimeSeconds();
    int32 GetShallowWaterSimulationRenderTargetSize();
    int32 GetShallowWaterMaxImpulseForces();
    int32 GetShallowWaterMaxDynamicForces();
    float GetOceanTotalHeight();
    float GetOceanFloodHeight();
    float GetOceanBaseHeight();
    float GetCameraUnderwaterDepth();
}; // Size: 0x108

class UWaterWaves : public UWaterWavesBase
{
}; // Size: 0x28

class UWaterWavesAsset : public UObject
{
    class UWaterWaves* WaterWaves;                                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

class UWaterWavesAssetReference : public UWaterWavesBase
{
    class UWaterWavesAsset* WaterWavesAsset;                                          // 0x0028 (size: 0x8)

}; // Size: 0x30

class UWaterWavesBase : public UObject
{
}; // Size: 0x28

#endif
