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

#include "levels/bbh/header.h"
#include "levels/castle_inside/header.h"

extern u8 _bbh_segment_ESegmentRomStart[];
extern u8 _bbh_segment_ESegmentRomEnd[];

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
	LOAD_RAW(0x0E, _bbh_segment_ESegmentRomStart, _bbh_segment_ESegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom20184768_skybox_mio0SegmentRomStart, _SkyboxCustom20184768_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
	LOAD_RAW(12, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd),
	LOAD_MIO0(6, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd),
	LOAD_RAW(13, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	// Level Specific Models
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP,        castle_geo_000F18),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND,  castle_geo_001530),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND,    castle_geo_001548),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM,     castle_geo_001518),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR,        castle_door_geo),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR,        wooden_door_geo),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR,         metal_door_geo),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS,       castle_door_0_star_geo),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR,        castle_door_1_star_geo),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS,       castle_door_3_stars_geo),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR,           key_door_geo),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS,  castle_geo_000F00),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00),
	// Unspecified Models
	LOAD_MODEL_FROM_GEO(22,  warp_pipe_geo),
	LOAD_MODEL_FROM_GEO(23,  bubbly_tree_geo),
	LOAD_MODEL_FROM_GEO(24,  spiky_tree_geo),
	LOAD_MODEL_FROM_GEO(25,  snow_tree_geo),
	LOAD_MODEL_FROM_GEO(27,  palm_tree_geo),
	LOAD_MODEL_FROM_GEO(28,  castle_door_geo),
	LOAD_MODEL_FROM_GEO(29,  wooden_door_geo),
	LOAD_MODEL_FROM_GEO(31,  metal_door_geo),
	LOAD_MODEL_FROM_GEO(32,  hazy_maze_door_geo),
	LOAD_MODEL_FROM_GEO(34,  castle_door_0_star_geo),
	LOAD_MODEL_FROM_GEO(35,  castle_door_1_star_geo),
	LOAD_MODEL_FROM_GEO(36,  castle_door_3_stars_geo),
	LOAD_MODEL_FROM_GEO(37,  key_door_geo),
	LOAD_MODEL_FROM_GEO(38,  castle_door_geo),
	LOAD_MODEL_FROM_GEO(39,  wooden_door_geo),
	LOAD_MODEL_FROM_GEO(41,  metal_door_geo),
	// LOAD_MODEL_FROM_DL(132, 0x08025f08, 4),
	// LOAD_MODEL_FROM_DL(158, 0x0302c8a0, 4),
	// LOAD_MODEL_FROM_DL(159, 0x0302bcd0, 4),
	// LOAD_MODEL_FROM_DL(161, 0x0301cb00, 4),
	// LOAD_MODEL_FROM_DL(164, 0x04032a18, 4),
	// LOAD_MODEL_FROM_DL(201, 0x080048e0, 4),
	// LOAD_MODEL_FROM_DL(218, 0x08024bb8, 4),
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_12),
	JUMP_LINK(script_func_global_16),
	JUMP_LINK(local_area_bbh_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_bbh_1_[] = {
	AREA(1, Geo_bbh_1_0x1201700),
	TERRAIN(col_bbh_1_0xe02aea8),
	SET_BACKGROUND_MUSIC(0, 24),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_bbh_1_),
	JUMP_LINK(local_warps_bbh_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_bbh_1_[] = {
	OBJECT_WITH_ACTS(0, 2552, -2696, -14896, 0, 0, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(221, 3385, -4154, -13906, 0, -128, 0, 0x2e000000,  bhvToadMessage, 127),
	OBJECT_WITH_ACTS(0, 4219, -4154, -12708, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 127),
	OBJECT_WITH_ACTS(84, 4948, -3842, -11354, 0, 0, 0, 0x0,  bhvEnemyLakitu, 127),
	OBJECT_WITH_ACTS(123, 5521, -3177, -11094, 0, -25, 0, 0x250000,  bhvNoteblock_MOP, 127),
	OBJECT_WITH_ACTS(0, 6146, -2355, -9583, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 127),
	OBJECT_WITH_ACTS(0, 6667, -3409, -6719, 0, 16, 0, 0x0,  bhvCoinFormation, 127),
	OBJECT_WITH_ACTS(0, 8854, -3134, 937, 0, 17, 0, 0x0,  bhvCoinFormation, 127),
	OBJECT_WITH_ACTS(84, 10156, -2043, 5260, 0, 0, 0, 0x0,  bhvEnemyLakitu, 127),
	OBJECT_WITH_ACTS(0, 9479, -2355, 3177, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 127),
	OBJECT_WITH_ACTS(220, 7344, -3906, -3802, 0, 0, 0, 0x10000,  bhvFlyGuy, 127),
	OBJECT_WITH_ACTS(0, 10368, -1928, 11716, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 127),
	OBJECT_WITH_ACTS(121, 20833, 150, 1719, 0, -106, 0, 0x0,  bhvStar, 127),
	OBJECT_WITH_ACTS(223, 17188, -2007, 938, 0, 0, 0, 0x0,  bhvChuckya, 127),
	OBJECT_WITH_ACTS(223, 18854, -1276, 1354, 0, 0, 0, 0x0,  bhvChuckya, 127),
	OBJECT_WITH_ACTS(0, 4167, -1009, 6146, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 127),
	OBJECT_WITH_ACTS(0, 156, -812, 3958, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 127),
	OBJECT_WITH_ACTS(0, -4431, -3969, -9581, 0, 14, 0, 0x20000,  bhvCoinFormation, 127),
	OBJECT_WITH_ACTS(192, -13177, -3582, -9219, 0, 15, 0, 0x10000,  bhvGoomba, 127),
	OBJECT_WITH_ACTS(128, -104, -2500, -781, 0, 196, 0, 0x0,  bhvCannon, 127),
	OBJECT_WITH_ACTS(192, -4948, 546, 1094, 0, 0, 0, 0x10000,  bhvGoomba, 127),
	OBJECT_WITH_ACTS(0, -7604, -3854, -7396, 0, 0, 0, 0x10000,  bhvGoombaTripletSpawner, 127),
	OBJECT_WITH_ACTS(0, -3229, -3965, -9896, 0, 0, 0, 0x10000,  bhvGoombaTripletSpawner, 127),
	OBJECT_WITH_ACTS(84, -9219, -3184, -7604, 0, 0, 0, 0x0,  bhvEnemyLakitu, 127),
	OBJECT_WITH_ACTS(137, -11042, -2656, -7135, 0, 14, 0, 0x70000,  bhvExclamationBox, 127),
	OBJECT_WITH_ACTS(121, -18333, -313, -12396, 0, 82, 0, 0x1000000,  bhvStar, 127),
	OBJECT_WITH_ACTS(220, -5885, -1823, -1562, 0, 0, 0, 0x10000,  bhvFlyGuy, 127),
	OBJECT_WITH_ACTS(192, 1250, -2768, 3542, 0, 0, 0, 0x0,  bhvGoomba, 127),
	OBJECT_WITH_ACTS(223, 1406, -2829, 625, 0, 0, 0, 0x0,  bhvChuckya, 127),
	OBJECT_WITH_ACTS(146, 19062, -157, 11615, -34, 38, 0, 0x50100000,  bhvSpring_MOP, 127),
	OBJECT_WITH_ACTS(223, 16354, -1928, 11510, 0, 0, 0, 0x0,  bhvChuckya, 127),
	OBJECT_WITH_ACTS(223, 22240, -213, 15260, 0, 0, 0, 0x0,  bhvChuckya, 127),
	OBJECT_WITH_ACTS(192, 19792, -143, 15104, 0, 0, 0, 0x0,  bhvGoomba, 127),
	OBJECT_WITH_ACTS(192, 18385, -1557, 12917, 0, 0, 0, 0x0,  bhvGoomba, 127),
	OBJECT_WITH_ACTS(223, 23542, -213, 10990, 0, 0, 0, 0x0,  bhvChuckya, 127),
	OBJECT_WITH_ACTS(188, 20208, -213, 8750, 0, 0, 0, 0x0,  bhvBobomb, 127),
	OBJECT_WITH_ACTS(192, 18906, -213, 10938, 0, 0, 0, 0x0,  bhvGoomba, 127),
	OBJECT_WITH_ACTS(121, 20313, 549, 12500, 0, -91, 0, 0x2000000,  bhvStar, 127),
	OBJECT_WITH_ACTS(119, 10260, -1711, 13438, 0, 0, 0, 0x0,  bhvRedCoin, 127),
	OBJECT_WITH_ACTS(119, 9635, -2652, -15781, 0, 0, 0, 0x0,  bhvRedCoin, 127),
	OBJECT_WITH_ACTS(119, 7448, -2355, -3802, 0, 0, 0, 0x0,  bhvRedCoin, 127),
	OBJECT_WITH_ACTS(119, 4323, -1051, 2135, 0, 0, 0, 0x0,  bhvRedCoin, 127),
	OBJECT_WITH_ACTS(119, 8594, -4110, -2031, 0, 0, 0, 0x0,  bhvRedCoin, 127),
	OBJECT_WITH_ACTS(119, 1198, -2826, -1250, 0, 0, 0, 0x0,  bhvRedCoin, 127),
	OBJECT_WITH_ACTS(119, 2500, -4154, -11510, 0, 0, 0, 0x0,  bhvRedCoin, 127),
	OBJECT_WITH_ACTS(119, 14792, -2251, 1198, 0, 0, 0, 0x0,  bhvRedCoin, 127),
	OBJECT_WITH_ACTS(0, 2448, 33, 4740, 0, 0, 0, 0x3000000,  bhvHiddenRedCoinStar, 127),
	OBJECT_WITH_ACTS(22, 11563, 453, 11771, 0, 18, 0, 0xc0000,  bhvWarpPipe, 127),
	OBJECT_WITH_ACTS(22, 8542, 2206, 15260, 0, -57, 0, 0xb0000,  bhvWarpPipe, 127),
	OBJECT_WITH_ACTS(121, 8281, -1875, 15313, 0, -45, 0, 0x4000000,  bhvStar, 127),
	OBJECT_WITH_ACTS(123, -573, -1771, 6146, 0, 14, 0, 0x350000,  bhvNoteblock_MOP, 127),
	OBJECT_WITH_ACTS(123, 9789, -1715, 12021, 0, 0, 0, 0x850000,  bhvNoteblock_MOP, 127),
	OBJECT_WITH_ACTS(241, 10885, -925, -16563, 0, -49, 0, 0x2020000,  bhvSwitchblock_MOP, 127),
	OBJECT_WITH_ACTS(121, 10885, -947, -16563, 0, -142, 0, 0x5000000,  bhvStar, 127),
	OBJECT_WITH_ACTS(242, 21146, -163, 1823, 0, -19, 0, 0x0,  bhvSwitchblock_Switch_MOP, 127),
	OBJECT_WITH_ACTS(0, -990, -1062, 6198, 0, 16, 0, 0x110000,  bhvCoinFormation, 127),
	OBJECT_WITH_ACTS(0, -156, -803, 6042, 0, -73, 0, 0x40000,  bhvCoinFormation, 127),
	RETURN()
};

const LevelScript local_warps_bbh_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 4, 1, 12, 0),
	WARP_NODE(12, 4, 1, 11, 0),
	WARP_NODE(13, 9, 1, 14, 0),
	WARP_NODE(14, 9, 1, 13, 0),
	WARP_NODE(240, 6, 1, 240, 0),
	WARP_NODE(241, 6, 1, 241, 0),
	WARP_NODE(0, 9, 1, 10, 0),
	WARP_NODE(1, 9, 1, 10, 0),
	WARP_NODE(2, 9, 1, 10, 0),
	WARP_NODE(3, 9, 1, 10, 0),
	WARP_NODE(4, 9, 1, 10, 0),
	WARP_NODE(5, 9, 1, 10, 0),
	WARP_NODE(6, 9, 1, 10, 0),
	RETURN()
};