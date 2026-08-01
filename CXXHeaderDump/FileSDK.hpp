#ifndef UE4SS_SDK_FileSDK_HPP
#define UE4SS_SDK_FileSDK_HPP

#include "FileSDK_enums.hpp"

struct FFileSDKDelegatePreInfo
{
}; // Size: 0x8

struct FFileSDKFileInfo
{
    FString AbsolutePath;                                                             // 0x0000 (size: 0x10)
    FString Filename;                                                                 // 0x0010 (size: 0x10)
    FDateTime CreationTime;                                                           // 0x0020 (size: 0x8)
    FDateTime AccessTime;                                                             // 0x0028 (size: 0x8)
    FDateTime ModificationTime;                                                       // 0x0030 (size: 0x8)
    int64 fileSize;                                                                   // 0x0038 (size: 0x8)
    bool bIsDirectory;                                                                // 0x0040 (size: 0x1)
    bool bIsReadOnly;                                                                 // 0x0041 (size: 0x1)
    bool bIsValid;                                                                    // 0x0042 (size: 0x1)

}; // Size: 0x48

class UFileSDKBPLibrary : public UBlueprintFunctionLibrary
{

    bool WriteStringToFile(FString Filename, FString Content, bool Append, EFileSDKEncodingOptions Encoding);
    bool WriteBytesToFile(FString Filename, TArray<uint8> Content);
    bool RenameFileOrDirectory(FString Source, FString Destination);
    bool ReadStringFromFile(FString Filename, FString& Content);
    bool ReadLinesFromFile(FString Filename, TSubclassOf<class UFileSDKLineReader> LineReader, TArray<FString>& Lines);
    bool ReadBytesFromFile(FString Filename, TArray<uint8>& Content);
    class UFileSDKFileReader* OpenFileReader(FString Filename, bool OpenInBinaryMode);
    TArray<FString> GetFilesFromDirectory(FString DirectoryToSearch, FString FilterFilesWithExtension, bool SearchSubfolders, EFileSDKFileType fileType);
    void GetFileOrDirectoryInfo(FString Path, FFileSDKFileInfo& Info);
    FString GetEnvironmentVariable(FString VariableName);
    TArray<FFileSDKFileInfo> GetDirectoryContentsWithFileInfo(FString Directory, bool SearchSubfolders);
    FString GetCurrentUsername();
    FString GetCurrentUserHomeDirectory();
    bool DeleteFile(FString Filename);
    bool DeleteDirectory(FString DirectoryName, bool Recursive);
    void CreateFile(FString Filename, bool ClearContentsIfExists, bool CreateDirectoryTree);
    bool CreateDirectory(FString DirectoryName, bool CreateDirectoryTree);
    void CopyFileAsync(FString Source, FString Destination, const FCopyFileAsyncProgressCallback& ProgressCallback, FFileSDKDelegatePreInfo PreInfo, int32 ChunkSizeInKilobytes);
    bool CopyFile(FString Source, FString Destination, const FCopyFileProgressCallback& ProgressCallback, FFileSDKDelegatePreInfo PreInfo, int32 ChunkSizeInKilobytes, bool OverwriteDestination);
    void CopyDirectoryAsync(FString Source, FString Destination, const FCopyDirectoryAsyncProgressCallback& ProgressCallback, bool OverwriteDestination, int32 ChunkSizeInKilobytes);
    bool CopyDirectory(FString Source, FString Destination, const FCopyDirectoryProgressCallback& ProgressCallback, bool OverwriteDestination, int32 ChunkSizeInKilobytes);
}; // Size: 0x28

class UFileSDKCopyFileAsync : public UBlueprintAsyncActionBase
{
    FFileSDKCopyFileAsyncCompleted Completed;                                         // 0x0030 (size: 0x10)
    void FileSDKOnCopyCompleted(bool Successful);

    class UFileSDKCopyFileAsync* CopyFileAsync(class UObject* WorldContextObject, FString Source, FString Destination, const FCopyFileAsyncProgressCallback& ProgressCallback, bool OverwriteDestination, int32 ChunkSizeInKilobytes);
}; // Size: 0x78

class UFileSDKFileReader : public UObject
{
    FString Filename;                                                                 // 0x0028 (size: 0x10)
    bool BinaryMode;                                                                  // 0x0038 (size: 0x1)

    bool SeekFilePosition(EFileSDKFileAnchor Anchor, int32 Offset);
    int32 ReadStringToEnd(FString& Content);
    int32 ReadString(int32 Num, FString& Content);
    int32 ReadBytesToEnd(TArray<uint8>& Content);
    int32 ReadBytes(int32 Num, TArray<uint8>& Content);
    bool IsGood();
    void Close();
}; // Size: 0x48

class UFileSDKLineReader : public UObject
{

    bool FilterLine(FString Line);
}; // Size: 0x28

#endif
