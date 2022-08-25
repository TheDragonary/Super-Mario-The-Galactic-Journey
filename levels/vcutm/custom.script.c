#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"

#include "levels/vcutm/header.h"
#include "levels/bbh/header.h"

extern u8 _vcutm_segment_ESegmentRomStart[];
extern u8 _vcutm_segment_ESegmentRomEnd[];

const LevelScript level_vcutm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
	LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom40369856_skybox_mio0SegmentRomStart, _SkyboxCustom40369856_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
	LOAD_RAW(12, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd),
	LOAD_MIO0(6, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
	LOAD_RAW(13, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	// Level Specific Models
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
	// Unspecified Models
	LOAD_MODEL_FROM_GEO(22,  warp_pipe_geo),
	LOAD_MODEL_FROM_GEO(23,  bubbly_tree_geo),
	LOAD_MODEL_FROM_GEO(24,  spiky_tree_geo),
	LOAD_MODEL_FROM_GEO(25,  snow_tree_geo),
	LOAD_MODEL_FROM_GEO(27,  palm_tree_geo),
	LOAD_MODEL_FROM_GEO(29,  haunted_door_geo),
	LOAD_MODEL_FROM_GEO(31,  metal_door_geo),
	LOAD_MODEL_FROM_GEO(32,  hazy_maze_door_geo),
	LOAD_MODEL_FROM_GEO(34,  castle_door_0_star_geo),
	LOAD_MODEL_FROM_GEO(35,  castle_door_1_star_geo),
	LOAD_MODEL_FROM_GEO(36,  castle_door_3_stars_geo),
	LOAD_MODEL_FROM_GEO(37,  key_door_geo),
	LOAD_MODEL_FROM_GEO(38,  castle_door_geo),
	// LOAD_MODEL_FROM_DL(84, 0x05002e00, 4),
	// LOAD_MODEL_FROM_DL(86, 0x05003120, 4),
	// LOAD_MODEL_FROM_DL(132, 0x08025f08, 4),
	// LOAD_MODEL_FROM_DL(158, 0x0302c8a0, 4),
	// LOAD_MODEL_FROM_DL(159, 0x0302bcd0, 4),
	// LOAD_MODEL_FROM_DL(161, 0x0301cb00, 4),
	// LOAD_MODEL_FROM_DL(164, 0x04032a18, 4),
	// LOAD_MODEL_FROM_DL(201, 0x080048e0, 4),
	// LOAD_MODEL_FROM_DL(218, 0x08024bb8, 4),
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_9),
	JUMP_LINK(script_func_global_18),
	JUMP_LINK(local_area_vcutm_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_vcutm_1_[] = {
	AREA(1, Geo_vcutm_1_0x2541700),
	TERRAIN(col_vcutm_1_0xe026d78),
	SET_BACKGROUND_MUSIC(0, 37),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_vcutm_1_),
	JUMP_LINK(local_warps_vcutm_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_vcutm_1_[] = {
	OBJECT_WITH_ACTS(0, -1615, -5471, -9271, 0, 0, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, 583, 2683, -5387, 0, -154, 0, 0xb0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 1680, 3835, -5523, 0, -153, 0, 0xc0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, -6612, 1024, -3351, 0, 107, 0, 0xd0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 1980, 768, 6618, 0, -151, 0, 0xe0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(42, -1250, -6773, -4740, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, 7135, -5104, -5205, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, -1200, -5669, -3646, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, -1198, -2570, -4688, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, -1198, -3423, -930, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, 4053, -1652, -3854, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, 6458, -1652, -3864, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, 3177, 3023, -6860, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, -5739, 5992, 8068, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(42, -1198, -3423, 100, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 31),
	OBJECT_WITH_ACTS(0, 4635, -1392, -3906, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_StarSpawn_MOP, 31),
	OBJECT_WITH_ACTS(0, -1563, -6773, -6615, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(223, 4635, -5104, -8385, 0, 0, 0, 0x0,  bhvChuckya, 31),
	OBJECT_WITH_ACTS(223, 5990, -5104, -9219, 0, 0, 0, 0x0,  bhvChuckya, 31),
	OBJECT_WITH_ACTS(223, 7188, -5104, -7344, 0, 0, 0, 0x0,  bhvChuckya, 31),
	OBJECT_WITH_ACTS(188, -2656, -4571, -4688, 0, 0, 0, 0x0,  bhvBobomb, 31),
	OBJECT_WITH_ACTS(188, -52, -4571, -4583, 0, 0, 0, 0x0,  bhvBobomb, 31),
	OBJECT_WITH_ACTS(0, -1250, -3423, -2396, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(223, 2292, -3423, -990, 0, 0, 0, 0x0,  bhvChuckya, 31),
	OBJECT_WITH_ACTS(220, 104, -3319, 1042, 0, 0, 0, 0x10000,  bhvFlyGuy, 31),
	OBJECT_WITH_ACTS(0, 2344, -651, 938, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, 5052, -651, 2969, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(86, 3476, 1342, 1906, 0, 0, 0, 0x20000,  bhvCapSwitch, 31),
	OBJECT_WITH_ACTS(123, -3333, -5409, -4115, 0, 0, 0, 0x200000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(123, 2292, -2400, -5052, 0, 0, 0, 0x200000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(137, 2344, -339, 2083, 0, 0, 0, 0x20000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(123, 3646, -1444, -4896, 0, 0, 2, 0x900000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(123, 4323, 1094, -6771, 0, 0, 0, 0x500000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(123, -5665, -1755, 5000, 0, 0, 0, 0x950000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(123, -6406, 2234, 8177, 0, 0, 0, 0x500000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(123, -5729, 3904, 7500, 0, 0, 0, 0x700000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(192, 3177, 993, -6302, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(0, -5677, -3423, -417, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(223, -5573, -3423, -1667, 0, 0, 0, 0x0,  bhvChuckya, 31),
	OBJECT_WITH_ACTS(192, -6875, 2026, 7135, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, -6667, 2026, 9427, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, -4323, 2026, 8698, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(188, -6198, 2026, 8646, 0, 0, 0, 0x0,  bhvBobomb, 31),
	OBJECT_WITH_ACTS(188, -5365, 2026, 7760, 0, 0, 0, 0x0,  bhvBobomb, 31),
	OBJECT_WITH_ACTS(137, -5781, 2286, 7604, 0, 0, 0, 0x60000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(0, -5677, -2600, 3229, 0, 0, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(212, 3750, 1094, 1406, 0, 0, 0, 0x0,  bhv1Up, 31),
	OBJECT_WITH_ACTS(123, -5625, 0, 5990, 0, 0, 0, 0x700000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(123, 3567, -260, -5662, 0, 0, 0, 0x500000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(86, 4127, 1342, 1911, 0, 0, 0, 0x10000,  bhvCapSwitch, 31),
	OBJECT_WITH_ACTS(86, 3804, 1342, 2344, 0, 0, 0, 0x0,  bhvCapSwitch, 31),
	OBJECT_WITH_ACTS(137, 6458, -1287, -3854, 0, 0, 0, 0x20000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(0, -1615, -5888, -8802, 0, 0, 0, 0xf10000,  bhvPaintingDeathWarp, 31),
	RETURN()
};

const LevelScript local_warps_vcutm_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 9, 1, 12, 0),
	WARP_NODE(12, 9, 1, 11, 0),
	WARP_NODE(13, 9, 1, 14, 0),
	WARP_NODE(14, 9, 1, 13, 0),
	WARP_NODE(240, 6, 1, 240, 0),
	WARP_NODE(241, 18, 1, 241, 0),
	WARP_NODE(0, 9, 1, 10, 0),
	WARP_NODE(1, 9, 1, 10, 0),
	WARP_NODE(2, 9, 1, 10, 0),
	WARP_NODE(3, 9, 1, 10, 0),
	WARP_NODE(4, 9, 1, 10, 0),
	WARP_NODE(5, 9, 1, 10, 0),
	WARP_NODE(6, 9, 1, 10, 0),
	RETURN()
};