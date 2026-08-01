#ifndef UE4SS_SDK_RealTimeImport_HPP
#define UE4SS_SDK_RealTimeImport_HPP

#include "RealTimeImport_enums.hpp"

struct FRTIFBXArmatureStruct
{
}; // Size: 0x1

struct FRTIFBXConnections
{
}; // Size: 0x190

struct FRTIFBXGeometryStruct
{
}; // Size: 0xB8

struct FRTIFBXMaterialStruct
{
}; // Size: 0x98

struct FRTIFBXModelStruct
{
}; // Size: 0xB0

struct FRTIFBXTextureStruct
{
}; // Size: 0x60

struct FRTIFBXVideoStruct
{
}; // Size: 0x28

struct FRTIMaterialStruct
{
    bool IsEmpty;                                                                     // 0x0000 (size: 0x1)
    FString materialName;                                                             // 0x0008 (size: 0x10)
    FString TextureName;                                                              // 0x0018 (size: 0x10)
    TMap<class FString, class FRTITextureStruct> textures;                            // 0x0028 (size: 0x50)
    TArray<FString> texturesFileNames;                                                // 0x0078 (size: 0x10)
    FColor ambient;                                                                   // 0x0088 (size: 0x4)
    FColor diffuse;                                                                   // 0x008C (size: 0x4)
    FColor Specular;                                                                  // 0x0090 (size: 0x4)
    float specularExponent;                                                           // 0x0094 (size: 0x4)
    float dissolved;                                                                  // 0x0098 (size: 0x4)
    float dissolvedInverted;                                                          // 0x009C (size: 0x4)
    int64 fbxID;                                                                      // 0x00A0 (size: 0x8)

}; // Size: 0xA8

struct FRTIMeshStruct
{
    FString geometryName;                                                             // 0x0008 (size: 0x10)
    TArray<int32> Triangles;                                                          // 0x0018 (size: 0x10)
    TArray<FVector> Vertices;                                                         // 0x0028 (size: 0x10)
    TArray<FVector> normals;                                                          // 0x0038 (size: 0x10)
    TArray<FVector2D> UV0;                                                            // 0x0048 (size: 0x10)
    TArray<FLinearColor> vertexColors;                                                // 0x0058 (size: 0x10)
    bool hasMaterialData;                                                             // 0x0068 (size: 0x1)
    FRTIMaterialStruct materialData;                                                  // 0x0070 (size: 0xA8)

}; // Size: 0x118

struct FRTIModelStruct
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FTransform relativeTransform;                                                     // 0x0010 (size: 0x30)
    TArray<FRTIMeshStruct> meshStructs;                                               // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRTISoundDataStruct
{
}; // Size: 0x38

struct FRTITextureStruct
{
    FString TextureName;                                                              // 0x0000 (size: 0x10)
    ERTITextureType textureType;                                                      // 0x0018 (size: 0x1)
    int64 fbxID;                                                                      // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRTITextureToDeleteStruct
{
}; // Size: 0x10

struct FRTIWavPlayAsyncStruct
{
}; // Size: 0x68

struct FSRealtimeImportThreadJobData
{
}; // Size: 0x90

class UFileFunctionsRealTimeImport : public UObject
{

