enum class ERTICoordinateSystem {
    E_RightHanded = 0,
    E_LeftHanded = 1,
    E_MAX = 2,
};

enum class ERTIDirectoryType {
    E_gd = 0,
    E_ad = 1,
    E_MAX = 2,
};

enum class ERTIERGBFormat {
    E_auto = 0,
    E_RGBA = 1,
    E_BGRA = 2,
    E_Gray = 3,
    E_MAX = 4,
};

enum class ERTIExportImageType {
    E_png = 0,
    E_bmp = 1,
    E_jpg = 2,
    E_exr = 3,
    E_MAX = 4,
};

enum class ERTIFileType {
    E_wav = 0,
    E_ogg = 1,
    E_png = 2,
    E_bmp = 3,
    E_jpg = 4,
    E_exr = 5,
    E_obj = 6,
    E_fbx = 7,
    E_stl = 8,
    E_all = 9,
    E_MAX = 10,
};

enum class ERTIInformationType {
    E_none = 0,
    E_ByPolygonVertex = 1,
    E_ByVertex = 2,
    E_ByPolygon = 3,
    E_ByEdge = 4,
    E_AllSame = 5,
    E_MAX = 6,
};

enum class ERTIMeshExportType {
    E_obj = 0,
    E_MAX = 1,
};

enum class ERTIMeshType {
    E_obj = 0,
    E_fbx = 1,
    E_fbxUV = 2,
    E_stl = 3,
    E_MAX = 4,
};

enum class ERTIReferenceInformationType {
    E_none = 0,
    E_Direct = 1,
    E_IndexToDirect = 2,
    E_MAX = 3,
};

enum class ERTISoundFileType {
    E_wav = 0,
    E_ogg = 1,
    E_MAX = 2,
};

enum class ERTITextureType {
    E_none = 0,
    E_un = 1,
    E_Kd = 2,
    E_Ks = 3,
    E_Ns = 4,
    E_d = 5,
    E_bump = 6,
    E_disp = 7,
    E_decal = 8,
    E_refl = 9,
    E_Pr = 10,
    E_Pm = 11,
    E_Ps = 12,
    E_Pc = 13,
    E_Pcr = 14,
    E_Ke = 15,
    E_aniso = 16,
    E_anisor = 17,
    E_norm = 18,
    E_RMA = 19,
    E_MAX = 20,
};

