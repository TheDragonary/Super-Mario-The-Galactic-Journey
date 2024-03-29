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
#include "areas/2/custom.model.inc.h"
#include "levels/rr/header.h"
extern u8 _rr_segment_ESegmentRomStart[]; 
extern u8 _rr_segment_ESegmentRomEnd[];
const LevelScript level_rr_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _rr_segment_ESegmentRomStart, _rr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom36044480_skybox_mio0SegmentRomStart,_SkyboxCustom36044480_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
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
JUMP_LINK(local_area_rr_1_),
JUMP_LINK(local_area_rr_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_rr_1_[] = {
AREA(1,Geo_rr_1_0x2121700),
TERRAIN(col_rr_1_0xe0627e0),
SET_BACKGROUND_MUSIC(0,46),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_rr_1_),
JUMP_LINK(local_warps_rr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_rr_1_[] = {
OBJECT_WITH_ACTS(0,9738,-6860,-5312,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-1236,-7954,1300,0,-153,0,0x70000, bhvWarp,31),
OBJECT_WITH_ACTS(22,0,-7902,16302,0,180,0,0x50000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(22,10260,-187,3229,0,0,0,0x60000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(84,10885,-7760,4896,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(0,10417,-187,5104,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,9792,-7902,677,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,10990,-7902,9323,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,5938,-7746,9896,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(0,1562,-7902,8646,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-1198,-7902,6667,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,-1250,-7332,208,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(123,-1927,-7642,-2492,0,0,0,0x150000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(201,-1875,-6926,-3296,0,0,0,0x0, bhvCannonClosed,63),
OBJECT_WITH_ACTS(195,13385,-7902,3229,0,0,0,0x0, bhvBobombBuddyOpensCannon,63),
OBJECT_WITH_ACTS(0,-1667,-4130,-11094,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,7188,-3974,-10677,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(0,12083,-4130,-9427,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,18021,-3385,-9010,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(84,18021,-3015,-14115,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(84,12552,-2032,-18698,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(121,5677,-194,-20417,0,90,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(0,9479,-161,10469,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(223,3438,-161,15313,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(84,9479,-57,15313,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(102,-2656,-161,12135,0,0,0,0x0, bhvChainChomp,63),
OBJECT_WITH_ACTS(217,-2656,-265,12135,0,0,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(192,-2604,-161,9635,0,0,0,0x10000, bhvGoomba,63),
OBJECT_WITH_ACTS(223,-7031,-161,9583,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(84,-7083,-109,5260,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(223,-3125,-161,-365,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(102,-10313,-161,-312,0,0,0,0x0, bhvChainChomp,63),
OBJECT_WITH_ACTS(217,-10313,-265,-312,0,0,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(84,-10312,-109,-5677,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(242,-4583,-161,-5677,0,0,0,0x0, bhvSwitchblock_Switch_MOP,63),
OBJECT_WITH_ACTS(220,-3125,-5,5313,0,0,0,0x10000, bhvFlyGuy,63),
OBJECT_WITH_ACTS(241,9427,204,16458,0,90,0,0x2020000, bhvSwitchblock_MOP,63),
OBJECT_WITH_ACTS(123,9427,52,16458,0,0,0,0x990000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(121,9479,6634,18698,0,180,0,0x1000000, bhvStar,63),
OBJECT_WITH_ACTS(137,-2534,-3818,-14219,0,0,0,0x0, bhvExclamationBox,4),
OBJECT_WITH_ACTS(0,-5729,-3125,-9082,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,-11853,-3125,-2188,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,-18229,-3125,-9093,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,10677,-3125,4792,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,3353,-3125,7626,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,-2344,-3870,-11302,0,0,0,0x2000000, bhvHiddenStar,63),
OBJECT_WITH_ACTS(241,-11667,-3922,-8958,0,0,0,0x2020000, bhvSwitchblock_MOP,4),
OBJECT_WITH_ACTS(241,-833,-3922,3021,0,0,0,0x2020000, bhvSwitchblock_MOP,4),
OBJECT_WITH_ACTS(137,-11667,-3273,-8958,0,0,0,0x0, bhvExclamationBox,4),
OBJECT_WITH_ACTS(137,-833,-3273,3021,0,0,0,0x0, bhvExclamationBox,4),
OBJECT_WITH_ACTS(119,0,-7902,16598,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,7656,-4130,-13021,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,-1901,-7902,-4115,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,8021,-161,10685,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,-3698,-7902,10208,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,10833,-7902,9792,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,10918,-161,10685,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,7500,-7902,1771,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(0,729,-7381,7865,0,0,0,0x3000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(42,-104,-7902,17969,0,0,0,0x5010000, bhvFlipswitch_Panel_MOP,32),
OBJECT_WITH_ACTS(42,-1875,-7902,-4896,0,0,0,0x5010000, bhvFlipswitch_Panel_MOP,32),
OBJECT_WITH_ACTS(42,12552,-4130,-11354,0,0,0,0x5010000, bhvFlipswitch_Panel_MOP,32),
OBJECT_WITH_ACTS(42,10521,-161,11771,0,46,0,0x5010000, bhvFlipswitch_Panel_MOP,32),
OBJECT_WITH_ACTS(42,11875,-7902,2083,0,0,0,0x5010000, bhvFlipswitch_Panel_MOP,32),
OBJECT_WITH_ACTS(0,9459,204,10469,0,0,0,0x5000000, bhvFlipswitch_Panel_StarSpawn_MOP,32),
OBJECT_WITH_ACTS(195,5208,-7902,11094,0,180,0,0x320000, bhvBobombBuddy,16),
OBJECT_WITH_ACTS(195,9167,-7902,-729,0,150,0,0x330000, bhvBobombBuddy,32),
OBJECT_WITH_ACTS(0,3125,-3660,-10625,0,90,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-7031,-161,7656,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(212,10000,-2997,-9583,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(0,27,-7453,12207,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(137,-781,-3818,-13802,0,-46,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,10781,-7531,6667,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,9459,-161,10677,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,9916,-7902,2282,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-6667,-161,-260,0,90,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(212,7344,-109,10573,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(0,-1250,-7521,313,0,0,0,0x0, bhvCoinFormation,63),
RETURN()
};
const LevelScript local_warps_rr_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,15,1,6,0),
WARP_NODE(6,15,1,5,0),
WARP_NODE(7,15,2,10,0),
WARP_NODE(8,9,1,10,0),
WARP_NODE(9,9,1,10,0),
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,10,0),
WARP_NODE(12,9,1,10,0),
WARP_NODE(13,9,1,10,0),
WARP_NODE(14,9,1,10,0),
WARP_NODE(15,9,1,10,0),
WARP_NODE(16,9,1,10,0),
WARP_NODE(17,9,1,10,0),
WARP_NODE(18,9,1,10,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
RETURN()
};
const LevelScript local_area_rr_2_[] = {
AREA(2,Geo_rr_2_0x21218f0),
TERRAIN(col_rr_2_0xe0978b0),
SET_BACKGROUND_MUSIC(0,2),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_rr_2_),
JUMP_LINK(local_warps_rr_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_rr_2_[] = {
OBJECT_WITH_ACTS(0,-10677,-899,-10000,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(180,10052,338,10000,0,-65,0,0x0, bhvPitBowlingBall,63),
OBJECT_WITH_ACTS(180,677,-311,156,0,-90,0,0x0, bhvPitBowlingBall,63),
OBJECT_WITH_ACTS(180,6146,-381,8802,0,0,0,0x0, bhvPitBowlingBall,63),
OBJECT_WITH_ACTS(0,6473,-187,9157,0,-150,0,0x0, bhvBobBowlingBallSpawner,63),
OBJECT_WITH_ACTS(0,2969,-270,521,0,-131,0,0x0, bhvBobBowlingBallSpawner,63),
OBJECT_WITH_ACTS(121,10677,1641,8021,0,0,0,0x4000000, bhvStar,63),
OBJECT_WITH_ACTS(180,-10677,-1212,-5938,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(180,3333,-156,1198,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(180,7865,-83,9740,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(180,7865,-135,10260,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(0,10625,1246,8490,0,0,0,0x0, bhvTtmBowlingBallSpawner,63),
OBJECT_WITH_ACTS(0,-7969,-1368,-2708,0,-136,0,0x0, bhvTtmBowlingBallSpawner,63),
RETURN()
};
const LevelScript local_warps_rr_2_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
RETURN()
};
