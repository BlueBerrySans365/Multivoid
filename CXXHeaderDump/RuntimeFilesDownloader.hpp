#ifndef UE4SS_SDK_RuntimeFilesDownloader_HPP
#define UE4SS_SDK_RuntimeFilesDownloader_HPP

#include "RuntimeFilesDownloader_enums.hpp"

class UFileToMemoryDownloader : public URuntimeFilesDownloaderLibrary
{
    FFileToMemoryDownloaderOnDownloadComplete OnDownloadComplete;                     // 0x0050 (size: 0x10)
    void OnFileToMemoryDownloadComplete(const TArray<uint8>& DownloadedContent, EDownloadToMemoryResult Result);

    void BP_DownloadFileToMemory(FString URL, float Timeout, FString ContentType, const FBP_DownloadFileToMemoryOnProgress& OnProgress, const FBP_DownloadFileToMemoryOnComplete& OnComplete);
}; // Size: 0x70

class UFileToStorageDownloader : public URuntimeFilesDownloaderLibrary
{
    FFileToStorageDownloaderOnDownloadComplete OnDownloadComplete;                    // 0x0050 (size: 0x10)
    void OnFileToStorageDownloadComplete(EDownloadToStorageResult Result);

    class UFileToStorageDownloader* BP_DownloadFileToStorage(FString URL, FString SavePath, float Timeout, FString ContentType, const FBP_DownloadFileToStorageOnProgress& OnProgress, const FBP_DownloadFileToStorageOnComplete& OnComplete);
}; // Size: 0x80

class URuntimeFilesDownloaderLibrary : public UObject
{
    FRuntimeFilesDownloaderLibraryOnDownloadProgress OnDownloadProgress;              // 0x0028 (size: 0x10)
    void OnMultiDownloadProgress(const int32 BytesReceived, const int32 ContentLength);

    bool SaveStringToFile(FString String, FString Filename);
    bool SaveArrayToFile(const TArray<uint8>& bytes, FString Filename);
    bool LoadFileToString(FString& Result, FString Filename);
    bool LoadFileToArray(TArray<uint8>& Result, FString Filename);
    bool CancelDownload();
    class UTexture2D* BytesToTexture(const TArray<uint8>& bytes);
    FString BytesToString(const TArray<uint8>& bytes);
}; // Size: 0x50

#endif
