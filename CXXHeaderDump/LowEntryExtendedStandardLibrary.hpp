#ifndef UE4SS_SDK_LowEntryExtendedStandardLibrary_HPP
#define UE4SS_SDK_LowEntryExtendedStandardLibrary_HPP

#include "LowEntryExtendedStandardLibrary_enums.hpp"

struct FLowEntryRegexCaptureGroup
{
    int32 CaptureGroupNumber;                                                         // 0x0000 (size: 0x4)
    int32 BeginIndex;                                                                 // 0x0004 (size: 0x4)
    int32 EndIndex;                                                                   // 0x0008 (size: 0x4)
    FString Match;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLowEntryRegexMatch
{
    int32 MatchNumber;                                                                // 0x0000 (size: 0x4)
    int32 BeginIndex;                                                                 // 0x0004 (size: 0x4)
    int32 EndIndex;                                                                   // 0x0008 (size: 0x4)
    FString Match;                                                                    // 0x0010 (size: 0x10)
    TArray<FLowEntryRegexCaptureGroup> CaptureGroups;                                 // 0x0020 (size: 0x10)

}; // Size: 0x30

class ULowEntryBitDataEntry : public UObject
{
    uint8 Type;                                                                       // 0x0028 (size: 0x1)
    uint8 ByteValue;                                                                  // 0x0029 (size: 0x1)
    int32 IntegerValue;                                                               // 0x002C (size: 0x4)
    int64 LongValue;                                                                  // 0x0030 (size: 0x8)
    class ULowEntryLong* LongBytesValue;                                              // 0x0038 (size: 0x8)
    float FloatValue;                                                                 // 0x0040 (size: 0x4)
    class ULowEntryDouble* DoubleBytesValue;                                          // 0x0048 (size: 0x8)
    bool BooleanValue;                                                                // 0x0050 (size: 0x1)
    FString StringUtf8Value;                                                          // 0x0058 (size: 0x10)
    TArray<uint8> ByteArrayValue;                                                     // 0x0068 (size: 0x10)
    TArray<int32> IntegerArrayValue;                                                  // 0x0078 (size: 0x10)
    TArray<int64> LongArrayValue;                                                     // 0x0088 (size: 0x10)
    TArray<class ULowEntryLong*> LongBytesArrayValue;                                 // 0x0098 (size: 0x10)
    TArray<float> FloatArrayValue;                                                    // 0x00A8 (size: 0x10)
    TArray<class ULowEntryDouble*> DoubleBytesArrayValue;                             // 0x00B8 (size: 0x10)
    TArray<bool> BooleanArrayValue;                                                   // 0x00C8 (size: 0x10)
    TArray<FString> StringUtf8ArrayValue;                                             // 0x00D8 (size: 0x10)

}; // Size: 0xE8

class ULowEntryBitDataReader : public UObject
{
    TArray<uint8> bytes;                                                              // 0x0028 (size: 0x10)
    int32 Position;                                                                   // 0x0038 (size: 0x4)
    uint8 CurrentByte;                                                                // 0x003C (size: 0x1)
    int32 CurrentBytePosition;                                                        // 0x0040 (size: 0x4)

    void SetPosition(const int32 Position_);
    void Reset();
    int32 Remaining();
    TArray<FString> GetStringUtf8Array();
    FString GetStringUtf8();
    TArray<int32> GetPositiveInteger3Array();
    int32 GetPositiveInteger3();
    TArray<int32> GetPositiveInteger2Array();
    int32 GetPositiveInteger2();
    TArray<int32> GetPositiveInteger1Array();
    int32 GetPositiveInteger1();
    int32 GetPosition();
    TArray<class ULowEntryLong*> GetLongBytesArray();
    class ULowEntryLong* GetLongBytes();
    TArray<int64> GetLongArray();
    int64 GetLong();
    int32 GetIntegerMostSignificantBits(int32 BitCount);
    int32 GetIntegerLeastSignificantBits(const int32 BitCount);
    TArray<int32> GetIntegerArrayMostSignificantBits(const int32 BitCount);
    TArray<int32> GetIntegerArrayLeastSignificantBits(const int32 BitCount);
    TArray<int32> GetIntegerArray();
    int32 GetInteger();
    TArray<float> GetFloatArray();
    float GetFloat();
    TArray<class ULowEntryDouble*> GetDoubleBytesArray();
    class ULowEntryDouble* GetDoubleBytes();
    class ULowEntryBitDataReader* GetClone();
    uint8 GetByteMostSignificantBits(const int32 BitCount);
    uint8 GetByteLeastSignificantBits(const int32 BitCount);
    TArray<uint8> GetByteArrayMostSignificantBits(const int32 BitCount);
    TArray<uint8> GetByteArrayLeastSignificantBits(const int32 BitCount);
    TArray<uint8> GetByteArray();
    uint8 GetByte();
    TArray<bool> GetBooleanArray();
    bool GetBoolean();
    TArray<bool> GetBitArray();
    bool GetBit();
    void Empty();
}; // Size: 0x48

class ULowEntryBitDataWriter : public UObject
{
    TArray<uint8> bytes;                                                              // 0x0028 (size: 0x10)
    uint8 CurrentByte;                                                                // 0x0038 (size: 0x1)
    int32 CurrentBytePosition;                                                        // 0x003C (size: 0x4)

