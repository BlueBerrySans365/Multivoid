enum class ERyAsyncLoadingResult {
    Failed = 0,
    Succeeded = 1,
    Canceled = 2,
    ERyAsyncLoadingResult_MAX = 3,
};

enum class ERyBatchMode {
    Background = 0,
    Fast = 1,
    Precompile = 2,
    ERyBatchMode_MAX = 3,
};

enum class ERyComponentCreationMethod {
    Native = 0,
    SimpleConstructionScript = 1,
    UserConstructionScript = 2,
    Instance = 3,
    ERyComponentCreationMethod_MAX = 4,
};

enum class ERyCurrentLevelStreamingState {
    Removed = 0,
    Unloaded = 1,
    FailedToLoad = 2,
    Loading = 3,
    LoadedNotVisible = 4,
    MakingVisible = 5,
    LoadedVisible = 6,
    MakingInvisible = 7,
    ERyCurrentLevelStreamingState_MAX = 8,
};

enum class ERyDeviceScreenOrientation {
    Unknown = 0,
    Portrait = 1,
    PortraitUpsideDown = 2,
    LandscapeLeft = 3,
    LandscapeRight = 4,
    FaceUp = 5,
    FaceDown = 6,
    ERyDeviceScreenOrientation_MAX = 7,
};

enum class ERyIterateDirectoryOut {
    FilesAndDirectories = 0,
    FilesOnly = 1,
    DirectoriesOnly = 2,
    ERyIterateDirectoryOut_MAX = 3,
};

enum class ERyLineBatchDepthPriority {
    World = 0,
    Foreground = 1,
    ERyLineBatchDepthPriority_MAX = 2,
};

enum class ERyMathEasingType {
    Linear = 0,
    QuadraticEaseIn = 1,
    QuadraticEaseOut = 2,
    QuadraticEaseInOut = 3,
    CubicEaseIn = 4,
    CubicEaseOut = 5,
    CubicEaseInOut = 6,
    QuarticEaseIn = 7,
    QuarticEaseOut = 8,
    QuarticEaseInOut = 9,
    QuinticEaseIn = 10,
    QuinticEaseOut = 11,
    QuinticEaseInOut = 12,
    SineEaseIn = 13,
    SineEaseOut = 14,
    SineEaseInOut = 15,
    CircularEaseIn = 16,
    CircularEaseOut = 17,
    CircularEaseInOut = 18,
    ExponentialEaseIn = 19,
    ExponentialEaseOut = 20,
    ExponentialEaseInOut = 21,
    ElasticEaseIn = 22,
    ElasticEaseOut = 23,
    ElasticEaseInOut = 24,
    BackEaseIn = 25,
    BackEaseOut = 26,
    BackEaseInOut = 27,
    BounceEaseIn = 28,
    BounceEaseOut = 29,
    BounceEaseInOut = 30,
    ERyMathEasingType_MAX = 31,
};

enum class ERyNavLinkDirection {
    BothWays = 0,
    LeftToRight = 1,
    RightToLeft = 2,
    ERyNavLinkDirection_MAX = 3,
};

enum class ERyNetworkConnectionType {
    Unknown = 0,
    None = 1,
    AirplaneMode = 2,
    Cell = 3,
    WiFi = 4,
    WiMAX = 5,
    Bluetooth = 6,
    Ethernet = 7,
    ERyNetworkConnectionType_MAX = 8,
};

enum class ERyRenderingFeatureLevel {
    INVALID = 0,
    ES3_1 = 1,
    SM5 = 2,
    ERyRenderingFeatureLevel_MAX = 3,
};

enum class ERyRunNotifyCompletionState {
    None = 0,
    Pending = 1,
    Success = 2,
    Fail = 3,
    ERyRunNotifyCompletionState_MAX = 4,
};

enum class ERyRuntimeLogVerbosity {
    NoLogging = 0,
    Fatal = 1,
    Error = 2,
    Warning = 3,
    Display = 4,
    Log = 5,
    Verbose = 6,
    VeryVerbose = 7,
    ERyRuntimeLogVerbosity_MAX = 8,
};

enum class ERyScreenAnchor {
    TOP_LEFT = 0,
    TOP_MIDDLE = 1,
    TOP_RIGHT = 2,
    MIDDLE_LEFT = 3,
    MIDDLE = 4,
    MIDDLE_RIGHT = 5,
    BOTTOM_LEFT = 6,
    BOTTOM_MIDDLE = 7,
    BOTTOM_RIGHT = 8,
    ERyScreenAnchor_MAX = 9,
};

