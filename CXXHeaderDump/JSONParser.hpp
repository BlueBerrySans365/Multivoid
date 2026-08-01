#ifndef UE4SS_SDK_JSONParser_HPP
#define UE4SS_SDK_JSONParser_HPP

#include "JSONParser_enums.hpp"

struct FSFillStructWithJsonContainer
{
}; // Size: 0x10

struct FSJsonObject
{
}; // Size: 0x80

class UJSONParserAsyncObjectToString : public UBlueprintAsyncActionBase
{
    FJSONParserAsyncObjectToStringOnSuccess OnSuccess;                                // 0x0030 (size: 0x10)
    void ObjectToStringCompleteDelegate(FString Json);
    FJSONParserAsyncObjectToStringOnFail OnFail;                                      // 0x0040 (size: 0x10)
    void ObjectToStringCompleteDelegate(FString Json);

    class UJSONParserAsyncObjectToString* JsonObjectToStringAsync(FSJsonObject mainObject, bool removeLineBreaks, bool addPadding);
    class UJSONParserAsyncObjectToString* JsonObjectToFileAsync(FSJsonObject mainObject, EJSONDirectoryType directoryType, FString FilePath, bool removeLineBreaks, bool addPadding);
}; // Size: 0x120

class UJSONParserAsyncStringToObject : public UBlueprintAsyncActionBase
{
    FJSONParserAsyncStringToObjectOnSuccess OnSuccess;                                // 0x0030 (size: 0x10)
    void StringToObjectCompleteDelegate(const FSJsonObject& jsonObject);
    FJSONParserAsyncStringToObjectOnFail OnFail;                                      // 0x0040 (size: 0x10)
    void StringToObjectCompleteDelegate(const FSJsonObject& jsonObject);

    class UJSONParserAsyncStringToObject* JsonStringToObjectAsync(FString Json, bool removeAndSavePadding);
    class UJSONParserAsyncStringToObject* JsonFileToObjectAsync(EJSONDirectoryType directoryType, FString FilePath, bool removeAndSavePadding);
}; // Size: 0x120

class UJSONParserBPLibrary : public UBlueprintFunctionLibrary
{

    bool WriteStringToFile(EJSONDirectoryType directoryType, FString JSON_String, FString FilePath);
    bool WriteBytesToFile(EJSONDirectoryType directoryType, TArray<uint8> bytes, FString FilePath);
    FSJsonObject VectorToJsonObject(FVector Vector);
    void uncompressData(EJsonCompressFormat Format, int32 uncompressedDataSize, TArray<uint8> compressedData, TArray<uint8>& uncompressedData, bool& success);
    FSJsonObject TransformToJsonObject(FTransform Transform);
    FSJsonObject StructToJsonObject(class UStruct* Struct);
    TArray<uint8> stringToByteArray(FString String);
    void setStructJsonSettings(EJSONJsonStructMapSetting Map);
    FSJsonObject RotatorToJsonObject(FRotator Rotator);
    bool ReadStringFromFile(EJSONDirectoryType directoryType, FString FilePath, FString& JSON_String);
    void ReadBytesFromFile(EJSONDirectoryType directoryType, FString FilePath, TArray<uint8>& bytes);
    FString PrepareStructToFillItWithJson(class UStruct* Struct);
    FString MakeString(FString Value);
    float MakeNumber(float Value);
    FSJsonObject MakeMixedJSONArray(const FSJsonObject oldJSONMixedArray, EJsonDataType ChooseOneType, FSJsonObject Object, bool Bool, float Number, FString String);
    TMap<class FString, class FString> MakeMapString(FString Key, FString Value);
    TMap<class FString, class FSJsonObject> MakeMapObject(FString Key, FSJsonObject Value);
    TMap<FString, float> MakeMapNumber(FString Key, float Value);
    TMap<class FString, class bool> MakeMapBool(FString Key, bool Value);
    FSJsonObject MakeJson_Object(TMap<class FString, class FSJsonObject> ObjectMap, TMap<class FString, class bool> BoolMap, TMap<FString, float> NumberMap, TMap<class FString, class FString> StringMap, TArray<FSJsonObject> ObjectArray, TArray<bool> BoolArray, TArray<float> NumberArray, TArray<FString> StringArray);
    bool MakeBool(bool Value);
    FSJsonObject JsonStringToObject(FString Json, bool removeAndSavePadding, bool& Successful);
    FVector JsonObjectToVector(FSJsonObject jsonObject);
    FTransform JsonObjectToTransform(FSJsonObject jsonObject);
    FString JsonObjectToString(bool& Successful, FSJsonObject mainObject, bool removeLineBreaks, bool addPadding);
    FRotator JsonObjectToRotator(FSJsonObject jsonObject);
    void FillStructWithJson(FString structID, FSJsonObject Json);
    void fileToBase64String(EJSONDirectoryType directoryType, FString FilePath, FString& base64String, FString& Filename);
    bool fileExists(EJSONDirectoryType directoryType, FString FilePath);
    bool dirExists(EJSONDirectoryType directoryType, FString FilePath);
    bool DeleteFile(EJSONDirectoryType directoryType, FString FilePath);
    bool CreateFile(EJSONDirectoryType directoryType, FString FilePath);
    void compressData(EJsonCompressFormat Format, TArray<uint8> uncompressedData, TArray<uint8>& compressedData, int32& compressedDataSize, int32& uncompressedDataSize, bool& success);
    TMap<class FString, class FString> ChangeMapString(TMap<class FString, class FString> Map, FString Key, FString Value);
    TMap<class FString, class FSJsonObject> ChangeMapObject(TMap<class FString, class FSJsonObject> Map, FString Key, FSJsonObject Value);
    TMap<FString, float> ChangeMapNumber(TMap<FString, float> Map, FString Key, float Value);
    TMap<class FString, class bool> ChangeMapBool(TMap<class FString, class bool> Map, FString Key, bool Value);
    FString byteArrayToString(TArray<uint8> ByteArray);
    void BreakMixedJSONArray(const int32 Index, const FSJsonObject jsonObject, int32& LastIndex, EJsonDataType& Type, FSJsonObject& Object, bool& Bool, float& Number, FString& String);
    void BreakJson_Object(const FSJsonObject jsonObject, TMap<class FString, class FSJsonObject>& ObjectMap, TMap<class FString, class bool>& BoolMap, TMap<FString, float>& NumberMap, TMap<class FString, class FString>& StringMap, TArray<FSJsonObject>& ObjectArray, TArray<bool>& BoolArray, TArray<float>& NumberArray, TArray<FString>& StringArray);
    bool base64StringToFile(EJSONDirectoryType directoryType, FString base64String, FString FilePath);
    TMap<class FString, class FString> AddMapString(TMap<class FString, class FString> Map, FString Key, FString Value);
    TMap<class FString, class FSJsonObject> AddMapObject(TMap<class FString, class FSJsonObject> Map, FString Key, FSJsonObject Value);
    TMap<FString, float> AddMapNumber(TMap<FString, float> Map, FString Key, float Value);
    TMap<class FString, class bool> AddMapBool(TMap<class FString, class bool> Map, FString Key, bool Value);
}; // Size: 0xD0

#endif
