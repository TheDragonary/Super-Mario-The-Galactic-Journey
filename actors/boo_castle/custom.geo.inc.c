#include "custom.model.inc.h"
const GeoLayout boo_castle_geo[]= {
GEO_SHADOW(1,150,70),
GEO_OPEN_NODE(),
GEO_SCALE(0,26214),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_update_layer_transparency),
GEO_SWITCH_CASE(2, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(1,DL_boo_castle_geo_0x6017dd0),
GEO_DISPLAY_LIST(1,DL_boo_castle_geo_0x6017dd0),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
