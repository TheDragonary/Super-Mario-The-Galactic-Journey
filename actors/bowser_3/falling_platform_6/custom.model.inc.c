#include "custom.model.inc.h"
Vtx VB_bowser_3_geo_000308_0x7003048[] = {
	{{{ 1183, -2364, 394 }, 0, { 2232, -2336 }, { 52, 144, 24, 255}}},
	{{{ 3072, -1340, 1024 }, 0, { 1604, -4222 }, { 52, 144, 24, 255}}},
	{{{ 1498, -1852, 2050 }, 0, { 580, -2652 }, { 52, 144, 24, 255}}},
	{{{ 3072, -1340, 1024 }, 0, { 1604, -4222 }, { 60, 153, 41, 255}}},
	{{{ 1946, -1340, 2662 }, 0, { 0, -3098 }, { 60, 153, 41, 255}}},
	{{{ 1498, -1852, 2050 }, 0, { 580, -2652 }, { 60, 153, 41, 255}}},
};

Vtx VB_bowser_3_geo_000308_0x70030a8[] = {
	{{{ 3072, 307, 1024 }, 0, { 3034, -508 }, { 0, 127, 0, 255}}},
	{{{ 1183, 307, 394 }, 0, { 1776, -928 }, { 0, 127, 0, 255}}},
	{{{ 1498, 307, 2050 }, 0, { 1986, 174 }, { 0, 127, 0, 255}}},
	{{{ 1946, 307, 2662 }, 0, { 2284, 582 }, { 0, 127, 0, 255}}},
};

Vtx VB_bowser_3_geo_000308_0x70030e8[] = {
	{{{ 1183, -2364, 394 }, 0, { -996, 2012 }, { 40, 0, 136, 255}}},
	{{{ 3072, 307, 1024 }, 0, { 990, 0 }, { 40, 0, 136, 255}}},
	{{{ 3072, -1340, 1024 }, 0, { 990, 2012 }, { 40, 0, 136, 255}}},
	{{{ 3072, -1340, 1024 }, 0, { 6848, 1816 }, { 104, 0, 71, 255}}},
	{{{ 1946, 307, 2662 }, 0, { 5340, 172 }, { 104, 0, 71, 255}}},
	{{{ 1946, -1340, 2662 }, 0, { 5340, 1816 }, { 104, 0, 71, 255}}},
	{{{ 3072, 307, 1024 }, 0, { 6848, 172 }, { 104, 0, 71, 255}}},
	{{{ 1946, -1340, 2662 }, 0, { 990, 2012 }, { 154, 0, 75, 255}}},
	{{{ 1946, 307, 2662 }, 0, { 990, 0 }, { 154, 0, 75, 255}}},
	{{{ 1498, 307, 2050 }, 0, { 234, 0 }, { 154, 0, 75, 255}}},
	{{{ 1498, -1852, 2050 }, 0, { 234, 2012 }, { 154, 0, 75, 255}}},
	{{{ 1498, 307, 2050 }, 0, { -690, 0 }, { 132, 0, 23, 255}}},
	{{{ 1183, 307, 394 }, 0, { 990, 0 }, { 132, 0, 23, 255}}},
	{{{ 1498, -1852, 2050 }, 0, { -690, 2012 }, { 132, 0, 23, 255}}},
	{{{ 1183, -2364, 394 }, 0, { 990, 2012 }, { 132, 0, 23, 255}}},
	{{{ 1183, 307, 394 }, 0, { -996, 0 }, { 40, 0, 136, 255}}},
};

Light_t Light_bowser_3_geo_000308_0x7003020 = {
	{ 137, 137, 138}, 0, { 137, 137, 138}, 0, { 40, 40, 40}, 0
};

Light_t Light_bowser_3_geo_000308_0x7003038 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_bowser_3_geo_000308_0x7003018 = {
	{34, 34, 34}, 0, {34, 34, 34}, 0
};

Ambient_t Light_bowser_3_geo_000308_0x7003030 = {
	{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_bowser_3_geo_000308_0x70032c0[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_bowser_3_geo_000308_0x70031e8),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPDisplayList(DL_bowser_3_geo_000308_0x7003258),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_bowser_3_geo_000308_0x70031e8[] = {
	gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000308__texture_07000800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_bowser_3_geo_000308_0x7003020.col, 1),
	gsSPLight(&Light_bowser_3_geo_000308_0x7003018.col, 2),
	gsSPVertex(VB_bowser_3_geo_000308_0x7003048, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSPLight(&Light_bowser_3_geo_000308_0x7003038.col, 1),
	gsSPLight(&Light_bowser_3_geo_000308_0x7003030.col, 2),
	gsSPVertex(VB_bowser_3_geo_000308_0x70030a8, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx DL_bowser_3_geo_000308_0x7003258[] = {
	gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000308__texture_07001000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsSPVertex(VB_bowser_3_geo_000308_0x70030e8, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
	gsSP2Triangles(12, 14, 13, 0, 0, 15, 1, 0),
	gsSPEndDisplayList(),
};

