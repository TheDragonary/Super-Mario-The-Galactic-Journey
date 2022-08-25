//Include this file at the bottom of behavior_data.c
const BehaviorScript bhvSpinAirborneWarp[] = {
	BREAK(),
};

const BehaviorScript bhvGoombaTripletSpawner[] = {
	BEGIN(OBJ_LIST_PUSHABLE),
	OR_INT(oFlags, 65),
	DROP_TO_FLOOR(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_goomba_triplet_spawner_update),
	END_LOOP(),
};

const BehaviorScript bhvToadMessage[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 16457),
	LOAD_ANIMATIONS(10022, 100727880),
	ANIMATE(6),
	SET_INTERACT_TYPE(8388608),
	SET_HITBOX(80, 100),
	SET_INT(oIntangibleTimer, 0),
	CALL_NATIVE( bhv_init_room),
	CALL_NATIVE( bhv_toad_message_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_toad_message_loop),
	END_LOOP(),
};

const BehaviorScript bhvWarp[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 9),
	SET_INT(oInteractType, 8192),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_warp_loop),
	END_LOOP(),
};

const BehaviorScript bhvPaintingStarCollectWarp[] = {
	BREAK(),
};

const BehaviorScript bhvPaintingDeathWarp[] = {
	BREAK(),
};

const BehaviorScript bhvMips[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1033),
	LOAD_ANIMATIONS(10022, 100751140),
	SET_INT(oInteractType, 2),
	DROP_TO_FLOOR(),
	SET_HITBOX(50, 75),
	SET_INT(oIntangibleTimer, 0),
	CALL_NATIVE( bhv_mips_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_mips_loop),
	END_LOOP(),
};

const BehaviorScript bhvDoorWarp[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oInteractType, 2048),
	GOTO( Bhv_Custom_0x13000b14),
};

const BehaviorScript Bhv_Custom_0x13000b14[] = {
	OR_INT(oFlags, 201),
	LOAD_ANIMATIONS(10022, 50419392),
	ANIMATE(0),
	LOAD_COLLISION_DATA(col_key_door_geo_0xacf284),
	SET_HITBOX(80, 100),
	SET_INT(oIntangibleTimer, 0),
	SET_FLOAT(oCollisionDistance, 2024),
	SET_HOME(),
	CALL_NATIVE( bhv_door_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_door_loop),
	END_LOOP(),
};

const BehaviorScript bhvDoor[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oInteractType, 4),
	OR_INT(oFlags, 201),
	LOAD_ANIMATIONS(10022, 50419392),
	ANIMATE(0),
	LOAD_COLLISION_DATA(col_metal_door_geo_0xacf284),
	SET_HITBOX(80, 100),
	SET_INT(oIntangibleTimer, 0),
	SET_FLOAT(oCollisionDistance, 2024),
	SET_HOME(),
	CALL_NATIVE( bhv_door_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_door_loop),
	END_LOOP(),
};

const BehaviorScript bhvSpinAirborneCircleWarp[] = {
	BREAK(),
};

const BehaviorScript bhv1Up[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 1),
	BILLBOARD(),
	SET_HITBOX_WITH_OFFSET(30, 30, 0),
	SET_FLOAT(oGraphYOffset, 30),
	CALL_NATIVE( bhv_1up_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_1up_loop),
	END_LOOP(),
};

const BehaviorScript bhvEnemyLakitu[] = {
	BEGIN(OBJ_LIST_PUSHABLE),
	OR_INT(oFlags, 8257),
	LOAD_ANIMATIONS(10022, 83969236),
	ANIMATE(0),
	SET_HOME(),
	SET_OBJ_PHYSICS(40, 0, 65486, 0, 0, 200, 0, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_enemy_lakitu_update),
	END_LOOP(),
};