    void AddStringUtf8Array(const TArray<FString>& Value);
    void AddStringUtf8(FString Value);
    void AddPositiveInteger3Array(const TArray<int32>& Value);
    void AddPositiveInteger3(const int32 Value);
    void AddPositiveInteger2Array(const TArray<int32>& Value);
    void AddPositiveInteger2(const int32 Value);
    void AddPositiveInteger1Array(const TArray<int32>& Value);
    void AddPositiveInteger1(const int32 Value);
    void AddLongBytesArray(const TArray<class ULowEntryLong*>& Value);
    void AddLongBytes(class ULowEntryLong* Value);
    void AddLongArray(const TArray<int64>& Value);
    void AddLong(const int64 Value);
    void AddIntegerMostSignificantBits(const int32 Value, int32 BitCount);
    void AddIntegerLeastSignificantBits(const int32 Value, const int32 BitCount);
    void AddIntegerArrayMostSignificantBits(const TArray<int32>& Value, const int32 BitCount);
    void AddIntegerArrayLeastSignificantBits(const TArray<int32>& Value, const int32 BitCount);
    void AddIntegerArray(const TArray<int32>& Value);
    void AddInteger(const int32 Value);
    void AddFloatArray(const TArray<float>& Value);
    void AddFloat(const float Value);
    void AddDoubleBytesArray(const TArray<class ULowEntryDouble*>& Value);
    void AddDoubleBytes(class ULowEntryDouble* Value);
    void AddByteMostSignificantBits(const uint8 Value, const int32 BitCount);
    void AddByteLeastSignificantBits(const uint8 Value, const int32 BitCount);
    void AddByteArrayMostSignificantBits(const TArray<uint8>& Value, const int32 BitCount);
    void AddByteArrayLeastSignificantBits(const TArray<uint8>& Value, const int32 BitCount);
    void AddByteArray(const TArray<uint8>& Value);
    void AddByte(const uint8 Value);
    void AddBooleanArray(const TArray<bool>& Value);
    void AddBoolean(const bool Value);
    void AddBitArray(const TArray<bool>& Value);
    void AddBit(const bool Value);
}; // Size: 0x40

class ULowEntryByteArray : public UObject
{
    TArray<uint8> ByteArray;                                                          // 0x0028 (size: 0x10)

}; // Size: 0x38

class ULowEntryByteDataEntry : public UObject
{
    uint8 Type;                                                                       // 0x0028 (size: 0x1)
    uint8 ByteValue;                                                                  // 0x0029 (size: 0x1)
    int32 IntegerValue;                                                               // 0x002C (size: 0x4)
    int64 LongValue;                                                                  // 0x0030 (size: 0x8)
    class ULowEntryLong* LongBytesValue;                                              // 0x0038 (size: 0x8)
    float FloatValue;                                                                 // 0x0040 (size: 0x4)
    class ULowEntryDouble* DoubleBytesValue;                                          // 0x0048 (size: 0x8)
    bool BooleanValue;                                                                // 0x0050 (size: 0x1)
    FString StringUtf8Value;                                                          // 0x0058 (size: 0x10)
    TArray<uint8> ByteArrayValue;                                                     // 0x0068 (size: 0x10)
    TArray<int32> IntegerArrayValue;                                                  // 0x0078 (size: 0x10)
    TArray<int64> LongArrayValue;                                                     // 0x0088 (size: 0x10)
    TArray<class ULowEntryLong*> LongBytesArrayValue;                                 // 0x0098 (size: 0x10)
    TArray<float> FloatArrayValue;                                                    // 0x00A8 (size: 0x10)
    TArray<class ULowEntryDouble*> DoubleBytesArrayValue;                             // 0x00B8 (size: 0x10)
    TArray<bool> BooleanArrayValue;                                                   // 0x00C8 (size: 0x10)
    TArray<FString> StringUtf8ArrayValue;                                             // 0x00D8 (size: 0x10)

}; // Size: 0xE8

class ULowEntryByteDataReader : public UObject
{
    TArray<uint8> bytes;                                                              // 0x0028 (size: 0x10)
    int32 Position;                                                                   // 0x0038 (size: 0x4)

    void SetPosition(const int32 Position_);
    void Reset();
    int32 Remaining();
    TArray<FString> GetStringUtf8Array();
    FString GetStringUtf8();
    TArray<int32> GetPositiveInteger3Array();
    int32 GetPositiveInteger3();
    TArray<int32> GetPositiveInteger2Array();
    int32 GetPositiveInteger2();
    TArray<int32> GetPositiveInteger1Array();
    int32 GetPositiveInteger1();
    int32 GetPosition();
    TArray<class ULowEntryLong*> GetLongBytesArray();
    class ULowEntryLong* GetLongBytes();
    TArray<int64> GetLongArray();
    int64 GetLong();
    TArray<int32> GetIntegerArray();
    int32 GetInteger();
    TArray<float> GetFloatArray();
    float GetFloat();
    TArray<class ULowEntryDouble*> GetDoubleBytesArray();
    class ULowEntryDouble* GetDoubleBytes();
    class ULowEntryByteDataReader* GetClone();
    TArray<uint8> GetByteArray();
    uint8 GetByte();
    TArray<bool> GetBooleanArray();
    bool GetBoolean();
    void Empty();
}; // Size: 0x40

class ULowEntryByteDataWriter : public UObject
{
    TArray<uint8> bytes;                                                              // 0x0028 (size: 0x10)

