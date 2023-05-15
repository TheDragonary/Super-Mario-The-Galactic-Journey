----------------
-----Models-----
----------------

E_MODEL_FLIPSWITCH_PANEL = smlua_model_util_get_id("Flipswitch_Panel_MOP")
E_MODEL_FLIPSWAP_PLATFORM = smlua_model_util_get_id("Flipswap_Platform_MOP")
E_MODEL_FLIPSWAP_PLATFORM_BORDER = smlua_model_util_get_id("Flipswap_Platform_Border_MOP")
E_MODEL_FLIPBLOCK = smlua_model_util_get_id("FlipBlock_MOP")
E_MODEL_NOTEBLOCK = smlua_model_util_get_id("Noteblock_MOP")
E_MODEL_SANDBLOCK = smlua_model_util_get_id("SandBlock_MOP")
E_MODEL_SHELL_1 = smlua_model_util_get_id("Shell_1_MOP")
E_MODEL_SHELL_2 = smlua_model_util_get_id("Shell_2_MOP")
E_MODEL_SHRINK_PLATFORM = smlua_model_util_get_id("Shrink_Platform_MOP")
E_MODEL_SHRINK_PLATFORM_BORDER = smlua_model_util_get_id("Shrink_Platform_Border_MOP")
E_MODEL_SWITCHBLOCK = smlua_model_util_get_id("Switchblock_MOP")
E_MODEL_SWITCHBLOCK_SWITCH = smlua_model_util_get_id("Switchblock_Switch_MOP")
E_MODEL_SPRING = smlua_model_util_get_id("Spring_MOP")
E_MODEL_CHECKPOINT = smlua_model_util_get_id("Checkpoint_Flag_MOP")
E_MODEL_GREEN_SWITCHBOARD = smlua_model_util_get_id("Green_Switchboard_MOP")
E_MODEL_GREEN_SWITCHBOARD_GEARS = smlua_model_util_get_id("Green_Switchboard_Gears_MOP")
E_MODEL_MOVING_ROTATING_BLOCK = smlua_model_util_get_id("Moving_Rotating_Block_MOP")

-------------------
-----Collision-----
-------------------

COL_FLIPBLOCK_MOP = smlua_collision_util_get("col_FlipBlock_MOP_0x7d1a98")
COL_NOTEBLOCK_MOP = smlua_collision_util_get("col_Noteblock_MOP_0xaa6444")
COL_SANDBLOCK_MOP = smlua_collision_util_get("col_Sandblock_MOP_0xaa6444")
COL_FLIPSWAP_PLATFORM_MOP = smlua_collision_util_get("col_Flipswap_Platform_MOP_0x7d9d88")
COL_FLIPSWITCH_PANEL_MOP = smlua_collision_util_get("col_Flipswitch_Panel_MOP_0x7daf78")
COL_GREEN_SWITCHBOARD_MOP = smlua_collision_util_get("col_Green_Switchboard_MOP_0x7ddc38")
COL_SHRINK_PLATFORM = smlua_collision_util_get("col_Shrink_Platform_MOP_0xad3720")
COL_SWITCHBLOCK_MOP = smlua_collision_util_get("col_Switchblock_MOP_0x7d3058")
COL_SWITCHBLOCK_SWITCH_MOP = smlua_collision_util_get("col_Switchblock_Switch_MOP_0x7d7348")
COL_MOVING_ROTATING_BLOCK_MOP = smlua_collision_util_get("col_Moving_Rotating_Block_MOP_0x7e3ea0")

-----------------
-----Actions-----
-----------------

SPRING_ACT_IDLE = 0
SPRING_ACT_INACTIVE = 1

FLIP_BLOCK_ACT_INACTIVE = 0
FLIP_BLOCK_ACT_IDLE = 1
FLIP_BLOCK_ACT_FLIPPING = 2

NOTEBLOCK_ACT_IDLE = 0
NOTEBLOCK_ACT_BOUNCE = 1

SANDBLOCK_ACT_IDLE = 0
SANDBLOCK_ACT_DISAPPEARING = 1
SANDBLOCK_ACT_DISAPPEARED = 2

FLIPSWAP_PLATFORM_ACT_IDLE = 0
FLIPSWAP_PLATFORM_ACT_FLIPPING = 1

CHECKPOINT_FLAG_ACT_IDLE = 0
CHECKPOINT_FLAG_ACT_SAVED = 1

GREEN_SWITCHBOARD_ACT_IDLE = 0
GREEN_SWITCHBOARD_ACT_MOVING = 1

SHRINK_PLATFORM_ACT_IDLE = 0
SHRINK_PLATFORM_ACT_DISAPPEARING = 1
SHRINK_PLATFORM_ACT_DISAPPEARED = 2

FLIPSWITCH_PANEL_ACT_IDLE = 0
FLIPSWITCH_PANEL_ACT_ACTIVE = 1

SWITCHBLOCK_ACT_ACTIVE = 0
SWITCHBLOCK_ACT_INACTIVE = 1

-------------------
-----Behaviors-----
-------------------

---@param name string
---@return Pointer_BehaviorScript
function get_behavior_from_name(name)
    return get_behavior_from_id(get_id_from_behavior_name(name))
end

-- Anything reliant on other objects that they don't spawn use the normal lua system
bhvSpring_MOP = get_behavior_from_name("bhvSpring_MOP")
bhvFlipBlock_MOP = get_behavior_from_name("bhvFlipBlock_MOP")
bhvNoteblock_MOP = get_behavior_from_name("bhvNoteblock_MOP")
bhvSandBlock_MOP = get_behavior_from_name("bhvSandBlock_MOP")
bhvFlipswap_Platform_MOP = get_behavior_from_name("bhvFlipswap_Platform_MOP")
--bhvCheckpoint_Flag_MOP = get_behavior_from_name("bhvCheckpoint_Flag_MOP")
bhvGreen_Switchboard_MOP = get_behavior_from_name("bhvGreen_Switchboard_MOP")
bhvShrink_Platform_MOP = get_behavior_from_name("bhvShrink_Platform_MOP")
--bhvFlipswitch_Panel_MOP = get_behavior_from_name("bhvFlipswitch_Panel_MOP")
--bhvFlipswitch_Panel_StarSpawn_MOP = get_behavior_from_name("bhvFlipswitch_Panel_StarSpawn_MOP")
bhvSwitchblock_MOP = get_behavior_from_name("bhvSwitchblock_MOP")
bhvSwitchblock_Switch_MOP = get_behavior_from_name("bhvSwitchblock_Switch_MOP")
bhvMoving_Rotating_Block_MOP = get_behavior_from_name("bhvMoving_Rotating_Block_MOP")
bhvEmitter_MOP = get_behavior_from_name("bhvEmitter_MOP")
bhvPSwitch_MOP = get_behavior_from_name("bhvPSwitch_MOP")