const BehaviorScript bhvNoteblock_MOP[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	SET_HOME(),
	LOAD_COLLISION_DATA(col_Noteblock_MOP_0xaa6444),
	SCALE(0, 64),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_thi_huge_island_top_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvCoinFormation[] = {
	BEGIN(OBJ_LIST_SPAWNER),
	OR_INT(oFlags, 65),
	CALL_NATIVE( bhv_coin_formation_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_coin_formation_loop),
	END_LOOP(),
};

const BehaviorScript bhvFlyGuy[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8257),
	LOAD_ANIMATIONS(10022, 134290020),
	ANIMATE(0),
	SET_HOME(),
	SET_OBJ_PHYSICS(50, 0, 0, 0, 1000, 600, 0, 0),
	CALL_NATIVE( bhv_init_room),
	SET_INT(oInteractionSubtype, 128),
	SET_FLOAT(oGraphYOffset, 30),
	SCALE(0, 150),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_fly_guy_update),
	END_LOOP(),
};

const BehaviorScript bhvStar[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 1),
	CALL_NATIVE( bhv_init_room),
	CALL_NATIVE( bhv_collect_star_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_collect_star_loop),
	END_LOOP(),
};

const BehaviorScript bhvChuckya[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1097),
	LOAD_ANIMATIONS(10022, 134266992),
	ANIMATE(5),
	SET_INT(oInteractType, 2),
	SET_HITBOX(150, 100),
	SET_OBJ_PHYSICS(30, 65136, 65486, 1000, 1000, 200, 0, 0),
	SPAWN_OBJ(0, 318768516),
	SET_INT(oNumLootCoins, 5),
	SET_INT(oIntangibleTimer, 0),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_chuckya_loop),
	END_LOOP(),
};

const BehaviorScript bhvGoomba[] = {
	BEGIN(OBJ_LIST_PUSHABLE),
	OR_INT(oFlags, 8265),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 134339148),
	SET_HOME(),
	SET_OBJ_PHYSICS(40, 65136, 65486, 1000, 1000, 0, 0, 0),
	CALL_NATIVE( bhv_goomba_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_goomba_update),
	END_LOOP(),
};

const BehaviorScript bhvCannon[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 201),
	SPAWN_CHILD(127, 318768356),
	SET_INT(oInteractType, 16384),
	ADD_FLOAT(oPosY, 65196),
	SET_HOME(),
	SET_HITBOX(150, 150),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_cannon_base_loop),
	END_LOOP(),
};

const BehaviorScript bhvExclamationBox[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	LOAD_COLLISION_DATA(col_exclamation_box_geo_0xaa7794),
	OR_INT(oFlags, 1),
	SET_FLOAT(oCollisionDistance, 300),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_exclamation_box_loop),
	END_LOOP(),
};

const BehaviorScript bhvSpring_MOP[] = {
	BEGIN(OBJ_LIST_LEVEL),
	SET_HITBOX(160, 160),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( Func_Custom_0x802a6dc4),
		SET_INT(oInteractStatus, 0),
	END_LOOP(),
};

const BehaviorScript bhvBobomb[] = {
	BEGIN(OBJ_LIST_DESTRUCTIVE),
	OR_INT(oFlags, 25673),
	LOAD_ANIMATIONS(10022, 134363500),
	DROP_TO_FLOOR(),
	ANIMATE(0),
	SET_INT(oIntangibleTimer, 0),
	SET_HOME(),
	CALL_NATIVE( bhv_bobomb_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_bobomb_loop),
	END_LOOP(),
};

const BehaviorScript bhvRedCoin[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 1),
	SCALE(0, 100),
	SET_INT(oIntangibleTimer, 0),
	SET_INT(oAnimState, 65535),
	CALL_NATIVE( bhv_init_room),
	CALL_NATIVE( bhv_red_coin_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_red_coin_loop),
		ADD_INT(oFaceAngleYaw, 2560),
	END_LOOP(),
};

const BehaviorScript bhvHiddenRedCoinStar[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 16385),
	CALL_NATIVE( bhv_hidden_red_coin_star_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_hidden_red_coin_star_loop),
	END_LOOP(),
};

