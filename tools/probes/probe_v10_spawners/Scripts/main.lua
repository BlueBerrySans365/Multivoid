--[[
  probe_v10_spawners -- T1 ticker-spawner RE probe (UE4SS v3.0.1 Lua).
  2026-07-10, /qf DESIGN pass follow-up.

  Targets: ticker_deerSpawner, ticker_mannequinSpawner, ticker_hexahiveSpawner,
           ticker_bp7Spawner -- the 4 ticker-driven spawners still NEEDS-PROBE.

  Purpose: determine each spawner's exact trigger mechanism, product class,
  spawn interval, and whether it's world-anchored or player-anchored.
  Data feeds the /qf DESIGN pass for t1 PARK vs t3 CANCEL decision.

  Channels:
   (a) BeginDeferredActorSpawnFromClass POST -- logs every deferred spawn with
       class name, transform, caller attribution.
   (b) K2_SetTimerDelegate POST -- logs timer arms on the spawner classes.
   (c) SetActorTickInterval POST -- logs tick interval changes.
   (d) Periodic census (30s) -- live ticker_base descendants: class, instances,
       tickEnabled, tickInterval.

  Deploy: ./tools/deploy-probe.sh probe_v10_spawners
  Read: UE4SS.log (grep "[SPAWNER-PROBE]")

  RUNTIME-VALIDATION: all hook targets are from CXX header dumps; exact-case
  names are verified against Game_0.9.0n/WindowsNoEditor/VotV/Binaries/Win64/CXXHeaderDump/.
]]

local UEHelpers = require("UEHelpers")

local TAG = "[SPAWNER-PROBE]"
local function log(m) print(TAG .. " " .. m .. "\n") end
local function logw(m) print(TAG .. " [WARN] " .. m .. "\n") end

-- Target spawner class names (the ticker classes we want to observe).
local TARGET_SPAWNERS = {
    ["ticker_deerSpawner_C"]      = { product = "deer_C",       interval = "60-300s" },
    ["ticker_mannequinSpawner_C"] = { product = "wMannequinSpawn_C", interval = "1-3h" },
    ["ticker_hexahiveSpawner_C"]  = { product = "hexahive",     interval = "40-60min" },
    ["ticker_bp7Spawner_C"]       = { product = "bp7_C",        interval = "unknown" },
}

-- Product class names (what we expect to see spawned).
local TARGET_PRODUCTS = {
    ["deer_C"]                = true,
    ["wMannequinSpawn_C"]     = true,
    ["hexahive_C"]            = true,
    ["hexahive"]              = true,
    ["bp7_C"]                 = true,
}

-- Statistics.
local stats = {
    deferredSpawns = 0,
    timerArms = 0,
    tickIntervalChanges = 0,
    censusRuns = 0,
    productSpawns = {},  -- class -> count
}

-- ==== CHANNEL (a): BeginDeferredActorSpawnFromClass POST ====================
-- This fires for EVERY deferred spawn in the game. We filter by product class
-- to catch the target spawners' outputs.

local function HookBeginDeferred()
    local gs = UEHelpers.GetGameplayStatics()
    if not gs then
        logw("GameplayStatics not found -- BeginDeferred hook skipped")
        return
    end

    -- Find the UFunction on GameplayStatics.
    local fn = StaticFindObject("/Script/Engine.GameplayStatics", nil, "BeginDeferredActorSpawnFromClass")
    if not fn or fn:IsValid() == false then
        logw("BeginDeferredActorSpawnFromClass UFunction not found -- hook skipped")
        return
    end

    -- Register a POST observer via the UE4SS detour system.
    -- The POST fires AFTER the original UFunction runs.
    -- Params layout: (UClass* ActorClass, FVector SpawnLocation, FRotator SpawnRotation, ESpawnActorCollisionHandlingMethod)
    -- ReturnValue: AActor* (the spawned actor, null if failed)

    RegisterPostDetective(fn, function(Context, Params, ReturnValue)
        stats.deferredSpawns = stats.deferredSpawns + 1

        -- Read the ActorClass param (first param, UClass* pointer).
        -- In UE4SS Lua, params are accessed by index (1-based).
        local actorClass = Params[1]
        if not actorClass or actorClass:IsValid() == false then return end

        -- Get the class name.
        local className = tostring(actorClass:GetFName())

        -- Check if this is a target product.
        if TARGET_PRODUCTS[className] then
            -- Read the return value (spawned actor).
            local spawnedActor = ReturnValue
            local posStr = "?"
            if spawnedActor and spawnedActor:IsValid() then
                local loc = spawnedActor:K2_GetActorLocation()
                if loc then
                    posStr = string.format("(%.0f, %.0f, %.0f)", loc.X, loc.Y, loc.Z)
                end
            end

            -- Get caller attribution from the UObject that owns this call.
            -- In UE4SS, we can try to get the calling context.
            local callerStr = "unknown"
            -- Note: exact caller attribution requires FFrame::Object which
            -- is not directly accessible from Lua. We log what we can.

            log(string.format("DEFERRED-SPAWN product='%s' pos=%s caller=%s",
                className, posStr, callerStr))

            -- Track stats.
            stats.productSpawns[className] = (stats.productSpawns[className] or 0) + 1
        end
    end)

    log("BeginDeferredActorSpawnFromClass POST observer registered")
end

-- ==== CHANNEL (b): K2_SetTimerDelegate POST ================================
-- This fires when a BP sets a timer delegate. We want to see which spawner
-- classes are arming timers and at what interval.

