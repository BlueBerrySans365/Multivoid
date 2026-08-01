enum class EDownloadToMemoryResult {
    SuccessDownloading = 0,
    DownloadFailed = 1,
    InvalidURL = 2,
    EDownloadToMemoryResult_MAX = 3,
};

enum class EDownloadToStorageResult {
    SuccessDownloading = 0,
    DownloadFailed = 1,
    SaveFailed = 2,
    DirectoryCreationFailed = 3,
    InvalidURL = 4,
    InvalidSavePath = 5,
    EDownloadToStorageResult_MAX = 6,
};

