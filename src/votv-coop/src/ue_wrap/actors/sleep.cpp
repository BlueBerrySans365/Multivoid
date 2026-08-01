// ue_wrap/sleep.cpp -- see ue_wrap/sleep.h.

#include "ue_wrap/actors/sleep.h"

#include "ue_wrap/core/call.h"
#include "ue_wrap/engine/engine.h"  // GetWorldContext
#include "ue_wrap/core/log.h"
#include "ue_wrap/core/reflection.h"
#include "ue_wrap/core/sdk_profile.h"
#include "ue_wrap/core/types.h"     // FTransform

#include <chrono>

namespace ue_wrap::sleep {
namespace {

namespace R = ue_wrap::reflection;
namespace P = ue_wrap::profile;

void* g_gmCls = nullptr;
void* g_gm = nullptr;
int32_t g_gmIdx = -1;

int32_t g_offIsSleep = -1;     // mainGamemode.isSleep        @0x04EC
int32_t g_offDreamProb = -1;   // mainGamemode.dreamProbability @0x1030 (-1 sentinel)
int32_t g_offSaveSlot = -1;    // mainGamemode.saveSlot (UsaveSlot_C*)
int32_t g_offDreaming = -1;    // mainGamemode.dreaming        @0x0568 (bool)
int32_t g_offPlayerPreDream = -1; // mainGamemode.playerPreDream (FTransform)
void* g_wakeupFn = nullptr;    // gamemode.wakeup() -- the timelapse END
void* g_sleepFn = nullptr;     // gamemode.sleep(bed, dropItem, ignoreRagdoll)

void* g_saveSlotCls = nullptr;
int32_t g_offSleepNeed = -1;   // saveSlot.sleep (the 0..100 need)

void* g_gsCdo = nullptr;            // GameplayStatics CDO
void* g_setDilationFn = nullptr;    // SetGlobalTimeDilation(WorldContextObject, TimeDilation)
void* g_getDilationFn = nullptr;    // GetGlobalTimeDilation(WorldContextObject) -> float

void* g_bedCls = nullptr;           // bed_C (probe helper)

void* g_dreamBaseCls = nullptr;     // dreamBase_C (dream class validation)
int32_t g_offPlayerSpawn = -1;      // dreamBase_C.playerSpawn @0x0238 (UBillboardComponent)
void* g_teleportFn = nullptr;       // mainPlayer.teleportWObackrooms(FVector, bool, bool)
void* g_isDreamFn = nullptr;        // daynightCycle.isDream(bool)
void* g_dreamBlurOff = -1;          // playerInterface.dreamBlur (USceneComponent)
void* g_dayNightCycle = nullptr;    // daynightCycle singleton
int32_t g_offPlayerInterface = -1;  // mainGamemode.playerInterface (UplayerInterface_C*)

int32_t g_offSleepCam = -1;         // mainGamemode.sleepCam     @0x04F0
int32_t g_offSleepingPawn = -1;     // mainGamemode.sleepingPawn @0x1258

std::chrono::steady_clock::time_point g_nextResolve{};
bool g_coreResolved = false;

void ResolvePass() {
    const auto now = std::chrono::steady_clock::now();
    if (now < g_nextResolve) return;
    g_nextResolve = now + std::chrono::seconds(2);

    if (!g_gmCls) g_gmCls = R::FindClass(L"mainGamemode_C");
    if (!g_gmCls) return;
    if (g_offIsSleep < 0) g_offIsSleep = R::FindPropertyOffset(g_gmCls, L"isSleep");
    if (g_offDreamProb < 0) g_offDreamProb = R::FindPropertyOffset(g_gmCls, L"dreamProbability");
    if (g_offSaveSlot < 0) g_offSaveSlot = R::FindPropertyOffset(g_gmCls, L"saveSlot");
    if (g_offDreaming < 0) g_offDreaming = R::FindPropertyOffset(g_gmCls, L"dreaming");
    if (g_offPlayerPreDream < 0) g_offPlayerPreDream = R::FindPropertyOffset(g_gmCls, L"playerPreDream");
    if (g_offPlayerInterface < 0) g_offPlayerInterface = R::FindPropertyOffset(g_gmCls, L"playerInterface");
    if (!g_wakeupFn) g_wakeupFn = R::FindFunction(g_gmCls, L"wakeup");
    if (!g_sleepFn) g_sleepFn = R::FindFunction(g_gmCls, L"sleep");

    if (!g_saveSlotCls) g_saveSlotCls = R::FindClass(L"saveSlot_C");
    if (g_saveSlotCls && g_offSleepNeed < 0)
        g_offSleepNeed = R::FindPropertyOffset(g_saveSlotCls, L"sleep");

    if (!g_gsCdo) g_gsCdo = R::FindClassDefaultObject(P::name::GameplayStaticsClass);
    if (g_gsCdo) {
        void* gsCls = R::ClassOf(g_gsCdo);
        if (gsCls && !g_setDilationFn)
            g_setDilationFn = R::FindFunction(gsCls, L"SetGlobalTimeDilation");
        if (gsCls && !g_getDilationFn)
            g_getDilationFn = R::FindFunction(gsCls, L"GetGlobalTimeDilation");
    }
    if (!g_bedCls) g_bedCls = R::FindClass(L"bed_C");  // optional (probe only)
    // Dream sync: dreamBase_C class + playerSpawn offset
    if (!g_dreamBaseCls) g_dreamBaseCls = R::FindClass(L"dreamBase_C");
    if (g_dreamBaseCls && g_offPlayerSpawn < 0)
        g_offPlayerSpawn = R::FindPropertyOffset(g_dreamBaseCls, L"playerSpawn");
    // daynightCycle.isDream(bool) -- find via the gamemode's daynightCycle reference
    if (!g_dayNightCycle) {
        int32_t offDNC = R::FindPropertyOffset(g_gmCls, L"daynightCycle");
        if (offDNC >= 0) {
            void* gm = Gamemode();
            if (gm) {
                void* dnc = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(gm) + offDNC);
                if (dnc && R::IsLive(dnc)) {
                    g_dayNightCycle = dnc;
                    void* dncCls = R::ClassOf(dnc);
                    if (dncCls) g_isDreamFn = R::FindFunction(dncCls, L"isDream");
                }
            }
        }
    }
    // mainPlayer.teleportWObackrooms -- resolve via the mainPlayer class
    if (!g_teleportFn) {
        void* mpCls = R::FindClass(L"mainPlayer_C");
        if (mpCls) g_teleportFn = R::FindFunction(mpCls, L"teleportWObackrooms");
    }
    // Optional camera surface (the WAITING-state view hold) -- never gates core.
    if (g_offSleepCam < 0) g_offSleepCam = R::FindPropertyOffset(g_gmCls, L"sleepCam");
    if (g_offSleepingPawn < 0)
        g_offSleepingPawn = R::FindPropertyOffset(g_gmCls, L"sleepingPawn");