const BehaviorScript bhvWarpPipe[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	SET_INT(oInteractType, 8192),
	LOAD_COLLISION_DATA(col_warp_pipe_geo_0xabbed4),
	SET_FLOAT(oDrawingDistance, 16000),
	SET_INT(oIntangibleTimer, 0),
	SET_HITBOX(70, 50),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_warp_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSwitchblock_MOP[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_Switchblock_MOP_0x7d3058),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_animates_on_floor_switch_press_init),
	END_LOOP(),
};

const BehaviorScript bhvSwitchblock_Switch_MOP[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_Switchblock_Switch_MOP_0x7d7348),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_rr_cruiser_wing_init),
	END_LOOP(),
};

const BehaviorScript bhvFadingWarp[] = {
	BEGIN(OBJ_LIST_LEVEL),
	SET_INT(oInteractionSubtype, 1),
	OR_INT(oFlags, 9),
	SET_INT(oInteractType, 8192),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_fading_warp_loop),
	END_LOOP(),
};

const BehaviorScript bhvSmallBully[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9),
	LOAD_ANIMATIONS(10022, 83904268),
	DROP_TO_FLOOR(),
	SET_HOME(),
	CALL_NATIVE( bhv_small_bully_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bully_loop),
	END_LOOP(),
};

const BehaviorScript bhvBigBully[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9),
	LOAD_ANIMATIONS(10022, 83904268),
	DROP_TO_FLOOR(),
	SET_HOME(),
	CALL_NATIVE( bhv_big_bully_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bully_loop),
	END_LOOP(),
};

const BehaviorScript bhvChainChomp[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8393),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 100815224),
	ANIMATE(0),
	SET_OBJ_PHYSICS(0, 65136, 65486, 0, 1000, 200, 0, 0),
	HIDE(),
	SET_HOME(),
	SET_FLOAT(oGraphYOffset, 240),
	SCALE(0, 200),
	SPAWN_CHILD_WITH_PARAM(0, 107, 318785564),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_chain_chomp_update),
	END_LOOP(),
};

const BehaviorScript bhvPushableMetalBox[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_metal_box_geo_0xaa6444),
	SET_FLOAT(oCollisionDistance, 500),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_pushable_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvArrowLift[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_wdw_geo_000598_0xf3a4c5),
	SET_INT_RAND_RSHIFT(oYoshiTargetYaw, 1, 32),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_arrow_lift_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvHiddenStarTrigger[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 1),
	SET_HITBOX(100, 100),
	SET_INT(oIntangibleTimer, 0),
	BILLBOARD(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_hidden_star_trigger_loop),
	END_LOOP(),
};

const BehaviorScript bhvHiddenStar[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 16385),
	CALL_NATIVE( bhv_hidden_star_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_hidden_star_loop),
	END_LOOP(),
};

const BehaviorScript bhvOneCoin[] = {
	BEGIN(OBJ_LIST_LEVEL),
	GOTO( Bhv_Custom_0x13000920),
};

const BehaviorScript Bhv_Custom_0x13000920[] = {
	OR_INT(oFlags, 65),
	CALL_NATIVE( bhv_yellow_coin_init),
	BEGIN_LOOP(),
		ADD_INT(oFaceAngleYaw, 2560),
		CALL_NATIVE( bhv_yellow_coin_loop),
	END_LOOP(),
};

const BehaviorScript bhvFlipswitch_Panel_MOP[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_Flipswitch_Panel_MOP_0x7daf78),
	SET_FLOAT(oCollisionDistance, 1024),
	BEGIN_LOOP(),
		CALL_NATIVE( Func_Custom_0x802a8238),
	END_LOOP(),
};

const BehaviorScript bhvFlipswitch_Panel_StarSpawn_MOP[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	BEGIN_LOOP(),
		CALL_NATIVE( Func_Custom_0x802a82bc),
	END_LOOP(),
};