--[[ All of these have the same id for some reason, yet have different behaviors
id_bhvSpring_MOP = get_id_from_behavior_name("bhvSpring_MOP")
id_bhvFlipBlock_MOP = get_id_from_behavior_name("bhvFlipBlock_MOP")
id_bhvNoteblock_MOP = get_id_from_behavior_name("bhvNoteblock_MOP")
id_bhvSandBlock_MOP = get_id_from_behavior_name("bhvSandBlock_MOP")
id_bhvFlipswap_Platform_MOP = get_id_from_behavior_name("bhvFlipswap_Platform_MOP")
id_bhvCheckpoint_Flag_MOP = get_id_from_behavior_name("bhvCheckpoint_Flag_MOP")
id_bhvGreen_Switchboard_MOP = get_id_from_behavior_name("bhvGreen_Switchboard_MOP")
id_bhvShrink_Platform_MOP = get_id_from_behavior_name("bhvShrink_Platform_MOP")
id_bhvFlipswitch_Panel_MOP = get_id_from_behavior_name("bhvFlipswitch_Panel_MOP")
id_bhvFlipswitch_Panel_StarSpawn_MOP = get_id_from_behavior_name("bhvFlipswitch_Panel_StarSpawn_MOP")
id_bhvSwitchblock_MOP = get_id_from_behavior_name("bhvSwitchblock_MOP")
id_bhvSwitchblock_Switch_MOP = get_id_from_behavior_name("bhvSwitchblock_Switch_MOP")
id_bhvMoving_Rotating_Block_MOP = get_id_from_behavior_name("bhvMoving_Rotating_Block_MOP")
id_bhvEmitter_MOP = get_id_from_behavior_name("bhvEmitter_MOP")
id_bhvPSwitch_MOP = get_id_from_behavior_name("bhvPSwitch_MOP")
]]

--------------------------
-----Helper Variables-----
--------------------------

id_bhvFlipswap_Platform_Border_MOP = id_bhvUnused05A8
id_bhvShrink_Platform_Border_MOP = id_bhvUnused05A8
id_bhvGreen_Switchboard_Gears_MOP = id_bhvUnused05A8

-- This isn't used, but may as well keep it in case someone wants to use it
-- do_fall_damage = true

--------------------------
-----Helper Functions-----
--------------------------

function switch(param, case_table)
    local case = case_table[param]
    if case then return case() end
    local def = case_table['default']
    return def and def() or nil
end

--- Moves Mario to the top of the object, then sets his Y speed and resets his fall.
---@param m MarioState
---@param obj Object
---@param vel_y integer
function bounce_off_object(m, obj, vel_y)
    m.pos.y = obj.oPosY + obj.hitboxHeight
    m.vel.y = vel_y

    -- MARIO_UNKNOWN_8 is the flag that controls Mario's screaming when he falls from a high place
    -- This removes the flag so he can scream again
    m.flags = m.flags & ~MARIO_UNKNOWN_08

    play_sound(SOUND_ACTION_BOUNCE_OFF_OBJECT, m.marioObj.header.gfx.cameraToObject)
end

--- Gets closer to a goal value by the increment when ran
---@param goal integer
---@param src integer
---@param inc integer
function approach_by_increment(goal, src, inc)
    new_val = 0

    if (src <= goal) then
        if (goal - src < inc) then
            new_val = goal
        else
            new_val = src + inc
        end
    elseif (goal - src > -inc) then
        new_val = goal
    else
        new_val = src - inc
    end

    return new_val
end

---@param obj Object
---@param obj_encompassed Object
---@param rectangle_size number
---@return boolean
function obj_is_object_in_encompassing_rectangle(obj, obj_encompassed, rectangle_size)
    if obj_encompassed.oPosX - rectangle_size < obj.oPosX and
       obj_encompassed.oPosX + rectangle_size > obj.oPosX and
       obj_encompassed.oPosY - rectangle_size < obj.oPosY and
       obj_encompassed.oPosY + rectangle_size > obj.oPosY and
       obj_encompassed.oPosZ - rectangle_size < obj.oPosZ and
       obj_encompassed.oPosZ + rectangle_size > obj.oPosZ then
        return true
    end
    return false
end

---@param m MarioState
---@return boolean
function is_bubbled(m)
    if m.action == ACT_BUBBLED then
        return true
    end
    return false
end

---@param parent Object
---@param model ModelExtendedId
---@param behaviorId BehaviorId
function spawn_object_attached_to_parent(parent, model, behaviorId)
    local obj = spawn_non_sync_object(behaviorId, model, 0, 0, 0, nil)
    if obj == nil then return nil end

    obj_copy_pos_and_angle(obj, parent)
    return obj
end

--[[
---@param behaviorId BehaviorId
---@return table
function obj_get_all_with_behavior_id(behaviorId)
    local object_table = {}
    local obj = obj_get_first_with_behavior_id(behaviorId)
    while obj ~= nil do
        table.insert(object_table, obj)
        obj = obj_get_next_with_same_behavior_id(obj)
    end
    return object_table
end
]]

---@return boolean
function is_current_area_sync_valid()
    local np
    for i = 0, MAX_PLAYERS - 1, 1 do
        np = gNetworkPlayers[i]
        if np ~= nil and np.connected and (not np.currLevelSyncValid or not np.currAreaSyncValid) then
            return false
        end
    end
    return true
end

---@param num number
---@return number
function convert_s16(num)
    local min = -32768
    local max = 32767
    while (num < min) do
        num = max + (num - min)
    end
    while (num > max) do
        num = min + (num - max)
    end
    return num
end

-------------------
-----Functions-----
-------------------

------ Spring ------
-- Upon touching the spring, get launched in a set direction with a set speed, both horizontal and vertical.

---@param obj Object
function bhv_Spring_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.hitboxRadius = 160
    --obj.hitboxHeight = 160
    --obj.oInteractType = INTERACT_COIN
    --obj.oIntangibleTimer = 0
end

