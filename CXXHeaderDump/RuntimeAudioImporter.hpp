#ifndef UE4SS_SDK_RuntimeAudioImporter_HPP
#define UE4SS_SDK_RuntimeAudioImporter_HPP

#include "RuntimeAudioImporter_enums.hpp"

struct FCompressedSoundWaveInfo
{
    TEnumAsByte<ESoundGroup> SoundGroup;                                              // 0x0000 (size: 0x1)
    bool bLooping;                                                                    // 0x0001 (size: 0x1)
    float Volume;                                                                     // 0x0004 (size: 0x4)
    float Pitch;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FEditableSubtitleCue
{
    FText Text;                                                                       // 0x0000 (size: 0x18)
    float Time;                                                                       // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRuntimeAudioExportOverrideOptions
{
    int32 NumOfChannels;                                                              // 0x0000 (size: 0x4)
    int32 SampleRate;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRuntimeAudioHeaderInfo
{
    float Duration;                                                                   // 0x0000 (size: 0x4)
    int32 NumOfChannels;                                                              // 0x0004 (size: 0x4)
    int32 SampleRate;                                                                 // 0x0008 (size: 0x4)
    int64 PCMDataSize;                                                                // 0x0010 (size: 0x8)
    ERuntimeAudioFormat AudioFormat;                                                  // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRuntimeAudioInputDeviceInfo
{
    FString DeviceName;                                                               // 0x0000 (size: 0x10)
    FString DeviceID;                                                                 // 0x0010 (size: 0x10)
    int32 InputChannels;                                                              // 0x0020 (size: 0x4)
    int32 PreferredSampleRate;                                                        // 0x0024 (size: 0x4)
    bool bSupportsHardwareAEC;                                                        // 0x0028 (size: 0x1)

}; // Size: 0x30

class IRuntimeVADProvider : public IInterface
{
}; // Size: 0x28

class UCapturableSoundWave : public UStreamingSoundWave
{

    bool ToggleMute(bool bMute);
    void StopCapture();
    bool StartCapture(int32 DeviceID);
    bool IsCapturing();
    void GetAvailableAudioInputDevices(const FGetAvailableAudioInputDevicesResult& Result);
    class UCapturableSoundWave* CreateCapturableSoundWave();
}; // Size: 0x570

class UImportedSoundWave : public USoundWaveProcedural
{
    FImportedSoundWaveOnAudioPlaybackFinished OnAudioPlaybackFinished;                // 0x03D8 (size: 0x10)
    void OnAudioPlaybackFinished();
    FImportedSoundWaveOnGeneratePCMData OnGeneratePCMData;                            // 0x0400 (size: 0x10)
    void OnGeneratePCMData(const TArray<float>& PCMData);
    FImportedSoundWaveOnPopulateAudioData OnPopulateAudioData;                        // 0x0450 (size: 0x10)
    void OnPopulateAudioData(const TArray<float>& PopulatedAudioData);
    FImportedSoundWaveOnPopulateAudioState OnPopulateAudioState;                      // 0x04A0 (size: 0x10)
    void OnPopulateAudioState();

    void StopPlayback(const class UObject* WorldContextObject, const FStopPlaybackResult& Result);
    void SetVolume(float InVolume);
    void SetVirtualizationMode(EVirtualizationMode InVirtualizationMode);
    void SetSubtitles(const TArray<FEditableSubtitleCue>& InSubtitles);
    void SetPitch(float InPitch);
    void SetNumSamplesPerChunk(int32 NumSamples);
    void SetLooping(bool bLoop);
    void SetIsAmbisonics(bool bInAmbisonics);
    bool SetInitialDesiredSampleRate(int32 DesiredSampleRate);
    bool SetInitialDesiredNumOfChannels(int32 DesiredNumOfChannels);
    bool RewindPlaybackTime(float PlaybackTime);
    void ReverseAudioBuffer(const FReverseAudioBufferResult& Result);
    bool ResampleSoundWave(int32 NewSampleRate);
    void ReleaseMemory();
    void PrepareSoundWaveForMetaSounds(const FPrepareSoundWaveForMetaSoundsResult& Result);
    bool MixSoundWaveChannels(int32 NewNumOfChannels);
    bool IsPlaying(const class UObject* WorldContextObject);
    bool IsPlaybackFinished();
    int32 GetSampleRate();
    float GetPlaybackTime();
    float GetPlaybackPercentage();
    TArray<float> GetPCMBufferCopy();
    int32 GetNumOfChannels();
    int32 GetNumberOfChannels();
    float GetDurationConst();
    bool GetAudioHeaderInfo(FRuntimeAudioHeaderInfo& HeaderInfo);
    ERuntimeAudioFormat GetAudioFormat();
    void DuplicateSoundWave(bool bUseSharedAudioBuffer, const FDuplicateSoundWaveResult& Result);
}; // Size: 0x500

class UPreImportedSoundAsset : public UObject
{
    TArray<uint8> AudioDataArray;                                                     // 0x0028 (size: 0x10)
    ERuntimeAudioFormat AudioFormat;                                                  // 0x0038 (size: 0x1)

}; // Size: 0x40

class URuntimeAcousticEchoCancellation : public UObject
{

    void UnbindFromSoundWavePlayback(class UImportedSoundWave* ImportedSoundWave);
    void SetStreamDelay(int32 DelayMs);
    void ResetAEC();
    bool ProcessCaptureAudio(TArray<float>& CapturePCMData, int32 SampleRate, int32 NumChannels);
    bool IsAECInitialized();
    bool IsAECAvailable();
    bool InitializeAEC(int32 SampleRate, int32 NumChannels);
    int32 GetExpectedFrameSizePerChannel();
    FString GetAECImplementationName();
    void FeedRenderAudio(const TArray<float>& RenderPCMData, int32 SampleRate, int32 NumChannels);
    class URuntimeAcousticEchoCancellation* CreateAcousticEchoCancellation(int32 SampleRate, int32 NumChannels);
    void BindToSoundWavePlayback(class UImportedSoundWave* ImportedSoundWave);
}; // Size: 0x30

class URuntimeAudioExporter : public UObject
{

    void ExportSoundWaveToRAWFile(class UImportedSoundWave* ImportedSoundWave, FString SavePath, ERuntimeRAWAudioFormat RAWFormat, const FRuntimeAudioExportOverrideOptions& OverrideOptions, const FExportSoundWaveToRAWFileResult& Result);
    void ExportSoundWaveToRAWBuffer(class UImportedSoundWave* ImportedSoundWave, ERuntimeRAWAudioFormat RAWFormat, const FRuntimeAudioExportOverrideOptions& OverrideOptions, const FExportSoundWaveToRAWBufferResult& Result);
    void ExportSoundWaveToFile(class UImportedSoundWave* ImportedSoundWave, FString SavePath, ERuntimeAudioFormat AudioFormat, uint8 quality, const FRuntimeAudioExportOverrideOptions& OverrideOptions, const FExportSoundWaveToFileResult& Result);
    void ExportSoundWaveToBuffer(class UImportedSoundWave* ImportedSoundWave, ERuntimeAudioFormat AudioFormat, uint8 quality, const FRuntimeAudioExportOverrideOptions& OverrideOptions, const FExportSoundWaveToBufferResult& Result);
}; // Size: 0x28

class URuntimeAudioImporterLibrary : public UObject
{
    FRuntimeAudioImporterLibraryOnProgress OnProgress;                                // 0x0040 (size: 0x10)
    void OnAudioImporterProgress(int32 Percentage);
    FRuntimeAudioImporterLibraryOnResult OnResult;                                    // 0x0068 (size: 0x10)
    void OnAudioImporterResult(class URuntimeAudioImporterLibrary* Importer, class UImportedSoundWave* ImportedSoundWave, ERuntimeImportStatus Status);

    void ImportAudioFromRAWFile(FString FilePath, ERuntimeRAWAudioFormat RAWFormat, int32 SampleRate, int32 NumOfChannels);
    void ImportAudioFromRAWBuffer(TArray<uint8> RAWBuffer, ERuntimeRAWAudioFormat RAWFormat, int32 SampleRate, int32 NumOfChannels);
    void ImportAudioFromPreImportedSound(class UPreImportedSoundAsset* PreImportedSoundAsset);
    void ImportAudioFromFile(FString FilePath, ERuntimeAudioFormat AudioFormat);
    void ImportAudioFromBuffer(TArray<uint8> AudioData, ERuntimeAudioFormat AudioFormat);
    class URuntimeAudioImporterLibrary* CreateRuntimeAudioImporter();
    void ConvertRegularToImportedSoundWave(class USoundWave* SoundWave, TSubclassOf<class UImportedSoundWave> ImportedSoundWaveClass, const FConvertRegularToImportedSoundWaveResult& Result);
}; // Size: 0x78

class URuntimeAudioTranscoder : public UObject
{

    void TranscodeRAWDataFromFile(FString FilePathFrom, ERuntimeRAWAudioFormat RAWFormatFrom, FString FilePathTo, ERuntimeRAWAudioFormat RAWFormatTo, const FTranscodeRAWDataFromFileResult& Result);
    void TranscodeRAWDataFromBuffer(TArray<uint8> RAWDataFrom, ERuntimeRAWAudioFormat RAWFormatFrom, ERuntimeRAWAudioFormat RAWFormatTo, const FTranscodeRAWDataFromBufferResult& Result);
    void TranscodeEncodedDataFromFile(FString FilePathFrom, ERuntimeAudioFormat EncodedFormatFrom, FString FilePathTo, ERuntimeAudioFormat EncodedFormatTo, uint8 quality, const FRuntimeAudioExportOverrideOptions& OverrideOptions, const FTranscodeEncodedDataFromFileResult& Result);
    void TranscodeEncodedDataFromBuffer(TArray<uint8> EncodedDataFrom, ERuntimeAudioFormat EncodedFormatFrom, ERuntimeAudioFormat EncodedFormatTo, uint8 quality, const FRuntimeAudioExportOverrideOptions& OverrideOptions, const FTranscodeEncodedDataFromBufferResult& Result);
}; // Size: 0x28

class URuntimeAudioUtilities : public UObject
{

    void ScanDirectoryForAudioFiles(FString Directory, bool bRecursive, const FScanDirectoryForAudioFilesResult& Result);
    void GetAudioHeaderInfoFromFile(FString FilePath, const FGetAudioHeaderInfoFromFileResult& Result);
    void GetAudioHeaderInfoFromBuffer(TArray<uint8> AudioData, const FGetAudioHeaderInfoFromBufferResult& Result);
    TArray<ERuntimeAudioFormat> GetAudioFormatsAdvanced(const TArray<uint8>& AudioData);
    TArray<ERuntimeAudioFormat> GetAudioFormats(FString FilePath);
    FString ConvertSecondsToString(int64 Seconds);
    void ConvertFloatArrayToBytesAsync(const TArray<float>& FloatArray, const FConvertFloatArrayToBytesAsyncResult& Result);
    TArray<uint8> ConvertFloatArrayToBytes(const TArray<float>& FloatArray);
}; // Size: 0x28

class URuntimeDefaultVADProvider : public URuntimeVADProviderBase
{

    bool SetVADMode(ERuntimeVADMode Mode);
}; // Size: 0x50

class URuntimeVADProviderBase : public UObject
{

    bool Reset();
    int32 ProcessAudio(const TArray<float>& PCMData, int32 SampleRate);
    bool IsSpeechActive();
    int32 GetRequiredSampleRate();
    float GetFrameDurationMs();
}; // Size: 0x28

class URuntimeVoiceActivityDetector : public UObject
{
    FRuntimeVoiceActivityDetectorOnSpeechStarted OnSpeechStarted;                     // 0x0058 (size: 0x10)
    void OnSpeechStarted();
    FRuntimeVoiceActivityDetectorOnSpeechEnded OnSpeechEnded;                         // 0x0080 (size: 0x10)
    void OnSpeechEnded();
    int32 MinimumSpeechDuration;                                                      // 0x0090 (size: 0x4)
    int32 SilenceDuration;                                                            // 0x0094 (size: 0x4)

    bool UseDefaultVADProvider();
    bool SetVADProvider(TSubclassOf<class URuntimeVADProviderBase> Provider);
    bool SetVADMode(ERuntimeVADMode Mode);
    bool ResetVAD();
    bool ProcessVAD(TArray<float> PCMData, int32 InSampleRate, int32 NumOfChannels);
    void OnSpeechStarted__DelegateSignature();
    void OnSpeechEnded__DelegateSignature();
    class URuntimeVADProviderBase* GetVADProvider();
    class URuntimeVoiceActivityDetector* CreateRuntimeVoiceActivityDetector();
}; // Size: 0x98

class UStreamingSoundWave : public UImportedSoundWave
{
    FStreamingSoundWaveOnSpeechStarted OnSpeechStarted;                               // 0x0510 (size: 0x10)
    void OnStreamingSpeechStarted();
    FStreamingSoundWaveOnSpeechEnded OnSpeechEnded;                                   // 0x0538 (size: 0x10)
    void OnStreamingSpeechEnded();
    class URuntimeVoiceActivityDetector* VADInstance;                                 // 0x0550 (size: 0x8)
    class URuntimeAcousticEchoCancellation* AECInstance;                              // 0x0558 (size: 0x8)

    bool UnbindAECFromSoundWavePlayback(class UImportedSoundWave* ImportedSoundWave);
    bool ToggleVAD(bool bVAD);
    bool ToggleAEC(bool bAEC, int32 InSampleRate, int32 NumOfChannels);
    bool SetVADProvider(TSubclassOf<class URuntimeVADProviderBase> Provider);
    bool SetVADMode(ERuntimeVADMode Mode);
    void SetStopSoundOnPlaybackFinish(bool bStop);
    bool SetSilenceDuration(int32 InDuration);
    bool SetMinimumSpeechDuration(int32 InDuration);
    void SetAECStreamDelay(int32 DelayMs);
    bool ResetVAD();
    void ResetAEC();
    void PreAllocateAudioData(int64 NumOfBytesToPreAllocate, const FPreAllocateAudioDataResult& Result);
    bool IsAECEnabled();
    class URuntimeVADProviderBase* GetVADProvider();
    int32 GetAECExpectedFrameSizePerChannel();
    class UStreamingSoundWave* CreateStreamingSoundWave();
    bool BindAECToSoundWavePlayback(class UImportedSoundWave* ImportedSoundWave);
    void AppendAudioDataFromRAW(TArray<uint8> RAWData, ERuntimeRAWAudioFormat RAWFormat, int32 InSampleRate, int32 NumOfChannels);
    void AppendAudioDataFromEncoded(TArray<uint8> AudioData, ERuntimeAudioFormat AudioFormat);
}; // Size: 0x560

class USynthBasedSoundWave : public UCapturableSoundWave
{
    class USynthComponent* SynthComponent;                                            // 0x0578 (size: 0x8)

    class USynthBasedSoundWave* CreateSynthBasedSoundWave(class USynthComponent* InSynthComponent);
}; // Size: 0x590

#endif
