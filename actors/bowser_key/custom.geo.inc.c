#include "custom.model.inc.h"
const GeoLayout bowser_key_cutscene_geo[]= {
GEO_SCALE(0,16384),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_scale_bowser_key),
GEO_SCALE(0,65536),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(1,DL_bowser_key_cutscene_geo_0x30161f8),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
#include "custom.model.inc.h"
const GeoLayout bowser_key_geo[]= {
GEO_SHADOW(1,155,300),
GEO_OPEN_NODE(),
GEO_SCALE(0,65536),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(1,DL_bowser_key_cutscene_geo_0x30161f8),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