    const bool core = g_offIsSleep >= 0 && g_offDreamProb >= 0 && g_offSaveSlot >= 0 &&
                      g_wakeupFn && g_offSleepNeed >= 0 && g_setDilationFn;
    if (core && !g_coreResolved) {
        g_coreResolved = true;
        UE_LOGI("sleep: resolved (isSleep=0x%X dreamProb=0x%X saveSlot=0x%X sleepNeed=0x%X "
                "wakeup=%s sleep=%s dilation set/get=%s/%s bedCls=%s)",
                g_offIsSleep, g_offDreamProb, g_offSaveSlot, g_offSleepNeed,
                g_wakeupFn ? "yes" : "NO", g_sleepFn ? "yes" : "NO",
                g_setDilationFn ? "yes" : "NO", g_getDilationFn ? "yes" : "NO",
                g_bedCls ? "yes" : "NO");
    }
}

void* SaveSlot() {
    void* gm = Gamemode();
    if (!gm || g_offSaveSlot < 0) return nullptr;
    void* ss = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(gm) + g_offSaveSlot);
    return (ss && R::IsLive(ss)) ? ss : nullptr;
}

}  // namespace

bool EnsureResolved() {
    ResolvePass();
    return g_coreResolved;
}

void* Gamemode() {
    if (g_gm && R::IsLiveByIndex(g_gm, g_gmIdx)) return g_gm;
    g_gm = nullptr;
    if (!g_gmCls) return nullptr;
    for (void* obj : R::FindObjectsByClass(L"mainGamemode_C")) {
        if (obj && R::IsLive(obj)) {
            g_gm = obj;
            g_gmIdx = R::InternalIndexOf(obj);
            break;
        }
    }
    return g_gm;
}

bool IsSleeping() {
    void* gm = Gamemode();
    if (!gm || g_offIsSleep < 0) return false;
    return *(reinterpret_cast<uint8_t*>(gm) + g_offIsSleep) != 0;
}

