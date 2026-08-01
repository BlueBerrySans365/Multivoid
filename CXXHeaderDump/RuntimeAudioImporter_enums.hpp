enum class ERuntimeAudioFormat {
    Auto = 0,
    Mp3 = 1,
    Wav = 2,
    Flac = 3,
    OggVorbis = 4,
    OggOpus = 5,
    Bink = 6,
    Custom = 7,
    Invalid = 8,
    ERuntimeAudioFormat_MAX = 9,
};

enum class ERuntimeImportStatus {
    SuccessfulImport = 0,
    FailedToReadAudioDataArray = 1,
    SoundWaveDeclarationError = 2,
    InvalidAudioFormat = 3,
    AudioDoesNotExist = 4,
    LoadFileToArrayError = 5,
    ERuntimeImportStatus_MAX = 6,
};

enum class ERuntimeRAWAudioFormat {
    Int8 = 0,
    UInt8 = 1,
    Int16 = 2,
    UInt16 = 3,
    Int32 = 4,
    UInt32 = 5,
    Float32 = 6,
    ERuntimeRAWAudioFormat_MAX = 7,
};

enum class ERuntimeVADMode {
    Quality = 0,
    LowBitrate = 1,
    Aggressive = 2,
    VeryAggressive = 3,
    ERuntimeVADMode_MAX = 4,
};

