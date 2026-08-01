#ifndef UE4SS_SDK_NativeFunctionLibrary_HPP
#define UE4SS_SDK_NativeFunctionLibrary_HPP

class UNativeFunctionLibraryBPLibrary : public UBlueprintFunctionLibrary
{

    bool StringToFile(FString String, const FString Filename);
    void StringToClipboard(FString String);
    TArray<FString> StringArrayToSorted(const TArray<FString>& Strings);
    bool StringArrayToFile(const TArray<FString>& Strings, const FString Filename);
    void SortVectorsByDistance(FVector RelativeTo, TArray<FVector> Array, TArray<FVector>& ReturnValue);
    void SortActorsByLocation(FVector RelativeTo, TArray<class AActor*> Array, TArray<class AActor*>& ReturnValue);
    void SortActorsByDistance2D(class AActor* RelativeTo, TArray<class AActor*> Array, TArray<class AActor*>& ReturnValue);
    void SortActorsByDistance(class AActor* RelativeTo, TArray<class AActor*> Array, TArray<class AActor*>& ReturnValue);
    void RandomVectorsInBoxExtentFromStream(int32 Amount, FVector InBoxExtent, FVector Origin, FRandomStream Stream, TArray<FVector>& ReturnValue);
    void RandomVectorsInBoxExtent(int32 Amount, FVector InBoxExtent, FVector Origin, TArray<FVector>& ReturnValue);
    void PutAllRigidBodiesToSleep(class USkeletalMeshComponent* Mesh);
    bool NotNearLocations(FVector RelativeTo, TArray<FVector> Array, float Radius);
    bool LocationOnScreen(class APlayerController* PlayerController, FVector Location);
    bool LaunchedWithCommandLineArgument(FString Argument);
    TArray<int32> IntegerArrayToSorted(const TArray<int32>& Integers);
    FColor HexToColor(FString Hex);
    int32 GetWorldObjectCount(class UObject* WorldContext);
    float GetInputHeldDuration(class APlayerController* PlayerController, FKey Key);
    bool GetHitResultAtScreenPosition(class APlayerController* PlayerController, const FVector2D ScreenPosition, const TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    void FlushInputs(class APlayerController* PlayerController);
    TArray<float> FloatArrayToSorted(const TArray<float>& Floats);
    bool FileToStringArray(TArray<FString>& Strings, const FString Filename);
    bool FileToString(FString& String, const FString Filename);
    FString ColorToHex(FColor Color);
    FString ClipboardToString();
    void ClientFadeCamera(class APlayerController* PlayerController, bool bFadeAudio, bool bHoldWhenFinished, FLinearColor FadeColor, float FadeAlphaStart, float FadeAlphaStop, float FadeDuration);
    void ClearOnScreenDebugMessages();
    float CalculateWeightedMean(const TArray<float>& Data, const TArray<float>& Weights);
    float CalculateStatisticalZScore(float ObservedValue, float Mean, float StandardDeviation);
    float CalculateStatisticalRange(const TArray<float>& Data);
    float CalculateStandardDeviation(bool bPopulation, const TArray<float>& Data);
    float CalculateRelativeRisk(float PopulationSize, float WithoutExposure, float WithExposure, bool bPercentage);
    int32 CalculateNumberOfPairs(int32 NumberOfElements);
    float CalculateMedian(const TArray<float>& Data);
    float CalculateMean(const TArray<float>& Data);
    float CalculateLikelihood(float Probability, int32 RepeatCount);
    void AverageSeparationBetweenVectors(TArray<FVector> Array, float& ReturnValue);
}; // Size: 0x28

#endif
