#include "custom.model.inc.h"
Vtx VB_geo_bbh_0005F8_0x701f870[] = {
	{{{ 102, -101, -50 }, 0, { 0, -1054 }, { 127, 0, 0, 255}}},
	{{{ 102, 0, 51 }, 0, { 990, -2076 }, { 127, 0, 0, 255}}},
	{{{ 102, -101, 51 }, 0, { 0, -2076 }, { 127, 0, 0, 255}}},
	{{{ -101, 0, -50 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
	{{{ 102, 0, -50 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
	{{{ 102, -101, -50 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
	{{{ -101, -101, -50 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
	{{{ 102, 0, 51 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
	{{{ -101, 0, 51 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
	{{{ -101, -101, 51 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
	{{{ 102, -101, 51 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
	{{{ -101, -101, 51 }, 0, { 0, -2076 }, { 129, 0, 0, 255}}},
	{{{ -101, 0, 51 }, 0, { 990, -2076 }, { 129, 0, 0, 255}}},
	{{{ -101, 0, -50 }, 0, { 990, -1054 }, { 129, 0, 0, 255}}},
	{{{ -101, -101, -50 }, 0, { 0, -1054 }, { 129, 0, 0, 255}}},
};

Vtx VB_geo_bbh_0005F8_0x701f960[] = {
	{{{ 102, 0, -50 }, 0, { 990, 2010 }, { 0, 127, 0, 255}}},
	{{{ -101, 0, 51 }, 0, { 0, 3032 }, { 0, 127, 0, 255}}},
	{{{ 102, 0, 51 }, 0, { 990, 3032 }, { 0, 127, 0, 255}}},
	{{{ 102, -101, -50 }, 0, { 0, -1054 }, { 127, 0, 0, 255}}},
	{{{ 102, 0, -50 }, 0, { 990, -1054 }, { 127, 0, 0, 255}}},
	{{{ 102, 0, 51 }, 0, { 990, -2076 }, { 127, 0, 0, 255}}},
	{{{ 102, -101, 51 }, 0, { 990, 3032 }, { 0, 129, 0, 255}}},
	{{{ -101, -101, 51 }, 0, { 0, 3032 }, { 0, 129, 0, 255}}},
	{{{ -101, -101, -50 }, 0, { 0, 2010 }, { 0, 129, 0, 255}}},
	{{{ 102, -101, -50 }, 0, { 990, 2010 }, { 0, 129, 0, 255}}},
	{{{ -101, 0, -50 }, 0, { 0, 2010 }, { 0, 127, 0, 255}}},
};

Light_t Light_geo_bbh_0005F8_0x701f860 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_geo_bbh_0005F8_0x701f858 = {
	{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_geo_bbh_0005F8_0x701fab0[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_geo_bbh_0005F8_0x701fa10),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_0005F8_0x701fa10[] = {
	gsDPSetTextureImage(0, 2, 1, geo_bbh_0005F8__texture_09004800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_geo_bbh_0005F8_0x701f860.col, 1),
	gsSPLight(&Light_geo_bbh_0005F8_0x701f858.col, 2),
	gsSPVertex(VB_geo_bbh_0005F8_0x701f870, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(VB_geo_bbh_0005F8_0x701f960, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP1Triangle(0, 10, 1, 0),
	gsSPEndDisplayList(),
};