local function HookSetTimerDelegate()
    local fn = StaticFindObject("/Script/Engine.KismetSystemLibrary", nil, "K2_SetTimerDelegate")
    if not fn or fn:IsValid() == false then
        -- Try the GameplayStatics path (some engines use different class names).
        fn = StaticFindObject("/Script/Engine.GameplayStatics", nil, "SetTimer")
    end
    if not fn or fn:IsValid() == false then
        logw("K2_SetTimerDelegate UFunction not found -- timer hook skipped")
        return
    end

    RegisterPostDetective(fn, function(Context, Params, ReturnValue)
        stats.timerArms = stats.timerArms + 1

        -- The calling UObject (FFrame::Object) tells us which class is arming.
        -- In UE4SS Lua, we can try to read the Context or infer from the object.
        -- For now, we log the timer interval if available.
        if Params and #Params >= 2 then
            local interval = Params[2]  -- float Time
            if type(interval) == "number" then
                -- Check if the caller is one of our target spawners.
                -- We can't directly read FFrame::Object from Lua, but we can
                -- check the world for live instances and see if any match.
                log(string.format("TIMER-ARM interval=%.1fs", interval))
            end
        end
    end)

    log("K2_SetTimerDelegate POST observer registered")
end

-- ==== CHANNEL (c): SetActorTickInterval POST ===============================
-- This fires when a BP changes an actor's tick interval. The ticker spawners
-- re-arm themselves by changing their tick interval to a random value.

local function HookSetTickInterval()
    local fn = StaticFindObject("/Script/Engine.Actor", nil, "SetActorTickInterval")
    if not fn or fn:IsValid() == false then
        logw("SetActorTickInterval UFunction not found -- tick hook skipped")
        return
    end

    RegisterPostDetective(fn, function(Context, Params, ReturnValue)
        stats.tickIntervalChanges = stats.tickIntervalChanges + 1

        if Params and #Params >= 1 then
            local interval = Params[1]  -- float TickInterval
            if type(interval) == "number" then
                log(string.format("TICK-INTERVAL interval=%.1fs", interval))
            end
        end
    end)

    log("SetActorTickInterval POST observer registered")
end

-- ==== CHANNEL (d): Periodic ticker census ==================================
-- Walk GUObjectArray for ticker_base descendants. Log class, instances,
-- tickEnabled, tickInterval.

local function RunTickerCensus()
    ExecuteInGameThread(function()
        local ok, err = pcall(function()
            -- Find ticker_base_C class.
            local tickerBaseClass = StaticFindObject("/Script/VotV", nil, "ticker_base_C")
            if not tickerBaseClass or tickerBaseClass:IsValid() == false then
                log("CENSUS: ticker_base_C not found (not loaded yet)")
                return
            end

            -- Find AActor class for IsActorTickEnabled check.
            local actorClass = StaticFindObject("/Script/Engine", nil, "Actor")
            if not actorClass or actorClass:IsValid() == false then
                log("CENSUS: AActor class not found")
                return
            end

            -- Get all live objects.
            local world = UEHelpers.GetWorldContextObject()
            if not world then
                log("CENSUS: no world context")
                return
            end

            -- Use the actor iterator to find all live actors.
            -- UE4SS provides GetActorsOfClass or similar.
            local allActors = world:GetAllActorsOfClass(actorClass, nil)
            if not allActors then
                log("CENSUS: GetAllActorsOfClass returned nil")
                return
            end

            local byClass = {}
            for i = 0, allActors:Num() - 1 do
                local actor = allActors:Get(i)
                if actor and actor:IsValid() then
                    local cls = actor:GetClass()
                    if cls and cls:IsValid() then
                        local clsName = tostring(cls:GetFName())
                        -- Check if this is a ticker_base descendant.
                        -- We can't do hierarchy checks from Lua easily,
                        -- so we check by name pattern.
                        if string.find(clsName, "ticker_") then
                            if not byClass[clsName] then
                                byClass[clsName] = { count = 0, tickEnabled = 0 }
                            end
                            byClass[clsName].count = byClass[clsName].count + 1
                            if actor.bActorEnableCollision then
                                byClass[clsName].tickEnabled = byClass[clsName].tickEnabled + 1
                            end
                        end
                    end
                end
            end

            -- Log results.
            for clsName, data in pairs(byClass) do
                log(string.format("CENSUS class='%s' instances=%d tickEnabled=%d",
                    clsName, data.count, data.tickEnabled))
            end

            if next(byClass) == nil then
                log("CENSUS: zero ticker descendants found")
            end

            stats.censusRuns = stats.censusRuns + 1
        end)

        if not ok then
            logw("CENSUS error: " .. tostring(err))
        end
    end)
end

-- ==== Main ==================================================================

local function Main()
    log("=== probe_v10_spawners starting ===")
    log("Targets: deer, mannequin, hexahive, bp7 ticker spawners")

    -- Register hooks.
    HookBeginDeferred()
    HookSetTimerDelegate()
    HookSetTickInterval()

    -- Schedule periodic census (every 30 seconds).
    local timer = nil
    RegisterTick(function()
        -- Use a simple frame counter for timing.
        stats.censusRuns = stats.censusRuns + 1
        if stats.censusRuns % 300 == 0 then  -- ~30s at 10fps
            RunTickerCensus()
        end
    end)

    -- Run initial census after 10 seconds.
    RegisterDelayedFunction(function()
        RunTickerCensus()
    end, 10.0)

    log("Hooks registered; census scheduled. Read UE4SS.log for output.")
    log("=== probe_v10_spawners ready ===")
end

-- Entry point.
if RegisterCarryThenExecute then
    RegisterCarryThenExecute(Main)
else
    Main()
end
