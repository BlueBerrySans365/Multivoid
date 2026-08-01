#ifndef UE4SS_SDK_VotV_HPP
#define UE4SS_SDK_VotV_HPP

class IcppInterface : public IInterface
{

    void impactSquishCPP(class UPrimitiveComponent* Component);
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void exitTheWater();
    void enteredTheWater();
}; // Size: 0x28

class UbpCodeLib : public UBlueprintFunctionLibrary
{

    void weightedRandomV2_lerp(TArray<float> Weights, float ulerp, int32& Index);
    void weightedRandomV2_exponent(TArray<float> Weights, float Exponent, int32& Index);
    void weightedRandomV2(TArray<float> Weights, int32& Index);
    void vecBoundBox(TArray<FVector> vecs, FVector& Min, FVector& Max, FVector& Box, FVector& Origin, FVector& boundingCenter);
    void triangleNormal(FVector point1, FVector point2, FVector point3, FVector& Normal);
    void translateAriral(FString In, FString& Out);
    float tetrahedronVolume(FVector vecA, FVector vecB, FVector vecC, FVector vecD);
    void stringEquation(FString equation, float& answer);
    void SetPhysicsAssetShapeTransform(class USkeletalMeshComponent* SkeletalMeshComponent, const FName BodyName, FTransform Transform);
    void SetPhysicsAssetShapeSimulatePhysics(class USkeletalMeshComponent* SkeletalMeshComponent, const FName BodyName, bool Simulate);
    void SetPhysicsAssetShapeDamping(class USkeletalMeshComponent* SkeletalMeshComponent, const FName BodyName, float NewLinearDamping, float NewAngularDamping);
    void setApplicationScale(float Scale);
    void scrapingMath(class UPrimitiveComponent* Component, FHitResult Hit, class UAudioComponent* Audio, bool& canScrape, float& vol);
    void rugGen(class AActor* Owner, int32 size_X, int32 size_Y, float Size, float Height, float lift, float traceSize, float maxRad, int32 maxSm, TArray<FVector>& Verts, TArray<int32>& tris, TArray<FVector>& normals, TArray<FVector2D>& UVs);
    void returnMeshTemplateData(int32 indexer, FString& rstring);
    void processPhysImpact(class AActor* Object, class UPrimitiveComponent* Component, FHitResult Hit, FVector impact, class USoundBase* impactSound, class USoundBase* damageSound, class USoundBase* destroySound, class USoundAttenuation* Attenuation, class USoundConcurrency* Concurrency, float currentHealth, float ImpactResistance, float ImpactDamage, float damageResistance, float Mass, bool& isHit, float& debugFloat1, bool& debugBool1);
    void meshConvexVolume2(class UStaticMesh* StaticMesh, float& Volume);
    void meshConvexVolume(class UStaticMeshComponent* StaticMesh, int32 Depth, float& Volume, int32& iters, float& minVol, TArray<FVector>& Points);
    bool isSphereInFrustum(class APlayerController* PlayerController, FVector Origin, float Radius);
    bool isPointInFrustum(class APlayerController* PlayerController, FVector Point);
    bool isBoxInFrustum(class APlayerController* PlayerController, FVector Origin, FVector Extent);
    void getMotion(TArray<FColor> pixels_a, TArray<FColor> pixels_b, float& Result);
    FString getMachineID();
    class UObject* getComponentObjectByName(class UObject* findIn, FName Name);
    void getAudioComponents(TArray<class UAudioComponent*>& Audio);
    TArray<class AActor*> GetAllAttachedActors(class AActor* ParentActor);
    class AActor* duplicateObjectWithTransform(class AActor* sourceActor, FName Name, FTransform Transform);
    void CaptureComponent2D_DeProject(class USceneCaptureComponent2D* Target, const FVector2D& ScreenPos, FVector& OutWorldOrigin, FVector& OutWorldDirection);
    bool canBoxFitInBox(FVector big, FVector small1);
    void bringWindowToFront();
    void boyoancyForce(class UPrimitiveComponent* Component, float boyoancyForce, float surface, float powerDepth, float maxPower, float Damping);
    void boyoancy(TArray<class AActor*> actorsInWater, TArray<float> actorsSurface, TArray<float> actorsBoyoancy, TArray<FTransform> Boxes, TArray<bool> centerUnderwaterCompare, TArray<bool>& centerUnderwaterCopy, float powerDepth, float maxPower, TArray<class USplineComponent*> riverSplines, TArray<float> riversRadiusIn, TArray<float> riversRadiusOut, TArray<float> riversForce, float Damping, TArray<float>& actorsFloatTimers, TArray<float>& actorsFloatTimersReturn);
    void BoundingBox2DPoints(class APlayerController* PlayerController, TArray<FVector> Verts, bool transformPoints, FTransform Transform, FVector2D& Min, FVector2D& Max, FVector2D& Origin, FVector2D& Size, bool& clipX, bool& clipY);
    void BoundingBox2D(class APlayerController* PlayerController, class UPrimitiveComponent* comp, TArray<FVector>& Verts, FVector2D& Min, FVector2D& Max, FVector2D& Origin, FVector2D& Size, bool& clipX, bool& clipY);
    void areaOfCirclesIntersection_points(float x0, float y0, float r0, float x1, float y1, float r1, float& Area, float& percent);
    void areaOfCirclesIntersection_distance(float r0, float r1, float Distance, float& Area, float& percent);
}; // Size: 0x28

class Umn_test__CPP : public UMagicNode
{

    void Execute(class UObject* Context, float& Out, int32 Num, int32 num2);
}; // Size: 0x48

#endif