---@param obj Object
function bhv_Spring_loop(obj)
    obj_set_model_extended(obj, E_MODEL_SPRING)

    local mario_obj = gMarioStates[0].marioObj
    local m = gMarioStates[0]
    if is_bubbled(m) then return end

    local inherent_spd = 30.0
    local final_y_spd

    if obj.oAction == SPRING_ACT_IDLE then
        if obj_check_if_collided_with_object(obj, mario_obj) ~= 0 then
            set_mario_action(m, ACT_FREEFALL, 0)
            -- m.actionTimer = 1000 --Really doubt this is necessary
            m.faceAngle.y = obj.oFaceAngleYaw

            speed = string.unpack("I", string.pack("f", Yspd))
            -- Calculates how fast Mario should go using oBehParams2ndByte
            forward_vel = string.unpack("f", string.pack("I", speed + (obj.oBehParams2ndByte << 16)))
            mario_set_forward_vel(m, forward_vel)

            -- Calculates how high Mario should go using the 1st byte
            speed = speed + (((obj.oBehParams >> 24) & 0xFF) << 16)
            bounce_off_object(m, obj, string.unpack("f", string.pack("I", speed)))

            -- do_fall_damage = true
            -- Prevent interaction for some time
            obj.oAction = SPRING_ACT_INACTIVE
        end
    else
        -- Prevent interaction until half a second later
        if obj.oTimer == 15 then
            obj.oAction = SPRING_ACT_IDLE
        end
    end
end

--bhvSpring_MOP = hook_behavior(nil, OBJ_LIST_LEVEL, false, bhv_Spring_init, bhv_Spring_loop)

------ Flipblock ------
-- Hitting this block will cause it to spin, losing its collision until it stops spinning.

FLIP_TIMER = 210

---@param obj Object
function bhv_flip_block_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.oAction = 0
    --obj.oCollisionDistance = 500
    --obj.collisionData = COL_FLIPBLOCK_MOP

    network_init_object(obj, false, {
        "oAction"
    })
end

---@param obj Object
function bhv_flip_block_loop(obj)
    obj_set_model_extended(obj, E_MODEL_FLIPBLOCK)

    -- Setting a temporary hitbox allows this object to not have collision for some time
    local oHitbox = get_temp_object_hitbox()
    oHitbox.interactType = INTERACT_BREAKABLE
    oHitbox.downOffset = 0
    oHitbox.damageOrCoinValue = 0
    oHitbox.health = 0
    oHitbox.numLootCoins = 0
    oHitbox.radius = 64
    oHitbox.height = 64
    oHitbox.hurtboxHeight = 0
    oHitbox.hurtboxRadius = 0

    obj.oInteractStatus = 0


    if obj.oTimer == 0 and obj.oAction == FLIP_BLOCK_ACT_INACTIVE then
        obj_set_hitbox(obj, oHitbox)
        obj.oAction = FLIP_BLOCK_ACT_IDLE
    end
    -- Do things if it starts flipping
    if obj.oAction == FLIP_BLOCK_ACT_FLIPPING then
        obj.header.gfx.scale.y = 0.1
        -- Stop flipping and prepare it for next time
        if obj.oTimer == FLIP_TIMER then
            obj.oAction = FLIP_BLOCK_ACT_IDLE
            obj.oSubAction = 0
            -- Reset size
            obj.header.gfx.scale.y = 1
        end

        -- Flips the block
        obj.oFaceAnglePitch = obj.oFaceAnglePitch + (FLIP_TIMER - obj.oTimer) * 16
        if ((obj.oFaceAnglePitch / 0x8000) - obj.oSubAction) > 0 then
            cur_obj_play_sound_1(SOUND_GENERAL_SWISH_WATER)
            -- The subaction is basically used as a timer so the condition will eventually fail
            obj.oSubAction = obj.oSubAction + 1
        end
    else
        ---@type MarioState
        local m = gMarioStates[0]
        -- Flip whenever it becomes attacked
        if cur_obj_was_attacked_or_ground_pounded() ~= 0
        -- This condition is a hacky fix for not being able to interact with underwater flipblocks
        or (m.flags & MARIO_METAL_CAP ~= 0 and obj_is_object_in_encompassing_rectangle(m.marioObj, obj, 300)) then
            obj.oAction = FLIP_BLOCK_ACT_FLIPPING
            if is_current_area_sync_valid() then
                network_send_object(obj, false)
            end
            --obj.oIntangibleTimer = FLIP_TIMER -- I don't think this is used

            cur_obj_play_sound_1(SOUND_GENERAL_SWISH_WATER)
        else
            obj.oFaceAnglePitch = 0
            obj.header.gfx.scale.y = 1

            load_object_collision_model()
        end
    end
end

--bhvFlipBlock_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_flip_block_init, bhv_flip_block_loop)

------ Noteblock ------
-- Jumping onto this block will cause Mario to jump higher.

---@param obj Object
function bhv_noteblock_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.collisionData = COL_NOTEBLOCK_MOP
    --obj.oHomeX = obj.oPosX
    --obj.oHomeY = obj.oPosY
    --obj.oHomeZ = obj.oPosZ

    ---- I guess it's slightly larger than intended
    --cur_obj_scale(0.64)
end

---@param obj Object
function bhv_noteblock_loop(obj)
    obj_set_model_extended(obj, E_MODEL_NOTEBLOCK)

    load_object_collision_model()

    local m = gMarioStates[0]
    local y_spd = 64

    if cur_obj_is_mario_on_platform() == 1 and not is_bubbled(m) then
         --this is awful -- It really is -Sunk
        -- Jump. If A is pressed during the jump, increase y_spd.
        if m.controller.buttonPressed & A_BUTTON ~= 0 then
            y_spd = y_spd + 12
            spawn_mist_particles()
        end
        set_mario_action(m, ACT_DOUBLE_JUMP, 0)

        -- Calculates y speed
        calc_speed = string.unpack("I", string.pack("f", y_spd))
		calc_speed = calc_speed + (obj.oBehParams2ndByte << 16)
		y_spd = string.unpack("f", string.pack("I", calc_speed))
		m.vel.y = y_spd

        obj.oAction = NOTEBLOCK_ACT_BOUNCE
        -- do_fall_damage = true
    end

    if obj.oAction == NOTEBLOCK_ACT_BOUNCE then
        if obj.oTimer == 4 then
            obj.oAction = NOTEBLOCK_ACT_IDLE
            obj.oPosY = obj.oHomeY
        else
            -- Moves the noteblock slightly up and down, to give it a "bounce"
            if obj.oTimer > 2 then
                obj.oPosY = obj.oHomeY + (obj.oTimer % 3) * 6
            else
                obj.oPosY = obj.oHomeY - obj.oTimer * 6
            end
        end
    end
end

--bhvNoteblock_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_noteblock_init, bhv_noteblock_loop)

