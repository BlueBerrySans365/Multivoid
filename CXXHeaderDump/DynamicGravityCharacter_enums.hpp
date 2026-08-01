enum class EJumpDirectionMode {
    JDM_Gravity = 0,
    JDM_WorldGravity = 1,
    JDM_DynamicGravity = 2,
    JDM_VerticalDirection = 3,
    JDM_Custom = 4,
    JDM_MAX = 5,
};

enum class EPhysicsRotationVerticalDirectionMode {
    PRVDM_Gravity = 0,
    PRVDM_WorldGravity = 1,
    PRVDM_DynamicGravity = 2,
    PRVDM_VerticalDirection = 3,
    PRVDM_Custom = 4,
    PRVDM_MAX = 5,
};

enum class EViewRotationBaseMode {
    VRM_Gravity = 0,
    VRM_WorldGravity = 1,
    VRM_DynamicGravity = 2,
    VRM_VerticalDirection = 3,
    VRM_CharacterRotation = 4,
    VRM_ControlRotation = 5,
    VRM_Custom = 6,
    VRM_MAX = 7,
};

enum class EWalkableFloorNormalMode {
    WFN_Gravity = 0,
    WFN_WorldGravity = 1,
    WFN_DynamicGravity = 2,
    WFN_CharacterRotation = 3,
    WFN_FloorImpactNormal = 4,
    WFN_NoFloor = 5,
    WFN_Custom = 6,
    WFN_MAX = 7,
};

