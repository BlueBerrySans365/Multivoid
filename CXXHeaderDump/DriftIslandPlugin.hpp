#ifndef UE4SS_SDK_DriftIslandPlugin_HPP
#define UE4SS_SDK_DriftIslandPlugin_HPP

class ADriftIslandSplineMeshActorCPP : public AActor
{

    class USplineComponent* SplitSplineByDistance(TArray<class USplineComponent*>& OutSplines, class USplineComponent* Spline, float DistanceF, float SplineStart, float SplineEnd, bool SetPointsToLinear, bool NewSplineForEachSegment, float TangentScale, float RandomRoll, float RandomPositionRadius, class AActor* ParentActor);
    void CreateSplineMeshes(class USplineComponent* InputSpline, class AActor* ParentActor, TArray<class UStaticMesh*> MeshesForSplines, TArray<class UStaticMesh*> MeshesForPosts, int32 NumRandomPosts, int32 CullDistanceMin, int32 CullDistanceMax, float OffsetSplineTowardsRightVector, float TangentScale, float RandomRoll, float Overlap, float KnockOutWeight, bool StraightenPosts, bool OutputStaticMeshesOnSplines, bool SnapToGround, TArray<class UStaticMeshComponent*>& OutStaticMeshesPosts, TArray<class USplineMeshComponent*>& OutSplineMeshes);
}; // Size: 0x220

class UDriftIslandBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ReverseSplinesToLookTowardsRoad(const TArray<class AActor*>& SplinesToReverse, const TArray<class AActor*>& SplinesToLookAt, bool ReverseAll);
    void ReplaceSplinePoints(class USplineComponent* SplineToCopy, class USplineComponent* SplineToClear, bool bMatchWorldLocation);
    bool IsWithinDistanceOfPositions(const TArray<FVector>& Positions, float Distance, const FVector& Location);
    float GetDistanceAlongSplineAtWorldLocation(const class USplineComponent* InSpline, const FVector InWorldLocation);
    class AActor* FindNearestActorToLocation(const TArray<class AActor*>& Actors, const FVector& Location);
    TArray<class AActor*> FilterActorsByName(const TArray<class AActor*>& Actors, FString NameToMatch);
    void DestroyAllComponentsExcept(class AActor* Actor, TArray<class USceneComponent*> ComponentsToKeep);
}; // Size: 0x28

#endif
