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
#include "levels/castle_grounds/header.h"
extern u8 _castle_grounds_segment_ESegmentRomStart[]; 
extern u8 _castle_grounds_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_castle_grounds_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _castle_grounds_segment_ESegmentRomStart, _castle_grounds_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom37486272_skybox_mio0SegmentRomStart,_SkyboxCustom37486272_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
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
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_grounds_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-343,944,1154),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x2281700),
TERRAIN(col_castle_grounds_1_0xe02a3e8),
SET_BACKGROUND_MUSIC(0,4),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(0,-240,944,1059,0,145,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-499,-2309,1343,0,166,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-2467,1101,4486,0,160,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(221,208,944,156,0,-24,0,0x85000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,755,944,-585,0,139,0,0x87000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-2187,944,2864,0,77,0,0x86000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,52,-2483,729,0,-34,0,0x88000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(0,-2652,944,2759,0,68,0,0x0, bhvWarp,31),
OBJECT_WITH_ACTS(0,1175,-2159,-1354,0,50,0,0x60000, bhvWarp,31),
OBJECT_WITH_ACTS(0,1200,-2106,761,0,-33,0,0xc0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-619,-2125,-396,0,-43,0,0x50000, bhvWarp,31),
OBJECT_WITH_ACTS(34,-2381,944,2895,0,69,0,0xc000000, bhvDoor,31),
OBJECT_WITH_ACTS(212,1458,-2347,-1615,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,52,-1875,521,0,-213,0,0xf00000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-156,1829,885,0,-218,0,0xf10000, bhvPaintingDeathWarp,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(10,16,1,10,0),
WARP_NODE(11,24,1,10,0),
WARP_NODE(12,12,1,10,0),
WARP_NODE(13,16,1,14,0),
WARP_NODE(14,16,1,13,0),
WARP_NODE(240,16,1,240,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,28,1,10,0),
WARP_NODE(1,7,1,10,0),
WARP_NODE(2,16,1,11,0),
WARP_NODE(3,16,1,12,0),
WARP_NODE(4,6,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,24,1,10,0),
RETURN()
};
