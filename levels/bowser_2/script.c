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
#include "levels/bowser_2/header.h"
extern u8 _bowser_2_segment_ESegmentRomStart[]; 
extern u8 _bowser_2_segment_ESegmentRomEnd[];
#include "levels/wdw/header.h"
const LevelScript level_bowser_2_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
LOAD_RAW(0x0E, _bowser_2_segment_ESegmentRomStart, _bowser_2_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bowser_2_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_2_1_[] = {
AREA(1,Geo_bowser_2_1_0x3881700),
TERRAIN(col_bowser_2_1_0xe004948),
SET_BACKGROUND_MUSIC(0,9),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bowser_2_1_),
JUMP_LINK(local_warps_bowser_2_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_2_1_[] = {
OBJECT_WITH_ACTS(0,-52,-238,-1771,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(206,-52,469,0,0,180,0,0x0, bhvBalconyBigBoo,31),
OBJECT_WITH_ACTS(146,-52,-419,1875,-44,180,0,0x50250000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(145,-781,1250,938,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,521,1250,208,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-52,1250,-365,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,469,1250,1563,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-729,1250,1615,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(145,-625,1250,-365,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,-52,261,-1354,0,0,0,0xf10000, bhvPaintingDeathWarp,31),
RETURN()
};
const LevelScript local_warps_bowser_2_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
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