enum class ERyScreenShotMode {
    Game = 0,
    EditorActiveWindow = 1,
    EditorLevelViewport = 2,
    ERyScreenShotMode_MAX = 3,
};

enum class ERyShaderPlatform {
    SP_INVALID = 0,
    SP_PCD3D_SM5 = 1,
    SP_METAL = 2,
    SP_METAL_MRT = 3,
    SP_PCD3D_ES3_1 = 4,
    SP_OPENGL_PCES3_1 = 5,
    SP_METAL_SM5 = 6,
    SP_VULKAN_PCES3_1 = 7,
    SP_VULKAN_SM5 = 9,
    SP_VULKAN_ES3_1_ANDROID = 10,
    SP_METAL_MACES3_1 = 11,
    SP_OPENGL_ES3_1_ANDROID = 12,
    SP_METAL_MRT_MAC = 13,
    SP_METAL_TVOS = 16,
    SP_METAL_MRT_TVOS = 17,
    SP_VULKAN_SM5_ANDROID = 18,
    SP_MAX = 19,
};

enum class ERyShadingPath {
    Invalid = 0,
    Mobile = 1,
    Deferred = 2,
    ERyShadingPath_MAX = 3,
};

namespace ERySteamVRButtonIds {
    enum Type {
        Button_System = 0,
        Button_ApplicationMenu = 1,
        Button_Grip = 2,
        Button_DPad_Left = 3,
        Button_DPad_Up = 4,
        Button_DPad_Right = 5,
        Button_DPad_Down = 6,
        Button_A = 7,
        Button_ProximitySensor = 31,
        Button_Axis0 = 32,
        Button_Axis1 = 33,
        Button_Axis2 = 34,
        Button_Axis3 = 35,
        Button_Axis4 = 36,
        Button_Max = 64,
    };
}

enum class ERyTextureResourceResult {
    Success = 0,
    Failure = 1,
    ERyTextureResourceResult_MAX = 2,
};

enum class ERyTickUntilStopInExecs {
    Start = 0,
    Stop = 1,
    ERyTickUntilStopInExecs_MAX = 2,
};

enum class ERyTickUntilStopOutExecs {
    Tick = 0,
    Stopped = 1,
    ERyTickUntilStopOutExecs_MAX = 2,
};

enum class ERyUnit {
    Micrometers = 0,
    Millimeters = 1,
    Centimeters = 2,
    Meters = 3,
    Kilometers = 4,
    Inches = 5,
    Feet = 6,
    Yards = 7,
    Miles = 8,
    Lightyears = 9,
    Degrees = 10,
    Radians = 11,
    MetersPerSecond = 12,
    KilometersPerHour = 13,
    MilesPerHour = 14,
    Celsius = 15,
    Farenheit = 16,
    Kelvin = 17,
    Micrograms = 18,
    Milligrams = 19,
    Grams = 20,
    Kilograms = 21,
    MetricTons = 22,
    Ounces = 23,
    Pounds = 24,
    Stones = 25,
    Newtons = 26,
    PoundsForce = 27,
    KilogramsForce = 28,
    Hertz = 29,
    Kilohertz = 30,
    Megahertz = 31,
    Gigahertz = 32,
    RevolutionsPerMinute = 33,
    Bytes = 34,
    Kilobytes = 35,
    Megabytes = 36,
    Gigabytes = 37,
    Terabytes = 38,
    Lumens = 39,
    Candela = 40,
    Lux = 41,
    CandelaPerMeter2 = 42,
    Milliseconds = 43,
    Seconds = 44,
    Minutes = 45,
    Hours = 46,
    Days = 47,
    Months = 48,
    Years = 49,
    PixelsPerInch = 50,
    Percentage = 51,
    Multiplier = 52,
    Unspecified = 53,
    ERyUnit_MAX = 54,
};

enum class ERyWorldType {
    None = 0,
    Game = 1,
    Editor = 2,
    PIE = 3,
    EditorPreview = 4,
    GamePreview = 5,
    GameRPC = 6,
    Inactive = 7,
    ERyWorldType_MAX = 8,
};

enum class ERyXScreenAnchor {
    LEFT = 0,
    MIDDLE = 1,
    RIGHT = 2,
    ERyXScreenAnchor_MAX = 3,
};

enum class ERyYScreenAnchor {
    TOP = 0,
    MIDDLE = 1,
    BOTTOM = 2,
    ERyYScreenAnchor_MAX = 3,
};

