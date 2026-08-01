#ifndef UE4SS_SDK_SortPlugin_HPP
#define UE4SS_SDK_SortPlugin_HPP

class USortPluginBPLibrary : public UBlueprintFunctionLibrary
{

    TSet<FVector> ToVectorSet(const TArray<FVector>& Array);
    TSet<FString> ToStringSet(const TArray<FString>& Array);
    TSet<UObject*> ToObjectSet(const TArray<class UObject*>& Array);
    TSet<FName> ToNameSet(const TArray<FName>& Array);
    TSet<int32> ToIntegerSet(const TArray<int32>& Array);
    TSet<float> ToFloatSet(const TArray<float>& Array);
    TSet<AActor*> ToActorSet(const TArray<class AActor*>& Array);
    TArray<FString> SplitString(FString String, FString Separator, TEnumAsByte<ESearchCase::Type> SearchCase, bool RemoveEmptyString);
    void SortVectorRef(TArray<FVector>& Array, FVector Origin, bool bIsAscending);
    TArray<FVector> SortVector(TArray<FVector> Array, FVector Origin, bool bIsAscending);
    void SortStringRef(TArray<FString>& Array, bool bIsAscending);
    TArray<FString> SortString(TArray<FString> Array, bool bIsAscending);
    void SortNameRef(TArray<FName>& Array, bool bIsAscending);
    TArray<FName> SortName(TArray<FName> Array, bool bIsAscending);
    void SortIntegerRef(TArray<int32>& Array, bool bIsAscending);
    TArray<int32> SortInteger(TArray<int32> Array, bool bIsAscending);
    void SortFloatRef(TArray<float>& Array, bool bIsAscending);
    TArray<float> SortFloat(TArray<float> Array, bool bIsAscending);
    void SortActorRef(TArray<class AActor*>& Array, const class AActor*& Actor, bool bIsAscending);
    TArray<class AActor*> SortActor(TArray<class AActor*> Array, const class AActor*& Actor, bool bIsAscending);
    TArray<FVector> ReverseVector(const TArray<FVector>& Array);
    TArray<FString> ReverseString(const TArray<FString>& Array);
    TArray<class UObject*> ReverseObject(const TArray<class UObject*>& Array);
    TArray<FName> ReverseName(const TArray<FName>& Array);
    TArray<int32> ReverseInteger(const TArray<int32>& Array);
    TArray<float> ReverseFloat(const TArray<float>& Array);
    TArray<class AActor*> ReverseActor(const TArray<class AActor*>& Array);
    TArray<FVector> RandomVector(int32 Size, FVector MinValue, FVector MaxValue);
    TArray<int32> RandomInteger(int32 Size, int32 MinValue, int32 MaxValue);
    TArray<float> RandomFloat(int32 Size, float MinValue, float MaxValue);
    void PredicateSortVectorRef(TArray<FVector>& Array, const FPredicateSortVectorRefPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<FVector> PredicateSortVector(TArray<FVector> Array, const FPredicateSortVectorPredicateFunction& PredicateFunction, bool InvertResult);
    void PredicateSortStringRef(TArray<FString>& Array, const FPredicateSortStringRefPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<FString> PredicateSortString(TArray<FString> Array, const FPredicateSortStringPredicateFunction& PredicateFunction, bool InvertResult);
    void PredicateSortObjectRef(TArray<class UObject*>& Array, const FPredicateSortObjectRefPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<class UObject*> PredicateSortObject(TArray<class UObject*> Array, const FPredicateSortObjectPredicateFunction& PredicateFunction, bool InvertResult);
    void PredicateSortNameRef(TArray<FName>& Array, const FPredicateSortNameRefPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<FName> PredicateSortName(TArray<FName> Array, const FPredicateSortNamePredicateFunction& PredicateFunction, bool InvertResult);
    void PredicateSortIntegerRef(TArray<int32>& Array, const FPredicateSortIntegerRefPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<int32> PredicateSortInteger(TArray<int32> Array, const FPredicateSortIntegerPredicateFunction& PredicateFunction, bool InvertResult);
    void PredicateSortFloatRef(TArray<float>& Array, const FPredicateSortFloatRefPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<float> PredicateSortFloat(TArray<float> Array, const FPredicateSortFloatPredicateFunction& PredicateFunction, bool InvertResult);
    void PredicateSortActorRef(TArray<class AActor*>& Array, const FPredicateSortActorRefPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<class AActor*> PredicateSortActor(TArray<class AActor*> Array, const FPredicateSortActorPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<FVector> PredicateFilterVector(const TArray<FVector>& Array, const FPredicateFilterVectorPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<FString> PredicateFilterString(const TArray<FString>& Array, const FPredicateFilterStringPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<class UObject*> PredicateFilterObject(const TArray<class UObject*>& Array, const FPredicateFilterObjectPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<FName> PredicateFilterName(const TArray<FName>& Array, const FPredicateFilterNamePredicateFunction& PredicateFunction, bool InvertResult);
    TArray<int32> PredicateFilterInteger(const TArray<int32>& Array, const FPredicateFilterIntegerPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<float> PredicateFilterFloat(const TArray<float>& Array, const FPredicateFilterFloatPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<class AActor*> PredicateFilterActor(const TArray<class AActor*>& Array, const FPredicateFilterActorPredicateFunction& PredicateFunction, bool InvertResult);
    TArray<int32> MinMaxIntegerNormalization(const TArray<int32>& Array, int32 Min, int32 Max);
    TArray<float> MinMaxFloatNormalization(const TArray<float>& Array, float Min, float Max);
    int32 MinimumIntegerIndex(const TArray<int32>& Array);
    int32 MinimumFloatIndex(const TArray<float>& Array);
    int32 MaximumIntegerIndex(const TArray<int32>& Array);
    int32 MaximumFloatIndex(const TArray<float>& Array);
    TArray<FString> FilterMatches(const TArray<FString>& Array, FString Pattern, bool& bFound, TArray<int32>& Indexes);
    FString FilterMatch(const TArray<FString>& Array, FString Pattern, bool& bFound, int32& Index);
    void FarthestLocation(const TArray<FVector>& Array, FVector Origin, FVector& Farthest, float& Distance, int32& Index);
    void FarthestActor(const TArray<class AActor*>& Array, const class AActor*& Origin, class AActor*& Farthest, float& Distance, int32& Index);
    TArray<FVector> ExtractVector(const TArray<FVector>& Array, int32 StartIndex, int32 EndIndex);
    TArray<FString> ExtractString(const TArray<FString>& Array, int32 StartIndex, int32 EndIndex);
    TArray<class UObject*> ExtractObject(const TArray<class UObject*>& Array, int32 StartIndex, int32 EndIndex);
    TArray<FName> ExtractName(const TArray<FName>& Array, int32 StartIndex, int32 EndIndex);
    TArray<int32> ExtractInteger(const TArray<int32>& Array, int32 StartIndex, int32 EndIndex);
    TArray<float> ExtractFloat(const TArray<float>& Array, int32 StartIndex, int32 EndIndex);
    TArray<class AActor*> ExtractActor(const TArray<class AActor*>& Array, int32 StartIndex, int32 EndIndex);
    void ClosestLocation(const TArray<FVector>& Array, FVector Origin, FVector& Closest, float& Distance, int32& Index);
    void ClosestActor(const TArray<class AActor*>& Array, const class AActor*& Origin, class AActor*& Closest, float& Distance, int32& Index);
    void ClampVectorSizeRef(TArray<FVector>& Array, float MinSize, float MaxSize, bool bOnly2D);
    TArray<FVector> ClampVectorSize(TArray<FVector> Array, float MinSize, float MaxSize, bool bOnly2D);
    void ClampIntegerRef(TArray<int32>& Array, int32 Min, int32 Max);
    TArray<int32> ClampInteger(TArray<int32> Array, int32 Min, int32 Max);
    void ClampFloatRef(TArray<float>& Array, float Min, float Max);
    TArray<float> ClampFloat(TArray<float> Array, float Min, float Max);
    float AverageInteger(const TArray<int32>& Array);
    float AverageFloat(const TArray<float>& Array);
}; // Size: 0x28

#endif