------ Sandblock ------
-- Standing on this block causes it to slowly fall to pieces, eventually no longer becoming a platform.

---@param obj Object
function bhv_sandblock_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.collisionData = COL_SANDBLOCK_MOP
    --cur_obj_set_home_once()

    network_init_object(obj, false, {
        "oAction"
    })
end

---@param obj Object
function bhv_sandblock_loop(obj)
    obj_set_model_extended(obj, E_MODEL_SANDBLOCK)

    -- Only activate collision if the sandblock has not disappeared
    if obj.oAction < SANDBLOCK_ACT_DISAPPEARED then
        load_object_collision_model()
    end
    -- Disappearing
    switch(obj.oAction, {
        [SANDBLOCK_ACT_DISAPPEARING] = function()
            if obj.oTimer == 300 then
                obj.oAction = SANDBLOCK_ACT_DISAPPEARED
            end
            -- Causes the sandblock to become smaller and smaller on the y axis
            obj.header.gfx.scale.y = ((300 - obj.oTimer) / 300.0)
            -- Makes the sandblock not move the player vertically as it's breaking
            obj.oPosY = obj.oPosY + 1.025

            -- Spawn effects
            spawn_non_sync_object(id_bhvDirtParticleSpawner, E_MODEL_NONE, obj.oPosX, obj.oPosY, obj.oPosZ, nil)
            cur_obj_play_sound_1(SOUND_ENV_MOVINGSAND)
        end,
        -- Respawns the block after it disappears
        [SANDBLOCK_ACT_DISAPPEARED] = function()
            cur_obj_hide()
            if obj.oTimer == 301 then
                obj.oPosY = obj.oHomeY
                obj.oAction = SANDBLOCK_ACT_IDLE
                obj.header.gfx.scale.y = 1.0
                cur_obj_unhide()
            end
        end
    })

    if cur_obj_is_mario_on_platform() == 1 and obj.oAction == SANDBLOCK_ACT_IDLE and not is_bubbled(gMarioStates[0]) then
        obj.oAction = SANDBLOCK_ACT_DISAPPEARING
        if is_current_area_sync_valid() then
            network_send_object(obj, false)
        end
    end
end

--bhvSandBlock_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_sandblock_init, bhv_sandblock_loop)

------ Flipswap platform ------
-- Jumping will cause this platform to spin, moving the land somewhere else.

FLIP_SPEED_MULTIPLIER = 0.5

---@param obj Object
function bhv_flipswap_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.oFaceAngleRoll = 0
    --obj.collisionData = COL_FLIPSWAP_PLATFORM_MOP
    -- Spawns the border
    local childObj = spawn_non_sync_object(id_bhvFlipswap_Platform_Border_MOP, E_MODEL_FLIPSWAP_PLATFORM_BORDER, obj.oPosX, obj.oPosY, obj.oPosZ,
    ---@param o Object
    function (o)
        o.oFaceAngleYaw = obj.oFaceAngleYaw
    end)
    childObj.parentObj = obj

    network_init_object(obj, false, {
        "oAction",
        "oMoveAngleRoll"
    })
end

---@param obj Object
function bhv_flipswap_loop(obj)
    obj_set_model_extended(obj, E_MODEL_FLIPSWAP_PLATFORM)
    load_object_collision_model()

    local m = gMarioStates[0]

    switch(obj.oAction, {
        [FLIPSWAP_PLATFORM_ACT_IDLE] = function ()
            -- If Mario enters an air action, start flipping
            if m.prevAction & ACT_GROUP_MASK ~= ACT_GROUP_AIRBORNE and m.action & ACT_GROUP_MASK == ACT_GROUP_AIRBORNE then
                --sloth brain it
                if obj.oFaceAngleRoll == 0 then
                    obj.oMoveAngleRoll = -2048 * FLIP_SPEED_MULTIPLIER
                else
                    obj.oMoveAngleRoll = 2048 * FLIP_SPEED_MULTIPLIER
                end
                obj.oAction = FLIPSWAP_PLATFORM_ACT_FLIPPING
                if is_current_area_sync_valid() then
                    network_send_object(obj, false)
                end
            end
        end,
        [FLIPSWAP_PLATFORM_ACT_FLIPPING] = function ()
            -- Flip the platform
            if obj.oTimer < 16 * FLIP_SPEED_MULTIPLIER ^ -1 then
                obj.oFaceAngleRoll = obj.oFaceAngleRoll + obj.oMoveAngleRoll
            -- Disallow flipping again until Mario lands
            elseif m.action & ACT_GROUP_MASK ~= ACT_GROUP_AIRBORNE then
                obj.oAction = FLIPSWAP_PLATFORM_ACT_IDLE
            end
        end
    })
end

--bhvFlipswap_Platform_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_flipswap_init, bhv_flipswap_loop)

------ Checkpoint flag ------
-- Dying will cause the player to respawn at this point

Checkpoint = {
    x = 0,
    y = 0,
    z = 0
}

---@param m MarioState
function checkpoint_save(m)
    vec3f_copy(Checkpoint, m.pos)
end

---@param m MarioState
function checkpoint_load(m)
    vec3f_copy(m.pos, Checkpoint)
end

---@param m MarioState
function reset_player(m)
    set_mario_action(m, ACT_IDLE, 0)
    soft_reset_camera(m.area.camera)
    m.area.camera.cutscene = 0
    m.health = 0x880
end

---@param obj Object
function bhv_checkpoint_flag_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO
    obj.oInteractType = INTERACT_POLE
    obj.hitboxRadius = 64
    obj.hitboxHeight = 650
    obj.oIntangibleTimer = -1
end

---@param obj Object
function bhv_checkpoint_flag_loop(obj)
    obj_set_model_extended(obj, E_MODEL_CHECKPOINT)
    local obj_count = obj_count_objects_with_behavior_id(bhvCheckpoint_Flag_MOP)

    ---@type MarioState
    local m = gMarioStates[0]
    if is_bubbled(m) then return end

    if dist_between_objects(obj, m.marioObj) < 150 then
        if obj.oAction == CHECKPOINT_FLAG_ACT_IDLE then
            checkpoint_save(m)
            obj.oAction = CHECKPOINT_FLAG_ACT_SAVED
            local sparkle = spawn_object_attached_to_parent(obj, E_MODEL_SPARKLES, id_bhvSparkle)
            if sparkle ~= nil then obj_set_gfx_scale(sparkle, 5, 5, 5) end
            play_sound(SOUND_MENU_CHANGE_SELECT + (1 << 16), {x = 0, y = 0, z = 0})

            local amount_of_other_flags = obj_count - 1
            if amount_of_other_flags == 0 then return end

            -- Disables all other checkpoints once this checkpoint is gotten
            local o = obj_get_first_with_behavior_id(bhvCheckpoint_Flag_MOP)
            while o ~= nil do
                if obj ~= o then
                    o.oAction = CHECKPOINT_FLAG_ACT_IDLE
                end
                o = obj_get_next(o)
            end
        end
    end