const BehaviorScript bhvMessagePanel[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_wooden_signpost_geo_0xae018c),
	SET_INTERACT_TYPE(8388608),
	SET_INT(oInteractionSubtype, 4096),
	DROP_TO_FLOOR(),
	SET_HITBOX(150, 80),
	SET_INT(oUkikiTauntsToBeDone, 0),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( load_object_collision_model),
		SET_INT(oInteractStatus, 0),
	END_LOOP(),
};

const BehaviorScript bhvSnufit[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	SET_HOME(),
	SET_OBJ_PHYSICS(30, 0, 65486, 0, 0, 0, 0, 0),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		SET_INT(oUkikiTauntsToBeDone, 0),
		CALL_NATIVE( bhv_snufit_loop),
	END_LOOP(),
};

const BehaviorScript bhvBoo[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	SET_INT(oBehParams2ndByte, 1),
	GOTO( Bhv_Custom_0x13002808),
};

const BehaviorScript Bhv_Custom_0x13002808[] = {
	OR_INT(oFlags, 8265),
	SET_INT(oIntangibleTimer, 0),
	SET_HOME(),
	SET_INT(oDamageOrCoinValue, 2),
	SET_HITBOX(140, 80),
	SET_HURTBOX(40, 60),
	SET_FLOAT(oGraphYOffset, 30),
	CALL_NATIVE( bhv_init_room),
	SPAWN_CHILD(116, 318769288),
	SET_OBJ_PHYSICS(30, 0, 65486, 1000, 1000, 200, 0, 0),
	CALL_NATIVE( bhv_boo_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_boo_loop),
	END_LOOP(),
};

const BehaviorScript bhvScuttlebug[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 73),
	LOAD_ANIMATIONS(10022, 100749412),
	ANIMATE(0),
	SET_OBJ_PHYSICS(80, 65136, 65486, 0, 0, 200, 0, 0),
	SET_HOME(),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_scuttlebug_loop),
	END_LOOP(),
};

const BehaviorScript bhvMrI[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 75),
	SET_HOME(),
	SPAWN_CHILD(102, 318767244),
	SET_MODEL(103),
	BILLBOARD(),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_mr_i_loop),
	END_LOOP(),
};

const BehaviorScript bhvGhostHuntBoo[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	SET_INT(oIntangibleTimer, 0),
	SET_HOME(),
	SET_INT(oDamageOrCoinValue, 2),
	SET_HITBOX(140, 80),
	SET_HURTBOX(40, 60),
	SET_FLOAT(oGraphYOffset, 30),
	CALL_NATIVE( bhv_init_room),
	SPAWN_CHILD(116, 318769288),
	SET_OBJ_PHYSICS(30, 0, 65486, 1000, 1000, 200, 0, 0),
	CALL_NATIVE( bhv_boo_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_boo_loop),
	END_LOOP(),
};

const BehaviorScript bhvGhostHuntBigBoo[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	SET_HOME(),
	SET_OBJ_PHYSICS(30, 0, 65486, 1000, 1000, 200, 0, 0),
	CALL_NATIVE( bhv_init_room),
	CALL_NATIVE( bhv_boo_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_big_boo_loop),
	END_LOOP(),
};

const BehaviorScript bhvMadPiano[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8257),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 83925780),
	SET_OBJ_PHYSICS(40, 0, 65486, 1000, 1000, 200, 0, 0),
	SET_HOME(),
	ADD_INT(oMoveAngleYaw, 16384),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_mad_piano_update),
	END_LOOP(),
};

const BehaviorScript bhvOpenableGrill[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 9),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_openable_grill_loop),
	END_LOOP(),
};

const BehaviorScript bhvFloorSwitchGrills[] = {
	BEGIN(OBJ_LIST_SURFACE),
	GOTO( Bhv_Custom_0x13001488),
};

