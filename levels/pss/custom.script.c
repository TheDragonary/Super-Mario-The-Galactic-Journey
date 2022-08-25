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

#include "levels/pss/header.h"
#include "levels/wdw/header.h"

extern u8 _pss_segment_ESegmentRomStart[];
extern u8 _pss_segment_ESegmentRomEnd[];

const LevelScript level_pss_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
	LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
	LOAD_MIO0(0xA, _bbh_skybox_mio0SegmentRomStart, _bbh_skybox_mio0SegmentRomEnd),
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
	JUMP_LINK(local_area_pss_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_pss_1_[] = {
	AREA(1, Geo_pss_1_0x31a1700),
	TERRAIN(col_pss_1_0xe04a248),
	SET_BACKGROUND_MUSIC(0, 41),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_pss_1_),
	JUMP_LINK(local_warps_pss_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_pss_1_[] = {
	OBJECT_WITH_ACTS(0, 1823, -3888, -13542, 0, 0, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, 583, 2683, -5387, 0, -154, 0, 0xb0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 1680, 3835, -5523, 0, -153, 0, 0xc0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, -6612, 1024, -3351, 0, 107, 0, 0xd0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 1980, 768, 6618, 0, -151, 0, 0xe0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 0, -401, 365, 0, 180, 0, 0x0,  bhvInitializeChangingWaterLevel, 31),
	OBJECT_WITH_ACTS(137, 1979, -5138, 52, 0, 0, 0, 0x0,  bhvWaterLevelDiamond, 31),
	OBJECT_WITH_ACTS(137, 729, -4493, 432, 0, 0, 0, 0x0,  bhvWaterLevelDiamond, 31),
	OBJECT_WITH_ACTS(0, -4427, -4825, -12865, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, -8906, -4825, -12708, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, 6667, -4825, -12656, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, 10469, -4825, -12708, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, -3385, -5029, -2031, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(84, -3333, -3970, 4375, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(0, -3385, -5029, -1615, 0, 0, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(137, -9531, -5543, -4635, 0, 0, 0, 0x80000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -2552, -6282, -12304, 0, 0, 0, 0x0,  bhvWaterLevelDiamond, 31),
	OBJECT_WITH_ACTS(0, 8490, -5020, 3438, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, 10990, -5020, 6979, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(84, 9479, -4343, 5781, 0, 0, 0, 0x0,  bhvEnemyLakitu, 31),
	OBJECT_WITH_ACTS(0, 1354, -4499, 4896, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(119, -8884, -1831, 2135, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, 12813, -1164, 6042, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, 13490, -5865, 5833, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, -365, -4760, 13177, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, -3333, -4167, 8177, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, -10208, -4825, -14010, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, 1406, -6282, 4467, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(119, 1354, -4343, 4896, 0, 0, 0, 0x0,  bhvRedCoin, 31),
	OBJECT_WITH_ACTS(0, -3303, -3326, 8073, 0, 0, 0, 0x1000000,  bhvHiddenRedCoinStar, 31),
	OBJECT_WITH_ACTS(137, 12552, -3428, 8988, 0, 0, 0, 0x0,  bhvWaterLevelDiamond, 31),
	OBJECT_WITH_ACTS(137, 11510, -2703, 4083, 0, 0, 0, 0x0,  bhvWaterLevelDiamond, 31),
	OBJECT_WITH_ACTS(123, -8854, -4467, 1875, 0, 0, 0, 0x950000,  bhvNoteblock_MOP, 31),
	OBJECT_WITH_ACTS(212, -2552, -2394, 6875, 0, 0, 0, 0x0,  bhv1Up, 31),
	OBJECT_WITH_ACTS(0, -8698, -4623, 3385, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(0, -9740, -4623, 1146, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 31),
	OBJECT_WITH_ACTS(137, 3646, -4513, -13958, 0, 0, 0, 0x60000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(116, 8854, -6438, -6869, 0, 0, 0, 0x0,  bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 8854, -6438, -5679, 0, 0, 0, 0x0,  bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 8854, -6438, -4307, 0, 0, 0, 0x0,  bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 8854, -6438, -3070, 0, 0, 0, 0x0,  bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 8854, -6438, -1949, 0, 0, 0, 0x0,  bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 8854, -6438, -990, 0, 0, 0, 0x0,  bhvOneCoin, 31),
	OBJECT_WITH_ACTS(212, -44, -6282, -469, 0, 0, 0, 0x0,  bhv1Up, 31),
	OBJECT_WITH_ACTS(0, -104, -6438, 729, 0, 90, 0, 0x0,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(137, 11771, -4655, 2969, 0, 0, 0, 0x60000,  bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(0, 9479, -5020, 5729, 0, 0, 0, 0x20000,  bhvCoinFormation, 31),
	OBJECT_WITH_ACTS(140, 8021, -5020, 7500, 0, 0, 0, 0x0,  bhvBlueCoinSwitch, 31),
	OBJECT_WITH_ACTS(118, 9563, -5020, 8958, 0, 0, 0, 0x0,  bhvHiddenBlueCoin, 31),
	OBJECT_WITH_ACTS(118, 10801, -5020, 8958, 0, 0, 0, 0x0,  bhvHiddenBlueCoin, 31),
	OBJECT_WITH_ACTS(118, 11927, -5020, 8958, 0, 0, 0, 0x0,  bhvHiddenBlueCoin, 31),
	RETURN()
};

const LevelScript local_warps_pss_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 19, 1, 10, 0),
	WARP_NODE(12, 9, 1, 11, 0),
	WARP_NODE(13, 9, 1, 14, 0),
	WARP_NODE(14, 9, 1, 13, 0),
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