bool SetDreamProbability(float v) {
    void* gm = Gamemode();
    if (!gm || g_offDreamProb < 0) return false;
    *reinterpret_cast<float*>(reinterpret_cast<uint8_t*>(gm) + g_offDreamProb) = v;
    return true;
}

bool CallWakeup() {
    void* gm = Gamemode();
    if (!gm || !g_wakeupFn) return false;
    ue_wrap::ParamFrame f(g_wakeupFn);
    if (!f.valid()) return false;
    return ue_wrap::Call(gm, f);
}

bool SetGlobalTimeDilation(float v) {
    if (!g_gsCdo || !g_setDilationFn) return false;
    void* ctx = ue_wrap::engine::GetWorldContext();
    if (!ctx) return false;
    ue_wrap::ParamFrame f(g_setDilationFn);
    if (!f.valid()) return false;
    f.Set<void*>(L"WorldContextObject", ctx);
    f.Set<float>(L"TimeDilation", v);
    return ue_wrap::Call(g_gsCdo, f);
}

float GetGlobalTimeDilation() {
    if (!g_gsCdo || !g_getDilationFn) return -1.f;
    void* ctx = ue_wrap::engine::GetWorldContext();
    if (!ctx) return -1.f;
    ue_wrap::ParamFrame f(g_getDilationFn);
    if (!f.valid()) return -1.f;
    f.Set<void*>(L"WorldContextObject", ctx);
    if (!ue_wrap::Call(g_gsCdo, f)) return -1.f;
    return f.Get<float>(L"ReturnValue");
}

bool ReadSleepNeed(float& out) {
    void* ss = SaveSlot();
    if (!ss || g_offSleepNeed < 0) return false;
    out = *reinterpret_cast<float*>(reinterpret_cast<uint8_t*>(ss) + g_offSleepNeed);
    return true;
}

bool WriteSleepNeed(float v) {
    void* ss = SaveSlot();
    if (!ss || g_offSleepNeed < 0) return false;
    *reinterpret_cast<float*>(reinterpret_cast<uint8_t*>(ss) + g_offSleepNeed) = v;
    return true;
}

namespace {
void* GmActorField(int32_t off) {
    void* gm = Gamemode();
    if (!gm || off < 0) return nullptr;
    void* a = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(gm) + off);
    return (a && R::IsLive(a)) ? a : nullptr;
}
}  // namespace

void* SleepCam() { return GmActorField(g_offSleepCam); }
void* SleepingPawn() { return GmActorField(g_offSleepingPawn); }

bool SetSleepViewTarget(void* target) {
    if (!target) return false;
    void* pawn = SleepingPawn();
    if (!pawn) return false;
    void* pc = ue_wrap::engine::GetController(pawn);
    if (!pc) return false;
    return ue_wrap::engine::SetViewTargetWithBlend(pc, target, 0.25f);
}

void* FindBed() {
    // The PLACED base bed is a cooked SUBCLASS (bed_b_C / bed_m_C / ... --
    // the 00:17 smoke proved zero exact bed_C instances), so match by
    // descendant-of-bed_C over the object array instead of by class name.
    // Probe-only one-shot walk; never on a hot path.
    if (!g_bedCls) return nullptr;
    const int32_t n = R::NumObjects();
    for (int32_t i = 0; i < n; ++i) {
        void* obj = R::ObjectAt(i);
        if (!obj || !R::IsLive(obj)) continue;
        void* cls = R::ClassOf(obj);
        if (!cls || !R::IsDescendantOfAny(cls, &g_bedCls, 1)) continue;
        if (R::NameStartsWith(R::NameOf(obj), L"Default__")) continue;  // CDOs
        return obj;
    }
    return nullptr;
}

bool CallSleep(void* bed) {
    void* gm = Gamemode();
    if (!gm || !g_sleepFn || !bed) return false;
    ue_wrap::ParamFrame f(g_sleepFn);
    if (!f.valid()) return false;
    if (!f.Set<void*>(L"bed", bed)) return false;
    f.Set<bool>(L"dropItem", false);
    f.Set<bool>(L"ignoreRagdoll", true);
    return ue_wrap::Call(gm, f);
}

// ---- dream sync (v137) ----

bool IsDreaming() {
    void* gm = Gamemode();
    if (!gm || g_offDreaming < 0) return false;
    return *(reinterpret_cast<uint8_t*>(gm) + g_offDreaming) != 0;
}

bool SetDreaming(bool v) {
    void* gm = Gamemode();
    if (!gm || g_offDreaming < 0) return false;
    *(reinterpret_cast<uint8_t*>(gm) + g_offDreaming) = v ? 1 : 0;
    return true;
}