const BehaviorScript Bhv_Custom_0x13001488[] = {
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_purple_switch_geo_0xa8dfc4),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_purple_switch_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvKoopa[] = {
	BEGIN(OBJ_LIST_PUSHABLE),
	OR_INT(oFlags, 8257),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 100733796),
	ANIMATE(9),
	SET_HOME(),
	SET_OBJ_PHYSICS(50, 65136, 0, 0, 1000, 200, 0, 0),
	SCALE(0, 150),
	SET_FLOAT(oUkikiTauntsToBeDone, 1),
	CALL_NATIVE( bhv_koopa_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_koopa_update),
	END_LOOP(),
};

const BehaviorScript bhvBobombBuddy[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9289),
	LOAD_ANIMATIONS(10022, 134363500),
	SET_INTERACT_TYPE(8388608),
	DROP_TO_FLOOR(),
	SET_HITBOX(100, 60),
	ANIMATE(0),
	SET_INT(oYoshiChosenHome, 0),
	SET_HOME(),
	CALL_NATIVE( bhv_bobomb_buddy_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bobomb_buddy_loop),
	END_LOOP(),
};

const BehaviorScript bhvBubba[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	SET_HOME(),
	SET_OBJ_PHYSICS(200, 65136, 65486, 1000, 1000, 0, 0, 0),
	SCALE(0, 50),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_bubba_loop),
	END_LOOP(),
};

const BehaviorScript bhvShrink_Platform_MOP[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_Shrink_Platform_MOP_0xad3720),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_rotating_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvBouncingFireball[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 65),
	DISABLE_RENDERING(),
};

const BehaviorScript bhvBigChillBully[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9),
	LOAD_ANIMATIONS(10022, 100678036),
	DROP_TO_FLOOR(),
	SET_HOME(),
	SET_INT(oUkikiTauntsToBeDone, 16),
	CALL_NATIVE( bhv_big_bully_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bully_loop),
	END_LOOP(),
};

const BehaviorScript bhvRecoveryHeart[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 8257),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_recovery_heart_loop),
	END_LOOP(),
};

const BehaviorScript bhvHeaveHo[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9289),
	LOAD_ANIMATIONS(10022, 83972940),
	ANIMATE(0),
	SET_OBJ_PHYSICS(200, 65136, 65486, 1000, 1000, 600, 0, 0),
	SPAWN_OBJ(0, 318772644),
	SET_INT(oInteractType, 2),
	SET_INT(oInteractionSubtype, 516),
	SET_HITBOX(120, 100),
	SET_HOME(),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_heave_ho_loop),
	END_LOOP(),
};

const BehaviorScript bhvThwomp[] = {
	BEGIN(OBJ_LIST_SURFACE),
	LOAD_COLLISION_DATA(col_thwomp_geo_0x86c6ac),
	OR_INT(oFlags, 73),
	DROP_TO_FLOOR(),
	ADD_FLOAT(oPosY, 1),
	SCALE(0, 140),
	SET_HOME(),
	SET_FLOAT(oDrawingDistance, 4000),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_grindel_thwomp_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvCirclingAmp[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8259),
	LOAD_ANIMATIONS(10022, 134234164),
	ANIMATE(0),
	SET_FLOAT(oGraphYOffset, 40),
	SET_INT(oIntangibleTimer, 0),
	CALL_NATIVE( bhv_circling_amp_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_circling_amp_loop),
	END_LOOP(),
};

const BehaviorScript bhvThiHugeIslandTop[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	SET_HOME(),
	LOAD_COLLISION_DATA(col_Spring_MOP_0xaa6444),
	SCALE(0, 64),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_thi_huge_island_top_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSandBlock_MOP[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_SandBlock_MOP_0xaa6444),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_wf_breakable_wall_loop),
	END_LOOP(),
};

const BehaviorScript bhvFireSpitter[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8257),
	BILLBOARD(),
	SCALE(0, 40),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_fire_spitter_update),
	END_LOOP(),
};

