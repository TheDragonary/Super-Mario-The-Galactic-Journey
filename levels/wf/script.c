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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
const LevelScript level_wf_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wfSegmentRomStart, _wfSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom49020608_skybox_mio0SegmentRomStart,_SkyboxCustom49020608_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                wf_geo_0007E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                wf_geo_000820),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                wf_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                wf_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                wf_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                wf_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,                wf_geo_0008E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                wf_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                wf_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE,                    wf_geo_000AE0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                wf_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,                wf_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM,             wf_geo_0009B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,                wf_geo_0009D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,                wf_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP,                    wf_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP,                    wf_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM,      wf_geo_000A58),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM,              wf_geo_000A98),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART,          wf_geo_000AB0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE,               wf_geo_000AC8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM,       wf_geo_000AF8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM,          wf_geo_000B10),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED,   wf_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT,          wf_geo_000B78),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT,           wf_geo_000B90),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD,                wf_geo_000BA8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR,                    wf_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED,         wf_geo_000BC8),
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
// LOAD_MODEL_FROM_GEO(84,0x05008d14),
// LOAD_MODEL_FROM_DL(87,0x05013cb8,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_5),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x2d81700),
TERRAIN(col_wf_1_0xe048718),
SET_BACKGROUND_MUSIC(0,5),
TERRAIN_TYPE(5),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,13541,901,-3125,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,12813,50,52,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(86,13594,-2448,2812,0,0,0,0x0, bhvSushiShark,63),
OBJECT_WITH_ACTS(86,12604,-3698,4219,0,0,0,0x0, bhvSushiShark,63),
OBJECT_WITH_ACTS(88,9167,-3639,6198,0,0,0,0x0, bhvClamShell,63),
OBJECT_WITH_ACTS(0,5781,-245,1250,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(103,7188,-245,-1094,0,0,0,0x0, bhvSmallWhomp,63),
OBJECT_WITH_ACTS(220,4167,156,365,0,0,0,0x0, bhvFlyGuy,63),
OBJECT_WITH_ACTS(188,-1614,-245,-6198,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(188,-3385,-245,-2865,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(0,-6042,1965,-3281,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,2031,1965,-2344,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-8281,2651,-8177,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(188,-8333,1765,-5781,0,0,0,0x0, bhvBobomb,63),
OBJECT_WITH_ACTS(0,-11198,64,-4115,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(104,-12708,64,-5573,0,0,0,0x3000000, bhvKoopa,63),
OBJECT_WITH_ACTS(123,-11545,272,-4006,0,0,0,0x750000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(212,-14167,3938,-5260,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(123,-12153,1458,-4024,0,0,0,0x750000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(121,-14167,4147,-3388,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(123,-12656,2865,-4024,0,0,0,0x750000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(86,1042,-3229,6302,0,0,0,0x0, bhvSushiShark,63),
OBJECT_WITH_ACTS(242,-9010,64,-2240,0,65,0,0x0, bhvSwitchblock_Switch_MOP,63),
OBJECT_WITH_ACTS(241,-1406,-4830,7083,0,-24,0,0x2020000, bhvSwitchblock_MOP,63),
OBJECT_WITH_ACTS(121,-1406,-4778,7083,0,64,0,0x1000000, bhvStar,63),
OBJECT_WITH_ACTS(123,469,-89,-3385,0,-27,0,0x750000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(42,-1979,1178,-7292,0,0,0,0x0, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(42,-15025,1126,1615,0,0,0,0x0, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(42,4792,-245,-2188,0,0,0,0x0, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(42,-8750,64,521,0,-43,0,0x0, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(42,3021,-245,573,0,0,0,0x0, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(0,-2188,-3047,-4479,0,0,0,0x2000000, bhvFlipswitch_Panel_StarSpawn_MOP,63),
OBJECT_WITH_ACTS(0,18229,-5052,6042,0,0,0,0x130000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(121,14531,-2552,5521,0,47,0,0x3000000, bhvStar,63),
OBJECT_WITH_ACTS(119,20677,-4485,2604,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,-8489,64,-1771,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,3330,63,417,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,19687,-7399,2136,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,-17500,-5479,104,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,260,-4895,7240,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,14115,-2560,-9219,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,14323,-4211,5208,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(0,4259,208,425,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(123,-18021,156,-1250,0,0,0,0x550000, bhvNoteblock_MOP,32),
OBJECT_WITH_ACTS(123,-18021,1927,156,0,0,0,0x350000, bhvNoteblock_MOP,32),
OBJECT_WITH_ACTS(123,-18017,2764,2070,0,0,0,0x550000, bhvNoteblock_MOP,32),
OBJECT_WITH_ACTS(123,-16394,4202,2185,0,0,0,0xff0000, bhvNoteblock_MOP,32),
OBJECT_WITH_ACTS(103,-16615,7339,365,0,0,0,0x5000000, bhvWhompKingBoss,32),
OBJECT_WITH_ACTS(0,-16979,7359,990,0,90,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,-16979,7359,-104,0,90,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,-15781,7359,-104,0,-90,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,-15781,7359,990,0,-90,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(137,5104,310,2552,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,7969,-4308,1146,0,57,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,13594,-4654,1615,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(137,-16146,573,-4635,0,0,0,0x50000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,5156,1965,-781,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(103,-16510,3858,3177,0,0,0,0x0, bhvSmallWhomp,63),
OBJECT_WITH_ACTS(120,-16354,3910,2865,0,0,0,0x0, bhvRecoveryHeart,63),
OBJECT_WITH_ACTS(123,-14323,0,-2188,0,-47,0,0x50000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(86,-12865,-4437,-833,0,0,0,0x0, bhvSushiShark,63),
OBJECT_WITH_ACTS(86,-18802,-1146,-1094,0,64,0,0x0, bhvSushiShark,63),
OBJECT_WITH_ACTS(22,13698,-4133,573,89,39,13,0xc0000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvStarDoor,63),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,20,1,10,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,240,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