bool GetPlayerPreDream(float& x, float& y, float& z, float& qx, float& qy, float& qz, float& qw) {
    void* gm = Gamemode();
    if (!gm || g_offPlayerPreDream < 0) return false;
    // FTransform layout: Translation(X,Y,Z) @+0, Rotation(X,Y,Z,W) @+12, Scale3D(X,Y,Z) @+28
    // UE4 FTransform is 48 bytes: {FVector Location; FQuat Rotation; FVector Scale3D}
    const uint8_t* base = reinterpret_cast<const uint8_t*>(gm) + g_offPlayerPreDream;
    x  = *reinterpret_cast<const float*>(base + 0);
    y  = *reinterpret_cast<const float*>(base + 4);
    z  = *reinterpret_cast<const float*>(base + 8);
    qx = *reinterpret_cast<const float*>(base + 12);
    qy = *reinterpret_cast<const float*>(base + 16);
    qz = *reinterpret_cast<const float*>(base + 20);
    qw = *reinterpret_cast<const float*>(base + 24);
    return true;
}

bool SetPlayerPreDream(float x, float y, float z, float qx, float qy, float qz, float qw) {
    void* gm = Gamemode();
    if (!gm || g_offPlayerPreDream < 0) return false;
    uint8_t* base = reinterpret_cast<uint8_t*>(gm) + g_offPlayerPreDream;
    *reinterpret_cast<float*>(base + 0)  = x;
    *reinterpret_cast<float*>(base + 4)  = y;
    *reinterpret_cast<float*>(base + 8)  = z;
    *reinterpret_cast<float*>(base + 12) = qx;
    *reinterpret_cast<float*>(base + 16) = qy;
    *reinterpret_cast<float*>(base + 20) = qz;
    *reinterpret_cast<float*>(base + 24) = qw;
    return true;
}

bool SetIsDream(bool v) {
    if (!g_dayNightCycle || !g_isDreamFn) return false;
    ue_wrap::ParamFrame f(g_isDreamFn);
    if (!f.valid()) return false;
    f.Set<bool>(L"isDream", v);
    return ue_wrap::Call(g_dayNightCycle, f);
}

bool TeleportPlayerTo(float x, float y, float z) {
    if (!g_teleportFn) return false;
    // Get the mainPlayer pawn
    void* gm = Gamemode();
    if (!gm) return false;
    int32_t offPlayer = R::FindPropertyOffset(g_gmCls, L"mainPlayer");
    if (offPlayer < 0) return false;
    void* player = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(gm) + offPlayer);
    if (!player || !R::IsLive(player)) return false;
    ue_wrap::ParamFrame f(g_teleportFn);
    if (!f.valid()) return false;
    // teleportWObackrooms(FVector loc, bool bAbsolute, bool bTeleportPhysics)
    f.Set<float>(L"X", x);
    f.Set<float>(L"Y", y);
    f.Set<float>(L"Z", z);
    f.Set<bool>(L"bAbsolute", false);
    f.Set<bool>(L"bTeleportPhysics", false);
    return ue_wrap::Call(player, f);
}

bool SetDreamBlur(bool visible) {
    void* gm = Gamemode();
    if (!gm || g_offPlayerInterface < 0) return false;
    void* pi = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(gm) + g_offPlayerInterface);
    if (!pi || !R::IsLive(pi)) return false;
    // Resolve dreamBlur component lazily
    static int32_t s_offBlur = -2;
    if (s_offBlur == -2) {
        s_offBlur = R::FindPropertyOffset(R::ClassOf(pi), L"dreamBlur");
        if (s_offBlur >= 0)
            UE_LOGI("sleep: resolved playerInterface.dreamBlur @0x%04X", s_offBlur);
    }
    if (s_offBlur < 0) return false;
    void* blur = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(pi) + s_offBlur);
    if (!blur || !R::IsLive(blur)) return false;
    // Call SetVisibility(bool bNewVisibility)
    static void* sSetVisFn = nullptr;
    if (!sSetVisFn) {
        void* compCls = R::ClassOf(blur);
        if (compCls) sSetVisFn = R::FindFunction(compCls, L"SetVisibility");
    }
    if (!sSetVisFn) return false;
    ue_wrap::ParamFrame f(sSetVisFn);
    if (!f.valid()) return false;
    f.Set<bool>(L"bNewVisibility", visible);
    return ue_wrap::Call(blur, f);
}