const BehaviorScript bhvBreakableBox[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_breakable_box_geo_0xa9458c),
	SET_FLOAT(oCollisionDistance, 500),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_breakable_box_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSmallWhomp[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oNumLootCoins, 5),
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 100796932),
	LOAD_COLLISION_DATA(col_whomp_geo_0xa2a340),
	ANIMATE(0),
	SET_OBJ_PHYSICS(0, 65136, 65486, 0, 0, 200, 0, 0),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_whomp_loop),
	END_LOOP(),
};

const BehaviorScript bhvWigglerHead[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8257),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 83946636),
	SET_HOME(),
	SET_OBJ_PHYSICS(60, 65136, 0, 1000, 1000, 200, 0, 0),
	HIDE(),
	SCALE(0, 400),
	SET_FLOAT(oUkikiTauntsToBeDone, 5000),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_wiggler_update),
	END_LOOP(),
};

const BehaviorScript bhvCannonClosed[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 16385),
	LOAD_COLLISION_DATA(col_cannon_lid_seg8_dl_080048E0_0xa8616c),
	SET_HOME(),
	CALL_NATIVE( bhv_cannon_closed_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_cannon_closed_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvBobombBuddyOpensCannon[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 25673),
	LOAD_ANIMATIONS(10022, 134363500),
	SET_INTERACT_TYPE(8388608),
	DROP_TO_FLOOR(),
	SET_HITBOX(100, 60),
	ANIMATE(0),
	SET_INT(oYoshiChosenHome, 1),
	SET_HOME(),
	CALL_NATIVE( bhv_bobomb_buddy_init),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bobomb_buddy_loop),
	END_LOOP(),
};

const BehaviorScript bhvPitBowlingBall[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1),
	BILLBOARD(),
	SET_FLOAT(oGraphYOffset, 130),
	CALL_NATIVE( bhv_bob_pit_bowling_ball_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_bob_pit_bowling_ball_loop),
	END_LOOP(),
};

const BehaviorScript bhvBobBowlingBallSpawner[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1),
	SET_INT(oYoshiChosenHome, 127),
	CALL_NATIVE( bhv_generic_bowling_ball_spawner_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_generic_bowling_ball_spawner_loop),
	END_LOOP(),
};

const BehaviorScript bhvTtmBowlingBallSpawner[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1),
	SET_INT(oYoshiChosenHome, 63),
	CALL_NATIVE( bhv_generic_bowling_ball_spawner_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_generic_bowling_ball_spawner_loop),
	END_LOOP(),
};

const BehaviorScript bhvCapSwitch[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	LOAD_COLLISION_DATA(col_unk_DL_05003120_0x913d94),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_cap_switch_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvFlame[] = {
	BEGIN(OBJ_LIST_LEVEL),
	OR_INT(oFlags, 1),
	BILLBOARD(),
	SET_HOME(),
	SCALE(0, 700),
	SET_INTERACT_TYPE(262144),
	SET_HITBOX_WITH_OFFSET(50, 25, 25),
	SET_INT(oIntangibleTimer, 0),
	CALL_NATIVE( bhv_init_room),
	BEGIN_LOOP(),
		SET_INT(oInteractStatus, 0),
		ANIMATE_TEXTURE(oAnimState, 2),
	END_LOOP(),
};

const BehaviorScript bhvWaterLevelDiamond[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	SET_HITBOX(70, 30),
	SET_FLOAT(oCollisionDistance, 200),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_water_level_diamond_loop),
	END_LOOP(),
};

const BehaviorScript bhvInitializeChangingWaterLevel[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_init_changing_water_level_loop),
	END_LOOP(),
};

const BehaviorScript bhvSkeeter[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 100695520),
	SET_HOME(),
	SET_OBJ_PHYSICS(180, 65136, 65486, 1000, 1000, 1200, 0, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_skeeter_update),
	END_LOOP(),
};

const BehaviorScript bhvWdwSquareFloatingPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 9),
	LOAD_COLLISION_DATA(col_wdw_geo_000580_0xf3a441),
	SET_FLOAT(oYoshiChosenHome, 64),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_floating_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvChirpChirp[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	SET_INT(oUkikiTauntsToBeDone, 1),
	GOTO( bhvChirpChirpUnused),
};

