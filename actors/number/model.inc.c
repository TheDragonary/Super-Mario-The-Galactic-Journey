ALIGNED8 u8 number_geo__texture_02000000[] = {
#include "actors/number/number_geo_0x2000000_custom.rgba16.inc.c"
};
ALIGNED8 u8 number_geo__texture_02000200[] = {
#include "actors/number/number_geo_0x2000200_custom.rgba16.inc.c"
};
ALIGNED8 u8 number_geo__texture_02000400[] = {
#include "actors/number/number_geo_0x2000400_custom.rgba16.inc.c"
};
ALIGNED8 u8 number_geo__texture_02000600[] = {
#include "actors/number/number_geo_0x2000600_custom.rgba16.inc.c"
};
ALIGNED8 u8 number_geo__texture_02000800[] = {
#include "actors/number/number_geo_0x2000800_custom.rgba16.inc.c"
};
ALIGNED8 u8 number_geo__texture_02000A00[] = {
#include "actors/number/number_geo_0x2000a00_custom.rgba16.inc.c"
};
ALIGNED8 u8 number_geo__texture_02000C00[] = {
#include "actors/number/number_geo_0x2000c00_custom.rgba16.inc.c"
};
ALIGNED8 u8 number_geo__texture_02000E00[] = {
#include "actors/number/number_geo_0x2000e00_custom.rgba16.inc.c"
};
ALIGNED8 u8 number_geo__texture_02001000[] = {
#include "actors/number/number_geo_0x2001000_custom.rgba16.inc.c"
};
ALIGNED8 u8 number_geo__texture_02001200[] = {
#include "actors/number/number_geo_0x2001200_custom.rgba16.inc.c"
};
#include "custom.model.inc.h"
Vtx VB_number_geo_0x2011e10[] = {
	{{{ -32, -32, 0 }, 0, { 0, 1024 }, { 255, 255, 255, 255}}},
	{{{ 32, -32, 0 }, 0, { 1024, 1024 }, { 255, 255, 255, 255}}},
	{{{ 32, 32, 0 }, 0, { 1024, 0 }, { 255, 255, 255, 255}}},
	{{{ -32, 32, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

Gfx DL_number_geo_0x2011ed8[] = {
	gsSPDisplayList(DL_number_geo_0x2011e50),
	gsDPSetTextureImage(0, 2, 1, number_geo__texture_02000000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsSPDisplayList(DL_number_geo_0x2011e98),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2011e50[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(32768, 32768, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2011e98[] = {
	gsSPVertex(VB_number_geo_0x2011e10, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPTexture(32768, 32768, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2011f08[] = {
	gsSPDisplayList(DL_number_geo_0x2011e50),
	gsDPSetTextureImage(0, 2, 1, number_geo__texture_02000200),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsSPDisplayList(DL_number_geo_0x2011e98),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2011f38[] = {
	gsSPDisplayList(DL_number_geo_0x2011e50),
	gsDPSetTextureImage(0, 2, 1, number_geo__texture_02000400),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsSPDisplayList(DL_number_geo_0x2011e98),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2011f68[] = {
	gsSPDisplayList(DL_number_geo_0x2011e50),
	gsDPSetTextureImage(0, 2, 1, number_geo__texture_02000600),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsSPDisplayList(DL_number_geo_0x2011e98),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2011f98[] = {
	gsSPDisplayList(DL_number_geo_0x2011e50),
	gsDPSetTextureImage(0, 2, 1, number_geo__texture_02000800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsSPDisplayList(DL_number_geo_0x2011e98),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2011fc8[] = {
	gsSPDisplayList(DL_number_geo_0x2011e50),
	gsDPSetTextureImage(0, 2, 1, number_geo__texture_02000A00),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsSPDisplayList(DL_number_geo_0x2011e98),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2011ff8[] = {
	gsSPDisplayList(DL_number_geo_0x2011e50),
	gsDPSetTextureImage(0, 2, 1, number_geo__texture_02000C00),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsSPDisplayList(DL_number_geo_0x2011e98),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2012028[] = {
	gsSPDisplayList(DL_number_geo_0x2011e50),
	gsDPSetTextureImage(0, 2, 1, number_geo__texture_02000E00),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsSPDisplayList(DL_number_geo_0x2011e98),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2012058[] = {
	gsSPDisplayList(DL_number_geo_0x2011e50),
	gsDPSetTextureImage(0, 2, 1, number_geo__texture_02001000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsSPDisplayList(DL_number_geo_0x2011e98),
	gsSPEndDisplayList(),
};

Gfx DL_number_geo_0x2012088[] = {
	gsSPDisplayList(DL_number_geo_0x2011e50),
	gsDPSetTextureImage(0, 2, 1, number_geo__texture_02001200),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsSPDisplayList(DL_number_geo_0x2011e98),
	gsSPEndDisplayList(),
};

