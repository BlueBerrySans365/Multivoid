enum class EDialogButtonClicked {
    IDNONE = 0,
    IDOK = 1,
    IDCANCEL = 2,
    IDABORT = 3,
    IDRETRY = 4,
    IDIGNORE = 5,
    IDYES = 6,
    IDNO = 7,
    IDTRYAGAIN = 10,
    IDCONTINUE = 11,
    EDialogButtonClicked_MAX = 12,
};

enum class EDialogButtons {
    MB_OK = 0,
    MB_OKCANCEL = 1,
    MB_ABORTRETRYIGNORE = 2,
    MB_YESNOCANCEL = 3,
    MB_YESNO = 4,
    MB_RETRYCANCEL = 5,
    MB_CANCELTRYCONTINUE = 6,
    MB_MAX = 7,
};

enum class EDialogIcon {
    MB_NONE = 0,
    MB_ICONERROR = 16,
    MB_ICONWARNING = 48,
    MB_ICONINFORMATION = 64,
    MB_MAX = 65,
};