const BehaviorScript bhvFlamethrower[] = {
	BEGIN(OBJ_LIST_DEFAULT),
	OR_INT(oFlags, 73),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_flamethrower_loop),
	END_LOOP(),
};

const BehaviorScript bhvPokey[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8257),
	DROP_TO_FLOOR(),
	SET_HOME(),
	SET_OBJ_PHYSICS(60, 65136, 0, 1000, 1000, 200, 0, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_pokey_update),
	END_LOOP(),
};

const BehaviorScript bhvHomingAmp[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8267),
	LOAD_ANIMATIONS(10022, 134234164),
	ANIMATE(0),
	SET_FLOAT(oGraphYOffset, 40),
	SET_INT(oIntangibleTimer, 0),
	CALL_NATIVE( bhv_homing_amp_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_homing_amp_loop),
	END_LOOP(),
};

const BehaviorScript bhvKlepto[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8393),
	LOAD_ANIMATIONS(10022, 83922172),
	ANIMATE(0),
	SET_OBJ_PHYSICS(100, 0, 65516, 1000, 1000, 200, 0, 0),
	SET_HOME(),
	CALL_NATIVE( bhv_klepto_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_klepto_update),
	END_LOOP(),
};

const BehaviorScript bhvEyerokBoss[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8257),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_eyerok_boss_loop),
	END_LOOP(),
};

const BehaviorScript bhvHorizontalGrindel[] = {
	BEGIN(OBJ_LIST_SURFACE),
	LOAD_COLLISION_DATA(col_ssl_geo_000734_0xee8457),
	OR_INT(oFlags, 1),
	DROP_TO_FLOOR(),
	SET_HOME(),
	SET_OBJ_PHYSICS(40, 65136, 0, 1000, 1000, 200, 0, 0),
	SCALE(0, 90),
	CALL_NATIVE( bhv_horizontal_grindel_init),
	BEGIN_LOOP(),
		CALL_NATIVE( cur_obj_update_floor_and_walls),
		CALL_NATIVE( bhv_horizontal_grindel_update),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvSushiShark[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 73),
	LOAD_ANIMATIONS(10022, 83930708),
	SPAWN_OBJ(0, 318776200),
	SET_HITBOX_WITH_OFFSET(100, 50, 50),
	SET_INTERACT_TYPE(8),
	SET_INT(oDamageOrCoinValue, 3),
	SET_HOME(),
	ANIMATE(0),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_sushi_shark_loop),
	END_LOOP(),
};

const BehaviorScript bhvClamShell[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8265),
	DROP_TO_FLOOR(),
	LOAD_ANIMATIONS(10022, 83892036),
	SET_FLOAT(oGraphYOffset, 10),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_clam_loop),
	END_LOOP(),
};

const BehaviorScript bhvWhompKingBoss[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oBehParams2ndByte, 1),
	SET_INT(oHealth, 3),
	GOTO( Bhv_Custom_0x13002bd4),
};

const BehaviorScript Bhv_Custom_0x13002bd4[] = {
	OR_INT(oFlags, 8265),
	LOAD_ANIMATIONS(10022, 100796932),
	LOAD_COLLISION_DATA(col_whomp_geo_0xa2a340),
	ANIMATE(0),
	SET_OBJ_PHYSICS(0, 65136, 65486, 0, 0, 200, 0, 0),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_whomp_loop),
	END_LOOP(),
};

const BehaviorScript bhvStarDoor[] = {
	BEGIN(OBJ_LIST_SURFACE),
	SET_INT(oInteractType, 4),
	LOAD_COLLISION_DATA(col_None_0xacf284),
	SET_INT(oInteractionSubtype, 32),
	OR_INT(oFlags, 193),
	SET_HITBOX(80, 100),
	SET_HOME(),
	SET_FLOAT(oDrawingDistance, 20000),
	CALL_NATIVE( bhv_door_init),
	SET_INT(oIntangibleTimer, 0),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_star_door_loop),
		CALL_NATIVE( bhv_star_door_loop_2),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvBlueCoinSwitch[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	LOAD_COLLISION_DATA(col_blue_coin_switch_geo_0xa826b4),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_blue_coin_switch_loop),
	END_LOOP(),
};

