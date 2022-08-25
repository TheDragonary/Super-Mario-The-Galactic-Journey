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

#include "levels/bitfs/header.h"
#include "levels/wdw/header.h"

extern u8 _bitfs_segment_ESegmentRomStart[];
extern u8 _bitfs_segment_ESegmentRomEnd[];

const LevelScript level_bitfs_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
	LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
	LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
	LOAD_RAW(12, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd),
	LOAD_MIO0(6, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
	LOAD_RAW(13, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	// Level Specific Models
	LOAD_MODEL_FROM_GEO(MODEL_WDW_BUBBLY_TREE,                   bubbly_tree_geo),
	    LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM,      wdw_geo_000580),
	    LOAD_MODEL_FROM_GEO(MODEL_WDW_ARROW_LIFT,                    wdw_geo_000598),
	    LOAD_MODEL_FROM_GEO(MODEL_WDW_WATER_LEVEL_DIAMOND,           wdw_geo_0005C0),
	    LOAD_MODEL_FROM_GEO(MODEL_WDW_HIDDEN_PLATFORM,               wdw_geo_0005E8),
	    LOAD_MODEL_FROM_GEO(MODEL_WDW_EXPRESS_ELEVATOR,              wdw_geo_000610),
	    LOAD_MODEL_FROM_GEO(MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, wdw_geo_000628),
	    LOAD_MODEL_FROM_GEO(MODEL_WDW_ROTATING_PLATFORM,             wdw_geo_000640),
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
	JUMP_LINK(script_func_global_14),
	JUMP_LINK(local_area_bitfs_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_bitfs_1_[] = {
	AREA(1, Geo_bitfs_1_0x26a1700),
	TERRAIN(col_bitfs_1_0xe022368),
	SET_BACKGROUND_MUSIC(0, 6),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_bitfs_1_),
	JUMP_LINK(local_warps_bitfs_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_bitfs_1_[] = {
	OBJECT_WITH_ACTS(0, 12917, -3048, -10365, 0, 0, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, 583, 2683, -5387, 0, -154, 0, 0xb0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(144, 28190, 24692, -5211, 0, -153, 0, 0x0,  bhvFlame, 31),
	OBJECT_WITH_ACTS(0, -6612, 1024, -3351, 0, 107, 0, 0xd0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 1980, 768, 6618, 0, -151, 0, 0xe0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(56, 12917, -2972, -10365, 0, 0, 0, 0x0,  bhvWaterLevelDiamond, 31),
	OBJECT_WITH_ACTS(0, 0, 0, 0, 0, 0, 0, 0x0,  bhvInitializeChangingWaterLevel, 31),
	OBJECT_WITH_ACTS(105, 12917, -3511, 4323, 0, 0, 0, 0x0,  bhvSkeeter, 31),
	OBJECT_WITH_ACTS(84, 13750, 61, 6771, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(192, 13750, -199, 8021, 0, 0, 0, 0x0,  bhvGoomba, 31),
	OBJECT_WITH_ACTS(0, 12865, -317, -3073, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, 13073, -317, 313, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(54, 12917, -3511, 2760, 0, 0, 0, 0x0,  bhvWdwSquareFloatingPlatform, 31),
	OBJECT_WITH_ACTS(105, 11615, -3511, 9219, 0, 0, 0, 0x0,  bhvSkeeter, 31),
	OBJECT_WITH_ACTS(0, 12188, -199, 11198, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, 12135, -1052, 13229, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(105, 10625, -1052, 13958, 0, 0, 0, 0x0,  bhvSkeeter, 31),
	OBJECT_WITH_ACTS(180, 9844, -938, 13906, 0, 0, 0, 0x0,  bhvFireSpitter, 31),
	OBJECT_WITH_ACTS(180, 8021, -896, 13958, 0, 0, 0, 0x0,  bhvFireSpitter, 31),
	OBJECT_WITH_ACTS(56, 6094, -275, 14010, 0, 0, 0, 0x0,  bhvWaterLevelDiamond, 31),
	OBJECT_WITH_ACTS(0, 938, -199, 9271, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(194, -7135, -3529, 9375, 0, 0, 0, 0x0,  bhvCirclingAmp, 31),
	OBJECT_WITH_ACTS(129, -10749, -3737, 9063, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3737, 9243, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3737, 9429, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3737, 9583, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3537, 9063, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3537, 9243, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3537, 9429, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3537, 9583, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3337, 9063, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3337, 9243, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3337, 9429, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3337, 9583, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3137, 9063, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3137, 9243, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3137, 9429, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -3137, 9583, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -2937, 9063, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -2937, 9243, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -2937, 9429, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -2937, 9583, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -2737, 9063, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -2737, 9243, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -2737, 9429, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(129, -10749, -2737, 9583, 0, 0, 0, 0x0,  bhvBreakableBox, 31),
	OBJECT_WITH_ACTS(105, -8718, -3737, 9323, 0, 0, 0, 0x0,  bhvSkeeter, 31),
	OBJECT_WITH_ACTS(105, -4635, -3013, 9323, 0, 0, 0, 0x0,  bhvSkeeter, 31),
	OBJECT_WITH_ACTS(0, -9271, -2208, 5938, 0, 0, 0, 0x0,  bhvChirpChirp, 31),
	OBJECT_WITH_ACTS(56, -6510, -3737, 4688, 0, 0, 0, 0x0,  bhvWaterLevelDiamond, 31),
	OBJECT_WITH_ACTS(0, -12448, -3737, 9427, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(84, -13281, -3452, 6771, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(84, -13281, -3332, 4688, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(0, -13281, -2886, 3958, 0, 0, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(0, 8802, -1052, 13958, 0, 90, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(137, -9948, -2573, 4479, 0, 0, 0, 0x70000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 11094, 9, 9948, 0, 0, 0, 0x60000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(0, -14531, -3123, -2083, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, -12344, -2531, -1406, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(105, -13281, -3123, -1667, 0, 0, 0, 0x0,  bhvSkeeter, 31),
	OBJECT_WITH_ACTS(180, -10156, -1096, 0, 0, 0, 0, 0x0,  bhvFireSpitter, 31),
	OBJECT_WITH_ACTS(56, -13438, 294, -156, 0, 0, 0, 0x0,  bhvWaterLevelDiamond, 31),
	OBJECT_WITH_ACTS(120, -12917, 625, -3229, 0, 0, 0, 0x0,  bhvRecoveryHeart, 31),
	OBJECT_WITH_ACTS(123, 12917, -2758, 2760, 0, 0, 0, 0x850000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(119, 12917, -2446, -12083, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, 2396, -3511, 9219, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, -10803, -2865, 9283, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, 12344, -1052, 11927, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, 12917, -3511, 2708, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, -15625, -3123, -3281, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, 11198, -542, 9948, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, -10833, -3123, -3328, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(0, -13281, 969, -3125, 0, 0, 0, 0x0,  bhvHiddenRedCoinStar, 31),
	OBJECT_WITH_ACTS(0, -13177, 1354, -3177, 0, 180, 0, 0xf00000,  bhvPaintingStarCollectWarp, 31),
	OBJECT_WITH_ACTS(0, -13229, 552, -3802, 0, 0, 0, 0xb0000,  bhvWarp, 31),
	OBJECT_WITH_ACTS(0, -13177, 1281, -3281, 0, -180, 0, 0xc0000,  bhvPaintingDeathWarp, 31),
	RETURN()
};

const LevelScript local_warps_bitfs_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 33, 1, 10, 0),
	WARP_NODE(12, 19, 1, 241, 0),
	WARP_NODE(13, 9, 1, 14, 0),
	WARP_NODE(14, 9, 1, 13, 0),
	WARP_NODE(240, 19, 1, 240, 0),
	WARP_NODE(241, 16, 1, 241, 0),
	WARP_NODE(0, 9, 1, 10, 0),
	WARP_NODE(1, 9, 1, 10, 0),
	WARP_NODE(2, 9, 1, 10, 0),
	WARP_NODE(3, 9, 1, 10, 0),
	WARP_NODE(4, 9, 1, 10, 0),
	WARP_NODE(5, 9, 1, 10, 0),
	WARP_NODE(6, 9, 1, 10, 0),
	RETURN()
};