    void AddStringUtf8Array(const TArray<FString>& Value);
    void AddStringUtf8(FString Value);
    void AddPositiveInteger3Array(const TArray<int32>& Value);
    void AddPositiveInteger3(const int32 Value);
    void AddPositiveInteger2Array(const TArray<int32>& Value);
    void AddPositiveInteger2(const int32 Value);
    void AddPositiveInteger1Array(const TArray<int32>& Value);
    void AddPositiveInteger1(const int32 Value);
    void AddLongBytesArray(const TArray<class ULowEntryLong*>& Value);
    void AddLongBytes(class ULowEntryLong* Value);
    void AddLongArray(const TArray<int64>& Value);
    void AddLong(const int64 Value);
    void AddIntegerArray(const TArray<int32>& Value);
    void AddInteger(const int32 Value);
    void AddFloatArray(const TArray<float>& Value);
    void AddFloat(const float Value);
    void AddDoubleBytesArray(const TArray<class ULowEntryDouble*>& Value);
    void AddDoubleBytes(class ULowEntryDouble* Value);
    void AddByteArray(const TArray<uint8>& Value);
    void AddByte(const uint8 Value);
    void AddBooleanArray(const TArray<bool>& Value);
    void AddBoolean(const bool Value);
}; // Size: 0x38

class ULowEntryDouble : public UObject
{
    TArray<uint8> bytes;                                                              // 0x0028 (size: 0x10)

    void SetBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    bool LongBytes_LessThan(class ULowEntryLong* Value);
    bool LongBytes_GreaterThan(class ULowEntryLong* Value);
    bool Integer_LessThan(const int32 Value);
    bool Integer_GreaterThan(const int32 Value);
    TArray<uint8> GetBytes();
    void Float_Subtract(const float Value);
    bool Float_LessThan(const float Value);
    bool Float_GreaterThan(const float Value);
    bool Float_Equals(const float Value);
    void Float_Add(const float Value);
    void DoubleBytes_Subtract(class ULowEntryDouble* Value);
    bool DoubleBytes_LessThan(class ULowEntryDouble* Value);
    bool DoubleBytes_GreaterThan(class ULowEntryDouble* Value);
    bool DoubleBytes_Equals(class ULowEntryDouble* Value);
    void DoubleBytes_Add(class ULowEntryDouble* Value);
    class ULowEntryDouble* CreateClone();
    FString CastToString(const int32 MinFractionalDigits);
    class ULowEntryLong* CastToLongBytes();
}; // Size: 0x38

class ULowEntryExecutionQueue : public UObject
{
    int32 Count;                                                                      // 0x0028 (size: 0x4)
    bool Next;                                                                        // 0x002C (size: 0x1)

}; // Size: 0x30

class ULowEntryExtendedStandardLibrary : public UBlueprintFunctionLibrary
{