const BehaviorScript bhvHiddenBlueCoin[] = {
	BEGIN(OBJ_LIST_LEVEL),
	SET_INT(oInteractType, 16),
	OR_INT(oFlags, 193),
	SET_INT(oFaceAnglePitch, 0),
	SET_HITBOX(100, 64),
	SET_INT(oDamageOrCoinValue, 5),
	SET_INT(oIntangibleTimer, 0),
	SET_INT(oAnimState, 65535),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_hidden_blue_coin_loop),
		ADD_INT(oFaceAngleYaw, 2560),
	END_LOOP(),
};

const BehaviorScript bhvBowser[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 9417),
	SET_INT(oInteractType, 2),
	SET_HITBOX(400, 400),
	DROP_TO_FLOOR(),
	SET_HOME(),
	LOAD_ANIMATIONS(10022, 101021664),
	SPAWN_CHILD(0, 318773452),
	SPAWN_CHILD(101, 318773508),
	SPAWN_OBJ(0, 318773288),
	SET_INT(oNumLootCoins, 50),
	SET_OBJ_PHYSICS(0, 65136, 65466, 1000, 1000, 200, 0, 0),
	SET_HOME(),
	CALL_NATIVE( bhv_bowser_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_bowser_loop),
	END_LOOP(),
};

const BehaviorScript bhvKingBobomb[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 8393),
	LOAD_ANIMATIONS(10022, 83951152),
	SET_INT(oInteractType, 2),
	SET_HITBOX(100, 100),
	SET_OBJ_PHYSICS(30, 65136, 65486, 1000, 1000, 200, 0, 0),
	SET_INT(oIntangibleTimer, 0),
	DROP_TO_FLOOR(),
	SET_HOME(),
	SPAWN_OBJ(0, 318767700),
	SET_INT(oHealth, 3),
	SET_INT(oDamageOrCoinValue, 1),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_king_bobomb_loop),
	END_LOOP(),
};

const BehaviorScript bhvBalconyBigBoo[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	SET_INT(oBehParams2ndByte, 2),
	SET_INT(oWigglerTextStatus, 10),
	GOTO( Bhv_Custom_0x13002794),
};

const BehaviorScript Bhv_Custom_0x13002794[] = {
	OR_INT(oFlags, 8265),
	SET_HOME(),
	SET_OBJ_PHYSICS(30, 0, 65486, 1000, 1000, 200, 0, 0),
	CALL_NATIVE( bhv_init_room),
	CALL_NATIVE( bhv_boo_init),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_big_boo_loop),
	END_LOOP(),
};

const BehaviorScript bhvFallingBowserPlatform[] = {
	BEGIN(OBJ_LIST_SURFACE),
	OR_INT(oFlags, 1),
	SET_FLOAT(oDrawingDistance, 20000),
	SET_FLOAT(oCollisionDistance, 20000),
	SET_HOME(),
	BEGIN_LOOP(),
		CALL_NATIVE( bhv_falling_bowser_platform_loop),
		CALL_NATIVE( load_object_collision_model),
	END_LOOP(),
};

const BehaviorScript bhvBowserBomb[] = {
	BEGIN(OBJ_LIST_GENACTOR),
	OR_INT(oFlags, 1),
	SET_INT(oIntangibleTimer, 0),
	SET_HITBOX_WITH_OFFSET(40, 40, 40),
	DELAY(1),
	BEGIN_LOOP(),
		SET_INT(oIntangibleTimer, 0),
		CALL_NATIVE( bhv_bowser_bomb_loop),
	END_LOOP(),
};