void* SpawnDreamActor(const wchar_t* className) {
    if (!className || !className[0]) return nullptr;
    void* cls = R::FindClass(className);
    if (!cls) {
        UE_LOGW("sleep: SpawnDreamActor class '%ls' not found", className);
        return nullptr;
    }
    // Validate dreamBase_C lineage
    if (g_dreamBaseCls && !R::IsDescendantOfAny(cls, &g_dreamBaseCls, 1)) {
        UE_LOGW("sleep: SpawnDreamActor '%ls' is NOT a dreamBase subclass", className);
        return nullptr;
    }
    // GameplayStatics spawn (same pattern as atv.cpp SpawnMirror)
    static void* sGsCdo = nullptr;
    static void* sBeginFn = nullptr;
    static void* sFinishFn = nullptr;
    if (!sGsCdo) sGsCdo = R::FindClassDefaultObject(L"GameplayStatics");
    if (sGsCdo && (!sBeginFn || !sFinishFn)) {
        if (void* gc = R::FindClass(L"GameplayStatics")) {
            sBeginFn  = R::FindFunction(gc, L"BeginDeferredActorSpawnFromClass");
            sFinishFn = R::FindFunction(gc, L"FinishSpawningActor");
        }
    }
    if (!sGsCdo || !sBeginFn || !sFinishFn) {
        static bool sWarned = false;
        if (!sWarned) { sWarned = true;
            UE_LOGW("sleep: SpawnDreamActor -- GameplayStatics unresolved"); }
        return nullptr;
    }
    void* worldCtx = ue_wrap::engine::GetWorldContext();
    if (!worldCtx) return nullptr;
    // Identity transform (dreams are placed at fixed world positions; the player teleports to playerSpawn)
    ue_wrap::FTransform xform{};
    void* spawned = nullptr;
    {
        ue_wrap::ParamFrame begin(sBeginFn);
        if (!begin.valid()) return nullptr;
        begin.Set<void*>(L"WorldContextObject", worldCtx);
        begin.Set<void*>(L"ActorClass", cls);
        begin.SetRaw(L"SpawnTransform", &xform, sizeof(xform));
        begin.Set<uint8_t>(L"CollisionHandlingOverride", uint8_t{1});  // AlwaysSpawn
        begin.Set<void*>(L"Owner", nullptr);
        if (!ue_wrap::Call(sGsCdo, begin)) return nullptr;
        spawned = begin.Get<void*>(L"ReturnValue");
    }
    if (!spawned) return nullptr;
    {
        ue_wrap::ParamFrame finish(sFinishFn);
        if (!finish.valid()) return nullptr;
        finish.Set<void*>(L"Actor", spawned);
        finish.SetRaw(L"SpawnTransform", &xform, sizeof(xform));
        if (!ue_wrap::Call(sGsCdo, finish)) return nullptr;
    }
    UE_LOGI("sleep: spawned dream actor '%ls' %p", className, spawned);
    return spawned;
}

bool GetDreamPlayerSpawn(void* dream, float& x, float& y, float& z) {
    if (!dream || !g_dreamBaseCls || g_offPlayerSpawn < 0) return false;
    void* spawnComp = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(dream) + g_offPlayerSpawn);
    if (!spawnComp || !R::IsLive(spawnComp)) return false;
    // GetComponentLocation via USceneComponent
    static void* sGetLocFn = nullptr;
    if (!sGetLocFn) {
        void* compCls = R::ClassOf(spawnComp);
        if (compCls) sGetLocFn = R::FindFunction(compCls, L"GetComponentLocation");
    }
    if (!sGetLocFn) return false;
    ue_wrap::ParamFrame f(sGetLocFn);
    if (!f.valid()) return false;
    if (!ue_wrap::Call(spawnComp, f)) return false;
    // Return value is FVector at ReturnValue
    const uint8_t* ret = reinterpret_cast<const uint8_t*>(f.GetRaw(L"ReturnValue"));
    if (!ret) return false;
    x = *reinterpret_cast<const float*>(ret + 0);
    y = *reinterpret_cast<const float*>(ret + 4);
    z = *reinterpret_cast<const float*>(ret + 8);
    return true;
}

void DestroyDreamActor(void* dream) {
    if (!dream || !R::IsLive(dream)) return;
    static void* sK2 = nullptr;
    if (!sK2) {
        void* cls = R::ClassOf(dream);
        if (cls) sK2 = R::FindFunction(cls, L"K2_DestroyActor");
    }
    if (!sK2) return;
    R::CallFunction(dream, sK2, nullptr);
}

}  // namespace ue_wrap::sleep
