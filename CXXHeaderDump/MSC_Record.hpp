#ifndef UE4SS_SDK_MSC_Record_HPP
#define UE4SS_SDK_MSC_Record_HPP

#include "MSC_Record_enums.hpp"

struct FRecordingSettings
{
    FString Filename;                                                                 // 0x0000 (size: 0x10)
    FDirectoryPath OutputDirectory;                                                   // 0x0010 (size: 0x10)
    FFrameRate FrameRate;                                                             // 0x0020 (size: 0x8)
    class USoundSubmix* SubmixToRecord;                                               // 0x0028 (size: 0x8)
    bool bUseCompression;                                                             // 0x0030 (size: 0x1)
    float CompressionQuality;                                                         // 0x0034 (size: 0x4)
    int32 videoBitrate;                                                               // 0x0038 (size: 0x4)
    int32 audioBitrate;                                                               // 0x003C (size: 0x4)
    int32 AudioSampleRate;                                                            // 0x0040 (size: 0x4)
    TEnumAsByte<EExportFormats> OutputFormat;                                         // 0x0044 (size: 0x1)
    TEnumAsByte<ECompressSpeed> CompressionSpeed;                                     // 0x0045 (size: 0x1)

}; // Size: 0x48

class ABaseRecord : public AActor
{
    FString Filename;                                                                 // 0x0220 (size: 0x10)
    FDirectoryPath OutputDirectory;                                                   // 0x0230 (size: 0x10)
    FFrameRate FrameRate;                                                             // 0x0240 (size: 0x8)
    class USoundSubmix* SubmixToRecord;                                               // 0x0248 (size: 0x8)
    bool bUseCompression;                                                             // 0x0250 (size: 0x1)
    float CompressionQuality;                                                         // 0x0254 (size: 0x4)
    int32 videoBitrate;                                                               // 0x0258 (size: 0x4)
    int32 audioBitrate;                                                               // 0x025C (size: 0x4)
    int32 AudioSampleRate;                                                            // 0x0260 (size: 0x4)
    TEnumAsByte<EExportFormats> OutputFormat;                                         // 0x0264 (size: 0x1)
    TEnumAsByte<ECompressSpeed> CompressionSpeed;                                     // 0x0265 (size: 0x1)
    FBaseRecordOnExportFinished OnExportFinished;                                     // 0x0268 (size: 0x10)
    void OnExportFinished();
    FRecordingSettings RecordingSettings;                                             // 0x0278 (size: 0x48)
    bool bIsRecording;                                                                // 0x02C0 (size: 0x1)
    bool bIsPaused;                                                                   // 0x02C1 (size: 0x1)
    bool bIsExporting;                                                                // 0x02C2 (size: 0x1)
    float ExportProgress;                                                             // 0x02C4 (size: 0x4)
    float LastProgress;                                                               // 0x02C8 (size: 0x4)
    float ExportTotalSeq;                                                             // 0x02CC (size: 0x4)
    FString MergeMode;                                                                // 0x02D0 (size: 0x10)
    int32 TotalFrames;                                                                // 0x02E0 (size: 0x4)
    FString FileFormat;                                                               // 0x02E8 (size: 0x10)
    FString VideoCapDir;                                                              // 0x02F8 (size: 0x10)
    FString AppMergerPath;                                                            // 0x0308 (size: 0x10)

    bool StartCapture();
    bool ResumeCapture();
    bool PauseCapture();
    void OnExportFinish();
    float GetTimeByFrameRate();
    bool GetIsRecording();
    bool GetIsPaused();
    void GetIsExporting(bool& ReturnValue, float& Progress);
    FString GetFormattedFileName(bool WithFormat);
    bool FinishCapture();
}; // Size: 0x348

class ACamera2D : public ASceneCapture2D
{
    class UCameraComponent* PreviewCam;                                               // 0x0238 (size: 0x8)

}; // Size: 0x240

class ACamera360 : public ASceneCaptureCube
{
    class UCameraComponent* PreviewCam;                                               // 0x0238 (size: 0x8)
    class USphereComponent* PP_Bound;                                                 // 0x0240 (size: 0x8)
    class UPostProcessComponent* PP_CaptureCube;                                      // 0x0248 (size: 0x8)

}; // Size: 0x250

class ARecordActor : public ABaseRecord
{
    bool bSeparateAudioVideo;                                                         // 0x0348 (size: 0x1)
    class UBillboardComponent* Billboard;                                             // 0x0350 (size: 0x8)
    class UMovieSceneCapture* MovieCapture;                                           // 0x0358 (size: 0x8)
    class UMSC_PreviewRecorder* PreviewRecorder;                                      // 0x0360 (size: 0x8)
    class UMSC_AudioCaptureProtocol* MSC_AudioProtocol;                               // 0x0368 (size: 0x8)
    class UMSC_VideoCaptureProtocol* MSC_VideoProtocol;                               // 0x0370 (size: 0x8)

    bool SetScreenRecordingSettings(FRecordingSettings Settings, bool bInSeparateAudVid);
    bool SetRecordingSettings(FString InFilename, FFrameRate InFrameRate, FDirectoryPath InOutputPath, bool InUseCompression, float InCompressionQuality, int32 InVideoBitrate, int32 InAudioBitrate, int32 InAudioSampleRate, bool InSeparateAudioVideo, TEnumAsByte<EExportFormats> InOutputFormat, TEnumAsByte<ECompressSpeed> InCompressSpeedPreset, class USoundSubmix* InSubmixToRecord);
}; // Size: 0x388

