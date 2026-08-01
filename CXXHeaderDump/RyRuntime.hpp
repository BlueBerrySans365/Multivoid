#ifndef UE4SS_SDK_RyRuntime_HPP
#define UE4SS_SDK_RyRuntime_HPP

#include "RyRuntime_enums.hpp"

struct FRyCaptureDeviceInfo
{
    FString DeviceName;                                                               // 0x0000 (size: 0x10)
    FString DeviceID;                                                                 // 0x0010 (size: 0x10)
    int32 InputChannels;                                                              // 0x0020 (size: 0x4)
    int32 PreferredSampleRate;                                                        // 0x0024 (size: 0x4)
    bool SupportsHardwareAEC;                                                         // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FRyExponentialHeightFogData
{
    float FogDensity;                                                                 // 0x0000 (size: 0x4)
    float FogHeightFalloff;                                                           // 0x0004 (size: 0x4)
    float FogHeightOffset;                                                            // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRyWorldContext
{
    class UWorld* World;                                                              // 0x0000 (size: 0x8)
    ERyWorldType WorldType;                                                           // 0x0008 (size: 0x1)
    FName ContextHandle;                                                              // 0x000C (size: 0x8)
    FString TravelURL;                                                                // 0x0018 (size: 0x10)
    uint8 TravelType;                                                                 // 0x0028 (size: 0x1)
    class UGameInstance* OwningGameInstance;                                          // 0x0030 (size: 0x8)
    FString PIEPrefix;                                                                // 0x0038 (size: 0x10)
    bool RunAsDedicated;                                                              // 0x0048 (size: 0x1)
    bool bWaitingOnOnlineSubsystem;                                                   // 0x0049 (size: 0x1)
    FString CustomDescription;                                                        // 0x0050 (size: 0x10)

}; // Size: 0x60

class URyFileHandle : public UObject
{

    bool Write(const TArray<uint8>& bytesOut);
    int64 Size();
    bool SeekToStart();
    bool SeekToEnd();
    bool SeekFromEnd(const int64 numBytes);
    bool Seek(const int64 NewPosition);
    bool Read(TArray<uint8>& bytesTo, const int64 numBytes);
    void Close();
}; // Size: 0x38

class URyLineBatchComponent : public ULineBatchComponent
{

    void ClearLineBatches();
    void AddSphere(const FVector& Center, const float Radius, int32 Segments, const FLinearColor LineColor, const float LifeTime, const float Thickness, const ERyLineBatchDepthPriority DepthPriority);
    void AddSolidBox(const FBox& Box, const FTransform& BoxToWorld, const FLinearColor Color, const float LifeTime, const ERyLineBatchDepthPriority DepthPriority);
    void AddQuad(const FPlane& PlaneCoordinates, const FVector Location, const FVector2D Extents, const FLinearColor PlaneColor, const float LifeTime, const ERyLineBatchDepthPriority DepthPriority);
    void AddPoint(const FVector& Position, const FLinearColor Color, const float PointSize, const float LifeTime, const ERyLineBatchDepthPriority DepthPriority);
    void AddPlane(const FPlane& PlaneCoordinates, const FVector Location, const float Size, const FLinearColor PlaneColor, const float LifeTime, const ERyLineBatchDepthPriority DepthPriority);
    void AddMesh(const TArray<FVector>& Verts, const TArray<int32>& Indices, const FLinearColor Color, const float LifeTime, const ERyLineBatchDepthPriority DepthPriority);
    void AddLine(const FVector& Start, const FVector& End, const FLinearColor Color, const float LifeTime, const float Thickness, const ERyLineBatchDepthPriority DepthPriority);
    void AddFrustum(const FTransform& FrustumTransform, const FLinearColor FrustumColor, const float LifeTime, const float Thickness, const ERyLineBatchDepthPriority DepthPriority);
    void AddCylinder(const FVector& Start, const FVector& End, const float Radius, int32 Segments, const FLinearColor LineColor, const float LifeTime, const float Thickness, const ERyLineBatchDepthPriority DepthPriority);
    void AddCoordinateSystem(const FVector& AxisLoc, const FRotator& AxisRot, const float Scale, const float LifeTime, const float Thickness, const ERyLineBatchDepthPriority DepthPriority);
    void AddCone(const FVector Origin, const FVector Direction, const float Length, const float AngleWidth, const float AngleHeight, int32 NumSides, const FLinearColor LineColor, const float LifeTime, const float Thickness, const ERyLineBatchDepthPriority DepthPriority);
    void AddCapsule(const FVector& Center, const float HalfHeight, const float Radius, const FRotator& Rotation, const FLinearColor LineColor, const float LifeTime, const float Thickness, const ERyLineBatchDepthPriority DepthPriority);
    void AddCamera(const class ACameraActor* CameraActor, const FLinearColor CameraColor, const float LifeTime, const ERyLineBatchDepthPriority DepthPriority);
    void AddBox(const FVector& Center, const FVector& Extent, const FLinearColor LineColor, const FRotator Rotation, const float LifeTime, const float Thickness, const ERyLineBatchDepthPriority DepthPriority);
    void AddArrow(const FVector& LineStart, const FVector& LineEnd, const float ArrowSize, const FLinearColor LineColor, const float LifeTime, const float Thickness, const ERyLineBatchDepthPriority DepthPriority);
}; // Size: 0x490

class URyMathEasing : public UBlueprintFunctionLibrary
{

    FVector EaseVector(const ERyMathEasingType Easing, const FVector& Start, const FVector& Target, const float Alpha);
    FRotator EaseRotator(const ERyMathEasingType Easing, const FRotator& Start, const FRotator& Target, const float Alpha);
    float EaseFloat(const ERyMathEasingType Easing, float Alpha);
}; // Size: 0x28

class URyRuntimeAnimationHelpers : public UBlueprintFunctionLibrary
{

    bool MontageHasSection(class UAnimMontage* MontageIn, const FName SectionName);
    float GetMontageSectionTimeLeftFromPos(class UAnimMontage* MontageIn, const FName SectionName, const float Position);
    void GetMontageSectionStartAndEndTime(class UAnimMontage* MontageIn, const FName SectionName, float& OutStartTime, float& OutEndTime);
    void GetMontageSectionNames(class UAnimMontage* MontageIn, TArray<FName>& NamesOut);
    FName GetMontageSectionNameFromPosition(class UAnimMontage* MontageIn, const float Position);
    void GetAllMontages(class UAnimInstance* AnimInstance, TArray<class UAnimMontage*>& montagesOut);
    class UAnimMontage* CreateDynamicMontageOfSequences(const TArray<class UAnimSequence*>& SequencesIn, const TArray<FName>& PerSequenceSectionNames, const TArray<int32>& LoopTimes, const FName AnimSlot, const float BlendIn, const float BlendOut, const float BlendOutTriggerTime, const bool EnableAutoBlendOut);
    class UAnimMontage* CreateDynamicMontageFromMontage(class UAnimMontage* MontageIn, const FName SlotOverride, const float OverrideBlendIn, const float OverrideBlendOut, const float OverrideBlendOutTriggerTime);
    class UAnimMetaData* CreateAnimMetaDataInstance(TSubclassOf<class UAnimMetaData> MetaDataClass);
}; // Size: 0x28

class URyRuntimeAudioHelpers : public UBlueprintFunctionLibrary
{

    void GetAudioDeviceList(TArray<FString>& OutAudioDeviceNames);
    void GetAudioCaptureDeviceList(TArray<FRyCaptureDeviceInfo>& OutAudioCaptureDevices);
}; // Size: 0x30

class URyRuntimeComponentHelpers : public UBlueprintFunctionLibrary
{

    void InvalidateLightingCacheDetailed(class UActorComponent* Component, bool invalidateBuildEnqueuedLighting, bool translationOnly);
    void GetWorldComponentsByClass(class UWorld* World, TSubclassOf<class UActorComponent> ComponentClass, TArray<class UActorComponent*>& componentsOut);
    void DistributePointsToSpline(class USplineComponent* SplineComponent, const TArray<FVector>& Points, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool UpdateSpline);
    void CopyMaterials(class UPrimitiveComponent* sourceMesh, class UPrimitiveComponent* destMesh);
    void CopyCollisionProperties(class UPrimitiveComponent* sourceMesh, class UPrimitiveComponent* destMesh);
    void AddForceAtLocationToAllBodiesBelow(class USkeletalMeshComponent* skelMesh, FVector Force, FVector Location, FName BoneName, bool bIncludeSelf);
}; // Size: 0x28

class URyRuntimeFileHelpers : public UBlueprintFunctionLibrary
{

    bool WriteBytesToFile(const FString FilePath, const bool allowOverwrite, const TArray<uint8>& bytesOut);
    bool ReadBytesFromFile(const FString FilePath, TArray<uint8>& bytesIn, const int64 Offset, const int64 numBytes);
    bool ReadAllBytesFromFile(const FString FilePath, TArray<uint8>& bytesIn);
    class URyFileHandle* OpenFileHandle(class UObject* Outer, const FString FilePath, const bool forRead, const bool forWrite, bool& success);
}; // Size: 0x28

class URyRuntimeLevelHelpers : public UBlueprintFunctionLibrary
{

    bool TeleportToAdvanced(class AActor* ActorToTeleport, const FVector& DestLocation, const FRotator& DestRotation, bool IsATest, bool NoCheck);
    class AActor* SpawnActorAdvanced(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const FTransform& Transform, const ESpawnActorCollisionHandlingMethod spawnHandling, const FName Name, class AActor* actorTemplate, class AActor* actorOwner, class APawn* actorInstigator, class ULevel* overrideLevel, bool deferConstruction, bool allowDuringConstructionScript, bool absoluteTransform, bool useDefaultScale);
    void SetAllowAnyoneToDestroyMe(class UActorComponent* componentToSet, const bool can);
    void RegisterComponentForActor(class UActorComponent* componentToRegister, class AActor* Actor, class USceneComponent* AttachComponent);
    class ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtrAdvanced(class UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, bool& OutSuccess, FString LevelPrefix, const bool ShouldBeLoaded, const bool ShouldBeVisible, const bool BlockOnLoad, const int32 Priority);
    class ULevelStreamingDynamic* LoadLevelInstanceAdvanced(class UObject* WorldContextObject, FString LevelName, FVector Location, FRotator Rotation, bool& OutSuccess, FString LevelPrefix, const bool ShouldBeLoaded, const bool ShouldBeVisible, const bool BlockOnLoad, const int32 Priority);
    bool IsLevelPersistentLevel(const class ULevel* levelIn);
    bool IsActorInLevel(const class AActor* actorToCheck, const class ULevel* levelToCheck);
    ERyWorldType GetWorldType(class UObject* WorldContextObject);
    FString GetWorldSoftReferencePath(const TSoftObjectPtr<UWorld>& worldRef);
    TSoftObjectPtr<UWorld> GetWorldSoftReferenceFromPath(FString PathToWorld);
    TSoftObjectPtr<UWorld> GetWorldSoftReference(class UWorld* worldIn);
    class UWorld* GetWorldOfActor(const class AActor* actorIn);
    class ALevelScriptActor* GetStreamingLevelScriptActor(class ULevelStreaming* StreamingLevel);
    FString GetLevelPackageString(const class ULevel* levelIn, bool LongName);
    FString GetLevelNameString(const class ULevel* levelIn);
    ERyCurrentLevelStreamingState GetCurrentLevelStreamingState(class ULevelStreaming* StreamingLevel);
    FString GetActorWorldNameString(const class AActor* actorIn);
    void GetActorsOfTypeInLevel(const class ULevel* Level, TSubclassOf<class AActor> ActorClass, TArray<class AActor*>& actorsOut);
    FString GetActorLevelPackageString(const class AActor* actorIn, bool LongName);
    FString GetActorLevelNameString(const class AActor* actorIn);
    class ULevel* GetActorLevel(const class AActor* actorIn);
    bool FireLevelScriptRemoteEvent(class UObject* WorldContextObject, FName EventName);
    void FinishSpawnActorAdvanced(class AActor* actorToFinishSpawning, const FTransform& NewTransform, bool useNewTransform);
    class UObject* FindObjectInLevelByName(class ULevel* levelToSearch, FString nameToFind);
    class UActorComponent* CreateComponentForActor(class AActor* Owner, TSubclassOf<class UActorComponent> newComponentClass, class USceneComponent* AttachComponent, const FName NewName, const ERyComponentCreationMethod CreationMethod, const bool allowAnyoneToDestroy);
}; // Size: 0x28

class URyRuntimeLogHelpers : public UBlueprintFunctionLibrary
{

    void PrintLogString(class UObject* WorldContextObject, FString inString, FString CategoryName, ERyRuntimeLogVerbosity Verbosity, bool PrintToScreen, bool PrintToLog, FLinearColor TextColor, const float Duration);
    bool CopyCurrentLogFile(FString destLogFileName, FString& outLogFileName);
}; // Size: 0x28

class URyRuntimeMathHelpers : public UBlueprintFunctionLibrary
{

    uint8 Xor_ByteByte(uint8 A, uint8 B);
    FVector VInterpNormalRotationTo(const FVector& Current, const FVector& Target, const float DeltaTime, const float rotationSpeedDegrees);
    void TransformBoxBy(const FBox& boxToTransform, const FTransform& Transform, FBox& transformedBox);
    float SinH(float A);
    float ShortestRotationPath(const float startRotation, const float endRotation);
    int64 ShiftRight_Int64(int64 Val, int32 Shift);
    int32 ShiftRight_Int(int32 Val, int32 Shift);
    uint8 ShiftRight_Byte(uint8 Val, int32 Shift);
    int64 ShiftLeft_Int64(int64 Val, int32 Shift);
    int32 ShiftLeft_Int(int32 Val, int32 Shift);
    uint8 ShiftLeft_Byte(uint8 Val, int32 Shift);
    void ShiftBoxBy(FBox& Box, const FVector& Offset);
    FQuat Rotator_Quat(const FRotator& R);
    bool RotationsEqual(const float rotation1, const float rotation2, const float ErrorTolerance);
    void RotationInterpolate(const float inCurrentRotation, const float inDestinationRotation, const float DeltaTime, const float Speed, float& NewRotation, bool& atTarget, const float checkTolerance);
    FVector2D ResizeBoxToFitInScreenSpace(const FVector2D BoxSize, const FVector2D ScreenSize, const FVector2D fracOfScreen);
    void PositionAndScaleBoxIntoScreenSpace(const FVector2D BoxSize, const FVector2D ScreenSize, const FVector2D fracPosOnScreen, const FVector2D fracSizeOnScreen, const ERyXScreenAnchor anchorX, const ERyYScreenAnchor anchorY, const FVector2D boxAnchorFrac, FVector2D& boxPosOut, FVector2D& boxSizeOut);
    uint8 Or_ByteByte(uint8 A, uint8 B);
    bool NotEqual_VectorVector2D(FVector A, FVector B, float ErrorTolerance);
    uint8 Not_Byte(uint8 A);
    void MoveBoxTo(FBox& Box, const FVector& Destination);
    void MakePositiveInline(float& inFloat);
    float MakePositive(const float inFloat);
    void MakeNegativeInline(float& inFloat);
    float MakeNegative(const float inFloat);
    void MakeBoxFromPoints(const TArray<FVector>& Points, FBox& Box);
    void MakeBoxFromOriginExtend(FBox& Box, const FVector& Origin, const FVector& Extent);
    bool IsPositionInsideOrOnBox(const FVector& In, const FBox& Box);
    bool IsPositionInsideBoxXY(const FVector& In, const FBox& Box);
    bool IsPositionInsideBox(const FVector& In, const FBox& Box);
    bool IsBoxInsideOtherBoxXY(const FBox& Box, const FBox& Other);
    bool IsBoxInsideOtherBox(const FBox& Box, const FBox& Other);
    void IntSetBit(int32& intIn, uint8 Bit, bool Val);
    bool IntIsBitSet(int32 intIn, uint8 Bit);
    int32 IndexNone();
    FVector GetUpVector2D(FRotator InRot);
    float GetRotationIncrement(const float inCurrentRotation, const float inDestinationRotation, const float DeltaTime, const float Speed, const float checkTolerance);
    FVector GetRightVector2D(FRotator InRot);
    void GetOverlapBox(const FBox& boxA, const FBox& boxB, FBox& boxOut);
    FVector GetForwardVector2D(FRotator InRot);
    float GetBoxVolume(const FBox& Box);
    FVector GetBoxSize(const FBox& Box);
    FVector GetBoxExtent(const FBox& Box);
    FVector GetBoxClosestPointTo(const FBox& Box, const FVector& Point);
    void GetBoxCenterAndExtents(const FBox& Box, FVector& Center, FVector& Extents);
    FVector GetBoxCenter(const FBox& Box);
    void FindScreenEdgeLocationForWorldLocation(class UObject* WorldContextObject, const FVector& InLocation, const float EdgePercent, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen, const int32 playerIndex);
    FVector2D FindEdgeOf2DSquare(const FVector2D& TheSize, const float TheAngle);
    void ExtendByBox(FBox& Box, const FBox& otherBox);
    void ExtendBoxByPoints(FBox& Box, const TArray<FVector>& Points);
    void ExpandBoxByVecDirs(FBox& Box, const FVector& negativeDir, const FVector& positiveDir);
    void ExpandBoxByVec(FBox& Box, const FVector& V);
    void ExpandBoxByAmount(FBox& Box, float Amount);
    bool EqualEqual_VectorVector2D(FVector A, FVector B, float ErrorTolerance);
    float Dot_VectorVector2D(FVector A, FVector B);
    float CosH(float A);
    float ConvertUnit(const float Value, const ERyUnit from, const ERyUnit to);
    float CalculateCatenary(float X, float ScalingFactor);
    void ByteSetBit(uint8& Byte, uint8 Bit, bool Val);
    bool ByteIsBitSet(uint8 Byte, uint8 Bit);
    FString BoxToString(const FBox& Box);
    bool BoxIntersectsXY(const FBox& Box, const FBox& otherBox);
    bool BoxIntersects(const FBox& Box, const FBox& otherBox);
    uint8 And_ByteByte(uint8 A, uint8 B);
}; // Size: 0x28

class URyRuntimeMetaHelpers : public UBlueprintFunctionLibrary
{

    bool GetEnumValueFromName(const FString enumName, const FName EntryName, int64& valueOut);
    bool GetEnumNameByValue(const FString enumName, const int64 enumValue, FName& nameOut);
    bool GetEnumNameByIndex(const FString enumName, const uint8 enumIndex, FName& nameOut);
    bool GetEnumIndexFromName(const FString enumName, FName EntryName, uint8& indexOut);
}; // Size: 0x28

class URyRuntimeNavigationHelpers : public UBlueprintFunctionLibrary
{

    void SetSmartLinkIsRelevant(class ANavLinkProxy* NavLinkProxy, const bool isRelevant);
    void SetSmartLinkData(class ANavLinkProxy* NavLinkProxy, const FVector& relativeStart, const FVector& relativeEnd, ERyNavLinkDirection Direction);
    void SetCanEverAffectNavigation(class UActorComponent* ActorComponent, const bool canEverAffectNavigation);
    FVector GetStartPoint(class UNavLinkCustomComponent* smartLinkComponent);
    class UNavLinkCustomComponent* GetSmartLinkComponent(class ANavLinkProxy* NavLinkProxy);
    FVector GetFailsafeExtent(class UNavModifierComponent* NavModifierComponent);
    FVector GetEndPoint(class UNavLinkCustomComponent* smartLinkComponent);
    bool GetCanEverAffectNavigation(class UActorComponent* ActorComponent);
}; // Size: 0x28

class URyRuntimeNotificationHelpers : public UBlueprintFunctionLibrary
{

    class URySlowTaskDialog* CreateSlowTaskDialog(FText DefaultMessage, FText FrameMessage, float TotalAmountOfWork, float CompletedWork, float CurrentFrameScope, bool MakeDialogImmediately);
    void CreateNotification(const FText Message, const ERyRunNotifyCompletionState notifyType, const float fadeInDuration, const float expireDuration, const float fadeOutDuration, const bool useThrobber, const bool useSuccessFailIcons, const bool useLargeFont);
}; // Size: 0x28

class URyRuntimeObjectHelpers : public UBlueprintFunctionLibrary
{

    void UnRegisterMountPoint(FString RootPath, FString ContentPath);
    bool TryConvertFilenameToLongPackageName(FString InFilename, FString& OutPackageName, FString& OutFailureReason);
    FString SoftObjectToString(const TSoftObjectPtr<UObject>& SoftObjectReference);
    bool SetObjectPropertyValue(class UObject* Object, const FName PropertyName, FString Value, const bool PrintWarnings);
    void RemoveLatentActionsForObject(class UObject* WorldContextObject, class UObject* Object);
    void RegisterMountPoint(FString RootPath, FString ContentPath);
    void OnPackageLoaded__DelegateSignature(class UPackage* LoadedPackage, ERyAsyncLoadingResult Result);
    void OnAssetLoaded__DelegateSignature(class UObject* Loaded);
    bool ObjectHasFlag_WasLoaded(class UObject* Object);
    bool ObjectHasFlag_FinishDestroyed(class UObject* Object);
    bool ObjectHasFlag_ClassDefaultObject(class UObject* Object);
    bool ObjectHasFlag_BeginDestroyed(class UObject* Object);
    bool ObjectHasFlag_ArchetypeObject(class UObject* Object);
    bool MountPointExists(FString RootPath);
    void LoadPackagePriority(class UObject* WorldContextObject, FString PackagePath, const int32 Priority, const bool BlockOnLoad, FLoadPackagePriorityOnLoaded OnLoaded, FLatentActionInfo LatentInfo);
    class UObject* LoadObjectFromPackage(class UPackage* Package, FString objectName);
    class UObject* LoadObject(FString fullObjectPath);
    void LoadAssetPriority(class UObject* WorldContextObject, const TSoftObjectPtr<UObject> Asset, const int32 Priority, FLoadAssetPriorityOnLoaded OnLoaded, FLatentActionInfo LatentInfo);
    bool IsSoftObjectValid(const TSoftObjectPtr<UObject>& SoftObjectReference);
    bool IsSoftObjectPending(const TSoftObjectPtr<UObject>& SoftObjectReference);
    bool IsSoftObjectNull(const TSoftObjectPtr<UObject>& SoftObjectReference);
    bool IsLiveSoftObjectReference(const TSoftObjectPtr<UObject>& SoftObjectReference);
    UClass* GetParentClass(UClass* Class);
    class UPackage* GetPackageOfObject(class UObject* Object);
    FName GetPackageMountPoint(FString InPackagePath, bool InWithoutSlashes);
    void GetObjectsInPackage(class UPackage* Package, TArray<class UObject*>& ObjectsOut);
    void GetClassHierarchy(UClass* Class, TArray<class UClass*>& ClassHierarchy, const bool includeSelf);
    class UObject* GetClassDefaultObject(UClass* theClass);
    class UPackage* FindOrLoadPackage(FString PackageName);
    void DuplicateObject(UClass* objectClass, class UObject* Object, class UObject* Outer, class UObject*& objectOut);
    void CreateObject(UClass* objectClass, class UObject* Outer, class UObject*& objectOut);
    void ClearAllTimersForObject(class UObject* WorldContextObject, class UObject* Object);
}; // Size: 0x28

class URyRuntimePakHelpers : public UBlueprintFunctionLibrary
{

    bool UnmountPakFile(FString pakFilePath);
    bool MountPakFile(FString pakFilePath);
    void GetMountedPakFilenames(TArray<FString>& mountedPakFilenames);
}; // Size: 0x28

class URyRuntimePlatformHelpers : public UBlueprintFunctionLibrary
{

    void SetEnvironmentVariable(FString VariableName, FString ValueToSet);
    void SetDeviceOrientation(ERyDeviceScreenOrientation NewDeviceOrientation);
    bool RyIterateDirectory(FString DirectoryName, const bool IterateSubFolders, ERyIterateDirectoryOut OutType, TArray<FString>& PathsOut, FRyIterateDirectoryVisitor Visitor, FRyIterateDirectoryFilter Filter);
    bool PlatformRequiresCookedData();
    void PathInfo(FString fileSystemPath, bool& Exists, bool& isFile, bool& IsDirectory, bool& isReadOnly, FDateTime& CreationTime, FDateTime& AccessTime, FDateTime& ModificationTime, int64& fileSize);
    int32 NumberOfCoresIncludingHyperthreads();
    int32 NumberOfCores();
    bool moveFile(FString SourcePath, FString destinationPath, const bool updateTimeStamp);
    void LowLevelOutputDebugString(FString Message);
    bool IsRunningOnBattery();
    bool IsPlatformDesktop();
    bool IsInLowPowerMode();
    bool IsDebuggerPresent();
    bool HasPlatformFeature(FString FeatureName);
    bool HasActiveWiFiConnection();
    void GetValidTargetPlatforms(TArray<FString>& TargetPlatformNames);
    FString GetTimeZoneId();
    FString GetPrimaryGPUBrand();
    void GetOSVersions(FString& OS_VersionLabel, FString& OS_SubVersionLabel);
    FString GetOSVersion();
    ERyNetworkConnectionType GetNetworkConnectionType();
    FText GetFileTimeStampText(FString FilePath, bool& IsValid, const bool LongName);
    FDateTime GetFileTimeStamp(FString FilePath, bool& IsValid);
    bool GetEnvironmentVariable(FString VariableName, FString& VariableOut);
    bool GetDiskTotalAndFreeSpace(FString InPath, int64& TotalNumberOfBytes, int64& NumberOfFreeBytes);
    int32 GetDeviceVolume();
    float GetDeviceTemperatureLevel();
    ERyDeviceScreenOrientation GetDeviceOrientation();
    FString GetDeviceMakeAndModel();
    FString GetCPUVendor();
    FString GetCPUChipset();
    FString GetCPUBrand();
    int32 GetBatteryLevel();
    FString GetAndroidInternalStoragePath();
    FString GetAndroidExternalStoragePath();
    bool FolderExists(FString DirectoryPath);
    bool FileExistsInPlatformPackage(FString RelativePath);
    bool fileExists(FString FilePath);
    void EndProfilerColor();
    void EndNamedEvent();
    bool DeleteFile(FString FilePath);
    bool DeleteDirectory(FString DirectoryPath, const bool Recursive);
    void DebugBreak();
    void CustomNamedStat(FString Text, const float Value, FString Graph, FString Unit);
    bool CreateDirectoryTree(FString directoryTreePath);
    bool CopyFile(FString SourcePath, FString destinationPath, const bool updateTimeStamp);
    void ClipboardPaste(FString& Dest);
    void ClipboardCopy(FString Str);
    void BeginProfilerColor(const FColor& Color);
    void BeginNamedEvent(const FColor& Color, FString Text);
}; // Size: 0x28

class URyRuntimePlayerHelpers : public UBlueprintFunctionLibrary
{

    bool IsCameraFadingEnabled(class APlayerCameraManager* CameraManager);
    bool IsCameraFading(class APlayerCameraManager* CameraManager);
    bool IsCameraFaded(class APlayerCameraManager* CameraManager);
    class APlayerCameraManager* GetPawnCameraManager(class APawn* Pawn);
    FLinearColor GetCameraFadeColor(class APlayerCameraManager* CameraManager);
    float GetCameraFadeAmount(class APlayerCameraManager* CameraManager);
}; // Size: 0x28

class URyRuntimeProjectHelpers : public UBlueprintFunctionLibrary
{

    bool IsWithEditorOnlyData();
    bool IsWithEditor();
    bool IsBuildTest();
    bool IsBuildShippingWithEditor();
    bool IsBuildShipping();
    bool IsBuildServer();
    bool IsBuildDevelopment();
    bool IsBuildDebug();
    FString GetProjectVersion();
    FString GetProjectSupportContact();
    FString GetProjectPrivacyPolicy();
    FString GetProjectName();
    FString GetProjectLicensingTerms();
    FGuid GetProjectID();
    FString GetProjectHomepage();
    FText GetProjectDisplayedTitle();
    FString GetProjectDescription();
    FText GetProjectDebugTitleInfo();
    FString GetProjectCopyrightNotice();
    FString GetProjectCompanyName();
    FString GetProjectCompanyDistinguishedName();
}; // Size: 0x28

class URyRuntimeRenderingHelpers : public UBlueprintFunctionLibrary
{

    void TakeScreenshot(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString requestedPathOut, const ERyScreenShotMode screenshotMode, FString& pathOut, bool& OutSuccess);
    void ShaderPipelineCache_SetBatchMode(ERyBatchMode batchMode);
    void ShaderPipelineCache_ResumeBatching();
    int32 ShaderPipelineCache_PrecompilesRemaining();
    void ShaderPipelineCache_PauseBatching();
    void SetSecondFogData(class UExponentialHeightFogComponent* heightFogComponent, FRyExponentialHeightFogData newFogData);
    ERyShadingPath GetShadingPath(class UObject* WorldContextObject);
    ERyShaderPlatform GetShaderPlatform(class UObject* WorldContextObject);
    ERyRenderingFeatureLevel GetRenderingFeatureLevel(class UObject* WorldContextObject);
}; // Size: 0x28

class URyRuntimeStringHelpers : public UBlueprintFunctionLibrary
{

    void ToTitleStringInline(FString& inOutString);
    FString ToTitleString(FString inString);
    void SetReserved(FString& sourceString, const int32 reserveNumChars);
    void SetChar(FString& sourceString, const int32 charIndex, FString charIn);
    void PushChar(FString& sourceString, FString charIn);
    void PopChar(FString& sourceString);
    bool IsNone(const FName Name);
    bool IsEmpty(FString String);
    FText GetTextFromStringTableID(FName tableID, FString Key, bool& IsValid);
    FText GetTextFromStringTable(class UStringTable* table, FString Key, bool& IsValid);
    FString GetChar(FString& sourceString, const int32 charIndex);
    void FillString(FString& sourceString, const int32 numChars, FString charIn);
    FString Conv_Int64ToString(int64 InInt64);
    FString CombineFilePaths(FString A, FString B);
    void CharToBytes(FString sourceString, const int32 charIndex, uint8& byte1, uint8& byte2);
    void AppendTo(FString& sourceString, FString appendage);
    void AppendStringsTo(FString& sourceString, const TArray<FString>& appendages);
}; // Size: 0x28

class URyRuntimeTextureHelpers : public UBlueprintFunctionLibrary
{

    void UpdateTextureResource(class UObject* WorldContextObject, class UTexture* Texture, FLatentActionInfo LatentInfo, ERyTextureResourceResult& Result);
}; // Size: 0x28

class URyRuntimeWidgetHelpers : public UBlueprintFunctionLibrary
{

    void SetInputMode_GameOnly_NoMouseDownConsume(class APlayerController* PlayerController);
    void ForceOnMouseLeave(class UWidget* Widget, const FPointerEvent& MouseEvent);
}; // Size: 0x28

class URyRuntimeWorldHelpers : public UBlueprintFunctionLibrary
{

    void TickUntilStop(const class UObject* WorldContextObject, const ERyTickUntilStopInExecs& InExecs, ERyTickUntilStopOutExecs& OutExecs, FLatentActionInfo LatentInfo);
    FTimerHandle SetTimerByFunctionForWorld(class UObject* WorldContextObject, class UObject* Object, FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    FTimerHandle SetTimerByEventForWorld(class UObject* WorldContextObject, FSetTimerByEventForWorldDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    void GetEngineWorldContexts(TArray<FRyWorldContext>& worldsOut);
    class UWorld* GetEngineWorld(class UObject* WorldContextObject, ERyWorldType specificType);
}; // Size: 0x28

class URyRuntimeXRHelpers : public UBlueprintFunctionLibrary
{

    void GetMotionControllerDeviceTypeNames(TArray<FName>& NamesOut);
    FString GetHMDMonitorName();
    bool GetHandJointPosition(const int32 deviceIndex, const FName motionSource, int32 jointIndex, FVector& OutPosition);
    float GetCustomParameterValue(const int32 deviceIndex, const FName motionSource, FName ParameterName, bool& bOutValueFound);
    ETrackingStatus GetControllerTrackingStatus(const int32 deviceIndex, const int32 ControllerIndex, const FName motionSource);
    bool EnumerateTrackedDevices(TArray<int32>& OutDevices, EXRTrackedDeviceType Type);
    void EnumerateSources(const int32 deviceIndex, TArray<FName>& sourceNamesOut);
    int32 CountTrackedDevices(EXRTrackedDeviceType Type);
}; // Size: 0x28

class URySlowTaskDialog : public UObject
{

    void SetTotalAmountOfWork(float TotalAmountOfWork);
    void SetCurrentFrameScope(float CurrentFrameScope);
    void SetCompletedWork(float CompletedWork);
    void MakeDialog();
    float GetTotalAmountOfWork();
    float GetCurrentFrameScope();
    float GetCompletedWork();
    void EnterProgressFrame(const float ExpectedWorkThisFrame, const FText Text);
    void DestroyDialog();
}; // Size: 0x98

#endif