end

---@param m MarioState
hook_event(HOOK_ON_DEATH, function (m)
    local obj = obj_get_first_with_behavior_id(bhvCheckpoint_Flag_MOP)
    if obj == nil then return true end

    -- Upon dying, restart at the last saved checkpoint
    while obj ~= nil do
        if obj.oAction == CHECKPOINT_FLAG_ACT_SAVED then
            checkpoint_load(m)
            reset_player(m)
            return false
        end
        obj = obj_get_next(obj)
    end
    return true
end)

bhvCheckpoint_Flag_MOP = hook_behavior(nil, OBJ_LIST_GENACTOR, false, bhv_checkpoint_flag_init, bhv_checkpoint_flag_loop)

------ Green switchboard ------
-- The platform moves depending on where the player is on it. Similar to the rolling log.
-- ! Prone to desyncs

---@param obj Object
function bhv_green_switchboard_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_MOVE_XZ_USING_FVEL
    --obj.collisionData = COL_GREEN_SWITCHBOARD_MOP
    -- Spawns gears
    -- Don't know why it uses intro lakitu cloud
    obj.oIntroLakituCloud = spawn_object_attached_to_parent(obj, E_MODEL_GREEN_SWITCHBOARD_GEARS, id_bhvGreen_Switchboard_Gears_MOP)
    --cur_obj_set_home_once()

    network_init_object(obj, false, {
        "oAction",
    })
end

---@param obj Object
function bhv_green_switchboard_loop(obj)
    obj_set_model_extended(obj, E_MODEL_GREEN_SWITCHBOARD)

    load_object_collision_model()

    local MAX_SPEED = 20.0
    local SPEED_INC = 2.0
    local child = obj.oIntroLakituCloud
    local dot = 0
    --local dotH = 0

    switch(obj.oAction, {
        [GREEN_SWITCHBOARD_ACT_MOVING] = function ()
            -- Hopefully makes sure the Mario the object is referencing is the Mario that's on
            local m = nearest_mario_state_to_object(obj)

            local dx = m.pos.x - obj.oPosX
            local dz = m.pos.z - obj.oPosZ
            --local dHx = obj.oPosX - obj.oHomeX
            --local dHz = obj.oPosZ - obj.oHomeZ
            local facingZ = coss(obj.oFaceAngleYaw)
            local facingX = sins(obj.oFaceAngleYaw)

            --if dot is positive, mario is on front arrow
            dot = facingZ * dz + facingX * dx
            --dotH = facingZ * dHz + facingX * dHx

            if dot > 0 then
                -- ??? Why check the behavior parameter for this?
                --if dotH < ((obj.oBehParams >> 24) & 0xFF) * 16 then
                    obj.oForwardVel = approach_by_increment(MAX_SPEED, obj.oForwardVel, SPEED_INC)
                --else
                --    obj.oForwardVel = 0
                --end
                obj.oFaceAnglePitch = approach_by_increment(2048.0, obj.oFaceAnglePitch, 128.0)
            else
                -- ??? Why check the second byte of the behavior paramter for this?
                --if dotH > obj.oBehParams2ndByte * -16 then
                    obj.oForwardVel = approach_by_increment(-MAX_SPEED, obj.oForwardVel, SPEED_INC)
                --else
                --    obj.oForwardVel = 0
                --end
                --this function doesn't work well with negatives thanks nintendo
                if (obj.oFaceAnglePitch > -2048) then
                    obj.oFaceAnglePitch = approach_by_increment( -2048.0, obj.oFaceAnglePitch, 128.0)
                end
            end

            if m.marioObj.platform ~= obj then
                obj.oAction = GREEN_SWITCHBOARD_ACT_IDLE
            end
        end,
        [GREEN_SWITCHBOARD_ACT_IDLE] = function ()
            -- Slowly resets the pitch and speed back to 0
            obj.oForwardVel = approach_by_increment(0.0, obj.oForwardVel, SPEED_INC)
            obj.oFaceAnglePitch = approach_by_increment(0.0, obj.oFaceAnglePitch, 128.0)
        end
    })
    -- Moves the gears along with the platform
    child.oFaceAnglePitch = child.oFaceAnglePitch + (obj.oForwardVel * 200)
    obj_copy_pos(child, obj)

    -- Using actions to make syncing faster
    if cur_obj_is_mario_on_platform() == 1 and not is_bubbled(gMarioStates[0]) then
        obj.oAction = GREEN_SWITCHBOARD_ACT_MOVING
        if is_current_area_sync_valid() then
            network_send_object(obj, false)
        end
    end
end

--bhvGreen_Switchboard_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_green_switchboard_init, bhv_green_switchboard_loop)

------ Shrink platform ------
-- Upon being stood on, shrinks platform over time until it no longer exists.

SHRINK_TIME = 150

---@param obj Object
function bhv_shrinkplatform_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.collisionData = COL_SHRINK_PLATFORM
    ---- Spawns border
    local childObj = spawn_non_sync_object(id_bhvShrink_Platform_Border_MOP, E_MODEL_SHRINK_PLATFORM_BORDER, obj.oPosX, obj.oPosY, obj.oPosZ, nil)
    childObj.parentObj = obj

    network_init_object(obj, false, {
        "oAction"
    })
end

