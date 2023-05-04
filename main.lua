-- name: The Galactic Journey
-- description: Super Mario The Galactic Journey is a rom hack made by Fares242\n\nIt features 102 stars across 23 worlds.\nFall damage is disabled and there are no 100 coin stars.\n\nPorted to coop by Dragonary
-- incompatible: romhack

gLevelValues.entryLevel = LEVEL_CASTLE_GROUNDS

camera_set_use_course_specific_settings(false)

smlua_audio_utils_replace_sequence(0x01, 0x1C, 75, "01_Seq_custom")
smlua_audio_utils_replace_sequence(0x02, 0x11, 75, "02_Seq_custom")
smlua_audio_utils_replace_sequence(0x03, 0x1A, 75, "03_Seq_custom")
smlua_audio_utils_replace_sequence(0x04, 0x1C, 75, "04_Seq_custom")
smlua_audio_utils_replace_sequence(0x05, 0x13, 75, "05_Seq_custom")
smlua_audio_utils_replace_sequence(0x06, 0x25, 75, "06_Seq_custom")
smlua_audio_utils_replace_sequence(0x07, 0x1B, 75, "07_Seq_custom")
smlua_audio_utils_replace_sequence(0x08, 0x25, 75, "08_Seq_custom")
smlua_audio_utils_replace_sequence(0x09, 0x1B, 75, "09_Seq_custom")
smlua_audio_utils_replace_sequence(0x0B, 0x14, 75, "0B_Seq_custom")
smlua_audio_utils_replace_sequence(0x0C, 0x1A, 75, "0C_Seq_custom")
smlua_audio_utils_replace_sequence(0x0D, 0x1C, 75, "0D_Seq_custom")
smlua_audio_utils_replace_sequence(0x0E, 0x25, 75, "0E_Seq_custom")
smlua_audio_utils_replace_sequence(0x0F, 0x18, 75, "0F_Seq_custom")
smlua_audio_utils_replace_sequence(0x10, 0x12, 75, "10_Seq_custom")
smlua_audio_utils_replace_sequence(0x12, 0x1F, 75, "12_Seq_custom")
smlua_audio_utils_replace_sequence(0x13, 0x1A, 75, "13_Seq_custom")
smlua_audio_utils_replace_sequence(0x14, 0x1A, 75, "14_Seq_custom")
smlua_audio_utils_replace_sequence(0x15, 0x0E, 75, "15_Seq_custom")
smlua_audio_utils_replace_sequence(0x16, 0x1B, 75, "16_Seq_custom")
smlua_audio_utils_replace_sequence(0x17, 0x1A, 75, "17_Seq_custom")
smlua_audio_utils_replace_sequence(0x18, 0x13, 75, "18_Seq_custom")
smlua_audio_utils_replace_sequence(0x1B, 0x14, 75, "1B_Seq_custom")
smlua_audio_utils_replace_sequence(0x1C, 0x20, 75, "1C_Seq_custom")
smlua_audio_utils_replace_sequence(0x1D, 0x1E, 75, "1D_Seq_custom")
smlua_audio_utils_replace_sequence(0x1E, 0x1B, 75, "1E_Seq_custom")
smlua_audio_utils_replace_sequence(0x1F, 0x1A, 75, "1F_Seq_custom")
smlua_audio_utils_replace_sequence(0x20, 0x23, 75, "20_Seq_custom")
smlua_audio_utils_replace_sequence(0x21, 0x17, 75, "21_Seq_custom")
smlua_audio_utils_replace_sequence(0x23, 0x17, 75, "23_Seq_custom")
smlua_audio_utils_replace_sequence(0x24, 0x21, 75, "24_Seq_custom")
smlua_audio_utils_replace_sequence(0x25, 0x17, 75, "25_Seq_custom")
smlua_audio_utils_replace_sequence(0x26, 0x25, 75, "26_Seq_custom")
smlua_audio_utils_replace_sequence(0x27, 0x0E, 75, "27_Seq_custom")
smlua_audio_utils_replace_sequence(0x28, 0x19, 75, "28_Seq_custom")
smlua_audio_utils_replace_sequence(0x29, 0x13, 75, "29_Seq_custom")
smlua_audio_utils_replace_sequence(0x2A, 0x19, 75, "2A_Seq_custom")
smlua_audio_utils_replace_sequence(0x2B, 0x1B, 75, "2B_Seq_custom")
smlua_audio_utils_replace_sequence(0x2C, 0x11, 75, "2C_Seq_custom")
smlua_audio_utils_replace_sequence(0x2D, 0x19, 75, "2D_Seq_custom")
smlua_audio_utils_replace_sequence(0x2E, 0x17, 75, "2E_Seq_custom")
smlua_audio_utils_replace_sequence(0x2F, 0x1B, 75, "2F_Seq_custom")
smlua_audio_utils_replace_sequence(0x31, 0x17, 75, "31_Seq_custom")
smlua_audio_utils_replace_sequence(0x33, 0x13, 75, "33_Seq_custom")

