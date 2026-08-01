#ifndef UE4SS_SDK_batchSpawner_waterlocker_HPP
#define UE4SS_SDK_batchSpawner_waterlocker_HPP

class AbatchSpawner_waterlocker_C : public AbatchSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* StaticMesh30;                                         // 0x0270 (size: 0x8)
    class UStaticMeshComponent* StaticMesh29;                                         // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh28;                                         // 0x0280 (size: 0x8)
    class UStaticMeshComponent* StaticMesh27;                                         // 0x0288 (size: 0x8)
    class UStaticMeshComponent* StaticMesh26;                                         // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMesh25;                                         // 0x0298 (size: 0x8)
    class UStaticMeshComponent* StaticMesh24;                                         // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh23;                                         // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh22;                                         // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh21;                                         // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh20;                                         // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh19;                                         // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh18;                                         // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh17;                                         // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh16;                                         // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh15;                                         // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh14;                                         // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh13;                                         // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x0300 (size: 0x8)
    class UStaticMeshComponent* StaticMesh11;                                         // 0x0308 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x0310 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0328 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x0330 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0338 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0340 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0348 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0350 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0358 (size: 0x8)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void runTrigger(class AActor* Owner, int32 Index);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_batchSpawner_waterlocker(int32 EntryPoint);
}; // Size: 0x360

#endif
