#include "custom.model.inc.h"
const GeoLayout red_flame_geo[]= {
GEO_NODE_START(),
GEO_OPEN_NODE(),
GEO_SWITCH_CASE(8, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b3b0),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b3c8),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b3e0),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b3f8),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b410),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b428),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b440),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b458),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
#include "custom.model.inc.h"
const GeoLayout blue_flame_geo[]= {
GEO_NODE_START(),
GEO_OPEN_NODE(),
GEO_SWITCH_CASE(8, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(5,DL_blue_flame_geo_0x301b500),
GEO_DISPLAY_LIST(5,DL_blue_flame_geo_0x301b518),
GEO_DISPLAY_LIST(5,DL_blue_flame_geo_0x301b530),
GEO_DISPLAY_LIST(5,DL_blue_flame_geo_0x301b548),
GEO_DISPLAY_LIST(5,DL_blue_flame_geo_0x301b560),
GEO_DISPLAY_LIST(5,DL_blue_flame_geo_0x301b578),
GEO_DISPLAY_LIST(5,DL_blue_flame_geo_0x301b590),
GEO_DISPLAY_LIST(5,DL_blue_flame_geo_0x301b5a8),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
#include "custom.model.inc.h"
const GeoLayout red_flame_shadow_geo[]= {
GEO_SHADOW(1,80,20),
GEO_OPEN_NODE(),
GEO_BRANCH_AND_LINK(Geo_red_flame_shadow_geo_0x16000b2c),
};
#include "custom.model.inc.h"
const GeoLayout Geo_red_flame_shadow_geo_0x2198cc[]= {
GEO_NODE_START(),
GEO_OPEN_NODE(),
GEO_SWITCH_CASE(8, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b3b0),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b3c8),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b3e0),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b3f8),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b410),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b428),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b440),
GEO_DISPLAY_LIST(5,DL_red_flame_geo_0x301b458),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
