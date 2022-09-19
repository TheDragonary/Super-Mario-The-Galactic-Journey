-- name: Super Mario The Galactic Journey
-- description: Super Mario The Galactic Journey is a rom hack made by Fares242\n\nIt features 102 stars across 23 worlds\nFall damage is disabled and there are no 100 coin stars\n\nPorted to coop by Dragonary
-- incompatible: romhack

------------------
-- level values --
------------------

gLevelValues.entryLevel = LEVEL_CASTLE_GROUNDS
gLevelValues.exitCastleLevel = LEVEL_CASTLE_GROUNDS
gLevelValues.exitCastleWarpNode = 0x0A
gLevelValues.skipCreditsAt = LEVEL_CASTLE_GROUNDS
gLevelValues.coinsRequiredForCoinStar = -1

------------
-- camera --
------------
camera_set_use_course_specific_settings(false)

-- No Fall Damage mod made by Mr.Needlemouse64
function no_fall_damage(m)
 m.peakHeight = m.pos.y
end
hook_event(HOOK_MARIO_UPDATE, no_fall_damage)