    void WriteStringToFile(ERTIDirectoryType directoryType, FString Data, FString FilePath, bool& success);
    void WriteBytesToFile(ERTIDirectoryType directoryType, FString FilePath, TArray<uint8> bytes, bool& success);
    void setTimeStamp(ERTIDirectoryType directoryType, FString FilePath, FDateTime DateTime);
    bool setReadOnly(ERTIDirectoryType directoryType, FString FilePath, bool bNewReadOnlyValue);
    void ReadStringFromFile(ERTIDirectoryType directoryType, FString FilePath, bool& success, FString& Data);
    TArray<uint8> ReadBytesFromFile(ERTIDirectoryType directoryType, FString FilePath, bool& success);
    bool moveFile(ERTIDirectoryType directoryTypeTo, FString FilePathTo, ERTIDirectoryType directoryTypeFrom, FString FilePathFrom);
    bool isReadOnly(ERTIDirectoryType directoryType, FString FilePath);
    FDateTime getTimeStamp(ERTIDirectoryType directoryType, FString FilePath);
    void getMD5FromFile(ERTIDirectoryType directoryType, FString FilePath, bool& success, FString& Md5);
    FString getFilenameOnDisk(ERTIDirectoryType directoryType, FString FilePath);
    class UFileFunctionsRealTimeImport* getFileFunctionsRealTimeImport();
    FDateTime getAccessTimeStamp(ERTIDirectoryType directoryType, FString FilePath);
    void fileToBase64String(ERTIDirectoryType directoryType, FString FilePath, bool& success, FString& base64String, FString& Filename);
    int64 fileSize(ERTIDirectoryType directoryType, FString FilePath);
    bool fileExists(ERTIDirectoryType directoryType, FString FilePath);
    bool directoryExists(ERTIDirectoryType directoryType, FString Path);
    bool DeleteFile(ERTIDirectoryType directoryType, FString FilePath);
    bool DeleteDirectory(ERTIDirectoryType directoryType, FString FilePath);
    bool CreateDirectory(ERTIDirectoryType directoryType, FString Path);
    void bytesToBase64String(TArray<uint8> bytes, FString& base64String);
    TArray<uint8> base64StringToBytes(ERTIDirectoryType directoryType, FString base64String, bool& success);
    FString Base64Encode(TArray<uint8> bytes);
    TArray<uint8> Base64Decode(FString base64EncodedString);
    void addBytesToFile(ERTIDirectoryType directoryType, FString FilePath, TArray<uint8> bytes, bool& success);
}; // Size: 0x40

class URealTimeImportAsyncNodeCreateSoundWaveFromBytes : public UBlueprintAsyncActionBase
{
    FRealTimeImportAsyncNodeCreateSoundWaveFromBytesOnSuccess OnSuccess;              // 0x0030 (size: 0x10)
    void CreateSoundWaveFromBytesCompleteDelegate(const class USoundWaveProcedural* SoundWave, const int32 errorCode, const FString errorMessage);
    FRealTimeImportAsyncNodeCreateSoundWaveFromBytesOnFail OnFail;                    // 0x0040 (size: 0x10)
    void CreateSoundWaveFromBytesCompleteDelegate(const class USoundWaveProcedural* SoundWave, const int32 errorCode, const FString errorMessage);

    void CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature(const class USoundWaveProcedural* SoundWave, const int32 errorCode, const FString errorMessage);
    class URealTimeImportAsyncNodeCreateSoundWaveFromBytes* CreateSoundWaveFromBytesAsyncNode(FString Name, TArray<uint8> bytes, float maxFileSize, ERTISoundFileType soundFileType);
}; // Size: 0x58

class URealTimeImportAsyncNodeCreateSoundWaveFromFile : public UBlueprintAsyncActionBase
{
    FRealTimeImportAsyncNodeCreateSoundWaveFromFileOnSuccess OnSuccess;               // 0x0030 (size: 0x10)
    void CreateSoundWaveFromFileCompleteDelegate(const FString fileID, const class USoundWaveProcedural* SoundWave, const FString Filename, const int32 errorCode, const FString errorMessage);
    FRealTimeImportAsyncNodeCreateSoundWaveFromFileOnFail OnFail;                     // 0x0040 (size: 0x10)
    void CreateSoundWaveFromFileCompleteDelegate(const FString fileID, const class USoundWaveProcedural* SoundWave, const FString Filename, const int32 errorCode, const FString errorMessage);