---@param obj Object
function bhv_shrinkplatform_loop(obj)
    obj_set_model_extended(obj, E_MODEL_SHRINK_PLATFORM)

    -- Only activate collision if the model is still visible
    if obj.oAction < SHRINK_PLATFORM_ACT_DISAPPEARED then
        load_object_collision_model()
    end

    switch(obj.oAction, {
        --disappearing
        [SHRINK_PLATFORM_ACT_DISAPPEARING] = function()
            if obj.oTimer == SHRINK_TIME then
                obj.oAction = SHRINK_PLATFORM_ACT_DISAPPEARED
            end

            -- Slowly shrinks the size of the platform horizontally
            obj.header.gfx.scale.x = (SHRINK_TIME - obj.oTimer) / SHRINK_TIME
            obj.header.gfx.scale.z = (SHRINK_TIME - obj.oTimer) / SHRINK_TIME
        end,
        [SHRINK_PLATFORM_ACT_DISAPPEARED] = function()
            -- Reset after the platform has fully disappeared
            cur_obj_hide()
            if obj.oTimer == SHRINK_TIME + 1 then
                obj.oAction = SHRINK_PLATFORM_ACT_IDLE
                obj.header.gfx.scale.x = 1.0
                obj.header.gfx.scale.z = 1.0
                cur_obj_unhide()
            end
        end
    })

    -- Start disappearing once Mario gets on it
    if cur_obj_is_mario_on_platform() == 1 and obj.oAction == SHRINK_PLATFORM_ACT_IDLE and not is_bubbled(gMarioStates[0]) then
        obj.oAction = SHRINK_PLATFORM_ACT_DISAPPEARING
        cur_obj_play_sound_1(SOUND_OBJ_UNK23)
        if is_current_area_sync_valid() then
            network_send_object(obj, false)
        end
    end
end

--bhvShrink_Platform_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_shrinkplatform_init, bhv_shrinkplatform_loop)

------ Flipswitch panel ------
-- Jumping onto a panel activates it. Activating all panels spawns a star. Jumping onto a panel while it's activated with deactivate it.

hook_event(HOOK_ON_LEVEL_INIT, function ()
    if obj_count_objects_with_behavior_id(bhvFlipswitch_Panel_StarSpawn_MOP) == 0 then
        StarSpawned = false
    end
end)

StarSpawned = false

---@param obj Object
function bhv_flipswitch_panel_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj.collisionData = COL_FLIPSWITCH_PANEL_MOP
    obj.oCollisionDistance = 1024
    obj.parentObj = obj_get_nearest_object_with_behavior_id(obj, bhvFlipswitch_Panel_StarSpawn_MOP)

    network_init_object(obj, false, {
        "oAction",
        "oAnimState"
    })
end

---@param obj Object
function bhv_flipswitch_panel_loop(obj)
    obj_set_model_extended(obj, E_MODEL_FLIPSWITCH_PANEL)

    load_object_collision_model()

    -- Always checks for the starspawn mop
    if obj.parentObj == nil then
        obj.parentObj = obj_get_nearest_object_with_behavior_id(obj, bhvFlipswitch_Panel_StarSpawn_MOP)
        if obj.parentObj == nil then
           return
        end
    end

    -- Turn green and don't allow further change
    if StarSpawned then
        obj.oAnimState = 2
    else
        switch(obj.oAction, {
            [FLIPSWITCH_PANEL_ACT_IDLE] = function()
                if cur_obj_is_mario_on_platform() == 1 and not is_bubbled(gMarioStates[0]) then
                    -- Causes the panel to change colors upon being pressed multiple times
                    obj.parentObj.oHiddenStarTriggerCounter = obj.parentObj.oHiddenStarTriggerCounter + 1 - (2 * obj.oAnimState)
                    obj.oAnimState = obj.oAnimState ~ 1

                    cur_obj_play_sound_1(SOUND_GENERAL_BIG_CLOCK)
                    obj.oAction = FLIPSWITCH_PANEL_ACT_ACTIVE
                    if is_current_area_sync_valid() then
                        network_send_object(obj, false)
                    end
                end
            end,
            [FLIPSWITCH_PANEL_ACT_ACTIVE] = function()
                local closest_player = nearest_player_to_object(obj)
                if cur_obj_is_mario_on_platform() == 0 and closest_player ~= nil and closest_player.platform ~= obj then
                    obj.oAction = FLIPSWITCH_PANEL_ACT_IDLE
                end
            end
        })
    end
end

bhvFlipswitch_Panel_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_flipswitch_panel_init, bhv_flipswitch_panel_loop)

---@param obj Object
function bhv_flipswitch_panel_starspawn_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE -- Debugging moment

    obj.oHealth = obj_count_objects_with_behavior_id(bhvFlipswitch_Panel_MOP)

    network_init_object(obj, false, {
        "oHiddenStarTriggerCounter"
    })
end

---@param obj Object
function bhv_flipswitch_panel_starspawn_loop(obj)
    local amount_of_panels = obj_count_objects_with_behavior_id(bhvFlipswitch_Panel_MOP)
    -- Prevents the starspawn mop from prematurely assume all panels have been pressed
    if amount_of_panels > obj.oHealth or obj.oHealth == 0 then
        obj.oHealth = amount_of_panels
        return
    end

    --[[
    -- Forces checking how many panels are activated
    local panels = obj_get_all_with_behavior_id(bhvFlipswitch_Panel_MOP)
    local anim_state_count = 0
    ---@param value Object
    for index, value in ipairs(panels) do
        anim_state_count = anim_state_count + value.oAnimState
    end
    obj.oHiddenStarTriggerCounter = anim_state_count
    ]]

    if obj.oHealth == obj.oHiddenStarTriggerCounter and not StarSpawned then
        spawn_red_coin_cutscene_star(obj.oPosX, obj.oPosY, obj.oPosZ)
        StarSpawned = true
        obj.activeFlags = obj.activeFlags | ACTIVE_FLAG_DEACTIVATED
    end

    if is_current_area_sync_valid() then
        network_send_object(obj, false)
    end
end

bhvFlipswitch_Panel_StarSpawn_MOP = hook_behavior(nil, OBJ_LIST_GENACTOR, false, bhv_flipswitch_panel_starspawn_init, bhv_flipswitch_panel_starspawn_loop)

------ Switchblock ------
-- This block is either red or blue. If the corresponding switch is pressed, activate blocks of one color and deactivate blocks of another color.
-- The color of each block and switch depends ont the 2nd byte.
-- 2nd byte of 0 spawns red 2nd byte of 2 spawns blue.
-- Anim state 0 is red, 1 is red deactivated, 2 is blue, 3 is blue deactivated.

gGlobalSyncTable.switchBlockState = 0

--[[
-- Reset values if none exists
hook_event(HOOK_ON_LEVEL_INIT, function()
    if find_object_with_behavior(get_behavior_from_id(bhvSwitchblock_MOP)) == nil then
        gGlobalSyncTable.switchBlockState = 0
    end
end)
]]

---@param obj Object
function bhv_Switchblock_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.collisionData = COL_SWITCHBLOCK_MOP
end

