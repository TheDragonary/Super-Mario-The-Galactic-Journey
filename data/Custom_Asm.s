#This file is provided only as a reference for manually recoding functions.

#This function is called from Behavior  bhvGoombaTripletSpawner
#It has virtual address 0x802FF214 and rom address 0xBA214
 bhv_goomba_triplet_spawner_update:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x1ac
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lui	$at, 0x8034
	lwc1	$f6, -0x7594($at)
	lwc1	$f4, 0x15c($t8)
	c.lt.s	$f4, $f6
	nop	
	bc1f	0x1a4
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	lui	$t4, 1
	lw	$t0, 0x144($t9)
	andi	$t1, $t0, 0xfc
	sra	$t2, $t1, 2
	addiu	$t3, $t2, 3
	div	$zero, $t4, $t3
	mflo	$t5
	sw	$t5, 0x30($sp)
	bnez	$t3, 0x74
	nop	
	break	7
	addiu	$at, $zero, -1
	bne	$t3, $at, 0x8c
	lui	$at, 0x8000
	bne	$t4, $at, 0x8c
	nop	
	break	6
	addiu	$t6, $zero, 0x100
	sh	$t6, 0x3a($sp)
	sw	$zero, 0x34($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lh	$t9, 0x3a($sp)
	lw	$t8, 0x188($t7)
	and	$t0, $t8, $t9
	bnez	$t0, 0x168
	nop	
	lhu	$t1, 0x36($sp)
	lui	$at, 0x8038
	sra	$t2, $t1, 4
	sll	$t4, $t2, 2
	addu	$at, $at, $t4
	lwc1	$f8, 0x7000($at)
	lui	$at, 0x43fa
	mtc1	$at, $f10
	nop	
	mul.s	$f16, $f8, $f10
	trunc.w.s	$f18, $f16
	mfc1	$t5, $f18
	nop	
	sh	$t5, 0x2e($sp)
	lhu	$t6, 0x36($sp)
	lui	$at, 0x8038
	sra	$t7, $t6, 4
	sll	$t8, $t7, 2
	addu	$at, $at, $t8
	lwc1	$f4, 0x6000($at)
	lui	$at, 0x43fa
	mtc1	$at, $f6
	nop	
	mul.s	$f8, $f4, $f6
	trunc.w.s	$f10, $f8
	mfc1	$t0, $f10
	nop	
	sh	$t0, 0x2c($sp)
	lui	$t1, 0x8036
	lw	$t1, 0x1160($t1)
	lh	$t3, 0x3a($sp)
	lui	$t7, 0x1300
	lw	$t2, 0x144($t1)
	addiu	$t7, $t7, 0x472c
	addiu	$t6, $zero, 0xc0
	sra	$t5, $t3, 6
	andi	$t4, $t2, 3
	or	$a0, $t4, $t5
	sw	$t6, 0x14($sp)
	sw	$t7, 0x18($sp)
	lh	$a1, 0x2e($sp)
	move	$a2, $zero
	lh	$a3, 0x2c($sp)
	jal	 spawn_object_relative
	sw	$t1, 0x10($sp)
	lw	$t8, 0x34($sp)
	lw	$t9, 0x30($sp)
	lh	$t2, 0x3a($sp)
	ori	$at, $zero, 0xffff
	addu	$t0, $t8, $t9
	slt	$at, $t0, $at
	sll	$t3, $t2, 1
	sh	$t3, 0x3a($sp)
	bnez	$at, 0x98
	sw	$t0, 0x34($sp)
	lui	$t4, 0x8036
	lw	$t4, 0x1160($t4)
	lw	$t5, 0x14c($t4)
	addiu	$t1, $t5, 1
	sw	$t1, 0x14c($t4)
	b	0x1dc
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x457a
	mtc1	$at, $f18
	lwc1	$f16, 0x15c($t6)
	c.lt.s	$f18, $f16
	nop	
	bc1f	0x1dc
	nop	
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	sw	$zero, 0x14c($t7)
	b	0x1e4
	nop	
	lw	$ra, 0x24($sp)
	addiu	$sp, $sp, 0x40
	jr	$ra
	nop	
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x802A4120 and rom address 0x5F120
 bhv_init_room:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x14
	jal	 is_item_in_array
	lh	$a0, -0x2208($a0)
	beqz	$v0, 0xc8
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor
	lw	$a2, 0xa8($t6)
	swc1	$f0, 0x18($sp)
	lw	$t7, 0x1c($sp)
	beqz	$t7, 0xc0
	nop	
	lw	$t8, 0x1c($sp)
	lb	$t9, 5($t8)
	beqz	$t9, 0x78
	nop	
	lw	$t0, 0x1c($sp)
	lui	$t2, 0x8036
	lw	$t2, 0x1160($t2)
	lb	$t1, 5($t0)
	b	0xc0
	sw	$t1, 0x1a0($t2)
	lui	$t3, 0x8036
	lw	$t3, 0x1160($t3)
	lui	$at, 0x42c8
	mtc1	$at, $f6
	lwc1	$f4, 0x18($sp)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t3)
	lw	$a2, 0xa8($t3)
	jal	 find_floor
	sub.s	$f14, $f4, $f6
	lw	$t4, 0x1c($sp)
	beqz	$t4, 0xc0
	nop	
	lw	$t5, 0x1c($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lb	$t6, 5($t5)
	sw	$t6, 0x1a0($t7)
	b	0xd8
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	addiu	$t8, $zero, -1
	sw	$t8, 0x1a0($t9)
	b	0xe0
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x20
	jr	$ra
	nop	
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x80276910 and rom address 0x31910
 bhv_toad_message_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 save_file_get_flags
	nop	
	sw	$v0, 0x34($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
	jal	 save_file_get_total_star_count
	addiu	$a0, $a0, -1
	sw	$v0, 0x30($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
	andi	$t9, $t8, 0xff
	sw	$t9, 0x2c($sp)
	addiu	$t0, $zero, 1
	sw	$t0, 0x28($sp)
	lw	$s0, 0x2c($sp)
	addiu	$at, $zero, 0x4c
	beq	$s0, $at, 0xb8
	nop	
	addiu	$at, $zero, 0x52
	beq	$s0, $at, 0x84
	nop	
	addiu	$at, $zero, 0x53
	beq	$s0, $at, 0xec
	nop	
	b	0x120
	nop	
	lw	$t1, 0x30($sp)
	slti	$t2, $t1, 0xc
	xori	$t2, $t2, 1
	sw	$t2, 0x28($sp)
	lw	$t3, 0x34($sp)
	lui	$at, 0x100
	and	$t4, $t3, $at
	beqz	$t4, 0xb0
	nop	
	addiu	$t5, $zero, 0x9a
	sw	$t5, 0x2c($sp)
	b	0x120
	nop	
	lw	$t6, 0x30($sp)
	slti	$t7, $t6, 0x19
	xori	$t7, $t7, 1
	sw	$t7, 0x28($sp)
	lw	$t8, 0x34($sp)
	lui	$at, 0x200
	and	$t9, $t8, $at
	beqz	$t9, 0xe4
	nop	
	addiu	$t0, $zero, 0x9b
	sw	$t0, 0x2c($sp)
	b	0x120
	nop	
	lw	$t1, 0x30($sp)
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x8027684C and rom address 0x3184C
 bhv_toad_message_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 2($t6)
	andi	$t8, $t7, 1
	beqz	$t8, 0xac
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	sw	$zero, 0x190($t9)
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	lw	$t1, 0x110($t0)
	sltiu	$at, $t1, 5
	beqz	$at, 0xac
	nop	
	sll	$t1, $t1, 2
	lui	$at, 0x8033
	addu	$at, $at, $t1
	lw	$t1, 0x6f40($at)
	jr	$t1
	nop	
#This function is called from Behavior  bhvWarp
#It has virtual address 0x802AAA60 and rom address 0x65A60
 bhv_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x188($t8)
	sra	$t0, $t9, 0x18
	andi	$t1, $t0, 0xff
	sh	$t1, 6($sp)
	lhu	$t2, 6($sp)
	bnez	$t2, 0x54
	nop	
	lui	$at, 0x4248
	lui	$t3, 0x8036
	lw	$t3, 0x1160($t3)
	mtc1	$at, $f4
	b	0xc0
	swc1	$f4, 0x1f8($t3)
	lhu	$t4, 6($sp)
	addiu	$at, $zero, 0xff
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8490 and rom address 0xB3490
 bhv_mips_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	addiu	$a1, $zero, -1
	jal	 save_file_get_star_flags
	addiu	$a0, $a0, -1
	sb	$v0, 0x1f($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
	jal	 save_file_get_total_star_count
	addiu	$a0, $a0, -1
	slti	$at, $v0, 0x14
	bnez	$at, 0x78
	nop	
	lbu	$t6, 0x1f($sp)
	andi	$t7, $t6, 8
	bnez	$t7, 0x78
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8DAC and rom address 0xB3DAC
 bhv_mips_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x4c
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0x5c
	nop	
	addiu	$at, $zero, 2
	beq	$s0, $at, 0x6c
	nop	
	addiu	$at, $zero, 3
	beq	$s0, $at, 0x7c
	nop	
	b	0x8c
	nop	
	jal	 bhv_mips_free
	nop	
	b	0x8c
	nop	
#This function is called from Behavior  Bhv_Custom_0x13000b14
#It has virtual address 0x802ACC3C and rom address 0x67C3C
 bhv_door_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x24($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lwc1	$f6, 0xa8($t7)
	swc1	$f6, 0x20($sp)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lwc1	$f12, 0x24($sp)
	lw	$a2, 0x20($sp)
	addiu	$a3, $sp, 0x1c
	jal	 find_floor
	lwc1	$f14, 0xa4($t8)
	lw	$t9, 0x1c($sp)
	beqz	$t9, 0x64
	nop	
	lw	$t0, 0x1c($sp)
	lui	$t2, 0x8036
	lw	$t2, 0x1160($t2)
#This function is called from Behavior  Bhv_Custom_0x13000b14
#It has virtual address 0x802ACAC8 and rom address 0x67AC8
 bhv_door_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	sw	$zero, 0x1c($sp)
	lw	$t6, 0x1c($sp)
	lui	$t8, 0x8033
	addiu	$at, $zero, -1
	sll	$t7, $t6, 3
	addu	$t8, $t8, $t7
	lw	$t8, 0x260($t8)
	beq	$t8, $at, 0x98
	nop	
	lw	$t9, 0x1c($sp)
	lui	$a0, 0x8033
	sll	$t0, $t9, 3
	addu	$a0, $a0, $t0
	jal	 cur_obj_clear_interact_status_flag
	lw	$a0, 0x260($a0)
	beqz	$v0, 0x6c
	nop	
	jal	 set_door_camera_event
	nop	
	lw	$t1, 0x1c($sp)
	lui	$a0, 0x8033
#This function is called from Behavior  bhv1Up
#It has virtual address 0x802F3D30 and rom address 0xAED30
 bhv_1up_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_1up_common_init
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
	lw	$t7, 0x144($t6)
	bne	$t7, $at, 0x50
	nop	
	jal	 save_file_get_flags
	nop	
	andi	$t8, $v0, 0x50
	bnez	$t8, 0x48
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	sh	$zero, 0x74($t9)
	b	0x88
	nop	
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	addiu	$at, $zero, 2
#This function is called from Behavior  bhv1Up
#It has virtual address 0x802F45B8 and rom address 0xAF5B8
 bhv_1up_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_1up_interact
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
	jal	 set_object_visibility
	addiu	$a1, $zero, 0xbb8
	b	0x28
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvEnemyLakitu
#It has virtual address 0x80303028 and rom address 0xBE028
 bhv_enemy_lakitu_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x44fa
	mtc1	$at, $f12
	jal	0x802fbab4
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x44
	nop	
	addiu	$at, $zero, 1
	beq	$s0, $at, 0x54
#This function is called from Behavior  bhvNoteblock_MOP
#It has virtual address 0x802A6CF4 and rom address 0x61CF4
 bhv_thi_huge_island_top_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_is_mario_on_platform
	lui	$t9, 0x8036
	lui	$t2, 0x8034
	beq	$zero, $v0, 0x9c
	lw	$v1, 0x1160($t9)
	lui	$a2, 0x4348
	lh	$s1, -0x5060($t2)
	andi	$s1, $s1, 0x8000
	beqz	$s1, 0x68
	lw	$a0, 0x1158($t9)
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0xe24
#This function is called from Behavior  bhvNoteblock_MOP
#It has virtual address 0x803839CC and rom address 0x13E9CC
 load_object_collision_model:
	beq	$gp, $v1, 0x10e00
	bne	$a2, $a1, -0x1011c
	andi	$s5, $at, 0xf001
	beql	$zero, $s3, 0x7eb4
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABEE4 and rom address 0x66EE4
 bhv_coin_formation_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 8
	andi	$t9, $t8, 0xff
	sw	$t9, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABF0C and rom address 0x66F0C
 bhv_coin_formation_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
#This function is called from Behavior  bhvFlyGuy
#It has virtual address 0x802FF040 and rom address 0xBA040
 bhv_fly_guy_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
	bnez	$t8, 0x1b8
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F24F4 and rom address 0xAD4F4
 bhv_collect_star_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
	andi	$t9, $t8, 0xff
	sb	$t9, 0x1f($sp)
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F25B0 and rom address 0xAD5B0
 bhv_collect_star_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	addiu	$t8, $t7, 0x800
	sw	$t8, 0xd4($t6)
	lui	$t9, 0x8036
#This function is called from Behavior  bhvChuckya
#It has virtual address 0x802AA0AC and rom address 0x650AC
 bhv_chuckya_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0x2c($sp)
	lui	$at, 0x4248
#This function is called from Behavior  bhvGoomba
#It has virtual address 0x802FF408 and rom address 0xBA408
 bhv_goomba_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	andi	$t8, $t7, 3
	sw	$t8, 0xf4($t6)
	lui	$t9, 0x8036
#This function is called from Behavior  bhvGoomba
#It has virtual address 0x802FF96C and rom address 0xBA96C
 bhv_goomba_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	0x802fb87c
	lwc1	$f12, 0xf8($t6)
	beqz	$v0, 0x1a0
#This function is called from Behavior  bhvCannon
#It has virtual address 0x802A9498 and rom address 0x64498
 bhv_cannon_base_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x140
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf8($t6)
#This function is called from Behavior  bhvExclamationBox
#It has virtual address 0x802C19C0 and rom address 0x7C9C0
 bhv_exclamation_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvSpring_MOP
#It has virtual address 0x802A6DC4 and rom address 0x61DC4
 Func_Custom_0x802a6dc4:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lw	$a1, 0x1158($a0)
	jal	 obj_check_if_collided_with_object
	lw	$a0, 0x1160($a0)
	beq	$zero, $v0, 0x68
	lui	$a0, 0x8036
#This function is called from Behavior  bhvBobomb
#It has virtual address 0x802E6A2C and rom address 0xA1A2C
 bhv_bobomb_init:
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
	lui	$at, 0x8034
	lui	$t7, 0x8036
#This function is called from Behavior  bhvBobomb
#It has virtual address 0x802E742C and rom address 0xA242C
 bhv_bobomb_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0xfa0
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
#This function is called from Behavior  bhvRedCoin
#It has virtual address 0x802F2E6C and rom address 0xADE6C
 bhv_red_coin_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x24
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor
#This function is called from Behavior  bhvRedCoin
#It has virtual address 0x802F2F2C and rom address 0xADF2C
 bhv_red_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x134($t6)
	andi	$t8, $t7, 0x8000
	beqz	$t8, 0xd0
	nop	
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2C84 and rom address 0xADC84
 bhv_hidden_red_coin_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$t6, 0x8034
	lh	$t6, -0x453a($t6)
	addiu	$at, $zero, 3
	beq	$t6, $at, 0x34
	nop	
	lui	$a0, 0x8036
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2D8C and rom address 0xADD8C
 bhv_hidden_red_coin_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8036
	lw	$t7, 0xf4($t6)
	sb	$t7, 0x13fe($at)
#This function is called from Behavior  bhvSwitchblock_MOP
#It has virtual address 0x803094F8 and rom address 0xC44F8
 bhv_animates_on_floor_switch_press_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$v1, 0x8036
	lw	$v1, 0x1160($v1)
	lw	$t3, 0x14c($v1)
	bnez	$t3, 0x30
	nop	
	addiu	$at, $zero, 1
#This function is called from Behavior  bhvSwitchblock_Switch_MOP
#It has virtual address 0x802EF63C and rom address 0xAA63C
 bhv_rr_cruiser_wing_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_is_mario_on_platform
	nop	
	lw	$t2, 0x144($t8)
	sw	$t2, 0xf0($t8)
	beqz	$v0, 0x50
	nop	
#This function is called from Behavior  bhvFadingWarp
#It has virtual address 0x802AAB54 and rom address 0x65B54
 bhv_fading_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvSmallBully
#It has virtual address 0x802EB05C and rom address 0xA605C
 bhv_small_bully_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	move	$a0, $zero
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x164($t6)
#This function is called from Behavior  bhvSmallBully
#It has virtual address 0x802EB9D0 and rom address 0xA69D0
 bhv_bully_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	sw	$s0, 0x20($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0xf8($t6)
	lui	$t7, 0x8036
#This function is called from Behavior  bhvBigBully
#It has virtual address 0x802EB104 and rom address 0xA6104
 bhv_big_bully_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	move	$a0, $zero
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x164($t6)
#This function is called from Behavior  bhvChainChomp
#It has virtual address 0x80300E40 and rom address 0xBBE40
 bhv_chain_chomp_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
#This function is called from Behavior  bhvPushableMetalBox
#It has virtual address 0x802B15E8 and rom address 0x6C5E8
 bhv_pushable_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3a0
	jal	 obj_set_hitbox
	lw	$a0, 0x1160($a0)
	lui	$t6, 0x8036
#This function is called from Behavior  bhvArrowLift
#It has virtual address 0x802F6C0C and rom address 0xB1C0C
 bhv_arrow_lift_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
#This function is called from Behavior  bhvHiddenStarTrigger
#It has virtual address 0x802F31BC and rom address 0xAE1BC
 bhv_hidden_star_trigger_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 obj_check_if_collided_with_object
	lw	$a0, 0x1160($a0)
	addiu	$at, $zero, 1
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F3014 and rom address 0xAE014
 bhv_hidden_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$a0, 0x1300
	jal	 count_objects_with_behavior
	addiu	$a0, $a0, 0x3f1c
	sh	$v0, 0x36($sp)
	lh	$t6, 0x36($sp)
	bnez	$t6, 0xac
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F30F0 and rom address 0xAE0F0
 bhv_hidden_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x34
	nop	
#This function is called from Behavior  Bhv_Custom_0x13000920
#It has virtual address 0x802AB650 and rom address 0x66650
 bhv_yellow_coin_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_set_behavior
	addiu	$a0, $a0, 0x91c
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x1f4
#This function is called from Behavior  Bhv_Custom_0x13000920
#It has virtual address 0x802AB70C and rom address 0x6670C
 bhv_yellow_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_coin_sparkles_init
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf0($t6)
	addiu	$t8, $t7, 1
#This function is called from Behavior  bhvFlipswitch_Panel_MOP
#It has virtual address 0x802A8238 and rom address 0x63238
 Func_Custom_0x802a8238:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	lw	$t3, 0x14c($t0)
	addiu	$at, $zero, 2
	beq	$at, $t3, 0x70
	nop	
#This function is called from Behavior  bhvFlipswitch_Panel_StarSpawn_MOP
#It has virtual address 0x802A82BC and rom address 0x632BC
 Func_Custom_0x802a82bc:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t0, 0x8034
	addiu	$t0, $t0, -0x2b78
	sw	$t0, 0x18($sp)
	lui	$t1, 0x8036
	ori	$t1, $t1, 0xe88
	lw	$t0, 0x18($sp)
#This function is called from Behavior  bhvSnufit
#It has virtual address 0x8030DC70 and rom address 0xC8C70
 bhv_snufit_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
	bnez	$t8, 0x338
#This function is called from Behavior  Bhv_Custom_0x13002808
#It has virtual address 0x802C3440 and rom address 0x7E440
 bhv_boo_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0x110($t6)
	jr	$ra
	nop	
#This function is called from Behavior  Bhv_Custom_0x13002808
#It has virtual address 0x802C4824 and rom address 0x7F824
 bhv_boo_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvScuttlebug
#It has virtual address 0x802C65C0 and rom address 0x815C0
 bhv_scuttlebug_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvMrI
#It has virtual address 0x802A6B7C and rom address 0x61B7C
 bhv_mr_i_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x84
	jal	 obj_set_hitbox
#This function is called from Behavior  bhvGhostHuntBigBoo
#It has virtual address 0x802C4F30 and rom address 0x7FF30
 bhv_big_boo_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0xc74
	jal	 obj_set_hitbox
#This function is called from Behavior  bhvMadPiano
#It has virtual address 0x8030BFD0 and rom address 0xC6FD0
 bhv_mad_piano_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvOpenableGrill
#It has virtual address 0x802C26F8 and rom address 0x7D6F8
 bhv_openable_grill_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  Bhv_Custom_0x13001488
#It has virtual address 0x802B1278 and rom address 0x6C278
 bhv_purple_switch_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FBC4C and rom address 0xB6C4C
 bhv_koopa_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 4
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FD7F8 and rom address 0xB87F8
 bhv_koopa_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5063
#This function is called from Behavior  bhvBobombBuddy
#It has virtual address 0x802E76AC and rom address 0xA26AC
 bhv_bobomb_buddy_init:
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
#This function is called from Behavior  bhvBobombBuddy
#It has virtual address 0x802E7C4C and rom address 0xA2C4C
 bhv_bobomb_buddy_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bobomb_buddy_actions
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
#This function is called from Behavior  bhvBubba
#It has virtual address 0x803145D4 and rom address 0xCF5D4
 bhv_bubba_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, -0x2001
#This function is called from Behavior  bhvShrink_Platform_MOP
#It has virtual address 0x802AA830 and rom address 0x65830
 bhv_rotating_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$v1, 0x8036
	lw	$v1, 0x1160($v1)
	lw	$t0, 0x14c($v1)
	bnez	$t0, 0x54
#This function is called from Behavior  bhvRecoveryHeart
#It has virtual address 0x80309B64 and rom address 0xC4B64
 bhv_recovery_heart_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x2bf0
	jal	 obj_set_hitbox
#This function is called from Behavior  bhvHeaveHo
#It has virtual address 0x802B2278 and rom address 0x6D278
 bhv_heave_ho_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
#This function is called from Behavior  bhvThwomp
#It has virtual address 0x802AD34C and rom address 0x6834C
 bhv_grindel_thwomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x298
	b	0x1c
#This function is called from Behavior  bhvCirclingAmp
#It has virtual address 0x802E8AE4 and rom address 0xA3AE4
 bhv_circling_amp_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
#This function is called from Behavior  bhvCirclingAmp
#It has virtual address 0x802E8ECC and rom address 0xA3ECC
 bhv_circling_amp_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 2
#This function is called from Behavior  bhvSandBlock_MOP
#It has virtual address 0x802AA1B8 and rom address 0x651B8
 bhv_wf_breakable_wall_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_is_mario_on_platform
	nop	
	beq	$zero, $v0, 0x1c
	lw	$t0, 0x14c($t8)
#This function is called from Behavior  bhvFireSpitter
#It has virtual address 0x8030D598 and rom address 0xC8598
 bhv_fire_spitter_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	 cur_obj_scale
#This function is called from Behavior  bhvBreakableBox
#It has virtual address 0x802B1B2C and rom address 0x6CB2C
 bhv_breakable_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3b0
	jal	 obj_set_hitbox
#This function is called from Behavior  bhvSmallWhomp
#It has virtual address 0x802C79D8 and rom address 0x829D8
 bhv_whomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvWigglerHead
#It has virtual address 0x80302154 and rom address 0xBD154
 bhv_wiggler_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7C90 and rom address 0xA2C90
 bhv_cannon_closed_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 save_file_is_cannon_unlocked
	nop	
	addiu	$at, $zero, 1
	bne	$v0, $at, 0xa4
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7E54 and rom address 0xA2E54
 bhv_cannon_closed_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvPitBowlingBall
#It has virtual address 0x802EF21C and rom address 0xAA21C
 bhv_bob_pit_bowling_ball_init:
	lui	$at, 0x4140
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
#This function is called from Behavior  bhvPitBowlingBall
#It has virtual address 0x802EF274 and rom address 0xAA274
 bhv_bob_pit_bowling_ball_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 object_step
	nop	
	sh	$v0, 0x1a($sp)
	lui	$t6, 0x8036
#This function is called from Behavior  bhvBobBowlingBallSpawner
#It has virtual address 0x802EEEB4 and rom address 0xA9EB4
 bhv_generic_bowling_ball_spawner_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x144($t6)
	beqz	$a0, 0x38
	nop	
#This function is called from Behavior  bhvBobBowlingBallSpawner
#It has virtual address 0x802EEF9C and rom address 0xA9F9C
 bhv_generic_bowling_ball_spawner_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sdc1	$f20, 0x10($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 0x100
#This function is called from Behavior  bhvCapSwitch
#It has virtual address 0x802A7170 and rom address 0x62170
 bhv_cap_switch_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0xac
	b	0x1c
#This function is called from Behavior  bhvWaterLevelDiamond
#It has virtual address 0x802C2A24 and rom address 0x7DA24
 bhv_water_level_diamond_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1184($t6)
	beqz	$t6, 0x2a8
#This function is called from Behavior  bhvInitializeChangingWaterLevel
#It has virtual address 0x802C2930 and rom address 0x7D930
 bhv_init_changing_water_level_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x40
	nop	
	lui	$t8, 0x8036
#This function is called from Behavior  bhvSkeeter
#It has virtual address 0x80313110 and rom address 0xCE110
 bhv_skeeter_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5072
#This function is called from Behavior  bhvWdwSquareFloatingPlatform
#It has virtual address 0x802F6984 and rom address 0xB1984
 bhv_floating_platform_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 floating_platform_find_home_y
	nop	
	lui	$t6, 0x8036
#This function is called from Behavior  bhvFlamethrower
#It has virtual address 0x802AF1E8 and rom address 0x6A1E8
 bhv_flamethrower_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x84
#This function is called from Behavior  bhvPokey
#It has virtual address 0x802FE3B0 and rom address 0xB93B0
 bhv_pokey_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5063
#This function is called from Behavior  bhvHomingAmp
#It has virtual address 0x802E8388 and rom address 0xA3388
 bhv_homing_amp_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x164($t6)
#This function is called from Behavior  bhvHomingAmp
#It has virtual address 0x802E89D4 and rom address 0xA39D4
 bhv_homing_amp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvKlepto
#It has virtual address 0x80310498 and rom address 0xCB498
 bhv_klepto_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	beqz	$t7, 0x30
#This function is called from Behavior  bhvKlepto
#It has virtual address 0x8031129C and rom address 0xCC29C
 bhv_klepto_update:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	jal	 cur_obj_lateral_dist_to_home
	nop	
#This function is called from Behavior  bhvEyerokBoss
#It has virtual address 0x8030EA9C and rom address 0xC9A9C
 bhv_eyerok_boss_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvHorizontalGrindel
#It has virtual address 0x8030E14C and rom address 0xC914C
 bhv_horizontal_grindel_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvHorizontalGrindel
#It has virtual address 0x802A2320 and rom address 0x5D320
 cur_obj_update_floor_and_walls:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	0x802a21d4
	addiu	$a0, $zero, 0x3c
	b	0x18
	nop	
#This function is called from Behavior  bhvHorizontalGrindel
#It has virtual address 0x8030E16C and rom address 0xC916C
 bhv_horizontal_grindel_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xec($t6)
	andi	$t8, $t7, 3
#This function is called from Behavior  bhvSushiShark
#It has virtual address 0x802C1A90 and rom address 0x7CA90
 bhv_sushi_shark_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f12, 0xa0($t6)
	jal	 find_water_level
#This function is called from Behavior  bhvClamShell
#It has virtual address 0x80312A54 and rom address 0xCDA54
 bhv_clam_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x3fc0
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x802A56BC and rom address 0x606BC
 bhv_star_door_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0
	sw	$v0, 0x18($sp)
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x802ACE80 and rom address 0x67E80
 bhv_star_door_loop_2:
	addiu	$sp, $sp, -8
	sw	$zero, 4($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x1250($t6)
	beqz	$t6, 0x174
	nop	
#This function is called from Behavior  bhvBlueCoinSwitch
#It has virtual address 0x802C242C and rom address 0x7D42C
 bhv_blue_coin_switch_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x4040
	mtc1	$at, $f12
	jal	 cur_obj_scale
#This function is called from Behavior  bhvHiddenBlueCoin
#It has virtual address 0x802C22B8 and rom address 0x7D2B8
 bhv_hidden_blue_coin_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvBowser
#It has virtual address 0x802B7878 and rom address 0x72878
 bhv_bowser_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	addiu	$t6, $zero, 1
	sh	$t6, 0x110($t7)
#This function is called from Behavior  bhvBowser
#It has virtual address 0x802B75A4 and rom address 0x725A4
 bhv_bowser_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa8($t6)
#This function is called from Behavior  bhvKingBobomb
#It has virtual address 0x802A8064 and rom address 0x63064
 bhv_king_bobomb_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvFallingBowserPlatform
#It has virtual address 0x802B8384 and rom address 0x73384
 bhv_falling_bowser_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x67c
	b	0x1c
#This function is called from Behavior  bhvBowserBomb
#It has virtual address 0x802ECC14 and rom address 0xA7C14
 bhv_bowser_bomb_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 obj_check_if_collided_with_object