    void CreateSoundWaveFromFileCompleteDelegate__DelegateSignature(const FString fileID, const class USoundWaveProcedural* SoundWave, const FString Filename, const int32 errorCode, const FString errorMessage);
    class URealTimeImportAsyncNodeCreateSoundWaveFromFile* CreateSoundWaveFromFileAsyncNode(ERTIDirectoryType directoryType, FString FilePath, float maxFileSize, ERTISoundFileType soundFileType);
}; // Size: 0x58

class URealTimeImportAsyncNodeLoadAllFilesFromDirectory : public UBlueprintAsyncActionBase
{
    FRealTimeImportAsyncNodeLoadAllFilesFromDirectoryOnSuccess OnSuccess;             // 0x0030 (size: 0x10)
    void LoadAllFilesFromDirectoryCompleteDelegate(const int32& Count, const TArray<FString>& files, const TArray<FString>& filePaths);
    FRealTimeImportAsyncNodeLoadAllFilesFromDirectoryOnFail OnFail;                   // 0x0040 (size: 0x10)
    void LoadAllFilesFromDirectoryCompleteDelegate(const int32& Count, const TArray<FString>& files, const TArray<FString>& filePaths);

    void LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature(const int32& Count, const TArray<FString>& files, const TArray<FString>& filePaths);
    class URealTimeImportAsyncNodeLoadAllFilesFromDirectory* LoadAllFilesFromDirectoryAsyncNode(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch);
}; // Size: 0x58

class URealTimeImportAsyncNodeLoadFile : public UBlueprintAsyncActionBase
{
    FRealTimeImportAsyncNodeLoadFileOnSuccess OnSuccess;                              // 0x0030 (size: 0x10)
    void LoadFileCompleteDelegate(const FString Filename, const TArray<uint8>& bytes, const int32 errorCode, const FString errorMessage);
    FRealTimeImportAsyncNodeLoadFileOnFail OnFail;                                    // 0x0040 (size: 0x10)
    void LoadFileCompleteDelegate(const FString Filename, const TArray<uint8>& bytes, const int32 errorCode, const FString errorMessage);

    void LoadFileCompleteDelegate__DelegateSignature(const FString Filename, const TArray<uint8>& bytes, const int32 errorCode, const FString errorMessage);
    class URealTimeImportAsyncNodeLoadFile* LoadFileAsyncNode(ERTIDirectoryType directoryType, FString FilePath);
}; // Size: 0x58

class URealTimeImportAsyncNodeLoadImageBytes : public UBlueprintAsyncActionBase
{
    FRealTimeImportAsyncNodeLoadImageBytesOnSuccess OnSuccess;                        // 0x0030 (size: 0x10)
    void LoadImageFromBytesCompleteDelegate(const class UTexture2D* Texture, const int32 errorCode, const FString errorMessage);
    FRealTimeImportAsyncNodeLoadImageBytesOnFail OnFail;                              // 0x0040 (size: 0x10)
    void LoadImageFromBytesCompleteDelegate(const class UTexture2D* Texture, const int32 errorCode, const FString errorMessage);

    void LoadImageFromBytesCompleteDelegate__DelegateSignature(const class UTexture2D* Texture, const int32 errorCode, const FString errorMessage);
    class URealTimeImportAsyncNodeLoadImageBytes* LoadImageBytesAsyncNode(FString Name, TArray<uint8> bytes, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat);
}; // Size: 0x58

class URealTimeImportAsyncNodeLoadImageFile : public UBlueprintAsyncActionBase
{
    FRealTimeImportAsyncNodeLoadImageFileOnSuccess OnSuccess;                         // 0x0030 (size: 0x10)
    void LoadImageFromFileCompleteDelegate(const class UTexture2D* Texture, const FString Filename, const int32 errorCode, const FString errorMessage);
    FRealTimeImportAsyncNodeLoadImageFileOnFail OnFail;                               // 0x0040 (size: 0x10)
    void LoadImageFromFileCompleteDelegate(const class UTexture2D* Texture, const FString Filename, const int32 errorCode, const FString errorMessage);

