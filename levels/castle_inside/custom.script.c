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

#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[];
extern u8 _castle_inside_segment_ESegmentRomEnd[];

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _castle_insideSegmentRomStart, _castle_insideSegmentRomEnd),
	LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom23068352_skybox_mio0SegmentRomStart, _SkyboxCustom23068352_skybox_mio0SegmentRomEnd),
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
	JUMP_LINK(local_area_castle_inside_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_castle_inside_1_[] = {
	AREA(1, Geo_castle_inside_1_0x14c1700),
	TERRAIN(col_castle_inside_1_0xe03c6d0),
	SET_BACKGROUND_MUSIC(0, 44),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_castle_inside_1_),
	JUMP_LINK(local_warps_castle_inside_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_castle_inside_1_[] = {
	OBJECT_WITH_ACTS(0, 573, -340, -8804, 0, 0, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, 1458, -744, -2500, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, 1562, -744, -5729, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(221, 4792, -744, 3125, 0, 67, 0, 0x44000000,  bhvToadMessage, 31),
	OBJECT_WITH_ACTS(0, 1719, -744, 2969, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(221, -4948, 382, -2240, 0, 0, 0, 0x52000000,  bhvToadMessage, 31),
	OBJECT_WITH_ACTS(0, 4427, -260, -3366, 0, 0, 0, 0xc0000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, -4791, 642, -834, 0, 0, 0, 0xb0000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, 5469, 1182, 4740, 0, 0, 0, 0xe0000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, 2396, -281, 8493, 0, 0, 0, 0xd0000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, -1051, 674, 7083, 0, 0, 0, 0x0,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, 521, -119, -6302, 0, 180, 0, 0xf00000,  bhvPaintingStarCollectWarp, 31),
	OBJECT_WITH_ACTS(0, 521, -119, -6302, 0, 0, 0, 0xf10000,  bhvPaintingDeathWarp, 31),
	OBJECT_WITH_ACTS(100, 3958, -744, 5833, 0, 0, 0, 0x0,  bhvMips, 31),
	OBJECT_WITH_ACTS(37, 500, -340, -9003, 0, 0, 0, 0x20000,  bhvDoorWarp, 31),
	OBJECT_WITH_ACTS(37, 645, -340, -9003, 0, 180, 0, 0x20000,  bhvDoorWarp, 31),
	OBJECT_WITH_ACTS(31, -4148, 285, 7030, 0, 124, 0, 0x2a000000,  bhvDoor, 31),
	OBJECT_WITH_ACTS(31, -4219, 285, 6907, 0, -52, 0, 0x2a000000,  bhvDoor, 31),
	OBJECT_WITH_ACTS(0, -4427, 285, 7136, 0, 125, 0, 0x30000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, 5625, -407, 3021, 0, 0, 0, 0x10000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, -3958, 285, 6875, 0, 125, 0, 0x40000,  bhvSpinAirborneCircleWarp, 31),
	OBJECT_WITH_ACTS(31, 2386, -744, -16, 0, 180, 0, 0x16000000,  bhvDoor, 31),
	OBJECT_WITH_ACTS(0, 2344, -275, 2552, 0, 180, 0, 0x50000,  bhvPaintingStarCollectWarp, 31),
	OBJECT_WITH_ACTS(0, 2344, -275, 2552, 0, -180, 0, 0x60000,  bhvPaintingDeathWarp, 31),
	OBJECT_WITH_ACTS(212, -1126, 39, -1917, 0, 0, 0, 0x0,  bhv1Up, 31),
	RETURN()
};

const LevelScript local_warps_castle_inside_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 4, 1, 10, 0),
	WARP_NODE(12, 5, 1, 10, 0),
	WARP_NODE(13, 22, 1, 10, 0),
	WARP_NODE(14, 7, 1, 10, 0),
	WARP_NODE(240, 6, 1, 240, 0),
	WARP_NODE(241, 6, 1, 241, 0),
	WARP_NODE(0, 8, 1, 10, 0),
	WARP_NODE(1, 27, 1, 10, 0),
	WARP_NODE(2, 28, 1, 10, 0),
	WARP_NODE(3, 26, 1, 10, 0),
	WARP_NODE(4, 6, 1, 12, 0),
	WARP_NODE(5, 6, 1, 50, 0),
	WARP_NODE(6, 6, 1, 100, 0),
	RETURN()
};