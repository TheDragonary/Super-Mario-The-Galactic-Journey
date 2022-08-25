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

#include "levels/ssl/header.h"
#include "levels/bbh/header.h"

extern u8 _ssl_segment_ESegmentRomStart[];
extern u8 _ssl_segment_ESegmentRomEnd[];

const LevelScript level_ssl_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
	LOAD_RAW(0x0E, _ssl_segment_ESegmentRomStart, _ssl_segment_ESegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom25951936_skybox_mio0SegmentRomStart, _SkyboxCustom25951936_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd),
	LOAD_RAW(12, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd),
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
	// LOAD_MODEL_FROM_DL(132, 0x08025f08, 4),
	// LOAD_MODEL_FROM_DL(158, 0x0302c8a0, 4),
	// LOAD_MODEL_FROM_DL(159, 0x0302bcd0, 4),
	// LOAD_MODEL_FROM_DL(161, 0x0301cb00, 4),
	// LOAD_MODEL_FROM_DL(164, 0x04032a18, 4),
	// LOAD_MODEL_FROM_DL(201, 0x080048e0, 4),
	// LOAD_MODEL_FROM_DL(218, 0x08024bb8, 4),
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_10),
	JUMP_LINK(script_func_global_18),
	JUMP_LINK(local_area_ssl_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_ssl_1_[] = {
	AREA(1, Geo_ssl_1_0x1781700),
	TERRAIN(col_ssl_1_0xe05e030),
	SET_BACKGROUND_MUSIC(0, 36),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_ssl_1_),
	JUMP_LINK(local_warps_ssl_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_ssl_1_[] = {
	OBJECT_WITH_ACTS(0, -4948, -5097, -2187, 0, 0, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(137, 8916, -2711, -804, 0, 0, 0, 0x60000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(212, -7018, -4342, 7029, 0, 0, 0, 0x0,  bhv1Up, 31),
	OBJECT_WITH_ACTS(0, -9643, -2615, -2497, 0, -90, 0, 0xd0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, -7031, -4448, 7034, 0, 0, 0, 0xe0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(206, -6667, -5566, 1458, 0, -201, 0, 0x0,  bhvSnufit, 63),
	OBJECT_WITH_ACTS(84, -3542, -5670, 625, 0, -159, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(84, -5313, -5670, 365, 0, -193, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(101, -5625, -5774, 3490, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(0, -5104, -4448, 7708, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(206, -521, -3935, 4792, 0, -48, 0, 0x0,  bhvSnufit, 63),
	OBJECT_WITH_ACTS(84, 1354, -3024, 1406, 0, -32, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(84, 937, -2503, 0, 0, -16, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(206, 3906, 176, -1042, 0, -90, 0, 0x0,  bhvSnufit, 63),
	OBJECT_WITH_ACTS(223, 8073, 749, -1615, 0, 0, 0, 0x0,  bhvChuckya, 63),
	OBJECT_WITH_ACTS(101, 8021, 1006, -260, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(121, 6146, 2622, -781, 0, -90, 0, 0x0,  bhvStar, 1),
	OBJECT_WITH_ACTS(123, 521, -2358, -573, 0, 0, 0, 0x750000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(123, 2396, -443, -677, 0, 0, 0, 0x300000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(137, -833, -5409, -4896, 0, -43, 0, 0x20000,  bhvExclamationBox, 63),
	OBJECT_WITH_ACTS(0, 885, -5774, -7865, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(84, 6615, -5670, -9323, 0, -96, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(84, 9635, -5670, -4583, 0, -111, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(101, 8490, -5774, -6406, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(101, 10729, -5774, -1771, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(121, 5625, -5305, -7031, 0, 125, 0, 0x1000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(0, 6380, 2813, -833, 0, 0, 0, 0xb0000,  bhvWarp, 62),
	OBJECT_WITH_ACTS(124, -990, -5774, -4688, 0, -41, 0, 0x3f0000,  bhvMessagePanel, 62),
	OBJECT_WITH_ACTS(242, 6563, -3128, 3229, 0, 0, 0, 0x10000,  bhvSwitchblock_Switch_MOP, 63),
	OBJECT_WITH_ACTS(0, -4271, -5774, 1563, 0, 0, 0, 0x20000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(241, 6094, -2868, -4219, 0, 0, 0, 0x0,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(121, 6094, -2868, -4219, 0, -90, 0, 0x2000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(84, 5104, -3024, -4688, 0, -79, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(84, 5061, -3024, -3880, 0, -111, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(119, 9503, -5038, -1146, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -4271, -5774, 1563, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -5104, -4305, 10156, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 8125, -1085, -885, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -3860, -5512, 4383, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -11823, -4948, -3437, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 4375, -2920, -6823, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 2240, -2566, -625, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(0, -2031, -4188, 5781, 0, 0, 0, 0x3000000,  bhvHiddenRedCoinStar, 63),
	OBJECT_WITH_ACTS(0, 1979, -3088, -8594, 0, 0, 0, 0x0,  bhvMrI, 63),
	OBJECT_WITH_ACTS(84, 1354, -3024, -7083, 0, -17, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(212, 1458, -3171, -11354, 0, 0, 0, 0x0,  bhv1Up, 63),
	OBJECT_WITH_ACTS(121, -10781, -2667, -2500, 0, 90, 0, 0x4000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(124, -9010, -4948, -2552, 0, 90, 0, 0x210000,  bhvMessagePanel, 63),
	OBJECT_WITH_ACTS(84, 8333, -2620, 2188, 0, 142, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(101, 4531, 2378, 3646, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(84, 6979, 2815, 4219, 0, -159, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(84, 8021, 2815, 4896, 0, 202, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(84, 6510, 2815, 6823, 0, 161, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(84, 7708, 2815, 6771, 0, 193, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(84, 7188, 2815, 6771, 0, -180, 0, 0x0,  bhvBoo, 63),
	OBJECT_WITH_ACTS(84, 7917, 3336, 5990, 0, 90, 0, 0x0,  bhvGhostHuntBoo, 63),
	OBJECT_WITH_ACTS(84, 6615, 3336, 5990, 0, 90, 0, 0x0,  bhvGhostHuntBoo, 63),
	OBJECT_WITH_ACTS(84, 6823, 4273, 6823, 0, -142, 0, 0x0,  bhvGhostHuntBoo, 63),
	OBJECT_WITH_ACTS(84, 7396, 4273, 7031, 0, -105, 0, 0x0,  bhvGhostHuntBoo, 63),
	OBJECT_WITH_ACTS(84, 8021, 4273, 6927, 0, -39, 0, 0x0,  bhvGhostHuntBoo, 63),
	OBJECT_WITH_ACTS(84, 7552, 4273, 6823, 0, -49, 0, 0x5000000,  bhvGhostHuntBigBoo, 63),
	OBJECT_WITH_ACTS(87, 7552, 4221, 7135, 0, 0, 0, 0x0,  bhvMadPiano, 63),
	OBJECT_WITH_ACTS(0, -156, -3128, -625, 0, 180, 0, 0x40000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, 1198, -2814, -1823, 0, 90, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(188, 5729, 2309, -885, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(188, 7396, 2309, -938, 0, 0, 0, 0x0,  bhvBobomb, 63),
	RETURN()
};

const LevelScript local_warps_ssl_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 18, 1, 10, 0),
	WARP_NODE(12, 9, 1, 11, 0),
	WARP_NODE(13, 8, 1, 14, 0),
	WARP_NODE(14, 8, 1, 13, 0),
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