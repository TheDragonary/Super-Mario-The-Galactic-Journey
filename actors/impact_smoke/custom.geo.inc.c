#include "custom.model.inc.h"
const GeoLayout bowser_impact_smoke_geo[]= {
GEO_NODE_START(),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_update_layer_transparency),
GEO_SWITCH_CASE(5, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(5,DL_bowser_impact_smoke_geo_0x6062c88),
GEO_DISPLAY_LIST(5,DL_bowser_impact_smoke_geo_0x6062d28),
GEO_DISPLAY_LIST(5,DL_bowser_impact_smoke_geo_0x6062dc8),
GEO_DISPLAY_LIST(5,DL_bowser_impact_smoke_geo_0x6062e68),
GEO_DISPLAY_LIST(5,DL_bowser_impact_smoke_geo_0x6062d28),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