    void LoadImageFromFileCompleteDelegate__DelegateSignature(const class UTexture2D* Texture, const FString Filename, const int32 errorCode, const FString errorMessage);
    class URealTimeImportAsyncNodeLoadImageFile* LoadImageFileAsyncNode(ERTIDirectoryType directoryType, FString FilePath, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat);
}; // Size: 0x58

class URealTimeImportAsyncNodeLoadMesh : public UBlueprintAsyncActionBase
{
    FRealTimeImportAsyncNodeLoadMeshOnSuccess OnSuccess;                              // 0x0030 (size: 0x10)
    void LoadMeshCompleteDelegate(const TArray<FRTIModelStruct>& modelStructs, FString errorMessage);
    FRealTimeImportAsyncNodeLoadMeshOnFail OnFail;                                    // 0x0040 (size: 0x10)
    void LoadMeshCompleteDelegate(const TArray<FRTIModelStruct>& modelStructs, FString errorMessage);

    class URealTimeImportAsyncNodeLoadMesh* LoadMeshFileAsyncNode(ERTIMeshType fileType, ERTIDirectoryType directoryType, FString FilePath, ERTICoordinateSystem coordinateSystem, bool autoDetectionNormalMap, bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat);
    void LoadMeshCompleteDelegate__DelegateSignature(const TArray<FRTIModelStruct>& modelStructs, FString errorMessage);
}; // Size: 0x58

class URealTimeImportAsyncNodeSaveFile : public UBlueprintAsyncActionBase
{
    FRealTimeImportAsyncNodeSaveFileOnSuccess OnSuccess;                              // 0x0030 (size: 0x10)
    void SaveFileCompleteDelegate(const FString Filename, FString fullPath, const int32 errorCode, const FString errorMessage);
    FRealTimeImportAsyncNodeSaveFileOnFail OnFail;                                    // 0x0040 (size: 0x10)
    void SaveFileCompleteDelegate(const FString Filename, FString fullPath, const int32 errorCode, const FString errorMessage);

    void SaveFileCompleteDelegate__DelegateSignature(const FString Filename, FString fullPath, const int32 errorCode, const FString errorMessage);
    class URealTimeImportAsyncNodeSaveFile* SaveFileAsyncNode(ERTIDirectoryType directoryType, FString FilePath, TArray<uint8> bytes, bool createDirectories, bool overwriteFile);
}; // Size: 0x58

class URealTimeImportBPLibrary : public UObject
{
    FRealTimeImportBPLibraryOnLoadFileEventDelegate onLoadFileEventDelegate;          // 0x0028 (size: 0x10)
    void LoadFileEventDelegate(int32 errorCode, FString eventID, const TArray<uint8>& bytes, FString Filename, FString errorMessage);
    FRealTimeImportBPLibraryOnSaveFileEventDelegate onSaveFileEventDelegate;          // 0x0038 (size: 0x10)
    void SaveFileEventDelegate(int32 errorCode, FString eventID, FString Filename, FString fullPath, FString errorMessage);
    FRealTimeImportBPLibraryOnLoadAllFilesFromDirectoryEventDelegate onLoadAllFilesFromDirectoryEventDelegate; // 0x0048 (size: 0x10)
    void LoadAllFilesFromDirectoryEventDelegate(FString eventID, int32 Count, const TArray<FString>& files, const TArray<FString>& filePaths);
    FRealTimeImportBPLibraryOnCreateSoundWaveFromFileEventDelegate onCreateSoundWaveFromFileEventDelegate; // 0x0058 (size: 0x10)
    void CreateSoundWaveFromFileEventDelegate(int32 errorCode, FString eventID, class USoundWaveProcedural* Sound, FString Filename, FString errorMessage);
    FRealTimeImportBPLibraryOnCreateSoundWaveFromBytesEventDelegate onCreateSoundWaveFromBytesEventDelegate; // 0x0068 (size: 0x10)
    void CreateSoundWaveFromBytesEventDelegate(int32 errorCode, FString eventID, class USoundWaveProcedural* Sound, FString errorMessage);
    FRealTimeImportBPLibraryOnPlaySoundEventDelegate onPlaySoundEventDelegate;        // 0x0078 (size: 0x10)
    void PlaySoundEventDelegate(int32 errorCode, FString fileID, FString errorMessage, float durationInSeconds);
    FRealTimeImportBPLibraryOnActiveSoundPositionEventDelegate onActiveSoundPositionEventDelegate; // 0x0088 (size: 0x10)
    void ActiveSoundPositionEventDelegate(FString fileID, float positionSecondsStart, float positionSecondsEnd, float positionPercent);
    FRealTimeImportBPLibraryOnActiveSoundEnvelopeValueEventDelegate onActiveSoundEnvelopeValueEventDelegate; // 0x0098 (size: 0x10)
    void ActiveSoundEnvelopeValueEventDelegate(float averageEnvelopeValue, float maxEnvelope, int32 numWaveInstances);
    FRealTimeImportBPLibraryOnStopSoundEventDelegate onStopSoundEventDelegate;        // 0x00A8 (size: 0x10)
    void StopSoundEventDelegate(FString fileID);
    FRealTimeImportBPLibraryOnLoadImageFileEventDelegate onLoadImageFileEventDelegate; // 0x00B8 (size: 0x10)
    void LoadImageFileEventDelegate(int32 errorCode, FString eventID, class UTexture2D* Texture, FString Filename, FString errorMessage);
    FRealTimeImportBPLibraryOnLoadImageBytesEventDelegate onLoadImageBytesEventDelegate; // 0x00C8 (size: 0x10)
    void LoadImageBytesEventDelegate(int32 errorCode, FString eventID, class UTexture2D* Texture, FString errorMessage);