---@param obj Object
function bhv_Switchblock_loop(obj)
    obj_set_model_extended(obj, E_MODEL_SWITCHBLOCK)

    -- Determines which block color this becomes
    local params_2nd_byte = obj.oBehParams2ndByte
    obj.oAnimState = params_2nd_byte + obj.oAction -- Changes anim states

    -- Only loads collision if the corresponding switch is pressed
    -- Switchblocks have a second byte of 0 and 2, while switches have a second byte of 0 and 1
    if gGlobalSyncTable.switchBlockState == params_2nd_byte * 0.5 then
        load_object_collision_model()
        obj.oAction = SWITCHBLOCK_ACT_ACTIVE
    else
        obj.oAction = SWITCHBLOCK_ACT_INACTIVE
    end
end

--bhvSwitchblock_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_Switchblock_init, bhv_Switchblock_loop)

---@param obj Object
function bhv_Switchblock_Switch_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.collisionData = COL_SWITCHBLOCK_SWITCH_MOP
end

---@param obj Object
function bhv_Switchblock_Switch_loop(obj)
    obj_set_model_extended(obj, E_MODEL_SWITCHBLOCK_SWITCH)

    local params_2nd_byte = obj.oBehParams2ndByte
    load_object_collision_model()

    obj.oAnimState = params_2nd_byte
    if cur_obj_is_mario_on_platform() == 1 then
        gGlobalSyncTable.switchBlockState = params_2nd_byte
    end

    local mathNum = 0
    if gGlobalSyncTable.switchBlockState ~= params_2nd_byte then
        mathNum = 1
    else
        mathNum = 0
    end

    -- Make smaller if the switch is pressed
    obj.header.gfx.scale.y = mathNum * 0.9 + 0.1
end

--bhvSwitchblock_Switch_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_Switchblock_Switch_init, bhv_Switchblock_Switch_loop)

------ Moving Rotating Block ------
-- Moves on a square path. Occationally flips.

define_custom_obj_fields({
    oIncrement = "u32",
    oInitialPitch = "s32"
})

ZPLUS = 0
ZMINUS = 1
XPLUS = 2
XMINUS = 3
LOOP = 4

MoveRotatePath1 = {
    ZPLUS,
    XPLUS,
    ZMINUS,
    XMINUS,
    LOOP
}

MoveRotatePath2 = {
    ZPLUS,
    ZPLUS,
    ZPLUS,
    ZMINUS,
    ZMINUS,
    ZMINUS,
    LOOP
}

MoveRotatePath3 = {
    XPLUS,
    XPLUS,
    XPLUS,
    XMINUS,
    XMINUS,
    XMINUS,
    LOOP
}

Paths = {
    MoveRotatePath1,
    MoveRotatePath2,
    MoveRotatePath3
}

--speeds are 8 in each dir
--red is bparam1 =1, offset timer by 0x80 on frame 1
--rotates every 0x110 frames aka ~9s or 272 frames
--rotate for pitch vel of 0x0400 for 0x20 frames
--advanced forward a direction every 0x3C frames

---@param obj Object
function bhv_move_rotate_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.collisionData = COL_MOVING_ROTATING_BLOCK_MOP
    -- Co-op always draws everything on screen
    --obj.oDrawingDistance = 19455

    obj.oTimer = obj.oTimer + 0x80 * (obj.oBehParams >> 24)
	obj.oAnimState = (obj.oBehParams >> 24)
    obj.oUnk1A8 = 0
    -- Forces the default case
    obj.oIncrement = 4
    obj.oInitialPitch = obj.oFaceAnglePitch

    network_init_object(obj, false, {
        "oPosX",
        "oPosY",
        "oPosZ",
        "oIncrement",
        "oUnk1A8",
        "oTimer",
        "oFaceAnglePitch"
    })
end

PLAT_SPEED = 8
PLAT_FLIP_START_TIMER = 0x110
PLAT_FLIP_END_TIMER = 0x130
PLAT_MOVEMENT_FRAMES = 0x3C

---@param obj Object
function bhv_move_rotate_loop(obj)
    load_object_collision_model()

    local direction = 0
    -- After a while, flip the platform
	if obj.oTimer >= PLAT_FLIP_START_TIMER and obj.oTimer <= PLAT_FLIP_END_TIMER then
		obj.oAngleVelPitch = 0x400
    else
		obj.oAngleVelPitch = 0
        obj.oTimer = obj.oTimer % PLAT_FLIP_END_TIMER + 1
        -- Forces the platform to have the correct pitches
        if obj.oFaceAnglePitch ~= obj.oInitialPitch and obj.oFaceAnglePitch ~= convert_s16(obj.oInitialPitch) then
            if math.abs(obj.oFaceAnglePitch) <= math.abs(convert_s16(obj.oFaceAnglePitch + 32768)) then
                obj.oFaceAnglePitch = obj.oInitialPitch
            else
                obj.oFaceAnglePitch = convert_s16(obj.oInitialPitch - 32768)
            end
        end
    end
    -- Adding 1 since lua uses 1 index rather than c which uses 0 index
	direction = Paths[obj.oBehParams2ndByte + 1][obj.oIncrement + 1]

	switch(direction, {
        [ZPLUS] = function ()
            obj.oUnk1A8 = obj.oUnk1A8 + 1
			obj.oVelZ = PLAT_SPEED
			obj.oVelX = 0
        end,
		[ZMINUS] = function ()
			obj.oUnk1A8 = obj.oUnk1A8 + 1
			obj.oVelZ = -PLAT_SPEED
			obj.oVelX = 0
        end,
		[XPLUS] = function ()
            obj.oUnk1A8 = obj.oUnk1A8 + 1
			obj.oVelX = PLAT_SPEED
			obj.oVelZ = 0
        end,
		[XMINUS] = function ()
            obj.oUnk1A8 = obj.oUnk1A8 + 1
			obj.oVelX = -PLAT_SPEED
			obj.oVelZ = 0
        end,
		["default"] = function ()
            obj.oIncrement = 0
        end
	})

    -- After moving in a direction for a while, move in the next
	if obj.oUnk1A8 == PLAT_MOVEMENT_FRAMES then
		obj.oIncrement = obj.oIncrement + 1
		obj.oUnk1A8 = 0
        if is_current_area_sync_valid() then
            network_send_object(obj, false)
        end
    end

	cur_obj_rotate_face_angle_using_vel()
	cur_obj_move_using_vel()
end

--bhvMoving_Rotating_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_move_rotate_init, bhv_move_rotate_loop)

------ Emitter ------
-- Emits sparkles

---@param obj Object
function bhv_emitter_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.oDrawingDistance = 5120
end

---@param obj Object
function bhv_emitter_loop(obj)
    spawn_object_attached_to_parent(obj, E_MODEL_NONE, id_bhvSparkleSpawn)