    bool XboxOnePlatform();
    bool WithEditor();
    bool WindowsRtPlatform();
    bool WindowsRtArmPlatform();
    bool WindowsPlatform();
    FString WindowsNewlineCharacter();
    bool Windows64Platform();
    bool Windows32Platform();
    void TickSeconds(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, const int32 ticks, const float SecondsInterval, int32& Tick);
    void TickFrames(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, const int32 ticks, const int32 FramesInterval, int32& Tick);
    void TextureUpdateResource(class UTexture* Texture);
    void TextureRenderTarget2DToPixels(class UTextureRenderTarget2D* TextureRenderTarget2D, int32& Width, int32& Height, TArray<FColor>& Pixels);
    void TextureRenderTarget2DToBytes(class UTextureRenderTarget2D* TextureRenderTarget2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality);
    void Texture2DToPixels(class UTexture2D* Texture2D, int32& Width, int32& Height, TArray<FColor>& Pixels);
    void Texture2DToBytes(class UTexture2D* Texture2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality);
    bool TestBuild();
    FString TabCharacter();
    bool SwitchPlatform();
    TArray<uint8> StringToBytesUtf8(FString String);
    void SplitBytes(const TArray<uint8>& ByteArray, const int32 LengthA, TArray<uint8>& A, TArray<uint8>& B);
    void SoundClass_SetVolume(class USoundClass* SoundClass, const float Volume);
    void SoundClass_SetPitch(class USoundClass* SoundClass, const float Pitch);
    float SoundClass_GetVolume(class USoundClass* SoundClass);
    float SoundClass_GetPitch(class USoundClass* SoundClass);
    void SortTimespanArrayDirectly(TArray<FTimespan>& TimespanArray, const bool Reversed);
    TArray<FTimespan> SortTimespanArray(const TArray<FTimespan>& TimespanArray, const bool Reversed);
    void SortStringArrayDirectly(TArray<FString>& StringArray, const bool Reversed);
    TArray<FString> SortStringArray(const TArray<FString>& StringArray, const bool Reversed);
    void SortObjectArrayDirectly(TArray<class UObject*>& ObjectArray, FSortObjectArrayDirectlyComparator Comparator, const bool Reversed);
    TArray<class UObject*> SortObjectArray(const TArray<class UObject*>& ObjectArray, FSortObjectArrayComparator Comparator, const bool Reversed);
    void SortIntegerArrayDirectly(TArray<int32>& IntegerArray, const bool Reversed);
    TArray<int32> SortIntegerArray(const TArray<int32>& IntegerArray, const bool Reversed);
    void SortFloatArrayDirectly(TArray<float>& FloatArray, const bool Reversed);
    TArray<float> SortFloatArray(const TArray<float>& FloatArray, const bool Reversed);
    void SortDateTimeArrayDirectly(TArray<FDateTime>& DateTimeArray, const bool Reversed);
    TArray<FDateTime> SortDateTimeArray(const TArray<FDateTime>& DateTimeArray, const bool Reversed);
    void SortByteArrayDirectly(TArray<uint8>& ByteArray, const bool Reversed);
    TArray<uint8> SortByteArray(const TArray<uint8>& ByteArray, const bool Reversed);
    void SimpleKismetSystemLibraryPrintString(FString inString);
    bool ShippingBuild();
    TArray<uint8> Sha512(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    TArray<uint8> Sha256(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    TArray<uint8> Sha1(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    void SetWorldRenderingEnabled(const bool Enabled);
    void SetWindowSize(const int32 Width, const int32 Height);
    void SetWindowPosition(const int32 X, const int32 Y);
    void SetWindowPositiomInPercentagesCentered(const float X, const float Y);
    void SetWindowMode(const bool Fullscreen, const bool IsFullscreenWindowed);
    void SetSplitScreenType_TwoPlayers(const ELowEntrySplitScreenTypeTwoPlayers Type);
    void SetSplitScreenType_ThreePlayers(const ELowEntrySplitScreenTypeThreePlayers Type);
    void SetSplitScreenEnabled(const bool Enabled);
    void SetMousePositionInPercentages(const float X, const float Y);
    void SetMousePosition(const int32 X, const int32 Y);
    void SetMouseLockedToViewport(const bool Locked);
    void SetGenericTeamId(class AActor* Target, const uint8 TeamID);
    void ServerChangeMap(class UObject* WorldContextObject, FString Map, FString Args, class APlayerController* SpecificPlayer);
    void SceneCaptureComponent2DToPixels(class USceneCaptureComponent2D* SceneCaptureComponent2D, int32& Width, int32& Height, TArray<FColor>& Pixels);
    void SceneCaptureComponent2DToBytes(class USceneCaptureComponent2D* SceneCaptureComponent2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality);
    void SceneCaptureComponent2D_SetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, const float FOV);
    void SceneCaptureComponent2D_GetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float& FOV);
    void SceneCapture2DToPixels(class ASceneCapture2D* SceneCapture2D, int32& Width, int32& Height, TArray<FColor>& Pixels);
    void SceneCapture2DToBytes(class ASceneCapture2D* SceneCapture2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality);
    void SceneCapture2D_SetFov(class ASceneCapture2D* SceneCapture2D, const float FOV);
    void SceneCapture2D_GetFov(class ASceneCapture2D* SceneCapture2D, float& FOV);
    float RoundDecimals(float Number, int32 Decimals);
    void RetriggerableRandomDelayFrames(class UObject* WorldContextObject, int32 MinFrames, int32 MaxFrames, FLatentActionInfo LatentInfo);
    void RetriggerableRandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, FLatentActionInfo LatentInfo);
    void RetriggerableDelayFrames(class UObject* WorldContextObject, int32 Frames, FLatentActionInfo LatentInfo);
    FString ReplaceCharactersExcept(FString String, FString ReplacementCharacter, const bool KeepLowercaseAZ, const bool KeepUppercaseAZ, const bool KeepNumbers, FString OtherCharactersToKeep);
    FString RemoveCharactersExcept(FString String, const bool KeepLowercaseAZ, const bool KeepUppercaseAZ, const bool KeepNumbers, FString OtherCharactersToKeep);
    FString RegexReplace(FString String, FString Pattern, FString Replacement);
    bool RegexMatch(FString String, FString Pattern);
    TArray<FLowEntryRegexMatch> RegexGetMatches(FString String, FString Pattern);
    int32 RegexCount(FString String, FString Pattern);
    void RandomDelayFrames(class UObject* WorldContextObject, int32 MinFrames, int32 MaxFrames, FLatentActionInfo LatentInfo);
    void RandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, FLatentActionInfo LatentInfo);
    void QueueExecutions(class UObject* WorldContextObject, class ULowEntryExecutionQueue*& Queue, FLatentActionInfo LatentInfo);
    bool Ps4Platform();
    void PlayerControllerGetLocalPlayer(class APlayerController* PlayerController, bool& success, class ULocalPlayer*& LocalPlayer);
    class UTexture2D* PixelsToTexture2D(const int32 Width, const int32 Height, const TArray<FColor>& Pixels);
    class UTexture2D* PixelsToExistingTexture2D(bool& ReusedGivenTexture2D, class UTexture2D* Texture2D, const int32 Width, const int32 Height, const TArray<FColor>& Pixels);
    void PixelsToBytes(const int32 Width, const int32 Height, const TArray<FColor>& Pixels, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality);
    TArray<uint8> Pearson(const TArray<uint8>& ByteArray, const int32 HashLength, int32 Index, int32 Length);
    class ULowEntryLong* ParseStringIntoLongBytes(FString String);
    int64 ParseStringIntoLong(FString String);
    class ULowEntryDouble* ParseStringIntoDoubleBytes(FString String);
    bool ParsedHashcashIsValid(class ULowEntryParsedHashcash* Target);
    void NextQueueExecution(class ULowEntryExecutionQueue* Queue);
    FString NewlineCharacter();
    FString MinString(FString A, FString B);
    void MinOfTimespanArray(const TArray<FTimespan>& TimespanArray, int32& IndexOfMinValue, FTimespan& MinValue);
    void MinOfStringArray(const TArray<FString>& StringArray, int32& IndexOfMinValue, FString& MinValue);
    void MinOfDateTimeArray(const TArray<FDateTime>& DateTimeArray, int32& IndexOfMinValue, FDateTime& MinValue);
    TArray<uint8> MergeEncapsulatedByteArrays(const TArray<class ULowEntryByteArray*>& ByteArrays);
    TArray<uint8> MergeBytes(TArray<uint8> A, TArray<uint8> B);
    TArray<uint8> Md5(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    FString MaxString(FString A, FString B);
    void MaxOfTimespanArray(const TArray<FTimespan>& TimespanArray, int32& IndexOfMaxValue, FTimespan& MaxValue);
    void MaxOfStringArray(const TArray<FString>& StringArray, int32& IndexOfMaxValue, FString& MaxValue);
    void MaxOfDateTimeArray(const TArray<FDateTime>& DateTimeArray, int32& IndexOfMaxValue, FDateTime& MaxValue);
    bool MacPlatform();
    TArray<uint8> LongToBytes(const int64 Value);
    class ULowEntryLong* Long_CreateZero();
    class ULowEntryLong* Long_Create(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    void LoadVideo(class UMediaSoundComponent* MediaSoundComponent, FString URL, bool& success, class UMediaPlayer*& MediaPlayer, class UMediaTexture*& MediaTexture, const bool PlayOnOpen, const bool loop);
    bool LinuxPlatform();
    bool LessStringString(FString A, FString B);
    bool LessIntegerFloat(const int32 A, const float B);
    bool LessIntegerByte(const int32 A, const uint8 B);
    bool LessFloatInteger(const float A, const int32 B);
    bool LessFloatByte(const float A, const uint8 B);
    bool LessEqualStringString(FString A, FString B);
    bool LessEqualIntegerFloat(const int32 A, const float B);
    bool LessEqualIntegerByte(const int32 A, const uint8 B);
    bool LessEqualFloatInteger(const float A, const int32 B);
    bool LessEqualFloatByte(const float A, const uint8 B);
    bool LessEqualByteInteger(const uint8 A, const int32 B);
    bool LessEqualByteFloat(const uint8 A, const float B);
    bool LessByteInteger(const uint8 A, const int32 B);
    bool LessByteFloat(const uint8 A, const float B);
    void LatentAction_Create_String(class ULowEntryLatentActionString*& LatentAction);
    void LatentAction_Create_Object(class ULowEntryLatentActionObject*& LatentAction);
    void LatentAction_Create_None(class ULowEntryLatentActionNone*& LatentAction);
    void LatentAction_Create_Integer(class ULowEntryLatentActionInteger*& LatentAction);
    void LatentAction_Create_Float(class ULowEntryLatentActionFloat*& LatentAction);
    void LatentAction_Create_Boolean(class ULowEntryLatentActionBoolean*& LatentAction);
    void JoinGame(class UObject* WorldContextObject, FString ServerAddress, FString Args, class APlayerController* SpecificPlayer);
    void IsWorldRenderingEnabled(bool& success, bool& Enabled);
    bool IsBitSet(const uint8 B, const int32 Bit);
    bool IsAndroidDaydreamApplication();
    bool IosPlatform();
    TArray<uint8> IntegerToBytes(const int32 Value);
    bool Html5Platform();
    void HostGame(class UObject* WorldContextObject, FString Map, FString Args, class APlayerController* SpecificPlayer);
    TArray<uint8> HMAC(const TArray<uint8>& ByteArray, const TArray<uint8>& Key, ELowEntryHmacAlgorithm Algorithm, int32 Index, int32 Length);
    TArray<uint8> HexToBytes(FString Hex);
    TArray<class ULowEntryParsedHashcash*> HashcashParseArray(const TArray<FString>& Hashes);
    class ULowEntryParsedHashcash* HashcashParse(FString Hash);
    FString HashcashCustomCreationDate(FString Resource, const FDateTime& UtcDate, const int32 Bits);
    TArray<FString> HashcashArrayCustomCreationDate(const TArray<FString>& Resources, const FDateTime& UtcDate, const int32 Bits);
    TArray<FString> HashcashArray(const TArray<FString>& Resources, const int32 Bits);
    FString Hashcash(FString Resource, const int32 Bits);
    bool GreaterStringString(FString A, FString B);
    bool GreaterIntegerFloat(const int32 A, const float B);
    bool GreaterIntegerByte(const int32 A, const uint8 B);
    bool GreaterFloatInteger(const float A, const int32 B);
    bool GreaterFloatByte(const float A, const uint8 B);
    bool GreaterEqualStringString(FString A, FString B);
    bool GreaterEqualIntegerFloat(const int32 A, const float B);
    bool GreaterEqualIntegerByte(const int32 A, const uint8 B);
    bool GreaterEqualFloatInteger(const float A, const int32 B);
    bool GreaterEqualFloatByte(const float A, const uint8 B);
    bool GreaterEqualByteInteger(const uint8 A, const int32 B);
    bool GreaterEqualByteFloat(const uint8 A, const float B);
    bool GreaterByteInteger(const uint8 A, const int32 B);
    bool GreaterByteFloat(const uint8 A, const float B);
    TArray<FColor> GrayscalePixels(const TArray<FColor>& pixel);
    FColor GrayscalePixel(const FColor& pixel);
    void GetWindowSize(bool& success, int32& Width, int32& Height);
    void GetWindowPosition(bool& success, int32& X, int32& Y);
    void GetWindowPositiomInPercentagesCentered(bool& success, float& X, float& Y);
    void GetWindowMode(bool& success, bool& Fullscreen, bool& IsFullscreenWindowed);
    void GetWindowBounds(bool& success, int32& X, int32& Y, int32& Width, int32& Height);
    void GetWindowBorderSize(bool& success, FMargin& Margin);
    FName GetUserFocusedWidgetType(const int32 UserIndex);
    void GetSplitScreenType(ELowEntrySplitScreenType& Type);
    FString GetProjectVersion();
    FString GetProjectName();
    void GetPrimaryMonitorWorkArea(int32& X, int32& Y, int32& Width, int32& Height);
    void GetPrimaryMonitorResolution(int32& Width, int32& Height);
    void GetMousePositionInPercentages(bool& success, float& X, float& Y);
    void GetMousePosition(bool& success, int32& X, int32& Y);
    void GetMaximumVolume(int32& Volume, bool& success);
    FVector2D GetLocalToAbsoluteScale(const FGeometry& Geometry);
    FName GetKeyboardFocusedWidgetType();
    void GetGenericTeamId(class AActor* Target, uint8& TeamID);
    void GetCurrentVolumePercentage(float& Percentage, bool& success);
    void GetCurrentVolume(int32& Volume, bool& success);
    void GetClassWithName(FString ClassName, UClass*& Class_, bool& success);
    uint8 GetByteWithBitSet(const uint8 Byte, const int32 Bit, const bool Value);
    void GetBatteryTemperature(float& Celsius, bool& success);
    void GetBatteryState(ELowEntryBatteryState& State, bool& success);
    void GetBatteryCharge(int32& Percentage, bool& success);
    void GetAndroidVolume(int32& Volume);
    FString GetAndroidVersion();
    FString GetAndroidOsLanguage();
    int32 GetAndroidNumberOfCores();
    FString GetAndroidGpuFamily();
    FString GetAndroidGlVersion();
    FString GetAndroidDeviceModel();
    FString GetAndroidDeviceMake();
    FString GetAndroidDefaultLocale();
    int32 GetAndroidBuildVersion();
    FVector2D GetAbsoluteToLocalScale(const FGeometry& Geometry);
    FVector2D GetAbsoluteSize(const FGeometry& Geometry);
    void GenerateRandomBytesRandomLength(int32 MinLength, int32 MaxLength, TArray<uint8>& ByteArray);
    void GenerateRandomBytes(const int32 Length, TArray<uint8>& ByteArray);
    float FloorDecimals(float Number, int32 Decimals);
    TArray<uint8> FloatToBytes(const float Value);
    void ExecToInteger(const ELowEntryExtendedStandardLibrary0to9 Branch, int32& Value);
    void ExecToByte(const ELowEntryExtendedStandardLibrary0to9 Branch, uint8& Value);
    void ExecToBoolean(const ELowEntryExtendedStandardLibraryTrueOrFalse Branch, bool& Value);
    class ULowEntryByteArray* EncapsulateByteArray(const TArray<uint8>& ByteArray);
    class ULowEntryDouble* Double_CreateZero();
    class ULowEntryDouble* Double_Create(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    FVector2D Divide_Vector2dVector2d(const FVector2D& A, const FVector2D& B);
    bool DevelopmentBuild();
    bool DesktopPlatform();
    void DelayFrames(class UObject* WorldContextObject, int32 Frames, FLatentActionInfo LatentInfo);
    bool DebugBuild();
    void DateTime_ToUnixTimestamp(const FDateTime& DateTime, class ULowEntryLong*& Timestamp);
    void DateTime_ToString(const FDateTime& DateTime, FString& String, FString Format);
    void DateTime_ToIso8601(const FDateTime& DateTime, FString& String);
    void DateTime_FromUnixTimestamp(class ULowEntryLong* Timestamp, FDateTime& DateTime);
    FString CreateString(const int32 Length, FString Filler);
    void CreateObject(UClass* Class, class UObject*& Object);
    void Crash();
    void ConvertUtcDateToLocalDate(const FDateTime& Utc, FDateTime& Local);
    void ConvertLocalDateToUtcDate(const FDateTime& Local, FDateTime& Utc);
    void ClipboardSet(FString Value);
    FString ClipboardGet();
    void ClearUserFocus(const int32 UserIndex);
    void ClearKeyboardFocus();
    void ClearAllUserFocus();
    void ChangeMap(class UObject* WorldContextObject, FString Map, FString Args, class APlayerController* SpecificPlayer);
    float CeilDecimals(float Number, int32 Decimals);
    void CaseSwitchObject(const int32 OnlyCheckFirstX, const class UObject* Value, const class UObject* _1__, const class UObject* _2__, const class UObject* _3__, const class UObject* _4__, const class UObject* _5__, const class UObject* _6__, const class UObject* _7__, const class UObject* _8__, const class UObject* _9__, const class UObject* _10__, ELowEntryExtendedStandardLibrary1to10other& Branch);
    void CaseSwitchInteger(const int32 OnlyCheckFirstX, const int32 Value, const int32 _1__, const int32 _2__, const int32 _3__, const int32 _4__, const int32 _5__, const int32 _6__, const int32 _7__, const int32 _8__, const int32 _9__, const int32 _10__, ELowEntryExtendedStandardLibrary1to10other& Branch);
    void CaseSwitchByte(const int32 OnlyCheckFirstX, const uint8 Value, const uint8 _1__, const uint8 _2__, const uint8 _3__, const uint8 _4__, const uint8 _5__, const uint8 _6__, const uint8 _7__, const uint8 _8__, const uint8 _9__, const uint8 _10__, ELowEntryExtendedStandardLibrary1to10other& Branch);
    FString CarriageReturnCharacter();
    TArray<uint8> ByteToBytes(const uint8 Value);
    bool ByteToBoolean(const uint8 Byte);
    void ByteToBits(const uint8 Byte, bool& Bit1, bool& Bit2, bool& Bit3, bool& Bit4, bool& Bit5, bool& Bit6, bool& Bit7, bool& Bit8);
    FString BytesToStringUtf8(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    void BytesToPixels(const TArray<uint8>& ByteArray, const ELowEntryImageFormat ImageFormat, int32& Width, int32& Height, TArray<FColor>& Pixels, int32 Index, int32 Length);
    class ULowEntryLong* BytesToLongBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    int64 BytesToLong(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    int32 BytesToInteger(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    class UTexture2D* BytesToImage(const TArray<uint8>& ByteArray, const ELowEntryImageFormat ImageFormat, int32 Index, int32 Length);
    FString BytesToHex(const TArray<uint8>& ByteArray, const bool AddSpaces, int32 Index, int32 Length);
    float BytesToFloat(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    class UTexture2D* BytesToExistingImage(bool& ReusedGivenTexture2D, class UTexture2D* Texture2D, const TArray<uint8>& ByteArray, const ELowEntryImageFormat ImageFormat, int32 Index, int32 Length);
    class ULowEntryDouble* BytesToDoubleBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    uint8 BytesToByte(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    bool BytesToBoolean(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    FString BytesToBitString(const TArray<uint8>& ByteArray, const bool AddSpaces, int32 Index, int32 Length);
    FString BytesToBinary(const TArray<uint8>& ByteArray, const bool AddSpaces, int32 Index, int32 Length);
    FString BytesToBase64Url(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    FString BytesToBase64(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    TArray<uint8> BytesSubArray(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    TArray<uint8> ByteDataWriter_GetBytes(class ULowEntryByteDataWriter* ByteDataWriter);
    class ULowEntryByteDataWriter* ByteDataWriter_CreateFromEntryArrayPure(const TArray<class ULowEntryByteDataEntry*>& Array);
    class ULowEntryByteDataWriter* ByteDataWriter_CreateFromEntryArray(const TArray<class ULowEntryByteDataEntry*>& Array);
    class ULowEntryByteDataReader* ByteDataReader_Create(const TArray<uint8>& bytes, int32 Index, int32 Length);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromStringUtf8Array(const TArray<FString>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromStringUtf8(FString Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger3Array(const TArray<int32>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger3(const int32 Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger2Array(const TArray<int32>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger2(const int32 Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger1Array(const TArray<int32>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger1(const int32 Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongBytesArray(const TArray<class ULowEntryLong*>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongBytes(class ULowEntryLong* Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongArray(const TArray<int64>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromLong(const int64 Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromIntegerArray(const TArray<int32>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromInteger(const int32 Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromFloatArray(const TArray<float>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromFloat(const float Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromDoubleBytesArray(const TArray<class ULowEntryDouble*>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromByteArray(const TArray<uint8>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromByte(const uint8 Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromBooleanArray(const TArray<bool>& Value);
    class ULowEntryByteDataEntry* ByteDataEntry_CreateFromBoolean(const bool Value);
    TArray<uint8> BooleanToBytes(const bool Value);
    uint8 BooleanToByte(const bool Value);
    TArray<uint8> BitStringToBytes(FString Bits);
    void BitsToByte(const bool Bit1, const bool Bit2, const bool Bit3, const bool Bit4, const bool Bit5, const bool Bit6, const bool Bit7, const bool Bit8, uint8& Byte);
    TArray<uint8> BitDataWriter_GetBytes(class ULowEntryBitDataWriter* BitDataWriter);
    class ULowEntryBitDataWriter* BitDataWriter_CreateFromEntryArrayPure(const TArray<class ULowEntryBitDataEntry*>& Array);
    class ULowEntryBitDataWriter* BitDataWriter_CreateFromEntryArray(const TArray<class ULowEntryBitDataEntry*>& Array);
    class ULowEntryBitDataReader* BitDataReader_Create(const TArray<uint8>& bytes, int32 Index, int32 Length);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromStringUtf8Array(const TArray<FString>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromStringUtf8(FString Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger3Array(const TArray<int32>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger3(const int32 Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger2Array(const TArray<int32>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger2(const int32 Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger1Array(const TArray<int32>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger1(const int32 Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromLongBytesArray(const TArray<class ULowEntryLong*>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromLongBytes(class ULowEntryLong* Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromLongArray(const TArray<int64>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromLong(const int64 Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerMostSignificantBits(const int32 Value, const int32 BitCount);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerLeastSignificantBits(const int32 Value, const int32 BitCount);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArrayMostSignificantBits(const TArray<int32>& Value, const int32 BitCount);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArrayLeastSignificantBits(const TArray<int32>& Value, const int32 BitCount);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArray(const TArray<int32>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromInteger(const int32 Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromFloatArray(const TArray<float>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromFloat(const float Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromDoubleBytesArray(const TArray<class ULowEntryDouble*>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteMostSignificantBits(const uint8 Value, const int32 BitCount);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteLeastSignificantBits(const uint8 Value, const int32 BitCount);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArrayMostSignificantBits(const TArray<uint8>& Value, const int32 BitCount);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArrayLeastSignificantBits(const TArray<uint8>& Value, const int32 BitCount);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArray(const TArray<uint8>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromByte(const uint8 Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromBooleanArray(const TArray<bool>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromBoolean(const bool Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromBitArray(const TArray<bool>& Value);
    class ULowEntryBitDataEntry* BitDataEntry_CreateFromBit(const bool Value);
    TArray<uint8> BinaryToBytes(FString Binary);
    TArray<uint8> BCrypt(const TArray<uint8>& ByteArray, const TArray<uint8>& Salt, int32 Strength, int32 Index, int32 Length);
    TArray<uint8> Base64UrlToBytes(FString Base64Url);
    FString Base64UrlToBase64(FString Base64Url);
    TArray<uint8> Base64ToBytes(FString Base64);
    FString Base64ToBase64Url(FString Base64);
    bool AreBytesEqual(const TArray<uint8>& A, const TArray<uint8>& B, int32 IndexA, int32 LengthA, int32 IndexB, int32 LengthB);
    bool AreAndroidHeadphonesPluggedIn();
    bool AndroidPlatform();
}; // Size: 0x28

class ULowEntryLatentActionBoolean : public UObject
{
    bool Finished;                                                                    // 0x0028 (size: 0x1)
    bool Result;                                                                      // 0x0029 (size: 0x1)
    int32 KeepAliveCount;                                                             // 0x002C (size: 0x4)

    void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool& Result_);
    bool IsDone();
    void GetResult(bool& Result_);
    void Done(bool Result_);
}; // Size: 0x30

class ULowEntryLatentActionFloat : public UObject
{
    bool Finished;                                                                    // 0x0028 (size: 0x1)
    float Result;                                                                     // 0x002C (size: 0x4)
    int32 KeepAliveCount;                                                             // 0x0030 (size: 0x4)

    void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, float& Result_);
    bool IsDone();
    void GetResult(float& Result_);
    void Done(float Result_);
}; // Size: 0x38

class ULowEntryLatentActionInteger : public UObject
{
    bool Finished;                                                                    // 0x0028 (size: 0x1)
    int32 Result;                                                                     // 0x002C (size: 0x4)
    int32 KeepAliveCount;                                                             // 0x0030 (size: 0x4)

    void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32& Result_);
    bool IsDone();
    void GetResult(int32& Result_);
    void Done(int32 Result_);
}; // Size: 0x38

class ULowEntryLatentActionNone : public UObject
{
    bool Finished;                                                                    // 0x0028 (size: 0x1)
    int32 KeepAliveCount;                                                             // 0x002C (size: 0x4)

    void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    bool IsDone();
    void Done();
}; // Size: 0x30

class ULowEntryLatentActionObject : public UObject
{
    bool Finished;                                                                    // 0x0028 (size: 0x1)
    class UObject* Result;                                                            // 0x0030 (size: 0x8)
    int32 KeepAliveCount;                                                             // 0x0038 (size: 0x4)

    void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UObject*& Result_);
    bool IsDone();
    void GetResult(class UObject*& Result_);
    void Done(class UObject* Result_);
}; // Size: 0x40

class ULowEntryLatentActionString : public UObject
{
    bool Finished;                                                                    // 0x0028 (size: 0x1)
    FString Result;                                                                   // 0x0030 (size: 0x10)
    int32 KeepAliveCount;                                                             // 0x0040 (size: 0x4)

    void WaitTillDone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString& Result_);
    bool IsDone();
    void GetResult(FString& Result_);
    void Done(FString Result_);
}; // Size: 0x48

class ULowEntryLong : public UObject
{
    TArray<uint8> bytes;                                                              // 0x0028 (size: 0x10)

    void SetLong(const int64 Value);
    void SetBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    void LongBytes_Subtract(class ULowEntryLong* Value);
    bool LongBytes_LessThan(class ULowEntryLong* Value);
    bool LongBytes_GreaterThan(class ULowEntryLong* Value);
    bool LongBytes_Equals(class ULowEntryLong* Value);
    void LongBytes_Add(class ULowEntryLong* Value);
    void Integer_Subtract(const int32 Value);
    bool Integer_LessThan(const int32 Value);
    bool Integer_GreaterThan(const int32 Value);
    bool Integer_Equals(const int32 Value);
    void Integer_Add(const int32 Value);
    int64 GetLong();
    TArray<uint8> GetBytes();
    bool Float_LessThan(const float Value);
    bool Float_GreaterThan(const float Value);
    bool DoubleBytes_LessThan(class ULowEntryDouble* Value);
    bool DoubleBytes_GreaterThan(class ULowEntryDouble* Value);
    class ULowEntryLong* CreateClone();
    FString CastToString();
    class ULowEntryDouble* CastToDoubleBytes();
}; // Size: 0x38

class ULowEntryParsedHashcash : public UObject
{
    bool Valid;                                                                       // 0x0028 (size: 0x1)
    FString Resource;                                                                 // 0x0030 (size: 0x10)
    FDateTime Date;                                                                   // 0x0040 (size: 0x8)
    int32 Bits;                                                                       // 0x0048 (size: 0x4)

    FString ToString();
    FString GetResource();
    FDateTime GetDate();
    int32 GetBits();
}; // Size: 0x50

#endif
