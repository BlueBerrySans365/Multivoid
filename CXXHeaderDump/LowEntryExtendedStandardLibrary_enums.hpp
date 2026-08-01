enum class ELowEntryBatteryState {
    Charging = 0,
    Discharging = 1,
    Full = 2,
    NotCharging = 3,
    Unknown = 4,
    ELowEntryBatteryState_MAX = 5,
};

enum class ELowEntryExtendedStandardLibrary0to9 {
    _0_ = 0,
    _1_ = 1,
    _2_ = 2,
    _3_ = 3,
    _4_ = 4,
    _5_ = 5,
    _6_ = 6,
    _7_ = 7,
    _8_ = 8,
    _9_ = 9,
    _MAX = 10,
};

enum class ELowEntryExtendedStandardLibrary1to10other {
    _1_ = 1,
    _2_ = 2,
    _3_ = 3,
    _4_ = 4,
    _5_ = 5,
    _6_ = 6,
    _7_ = 7,
    _8_ = 8,
    _9_ = 9,
    _10_ = 10,
    Other = 0,
    ELowEntryExtendedStandardLibrary1to10other_MAX = 11,
};

enum class ELowEntryExtendedStandardLibraryTrueOrFalse {
    _True_ = 0,
    _False_ = 1,
    _MAX = 2,
};

enum class ELowEntryHmacAlgorithm {
    MD5 = 0,
    SHA1 = 1,
    SHA256 = 2,
    SHA512 = 3,
    ELowEntryHmacAlgorithm_MAX = 4,
};

enum class ELowEntryImageFormat {
    Invalid = 0,
    PNG = 1,
    JPEG = 2,
    GrayscaleJPEG = 3,
    BMP = 4,
    ICO = 5,
    EXR = 6,
    ICNS = 7,
    ELowEntryImageFormat_MAX = 8,
};

enum class ELowEntryRGBFormat {
    Invalid = 0,
    RGBA = 1,
    BGRA = 2,
    Gray = 3,
    ELowEntryRGBFormat_MAX = 4,
};

enum class ELowEntrySplitScreenType {
    None = 0,
    TwoPlayer_Horizontal = 1,
    TwoPlayer_Vertical = 2,
    ThreePlayer_FavorTop = 3,
    ThreePlayer_FavorBottom = 4,
    ThreePlayer_Vertical = 5,
    FourPlayer_Grid = 6,
    FourPlayer_Vertical = 7,
    ELowEntrySplitScreenType_MAX = 8,
};

enum class ELowEntrySplitScreenTypeThreePlayers {
    FavorTop = 0,
    FavorBottom = 1,
    ELowEntrySplitScreenTypeThreePlayers_MAX = 2,
};

enum class ELowEntrySplitScreenTypeTwoPlayers {
    Horizontal = 0,
    Vertical = 1,
    ELowEntrySplitScreenTypeTwoPlayers_MAX = 2,
};

