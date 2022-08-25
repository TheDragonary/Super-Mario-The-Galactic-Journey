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

#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[];
extern u8 _bob_segment_ESegmentRomEnd[];

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
	LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom27393728_skybox_mio0SegmentRomStart, _SkyboxCustom27393728_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
	LOAD_RAW(12, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd),
	LOAD_MIO0(6, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
	LOAD_RAW(13, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	// Level Specific Models
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
	    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
	    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
	    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),
	// Unspecified Models
	LOAD_MODEL_FROM_GEO(22,  warp_pipe_geo),
	LOAD_MODEL_FROM_GEO(23,  bubbly_tree_geo),
	LOAD_MODEL_FROM_GEO(24,  spiky_tree_geo),
	LOAD_MODEL_FROM_GEO(25,  snow_tree_geo),
	LOAD_MODEL_FROM_GEO(27,  palm_tree_geo),
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
	JUMP_LINK(script_func_global_12),
	JUMP_LINK(script_func_global_15),
	JUMP_LINK(local_area_bob_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_bob_1_[] = {
	AREA(1, Geo_bob_1_0x18e1700),
	TERRAIN(col_bob_1_0xe0665a8),
	SET_BACKGROUND_MUSIC(0, 3),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_bob_1_),
	JUMP_LINK(local_warps_bob_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_bob_1_[] = {
	OBJECT_WITH_ACTS(0, -13633, -2082, 3689, 0, 90, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, 15848, -389, 3115, 0, -90, 0, 0x0,  bhvOpenableGrill, 63),
	OBJECT_WITH_ACTS(207, 12761, -389, 3125, 0, 0, 0, 0x0,  bhvFloorSwitchGrills, 63),
	OBJECT_WITH_ACTS(0, -9896, -2707, 4010, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(84, -9271, -2499, 10208, 0, 0, 0, 0x0,  bhvEnemyLakitu, 63),
	OBJECT_WITH_ACTS(188, -7865, -2707, 15365, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(192, -6562, -1965, 16510, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(0, -4948, -1544, 13125, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, -4583, -1544, 17188, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, -885, 464, 15833, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(137, -4479, -2395, 6927, 0, -38, 0, 0x70000,  bhvExclamationBox, 63),
	OBJECT_WITH_ACTS(212, 1146, 682, 13125, 0, 0, 0, 0x0,  bhv1Up, 63),
	OBJECT_WITH_ACTS(146, 886, 2503, 14479, -28, -135, 4, 0x20100000,  bhvSpring_MOP, 63),
	OBJECT_WITH_ACTS(220, 990, 1562, 11510, 0, 0, 0, 0x0,  bhvFlyGuy, 63),
	OBJECT_WITH_ACTS(121, -353, 2917, 13177, 0, 90, 0, 0x0,  bhvStar, 63),
	OBJECT_WITH_ACTS(0, -9583, -2707, -1875, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, -10156, -2651, -9115, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(84, -11094, -2551, -6198, 0, 0, 0, 0x0,  bhvEnemyLakitu, 63),
	OBJECT_WITH_ACTS(0, -10521, -2707, -15833, 0, 0, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, -2344, -658, -6875, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, -3177, -658, -12969, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 1979, 881, -12760, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, -833, 831, -15625, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(104, 990, 831, -9115, 0, 0, 0, 0x3000000,  bhvKoopa, 63),
	OBJECT_WITH_ACTS(0, -14323, -2707, -6042, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 63),
	OBJECT_WITH_ACTS(0, -13698, -2707, -13854, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 63),
	OBJECT_WITH_ACTS(0, -2396, -658, -5365, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 63),
	OBJECT_WITH_ACTS(0, -3490, -658, -13229, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 63),
	OBJECT_WITH_ACTS(0, 1979, 831, -12760, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 63),
	OBJECT_WITH_ACTS(0, 1979, 1248, -12760, 0, 0, 0, 0x1000000,  bhvHiddenStar, 63),
	OBJECT_WITH_ACTS(146, -11510, -2537, 18936, -29, 183, 10, 0xff200000,  bhvSpring_MOP, 63),
	OBJECT_WITH_ACTS(241, -11510, -2447, 18936, 0, 0, 0, 0x2020000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(242, 1562, 1886, 14688, 0, 0, 0, 0x0,  bhvSwitchblock_Switch_MOP, 63),
	OBJECT_WITH_ACTS(121, -12272, 729, 13021, 0, 90, 0, 0x2000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(137, -3385, -1232, 8281, 0, 0, 0, 0x60000,  bhvExclamationBox, 63),
	OBJECT_WITH_ACTS(0, -7500, -658, -6667, 0, 0, 0, 0x20000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, -1042, 35, -9479, 0, 0, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(119, -8646, -1440, 8490, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -4635, -2707, -18490, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -16198, -2707, -6198, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 7865, -2544, -2552, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -6615, 208, -16042, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 1823, 464, 14271, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -3073, -1544, 18385, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -6354, -2707, -6458, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(0, -10260, -2290, -9167, 0, 0, 0, 0x3000000,  bhvHiddenRedCoinStar, 63),
	OBJECT_WITH_ACTS(121, 1771, -2342, -12865, 0, 90, 0, 0x4000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(0, 2656, 831, -15156, 0, 81, 0, 0x40000,  bhvCoinFormation, 16),
	OBJECT_WITH_ACTS(0, 2708, 831, -10469, 0, 115, 0, 0x40000,  bhvCoinFormation, 16),
	OBJECT_WITH_ACTS(102, 13385, -389, 2841, 0, -44, 0, 0x0,  bhvChainChomp, 63),
	OBJECT_WITH_ACTS(217, 13385, -493, 2841, 0, -44, 0, 0x0,  bhvPushableMetalBox, 63),
	OBJECT_WITH_ACTS(212, -1406, -2499, -18437, 0, -90, 0, 0x0,  bhv1Up, 63),
	OBJECT_WITH_ACTS(0, -14415, -2707, -2992, 0, 0, 0, 0x20000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(102, 12448, -389, 3698, 0, 136, 0, 0x0,  bhvChainChomp, 63),
	OBJECT_WITH_ACTS(217, 12448, -493, 3698, 0, 136, 0, 0x0,  bhvPushableMetalBox, 63),
	OBJECT_WITH_ACTS(121, 16000, -129, 3125, 0, -90, 0, 0x5000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(0, 1458, -2707, 1302, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 5417, -2707, 1302, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(84, -208, -2552, 1458, 0, 0, 0, 0x0,  bhvEnemyLakitu, 63),
	OBJECT_WITH_ACTS(212, 9740, -260, 4740, 0, 0, 0, 0x0,  bhv1Up, 63),
	OBJECT_WITH_ACTS(0, 9896, -2060, 2708, 0, -41, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, 13125, -1017, 1406, 0, 90, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, 16354, -389, 5104, 0, 0, 0, 0x110000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(124, -11250, -2707, 18906, 0, 180, 0, 0x5f0000,  bhvMessagePanel, 63),
	RETURN()
};

const LevelScript local_warps_bob_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 9, 1, 12, 0),
	WARP_NODE(12, 9, 1, 11, 0),
	WARP_NODE(13, 9, 1, 14, 0),
	WARP_NODE(14, 9, 1, 13, 0),
	WARP_NODE(240, 16, 1, 240, 0),
	WARP_NODE(241, 16, 1, 241, 0),
	WARP_NODE(0, 9, 1, 1, 0),
	WARP_NODE(1, 9, 1, 2, 0),
	WARP_NODE(2, 9, 1, 10, 0),
	WARP_NODE(3, 9, 1, 10, 0),
	WARP_NODE(4, 9, 1, 10, 0),
	WARP_NODE(5, 9, 1, 10, 0),
	WARP_NODE(6, 9, 1, 10, 0),
	RETURN()
};