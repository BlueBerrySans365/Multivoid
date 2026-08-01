#ifndef UE4SS_SDK_VehicleSystemPlugin_HPP
#define UE4SS_SDK_VehicleSystemPlugin_HPP

#include "VehicleSystemPlugin_enums.hpp"

struct FNetState
{
    float Timestamp;                                                                  // 0x0000 (size: 0x4)
    float localtimestamp;                                                             // 0x0004 (size: 0x4)
    FVector Position;                                                                 // 0x0008 (size: 0xC)
    FRotator Rotation;                                                                // 0x0014 (size: 0xC)
    FVector Velocity;                                                                 // 0x0020 (size: 0xC)
    FVector AngularVelocity;                                                          // 0x002C (size: 0xC)

}; // Size: 0x38

struct FVehicleGear
{
    float EndSpeed;                                                                   // 0x0000 (size: 0x4)
    float StartSpeed;                                                                 // 0x0004 (size: 0x4)
    float UpShift;                                                                    // 0x0008 (size: 0x4)
    float DownShift;                                                                  // 0x000C (size: 0x4)
    float HighRPM;                                                                    // 0x0010 (size: 0x4)
    float LowRPM;                                                                     // 0x0014 (size: 0x4)
    float MaxTorque;                                                                  // 0x0018 (size: 0x4)
    float MinTorque;                                                                  // 0x001C (size: 0x4)

}; // Size: 0x20

class AVehicleSystemBase : public APawn
{
    bool PassiveMode;                                                                 // 0x0284 (size: 0x1)
    bool PassiveTickGatekeeping;                                                      // 0x0285 (size: 0x1)
    bool VehicleAtRest;                                                               // 0x0286 (size: 0x1)
    class UStaticMeshComponent* VehicleMesh;                                          // 0x0288 (size: 0x8)
    FRuntimeFloatCurve SteeringCurve;                                                 // 0x0290 (size: 0x88)
    float SteeringSpeed;                                                              // 0x0318 (size: 0x4)
    TArray<FVehicleGear> Gears;                                                       // 0x0320 (size: 0x10)
    bool ReplicateMovement;                                                           // 0x0331 (size: 0x1)
    bool SyncLocation;                                                                // 0x0332 (size: 0x1)
    bool SyncRotation;                                                                // 0x0333 (size: 0x1)
    float NetSendRate;                                                                // 0x0334 (size: 0x4)
    float NetTimeBehind;                                                              // 0x0338 (size: 0x4)
    float NetLerpStart;                                                               // 0x033C (size: 0x4)
    float NetPositionTolerance;                                                       // 0x0340 (size: 0x4)
    float NetSmoothing;                                                               // 0x0344 (size: 0x4)
    FNetState RestState;                                                              // 0x0348 (size: 0x38)
    bool NetworkAtRest;                                                               // 0x0380 (size: 0x1)
    float RestTimer;                                                                  // 0x0384 (size: 0x4)

    void TeleportWheels();
    void SetShouldSyncWithServer(bool ShouldSync);
    void Server_ReceiveRestState(FNetState State);
    void Server_ReceiveNetState(FNetState State);
    void PassiveTickBP();
    void PassiveStateChanged(bool NewPassiveState);
    void OwnerChanged();
    void OnRep_RestState();
    void NetStateSend();
    void Multicast_ChangedOwner();
    float GetSteeringFromCurve(float Speed);
    bool DeterminePassiveState();
    void Client_ReceiveNetState(FNetState State);
    void BlueprintDebugMessage(FString Text);
    void AVS_Tick(float DeltaTime);
}; // Size: 0x3E0

class UVehicleConstraint : public UPhysicsConstraintComponent
{

    void SetLinearSoftConstraint(bool SoftConstraint, float Stiffness, float Damping);
}; // Size: 0x410

class UVehicleSystemFunctions : public UBlueprintFunctionLibrary
{

    void SetLinearDamping(class UPrimitiveComponent* Target, float InDamping, FName BoneName);
    void SetAngularDamping(class UPrimitiveComponent* Target, float InDamping, FName BoneName);
    bool RunningInPIE_World(class UObject* WorldContextObject);
    bool RunningInGame_World(class UObject* WorldContextObject);
    bool RunningInEditor_World(class UObject* WorldContextObject);
    void PrintToScreenWithTag(FString inString, FLinearColor TextColor, float Duration, int32 Tag);
    void GetUnrealEngineVersion(int32& Major, int32& Minor, int32& Patch);
    FString GetPluginVersion();
    float GetMeshRadius(class UPrimitiveComponent* Target, FName BoneName);
    float GetMeshDiameter(class UPrimitiveComponent* Target, FName BoneName);
    FVector GetMeshCenterOfMass(class UPrimitiveComponent* Target, FName BoneName);
    FVector GetBoneBounds(class UPrimitiveComponent* Target, FName BoneName, FVector& Origin);
}; // Size: 0x28

#endif