end

--bhvEmitter_MOP = hook_behavior(nil, OBJ_LIST_GENACTOR, false, bhv_emitter_init, bhv_emitter_loop)

------ P Switch ------

function Swap_Coins_Box()
    local box_obj
    local coin_obj
    while true do
        box_obj = obj_get_nearest_object_with_behavior_id(box_obj, id_bhvBreakableBox)
		if box_obj == nil then
			break
		else
            spawn_object_attached_to_parent(box_obj, E_MODEL_YELLOW_COIN, id_bhvOneCoin)
			box_obj.activeFlags = ACTIVE_FLAG_DEACTIVATED
		end
    end
    while true do
        coin_obj = obj_get_nearest_object_with_behavior_id(coin_obj, id_bhvYellowCoin)
		if coin_obj == nil then
			break
		else
            spawn_object_attached_to_parent(coin_obj, E_MODEL_BREAKABLE_BOX, id_bhvBreakableBox)
            coin_obj.oIntangibleTimer = -1
            coin_obj.activeFlags = ACTIVE_FLAG_DEACTIVATED
		end
    end
end

---@param obj Object
function bhv_pswitch_init(obj)
    --obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    --obj.collisionData = smlua_collision_util_get("purple_switch_seg8_collision_0800C7A8")

    network_init_object(obj, false, {
        "oAction"
    })
end

---@param obj Object
function bhv_pswitch_loop(obj)
    load_object_collision_model()
    ---@type MarioState
    local m = gMarioStates[0]

    switch(obj.oAction, {
        -- Set the switch's model and scale. If Mario is standing near the
        -- switch's middle section, transition to the pressed state.
        [PURPLE_SWITCH_IDLE] = function ()
            obj_set_model_extended(obj, E_MODEL_PURPLE_SWITCH)
            cur_obj_scale(1.0)

            if m.marioObj.platform == obj --[[and not m.action & MARIO_UNKNOWN_13 ~= 0]] then
                if lateral_dist_between_objects(obj, m.marioObj) < 127.5 then
                    obj.oAction = PURPLE_SWITCH_PRESSED
                    if is_current_area_sync_valid() then
                        network_send_object(obj, false)
                    end
                end
            end
        end,

        -- Collapse the switch downward, play a sound, and shake the screen.
        -- Immediately transition to the ticking state.
        [PURPLE_SWITCH_PRESSED] = function ()
            cur_obj_scale_over_time(2, 3, 1.0, 0.2)

            if obj.oTimer == 3 then
                cur_obj_play_sound_2(SOUND_GENERAL2_PURPLE_SWITCH)
                obj.oAction = PURPLE_SWITCH_TICKING
                cur_obj_shake_screen(SHAKE_POS_SMALL)
				Swap_Coins_Box()
                if is_current_area_sync_valid() then
                    network_send_object(obj, false)
                end
			end
        end,

        -- Play a continuous ticking sound that gets faster when time is almost
        -- up. When time is up, move to a waiting-while-pressed state.
        [PURPLE_SWITCH_TICKING] = function ()
            if (obj.oTimer < 360) then
				play_sound(SOUND_GENERAL2_SWITCH_TICK_FAST, {x = 0, y = 0, z = 0})
			else
				play_sound(SOUND_GENERAL2_SWITCH_TICK_SLOW, {x = 0, y = 0, z = 0})
            end
			if obj.oTimer > 400 then
				obj.oAction = PURPLE_SWITCH_WAIT_FOR_MARIO_TO_GET_OFF
				Swap_Coins_Box()
                if is_current_area_sync_valid() then
                    network_send_object(obj, false)
                end
            end
        end,

        -- Make the switch look unpressed again, and transition back to the
        -- idle state.
        [PURPLE_SWITCH_UNPRESSED] = function ()
            cur_obj_scale_over_time(2, 3, 0.2, 1.0)
            if obj.oTimer == 3 then
                obj.oAction = PURPLE_SWITCH_IDLE
                if is_current_area_sync_valid() then
                    network_send_object(obj, false)
                end
            end
        end,

        -- Mario is standing on the switch, but time has expired. Wait for
        -- him to get off the switch, and when he does so, transition to the
        -- unpressed state.
        [PURPLE_SWITCH_WAIT_FOR_MARIO_TO_GET_OFF] = function ()
            if cur_obj_is_mario_on_platform() == 0 then
                obj.oAction = PURPLE_SWITCH_UNPRESSED
                if is_current_area_sync_valid() then
                    network_send_object(obj, false)
                end
            end
        end
    })
end

--bhvPSwitch_MOP = hook_behavior(nil, OBJ_LIST_SURFACE, false, bhv_pswitch_init, bhv_pswitch_loop)

-- Huh?
bhvBeta_Blarrg_MOP = hook_behavior(nil, OBJ_LIST_UNIMPORTANT, false, function(obj) obj_mark_for_deletion(obj) end, nil)

------ Fake star ------
-- A fake star is like a normal star except it does not add to the star counter

---@param obj Object
function fake_star_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_ACTIVE_FROM_AFAR
    local oHitbox = get_temp_object_hitbox()
    oHitbox.interactType = INTERACT_COIN
    oHitbox.downOffset = 0
    oHitbox.damageOrCoinValue = 0
    oHitbox.health = 0
    oHitbox.numLootCoins = 0
    oHitbox.radius = 80
    oHitbox.height = 50
    oHitbox.hurtboxHeight = 0
    oHitbox.hurtboxRadius = 0
    obj_set_hitbox(obj, oHitbox)
end

---@param obj Object
function fake_star_loop(obj)
    -- Get star ID
    local star_id = (obj.oBehParams >> 24) & 0xFF
    local current_level_star_flags = save_file_get_star_flags(get_current_save_file_num() - 1, gNetworkPlayers[0].currCourseNum - 1)
    -- Turn transparent if this star's ID has already been flagged as gotten
    if current_level_star_flags & (1 << star_id) then
        obj_set_model_extended(obj, E_MODEL_TRANSPARENT_STAR)
    else
        obj_set_model_extended(obj, E_MODEL_STAR)
    end

    obj.oFaceAngleYaw = obj.oFaceAngleYaw + 0x800

    if obj.oInteractStatus & INT_STATUS_INTERACTED ~= 0 and not is_bubbled(gMarioStates[0]) then
        obj_mark_for_deletion(obj)
        obj.oInteractStatus = 0
    end
end

bhvFakeStar = hook_behavior(nil, OBJ_LIST_LEVEL, false, fake_star_init, fake_star_loop)