    TArray<uint8> textureRenderTarget2D_ToByteArray(bool& success, FString& errorMessage, class UTextureRenderTarget2D* TextureRenderTarget2D, ERTIExportImageType Type, int32 quality);
    class UTexture2DDynamic* texture2DToTexture2DDynamic(class UTexture2D* Texture2D, bool destroyTexture2D);
    TArray<uint8> texture2dToByteArray(class UTexture2D* Texture2D, ERTIExportImageType Type, int32 quality);
    void streamWavFile(bool& success, FString& errorMessage, const class UObject* WorldContextObject, ERTIDirectoryType directoryType, FString FilePath, float VolumeMultiplier, int32 startTimeInSeconds, bool persistAcrossLevelTransition);
    void StopSoundEventDelegate__DelegateSignature(FString fileID);
    void StopSoundEventDelegate(const FString fileID);
    void stopSound(FString fileID, bool removeFromCache);
    void stopAllSounds(bool removeFromCache);
    void seekWavFileStream(FString fileID, float positionInSeconds);
    void SaveFileEventDelegate__DelegateSignature(int32 errorCode, FString eventID, FString Filename, FString fullPath, FString errorMessage);
    void SaveFileEventDelegate(const int32 errorCode, const FString eventID, const FString Filename, const FString fullPath, const FString errorMessage);
    class URealTimeImportBPLibrary* SaveFileAsync(ERTIDirectoryType directoryType, FString FilePath, bool createDirectories, bool overwriteFile, TArray<uint8> bytes, FString eventID);
    void SaveFile(ERTIDirectoryType directoryType, FString FilePath, bool createDirectories, bool overwriteFile, TArray<uint8> bytes, FString& Filename, FString& fullPath, int32& errorCode, FString& errorMessage);
    void resumeSound(FString fileID);
    void removeTextureFromCacheAndDestroyTexture(class UTexture* Texture, bool emptyTextureBeforeDeleting);
    void removeSoundFromCache(FString fileID);
    void PlaySoundEventDelegate__DelegateSignature(int32 errorCode, FString fileID, FString errorMessage, float durationInSeconds);
    void PlaySoundEventDelegate(const int32 errorCode, const FString fileID, const FString errorMessage, const float durationInSeconds);
    void pauseSound(FString fileID);
    TArray<FVector> Multiply_VectorArrayFloat(TArray<FVector> A, float B);
    void LoadMeshFile(ERTIMeshType fileType, ERTIDirectoryType directoryType, FString FilePath, bool& success, FString& successMessage, TArray<FRTIModelStruct>& modelStructs, ERTICoordinateSystem coordinateSystem, bool autoDetectionNormalMap, bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat);
    void LoadImageFileEventDelegate__DelegateSignature(int32 errorCode, FString eventID, class UTexture2D* Texture, FString Filename, FString errorMessage);
    void LoadImageFileEventDelegate(const int32 errorCode, const FString eventID, const class UTexture2D* Texture, const FString Filename, const FString errorMessage);
    class URealTimeImportBPLibrary* LoadImageFileAsync(ERTIDirectoryType directoryType, FString FilePath, FString eventID, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat);
    void LoadImageFile(ERTIDirectoryType directoryType, FString FilePath, class UTexture2D*& Texture, FString& Filename, int32& errorCode, FString& errorMessage, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat);
    void LoadImageBytesEventDelegate__DelegateSignature(int32 errorCode, FString eventID, class UTexture2D* Texture, FString errorMessage);
    void LoadImageBytesEventDelegate(const int32 errorCode, const FString eventID, const class UTexture2D* Texture, const FString errorMessage);
    class URealTimeImportBPLibrary* LoadImageBytesAsync(FString Name, TArray<uint8> bytes, FString eventID, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat);
    void LoadImageBytes(FString Name, TArray<uint8> bytes, class UTexture2D*& Texture, int32& errorCode, FString& errorMessage, TEnumAsByte<TextureCompressionSettings> CompressionSettings, bool sRGB, bool createMipMaps, ERTIERGBFormat rgbFormat);
    void LoadFileEventDelegate__DelegateSignature(int32 errorCode, FString eventID, const TArray<uint8>& bytes, FString Filename, FString errorMessage);
    void LoadFileEventDelegate(const int32 errorCode, const FString eventID, const TArray<uint8>& bytes, const FString Filename, const FString errorMessage);
    class URealTimeImportBPLibrary* LoadFileAsync(ERTIDirectoryType directoryType, FString FilePath, FString eventID);
    void LoadFile(ERTIDirectoryType directoryType, FString FilePath, FString& Filename, TArray<uint8>& bytes, int32& errorCode, FString& errorMessage);
    void loadAndPlaySoundFileAsync(const class UObject* WorldContextObject, ERTIDirectoryType directoryType, FString FilePath, float maxFileSize, float VolumeMultiplier, float playSpeed, int32 startTimeInSeconds, bool persistAcrossLevelTransition, ERTISoundFileType soundFileType);
    void loadAndPlaySoundBytesAsync(const class UObject* WorldContextObject, TArray<uint8> bytes, float VolumeMultiplier, float playSpeed, int32 startTimeInSeconds, bool persistAcrossLevelTransition);
    void LoadAllFilesFromDirectoryEventDelegate__DelegateSignature(FString eventID, int32 Count, const TArray<FString>& files, const TArray<FString>& filePaths);
    void LoadAllFilesFromDirectoryEventDelegate(const FString eventID, const int32& Count, const TArray<FString>& files, const TArray<FString>& filePaths);
    class URealTimeImportBPLibrary* LoadAllFilesFromDirectoryAsync(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch, FString eventID);
    bool LoadAllFilesFromDirectory(ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch, int32& Count, TArray<FString>& files, TArray<FString>& filePaths);
    bool isSoundActive(FString fileID);
    void getSoundInfo(ERTIDirectoryType directoryType, FString FilePath, FString& Name, FString& fileNameExtension, int64& fileSize, float& Duration, int64& NumChannels, int32& quality, int64& sampleDataSize, int64& SampleRate);
    class URealTimeImportBPLibrary* getRealTimeImportTarget();
    void emptyTextureCacheAndDestroyTextures(bool emptyTexturesBeforeDeleting);
    void emptySoundCache();
    void CreateSoundWaveFromFileEventDelegate__DelegateSignature(int32 errorCode, FString eventID, class USoundWaveProcedural* Sound, FString Filename, FString errorMessage);
    void CreateSoundWaveFromFileEventDelegate(const int32 errorCode, const FString eventID, const class USoundWaveProcedural* Sound, const FString Filename, const FString errorMessage);
    class URealTimeImportBPLibrary* CreateSoundWaveFromFileAsync(ERTIDirectoryType directoryType, FString FilePath, float maxFileSize, ERTISoundFileType soundFileType, FString eventID);
    void CreateSoundWaveFromFile(ERTIDirectoryType directoryType, FString FilePath, float maxFileSize, FString& fileID, ERTISoundFileType soundFileType, class USoundWaveProcedural*& SoundWave, FString& Filename, int32& errorCode, FString& errorMessage);
    void CreateSoundWaveFromBytesEventDelegate__DelegateSignature(int32 errorCode, FString eventID, class USoundWaveProcedural* Sound, FString errorMessage);
    void CreateSoundWaveFromBytesEventDelegate(const int32 errorCode, const FString eventID, const class USoundWaveProcedural* Sound, const FString errorMessage);
    class URealTimeImportBPLibrary* CreateSoundWaveFromBytesAsync(FString Name, TArray<uint8> bytes, float maxFileSize, ERTISoundFileType soundFileType, FString eventID);
    void CreateSoundWaveFromBytes(FString Name, TArray<uint8> bytes, float maxFileSize, ERTISoundFileType soundFileType, class USoundWaveProcedural*& Sound, int32& errorCode, FString& errorMessage);
    void changeVolumeSound(FString fileID, float VolumeMultiplier);
    void changeTexturDestroyThreadSettings(float threadSleepTimeInSeconds, bool showLogs);
    void breakTextureStruct(FRTITextureStruct textureData, FString& TextureName, class UTexture2D*& Texture, ERTITextureType& textureType);
    void breakModelStruct(FRTIModelStruct modelStruct, FString& Name, FTransform& relativeTransform, TArray<FRTIMeshStruct>& meshStructs);
    void breakMeshStruct(FRTIMeshStruct meshStruct, FString& geometryName, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& normals, TArray<FVector2D>& UV0, TArray<FLinearColor>& vertexColors, FRTIMaterialStruct& materialStruct);
    void breakMaterialStruct(FRTIMaterialStruct materialData, bool& hasTexture, FString& materialName, FString& TextureName, TArray<FRTITextureStruct>& textures, FColor& ambient, FColor& diffuse, FColor& Specular, float& specularExponent, float& dissolved, float& dissolvedInverted);
    void ActiveSoundPositionEventDelegate__DelegateSignature(FString fileID, float positionSecondsStart, float positionSecondsEnd, float positionPercent);
    void ActiveSoundPositionEventDelegate(const FString fileID, const float positionSecondsStart, const float positionSecondsEnd, const float positionPercent);
    void ActiveSoundEnvelopeValueEventDelegate__DelegateSignature(float averageEnvelopeValue, float maxEnvelope, int32 numWaveInstances);
    void ActiveSoundEnvelopeValueEventDelegate(const float averageEnvelopeValue, const float maxEnvelope, const int32 numWaveInstances);
}; // Size: 0xE0

class URealTimeImportImage : public UObject
{

    class URealTimeImportImage* getRealTimeImportImage();
    TArray<FColor> getImageColors(TArray<uint8> imageBytes);
}; // Size: 0x90

class URealTimeImportMesh : public UObject
{
    class URealTimeImportMeshSTL* importerSTL;                                        // 0x0028 (size: 0x8)
    class URealTimeImportMeshOBJ* importerOBJ;                                        // 0x0030 (size: 0x8)
    class URealTimeImportMeshFBX* importerFBX;                                        // 0x0038 (size: 0x8)

    class URealTimeImportMesh* getRealTimeImportMesh();
    void cleanTest(TArray<FRTIModelStruct> modelStructs);
}; // Size: 0x40

class URealTimeImportMeshFBX : public UObject
{
}; // Size: 0x28

class URealTimeImportMeshOBJ : public UObject
{
}; // Size: 0x28

class URealTimeImportMeshSTL : public UObject
{
}; // Size: 0x28

class URealTimeImportSound : public UObject
{

    class URealTimeImportSound* getRealTimeImportSound();
}; // Size: 0x1C8

#endif