vec3f_set(gLevelValues.starPositions.KoopaBobStarPos, 3030, 4500, -4600)
vec3f_set(gLevelValues.starPositions.KoopaThiStarPos, 7100, -1300, -6000)
vec3f_set(gLevelValues.starPositions.KingBobombStarPos, 52.0, -755.0, 1250.0)
vec3f_set(gLevelValues.starPositions.KingWhompStarPos, -16615.0, 7639.0, 365.0)
vec3f_set(gLevelValues.starPositions.EyerockStarPos, -5573.0, 1431.0, 11250.0)
vec3f_set(gLevelValues.starPositions.BigBullyStarPos, -5104.0, -7591.0, -7292.0)
vec3f_set(gLevelValues.starPositions.ChillBullyStarPos, 16097.0, 4964.0, 615.0)
vec3f_set(gLevelValues.starPositions.BigPiranhasStarPos, 9375.0, 139.0, 10417.0)
vec3f_set(gLevelValues.starPositions.TuxieMotherStarPos, 3167.0, -4300.0, 5108.0)
vec3f_set(gLevelValues.starPositions.WigglerStarPos, -13021.0, -509.0, -4583.0)
vec3f_set(gLevelValues.starPositions.PssSlideStarPos, -6358.0, -4300.0, 4700.0)
vec3f_set(gLevelValues.starPositions.RacingPenguinStarPos, -7339.0, -5700.0, -6774.0)
vec3f_set(gLevelValues.starPositions.TreasureChestStarPos, -1800.0, -2500.0, -1700.0)
vec3f_set(gLevelValues.starPositions.GhostHuntBooStarPos, 7552.0, 4553.0, 6823.0)
vec3f_set(gLevelValues.starPositions.KleptoStarPos, -5550.0, 300.0, -930.0)
vec3f_set(gLevelValues.starPositions.MerryGoRoundStarPos, -2969.0, 2285.0, -1510.0)
vec3f_set(gLevelValues.starPositions.MrIStarPos, -9710.0, -2615.0, 0.0)
vec3f_set(gLevelValues.starPositions.BalconyBooStarPos, 0.0, -1406.0, 0.0)
vec3f_set(gLevelValues.starPositions.BigBullyTrioStarPos, 3700.0, 600.0, -5500.0)

function no_fall_damage(m)
 m.peakHeight = m.pos.y
end
hook_event(HOOK_MARIO_UPDATE, no_fall_damage)

local counter_1st_byte = 0
local counter_2nd_byte = 0

---@param m MarioState
hook_event(HOOK_MARIO_UPDATE, function (m)
    if m.playerIndex ~= 0 then return end

    if m.controller.buttonPressed & L_JPAD ~= 0 then
        counter_1st_byte = counter_1st_byte - 1
        djui_chat_message_create("1st Byte: " .. tostring(counter_1st_byte))
    end
    if m.controller.buttonPressed & R_JPAD ~= 0 then
        counter_1st_byte = counter_1st_byte + 1
        djui_chat_message_create("1st Byte: " .. tostring(counter_1st_byte))
    end
    if m.controller.buttonPressed & D_JPAD ~= 0 then
        counter_2nd_byte = counter_2nd_byte - 1
        djui_chat_message_create("2nd Byte: " .. tostring(counter_2nd_byte))
    end
    if m.controller.buttonPressed & U_JPAD ~= 0 then
        counter_2nd_byte = counter_2nd_byte + 1
        djui_chat_message_create("2nd Byte: " .. tostring(counter_2nd_byte))
    end

    if m.controller.buttonPressed & L_TRIG ~= 0 then
        spawn_non_sync_object(
            bhvNoteblock_MOP,
            E_MODEL_NOTEBLOCK,
            m.pos.x, m.pos.y + 200, m.pos.z,
            ---@param obj Object
            function (obj)
                obj.oBehParams = counter_1st_byte << 24
                obj.oBehParams2ndByte = counter_2nd_byte
            end
        )
    end
end)