class ARecordCameraManager : public ABaseRecord
{
    class UBillboardComponent* BillboardRoot;                                         // 0x0348 (size: 0x8)
    class UCameraComponent* PreviewCam;                                               // 0x0350 (size: 0x8)
    class UStaticMeshComponent* PlaneViewMesh;                                        // 0x0358 (size: 0x8)
    class USceneCaptureComponent2D* Capture2DView;                                    // 0x0360 (size: 0x8)
    FCaptureResolution Resolution;                                                    // 0x0368 (size: 0x8)
    bool bUseHDR;                                                                     // 0x0370 (size: 0x1)
    bool bAudioByCamera;                                                              // 0x0371 (size: 0x1)
    class UTexture* ResultTexture;                                                    // 0x0378 (size: 0x8)
    class UTextureRenderTarget2D* RenderTarget2D;                                     // 0x0380 (size: 0x8)
    class UTextureRenderTargetCube* RenderTarget360;                                  // 0x0388 (size: 0x8)
    class UMaterialInstanceDynamic* PlaneDyMat;                                       // 0x0390 (size: 0x8)
    class UMaterialInstance* Flat360Material;                                         // 0x0398 (size: 0x8)
    int32 FrameCount;                                                                 // 0x03A0 (size: 0x4)
    TEnumAsByte<ECameraType> SelectCam;                                               // 0x0410 (size: 0x1)
    TEnumAsByte<ECameraType> LastCamType;                                             // 0x0411 (size: 0x1)
    TArray<class ACamera2D*> AllCam2D;                                                // 0x0418 (size: 0x10)
    TArray<class ACamera360*> AllCam360;                                              // 0x0428 (size: 0x10)
    int32 CamID;                                                                      // 0x0438 (size: 0x4)
    int32 LastCamID;                                                                  // 0x043C (size: 0x4)
    TEnumAsByte<ECaptureSourceType> CaptureSource;                                    // 0x0440 (size: 0x1)
    TEnumAsByte<ECaptureSourceType> LastCaptureSource;                                // 0x0441 (size: 0x1)
    bool UseFixForLumen;                                                              // 0x0442 (size: 0x1)
    bool LastUseFixForLumen;                                                          // 0x0443 (size: 0x1)
    float FixLumenIntensity;                                                          // 0x0444 (size: 0x4)
    float LastFixLumenIntensity;                                                      // 0x0448 (size: 0x4)
    bool bIsPreview;                                                                  // 0x044C (size: 0x1)
    class APlayerController* PlayerControl;                                           // 0x0450 (size: 0x8)

    void UpdatePreview();
    void SetupRenderTarget();
    bool SetCameraRecordingSettings(FRecordingSettings Settings, FCaptureResolution InResolution, TEnumAsByte<ECameraType> InCameraType, bool bInAudioByCam);
    void RemoveCamera();
    class UCameraComponent* GetPreviewCam();
    class UTexture* GetCameraViewTexture();
    class USceneCaptureComponentCube* GetCam360CaptureComp();
    class USceneCaptureComponent2D* GetCam2DCaptureComp();
    bool CheckValidCam(TEnumAsByte<ECameraType> CamType);
    void AddCamera();
}; // Size: 0x460

class ARecordViewportActor : public ABaseRecord
{
    class UBillboardComponent* BillboardRoot;                                         // 0x0348 (size: 0x8)
    class USceneCaptureComponent2D* Capture2DView;                                    // 0x0350 (size: 0x8)
    TEnumAsByte<ECaptureSourceType> CaptureSource;                                    // 0x0358 (size: 0x1)
    bool UseFixForLumen;                                                              // 0x0359 (size: 0x1)
    float FixLumenIntensity;                                                          // 0x035C (size: 0x4)
    FCaptureResolution Resolution;                                                    // 0x0360 (size: 0x8)
    bool ShowUI;                                                                      // 0x0368 (size: 0x1)
    class UTexture* ResultTexture;                                                    // 0x0370 (size: 0x8)
    class UTextureRenderTarget2D* RenderTarget2D;                                     // 0x0378 (size: 0x8)
    TArray<class UWidgetComponent*> AllWidgetComp;                                    // 0x0380 (size: 0x10)

    bool SetViewportRecordingSettings(FRecordingSettings Settings, FCaptureResolution InResolution, bool InShowUI);
    class UTexture* GetCameraViewTexture();
}; // Size: 0x440

class UMSC_AudioCaptureProtocol : public UMasterAudioSubmixCaptureProtocol
{
    class USoundSubmix* SubmixToRecord;                                               // 0x0090 (size: 0x8)

}; // Size: 0x98

class UMSC_PreviewRecorder : public UObject
{
    class USoundSubmix* SubmixToRecord;                                               // 0x0038 (size: 0x8)
    class UWorld* World;                                                              // 0x0040 (size: 0x8)

}; // Size: 0xA0

class UMSC_VideoCaptureProtocol : public UVideoCaptureProtocol
{
}; // Size: 0xA0

#endif
