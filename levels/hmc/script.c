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
#include "levels/hmc/header.h"
extern u8 _hmc_segment_ESegmentRomStart[]; 
extern u8 _hmc_segment_ESegmentRomEnd[];
#include "levels/wdw/header.h"
const LevelScript level_hmc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
LOAD_RAW(0x0E, _hmc_segment_ESegmentRomStart, _hmc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WDW_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM,      wdw_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ARROW_LIFT,                    wdw_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_WATER_LEVEL_DIAMOND,           wdw_geo_0005C0),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_HIDDEN_PLATFORM,               wdw_geo_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_EXPRESS_ELEVATOR,              wdw_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, wdw_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ROTATING_PLATFORM,             wdw_geo_000640),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_hmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_hmc_1_[] = {
AREA(1,Geo_hmc_1_0x1621700),
TERRAIN(col_hmc_1_0xe044d78),
SET_BACKGROUND_MUSIC(0,19),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_1_),
JUMP_LINK(local_warps_hmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_1_[] = {
OBJECT_WITH_ACTS(0,-521,-6579,-14739,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,948,8443,12502,0,-90,0,0xb0000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(22,-7122,-2753,5362,0,-149,0,0xc0000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(0,-570,-3407,-7205,0,0,0,0xd0000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(0,15001,-4213,785,0,0,0,0xe0000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(146,-104,-5907,-4635,-32,59,0,0x20100000, bhvSpring_MOP,63),
OBJECT_WITH_ACTS(146,6667,-5254,-6459,-31,0,0,0x40300000, bhvSpring_MOP,63),
OBJECT_WITH_ACTS(146,9688,-4213,-3594,-26,90,-3,0x40300000, bhvSpring_MOP,63),
OBJECT_WITH_ACTS(84,-521,-5962,-7396,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(192,4688,-5832,-7240,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(192,6615,-4749,-3542,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(0,12604,-4213,781,0,0,0,0x10000, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,12604,-4057,-1406,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(146,-833,-4874,1563,-26,0,0,0x40250000, bhvSpring_MOP,63),
OBJECT_WITH_ACTS(102,-7552,-4432,1458,0,10,0,0x0, bhvChainChomp,63),
OBJECT_WITH_ACTS(217,-7552,-4536,1458,0,0,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(146,-1354,-3235,7292,-21,-91,0,0x40300000, bhvSpring_MOP,63),
OBJECT_WITH_ACTS(146,-3802,-3183,13542,-70,90,0,0xff000000, bhvSpring_MOP,63),
OBJECT_WITH_ACTS(0,12552,-4213,5052,0,0,0,0x10000, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,14115,-3854,7708,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(192,13750,-3662,9010,0,0,0,0x10000, bhvGoomba,63),
OBJECT_WITH_ACTS(223,12500,-3389,9375,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(223,11406,-3125,9010,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(123,11042,-2656,7813,0,0,0,0x650000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(121,11771,-990,7865,0,-90,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(0,-8021,-4432,1979,0,0,0,0x10000, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(123,-9948,-3962,417,0,-20,0,0x200000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(123,-10885,-3229,677,0,-20,0,0x250000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(0,-12760,-2093,-885,0,0,0,0x10000, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-9479,-4118,1250,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(146,-15895,539,-7055,-22,180,0,0x40500000, bhvSpring_MOP,63),
OBJECT_WITH_ACTS(146,-15938,533,-3854,-33,180,0,0x20100000, bhvSpring_MOP,63),
OBJECT_WITH_ACTS(192,-15208,-925,-3281,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(192,-16510,-925,-2813,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(84,-15938,552,-5729,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(223,-14167,-1245,-1667,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(223,-16094,383,-12343,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(223,-16094,383,-14583,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(84,-16094,487,-12969,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(121,-16084,539,-16667,0,0,0,0x1000000, bhvStar,63),
OBJECT_WITH_ACTS(55,-16302,-769,-2708,0,-47,0,0x0, bhvArrowLift,63),
OBJECT_WITH_ACTS(137,938,8646,11979,0,0,0,0x0, bhvExclamationBox,63),
OBJECT_WITH_ACTS(56,-7135,8490,16046,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(56,-7135,8490,8438,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(56,-11563,8490,12396,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(56,-16823,8490,8542,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(56,-16823,8490,16094,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(137,-11563,8646,11979,0,0,0,0x0, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,-11563,8750,12396,0,0,0,0x2000000, bhvHiddenStar,63),
OBJECT_WITH_ACTS(119,-7208,-3241,-2656,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,11146,-4213,6979,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,-13698,-1937,-1354,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,12813,-1591,-5104,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,-8594,-4432,4479,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,2083,-5154,52,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,-15573,-925,-3802,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,12813,-4213,-5938,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(0,12656,-3848,885,0,0,0,0x3000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(123,14219,-4057,-4844,0,0,0,0x850000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(116,15000,-4213,781,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(0,-677,-4874,4375,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-1042,-3183,7240,0,-90,0,0x40000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(84,-365,-3027,6510,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(0,-4375,-3183,13229,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,-4427,-2975,11927,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(42,-1322,2057,13528,0,0,0,0x350000, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(42,-625,2057,14249,0,0,0,0x350000, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(42,134,2057,13528,0,0,0,0x350000, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(42,-605,2057,12813,0,0,0,0x350000, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(42,-605,3431,14046,0,0,0,0x350000, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(123,-32,787,12969,0,42,0,0x950000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(123,-625,891,14635,0,0,0,0x350000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(123,-521,839,12500,0,0,0,0x350000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(0,-573,3750,13750,0,0,0,0x4000000, bhvFlipswitch_Panel_StarSpawn_MOP,63),
OBJECT_WITH_ACTS(123,-1667,839,13542,0,0,0,0x350000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(123,417,839,13542,0,0,0,0x350000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(0,-469,-6797,-9271,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(212,-573,-3027,7500,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(0,-5938,-4432,2240,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(137,-11667,-1781,-1146,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,14948,-657,-10990,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,14062,-657,-10104,0,0,0,0x10000, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,13906,-501,-10990,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(0,14948,-345,-10990,0,0,0,0xe0000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(146,13698,-4109,-6823,-50,180,0,0xff300000, bhvSpring_MOP,63),
OBJECT_WITH_ACTS(124,12813,-4213,-4167,0,0,0,0x2b0000, bhvMessagePanel,63),
OBJECT_WITH_ACTS(123,7865,-4749,-3594,0,0,0,0x200000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(123,-4792,-4536,573,0,0,0,0x200000, bhvNoteblock_MOP,63),
RETURN()
};
const LevelScript local_warps_hmc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,7,1,12,0),
WARP_NODE(12,7,1,11,0),
WARP_NODE(13,7,1,14,0),
WARP_NODE(14,7,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
