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

#include "levels/cotmc/header.h"
#include "levels/wf/header.h"

extern u8 _cotmc_segment_ESegmentRomStart[];
extern u8 _cotmc_segment_ESegmentRomEnd[];

const LevelScript level_cotmc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _wfSegmentRomStart, _wfSegmentRomEnd),
	LOAD_RAW(0x0E, _cotmc_segment_ESegmentRomStart, _cotmc_segment_ESegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom54787776_skybox_mio0SegmentRomStart, _SkyboxCustom54787776_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
	LOAD_RAW(12, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd),
	LOAD_MIO0(6, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd),
	LOAD_RAW(13, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	// Level Specific Models
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
	JUMP_LINK(script_func_global_16),
	JUMP_LINK(local_area_cotmc_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_cotmc_1_[] = {
	AREA(1, Geo_cotmc_1_0x3301700),
	TERRAIN(col_cotmc_1_0xe0365a0),
	SET_BACKGROUND_MUSIC(0, 44),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_cotmc_1_),
	JUMP_LINK(local_warps_cotmc_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_cotmc_1_[] = {
	OBJECT_WITH_ACTS(0, -3333, 1033, 3334, 0, 79, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(37, 5407, 1029, -1553, 0, 90, 0, 0x10b0000,  bhvDoorWarp, 31),
	OBJECT_WITH_ACTS(37, 5407, 1029, -1701, 0, -90, 0, 0x10b0000,  bhvDoorWarp, 31),
	OBJECT_WITH_ACTS(221, -104, 1033, -1458, 0, -69, 0, 0x20000000,  bhvToadMessage, 31),
	OBJECT_WITH_ACTS(221, 5208, 1029, -1667, 0, 61, 0, 0x41000000,  bhvToadMessage, 31),
	OBJECT_WITH_ACTS(192, 4896, 904, -6094, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 4375, 904, 2656, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(212, 4635, 1042, 2917, 0, 0, 0, 0x0,  bhv1Up, 31),
	OBJECT_WITH_ACTS(0, -3882, 1033, 3261, 0, -90, 0, 0xd0000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(34, -3594, 1033, 3281, 0, 84, 0, 0x0,  bhvDoor, 31),
	OBJECT_WITH_ACTS(0, -1719, 1346, 52, 0, 0, 0, 0xf00000,  bhvPaintingStarCollectWarp, 31),
	OBJECT_WITH_ACTS(0, -1719, 1346, 52, 0, 180, 0, 0xf10000,  bhvPaintingDeathWarp, 31),
	OBJECT_WITH_ACTS(221, -3073, 1033, 4219, 0, 156, 0, 0x89000000,  bhvToadMessage, 31),
	RETURN()
};

const LevelScript local_warps_cotmc_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 6, 1, 10, 0),
	WARP_NODE(12, 9, 1, 11, 0),
	WARP_NODE(13, 16, 1, 10, 0),
	WARP_NODE(14, 9, 1, 13, 0),
	WARP_NODE(240, 28, 1, 240, 0),
	WARP_NODE(241, 28, 1, 241, 0),
	WARP_NODE(0, 9, 1, 10, 0),
	WARP_NODE(1, 9, 1, 10, 0),
	WARP_NODE(2, 9, 1, 10, 0),
	WARP_NODE(3, 9, 1, 10, 0),
	WARP_NODE(4, 9, 1, 10, 0),
	WARP_NODE(5, 9, 1, 10, 0),
	WARP_NODE(6, 9, 1, 10, 0),
	RETURN()
};