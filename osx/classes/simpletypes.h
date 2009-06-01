/*
 *  simpletypes.h
 *  BoE
 *
 *  Created by Celtic Minstrel on 01/06/09.
 *
 */

typedef unsigned short m_num_t;
typedef unsigned short ter_num_t;
typedef signed short spec_num_t;
typedef signed short item_num_t;
typedef unsigned short str_num_t;

/* adven[i].race */ //complete
enum eRace {
	RACE_UNKNOWN = -1, // for parameters to some functions; not valid in the class
	RACE_HUMAN = 0,
	RACE_NEPHIL = 1,
	RACE_SLITH = 2,
	RACE_VAHNATAI = 3,
	RACE_REPTILE = 4,
	RACE_BEAST = 5,
	RACE_IMPORTANT = 6,
	RACE_MAGE = 7,
	RACE_PRIEST = 8,
	RACE_HUMANOID = 9,
	RACE_DEMON = 10,
	RACE_UNDEAD = 11,
	RACE_GIANT = 12,
	RACE_SLIME = 13,
	RACE_STONE = 14,
	RACE_BUG = 15,
	RACE_DRAGON = 16,
	RACE_MAGICAL = 17,
	RACE_PLANT = 18,
	RACE_BIRD = 19,
}; // TODO: Expand and merge with eMonsterType

/* adven[i].status*/ //complete - assign a positive value for a help pc effect, a negative for harm pc
enum eStatus {
	STATUS_POISONED_WEAPON = 0,
	STATUS_BLESS_CURSE = 1,
	STATUS_POISON = 2,
	STATUS_HASTE_SLOW = 3,
	STATUS_INVULNERABLE = 4,
	STATUS_MAGIC_RESISTANCE = 5,
	STATUS_WEBS = 6,
	STATUS_DISEASE = 7,
	STATUS_INVISIBLE = 8, //sanctuary
	STATUS_DUMB = 9,
	STATUS_MARTYRS_SHIELD = 10,
	STATUS_ASLEEP = 11,
	STATUS_PARALYZED = 12,
	STATUS_ACID = 13,
};

/* Monster Type */
enum eMonsterType {
	MONSTER_TYPE_UNKNOWN = -1, // for parameters to some functions; not valid in the class
	MONSTER_TYPE_HUMAN = 0,
	MONSTER_TYPE_REPTILE = 1,
	MONSTER_TYPE_BEAST = 2,
	MONSTER_TYPE_IMPORTANT = 3,
	MONSTER_TYPE_MAGE = 4,
	MONSTER_TYPE_PRIEST = 5,
	MONSTER_TYPE_HUMANOID = 6,
	MONSTER_TYPE_DEMON = 7,
	MONSTER_TYPE_UNDEAD = 8,
	MONSTER_TYPE_GIANT = 9,
	MONSTER_TYPE_SLIME = 10,
	MONSTER_TYPE_STONE = 11,
	MONSTER_TYPE_BUG = 12,
	MONSTER_TYPE_DRAGON = 13,
	MONSTER_TYPE_MAGICAL = 14,
};


/* Special Ability a.k.a spec_skill */

enum eMonstAbil {
	MONST_NO_ABIL = 0,
	// Missile abilities (extra1 = number of sided dice; extra2 = number of sides)
	MONST_THROWS_DARTS = 10,
	MONST_SHOOTS_ARROWS,
	MONST_THROWS_SPEARS,
	MONST_THROWS_ROCKS,
	MONST_THROWS_RAZORDISKS,
	MONST_GOOD_ARCHER,
	MONST_SHOOTS_SPINES,
	MONST_THROWS_KNIVES,
	// Ray abilities (extra1 = type of damage / status where applicable)
	MONST_DAMAGE_RAY = 20,
	MONST_STATUS_RAY,
	MONST_PETRIFY_RAY,
	MONST_DRAIN_SP_RAY,
	MONST_DRAIN_XP_RAY,
	MONST_DRAIN_XP_DAMAGE_RAY,
	MONST_KILL_RAY,
	MONST_STEAL_FOOD_RAY,
	MONST_STEAL_GOLD_RAY,
	// Touch abilities (extra1 = type of damage / status where applicable)
	MONST_DAMAGE_TOUCH = 30,
	MONST_STATUS_TOUCH,
	MONST_PETRIFY_TOUCH,
	MONST_DRAIN_SP_TOUCH,
	MONST_DRAIN_XP_TOUCH,
	MONST_DRAIN_XP_DAMAGE_TOUCH,
	MONST_KILL_TOUCH,
	MONST_STEAL_FOOD_TOUCH,
	MONST_STEAL_GOLD_TOUCH,
	// Summon abilities (extra1 = which monster / type / species; extra2 = % chance)
	MONST_SUMMON_ONE = 40,
	MONST_SUMMON_TYPE,
	MONST_SUMMON_SPECIES,
	MONST_SUMMON_RANDOM,
	MONST_MASS_SUMMON,
	// Misc abilities (extra1 = field / special #; extra2 = % chance for radiate only)
	MONST_SPLITS = 50,
	MONST_FIELD_MISSILE,
	MONST_MARTYRS_SHIELD,
	MONST_ABSORB_SPELLS,
	MONST_INVULNERABLE,
	MONST_RADIATE,
	MONST_CALL_LOCAL_SPECIAL,
	MONST_CALL_GLOBAL_SPECIAL,
};


/* Terrains Specials Properties : scenario.ter_types[i].special */      //complete

enum eTerSpec {
	//	TER_SPEC_NONE = 0,
	//	TER_SPEC_CHANGE_WHEN_STEP_ON = 1,
	//	TER_SPEC_DOES_FIRE_DAMAGE = 2,
	//	TER_SPEC_DOES_COLD_DAMAGE = 3,
	//	TER_SPEC_DOES_MAGIC_DAMAGE = 4,
	//	TER_SPEC_POISON_LAND = 5,
	//	TER_SPEC_DISEASED_LAND = 6,
	//	TER_SPEC_CRUMBLING_TERRAIN = 7,
	//	TER_SPEC_LOCKABLE_TERRAIN = 8,
	//	TER_SPEC_UNLOCKABLE_TERRAIN = 9,
	//	TER_SPEC_UNLOCKABLE_BASHABLE = 10,
	//	TER_SPEC_IS_A_SIGN = 11,
	//	TER_SPEC_CALL_LOCAL_SPECIAL = 12,
	//	TER_SPEC_CALL_SCENARIO_SPECIAL = 13,
	//	TER_SPEC_IS_A_CONTAINER = 14,
	//	TER_SPEC_WATERFALL = 15,
	//	TER_SPEC_CONVEYOR_NORTH = 16,
	//	TER_SPEC_CONVEYOR_EAST = 17,
	//	TER_SPEC_CONVEYOR_SOUTH = 18,
	//	TER_SPEC_CONVEYOR_WEST = 19,
	//	TER_SPEC_BLOCKED_TO_MONSTERS = 20,
	//	TER_SPEC_TOWN_ENTRANCE = 21,
	//	TER_SPEC_CHANGE_WHEN_USED = 22,
	//	TER_SPEC_CALL_SPECIAL_WHEN_USED = 23,
	TER_SPEC_NONE = 0,
	TER_SPEC_CHANGE_WHEN_STEP_ON = 1,
	TER_SPEC_DAMAGING = 2,
	TER_SPEC_BRIDGE = 3, // new
	TER_SPEC_BED = 4, // new
	TER_SPEC_DANGEROUS = 5,
	TER_SPEC_UNUSED1 = 6,
	TER_SPEC_CRUMBLING = 7,
	TER_SPEC_LOCKABLE = 8,
	TER_SPEC_UNLOCKABLE = 9,
	TER_SPEC_UNUSED2 = 10,
	TER_SPEC_IS_A_SIGN = 11,
	TER_SPEC_CALL_SPECIAL = 12,
	TER_SPEC_UNUSED3 = 13,
	TER_SPEC_IS_A_CONTAINER = 14,
	TER_SPEC_WATERFALL = 15,
	TER_SPEC_CONVEYOR = 16,
	TER_SPEC_UNUSED4 = 17,
	TER_SPEC_UNUSED5 = 18,
	TER_SPEC_UNUSED6 = 19,
	TER_SPEC_BLOCKED_TO_MONSTERS = 20,
	TER_SPEC_TOWN_ENTRANCE = 21,
	TER_SPEC_CHANGE_WHEN_USED = 22,
	TER_SPEC_CALL_SPECIAL_WHEN_USED = 23,
	//	1. Change when step on (What to change to, number of sound, Unused)
	//	2. Damaging terrain; can't rest here (Amount of damage done, multiplier, damage type)
	//	3. Reserved
	//	4. Reserved
	//	5. Dangerous land; can't rest here; percentage chance may be 0 (Strength, Percentage chance, status type)
	//	6. Reserved
	//	7. Crumbling terrain (Terrain to change to, strength?, destroyed by what - quickfire, shatter/move mountains, or both)
	//	8. Lockable terrain (Terrain to change to when locked, Unused, Unused)
	//	9. Unlockable terrain (Terrain to change to when locked, Difficulty, can be bashed)
	//	10. Reserved
	//	11. Sign (Unused, Unused, Unused)
	//	12. Call special (Special to call, local or scenario?, Unused)
	//	13. Reserved
	//	14. Container (Unused, Unused, Unused)
	//	15. Waterfall (Direction, Unused, Unused)
	//	16. Conveyor Belt (Direction, Unused, Unused)
	//	17. Reserved
	//	18. Reserved
	//	19. Reserved
	//	20. Blocked to Monsters (Unused, Unused, Unused)
	//	21. Town entrance (Terrain type if hidden, Unused, Unused)
	//	22. Change when Used (Terrain to change to when used, Number of sound, Unused)
	//	23. Call special when used (Special to call, local or scenario?, Unused)
	//	24. Bridge - if the party boats over it, they get the option to land. (Unused, Unused, Unused)
};

enum eTrimType {
	TRIM_NONE = 0,
	TRIM_WALL = 1, // not a trim, but trims will conform to it as if it's the same ground type (eg stone wall)
	TRIM_S, TRIM_SE, TRIM_E, TRIM_NE, TRIM_N, TRIM_NW, TRIM_W, TRIM_SW,
	TRIM_NE_INNER, TRIM_SE_INNER, TRIM_SW_INNER, TRIM_NW_INNER,
	TRIM_FRILLS = 14, // like on lava and underground water; no trim_ter required
	TRIM_ROAD = 15, // the game will treat it like a road space and draw roads; no trim_ter required
	TRIM_WALKWAY = 16, // the game will draw walkway corners; trim_ter is base terrain to draw on
	TRIM_WATERFALL = 17, // special case for waterfalls
	TRIM_CITY = 18, // the game will join roads up to this space but not draw roads on the space
};


/*      items[i].type    a.k.a type of weapon         */
enum eWeapType {
	ITEM_NOT_MELEE = 0,
	ITEM_EDGED = 1,
	ITEM_BASHING = 2,
	ITEM_POLE = 3,
};

/*      items[i].variety    a.k.a item type (in editor)      */
enum eItemType {
	ITEM_TYPE_NO_ITEM = 0,
	ITEM_TYPE_ONE_HANDED = 1,
	ITEM_TYPE_TWO_HANDED = 2,
	ITEM_TYPE_GOLD = 3,
	ITEM_TYPE_BOW = 4,
	ITEM_TYPE_ARROW = 5,
	ITEM_TYPE_THROWN_MISSILE = 6,
	ITEM_TYPE_POTION = 7, // potion/magic item
	ITEM_TYPE_SCROLL = 8, // scroll/magic item
	ITEM_TYPE_WAND = 9,
	ITEM_TYPE_TOOL = 10,
	ITEM_TYPE_FOOD = 11,
	ITEM_TYPE_SHIELD = 12,
	ITEM_TYPE_ARMOR = 13,
	ITEM_TYPE_HELM = 14,
	ITEM_TYPE_GLOVES = 15,
	ITEM_TYPE_SHIELD_2 = 16,
	// don't know why a second type of shield is used ; it is actually checked
	// in the armor code (item >= 12 and <= 17)
	// and you can't equip another (12) shield while wearing it ... I didn't
	// find a single item with this property in the bladbase.exs ...
	ITEM_TYPE_BOOTS = 17,
	ITEM_TYPE_RING = 18,
	ITEM_TYPE_NECKLACE = 19,
	ITEM_TYPE_WEAPON_POISON = 20,
	ITEM_TYPE_NON_USE_OBJECT = 21,
	ITEM_TYPE_PANTS = 22,
	ITEM_TYPE_CROSSBOW = 23,
	ITEM_TYPE_BOLTS = 24,
	ITEM_TYPE_MISSILE_NO_AMMO = 25, //e.g slings
	ITEM_TYPE_UNUSED1 = 26, // these are here solely because they are options in the editor
	ITEM_TYPE_UNUSED2 = 27,
};

/*      items[i].ability      */
enum eItemAbil {
	// Weapon abilities
	ITEM_NO_ABILITY = 0,
	ITEM_FLAMING_WEAPON = 1,
	ITEM_DEMON_SLAYER = 2,
	ITEM_UNDEAD_SLAYER = 3,
	ITEM_LIZARD_SLAYER = 4,
	ITEM_GIANT_SLAYER = 5,
	ITEM_MAGE_SLAYER = 6,
	ITEM_PRIEST_SLAYER = 7,
	ITEM_BUG_SLAYER = 8,
	ITEM_ACIDIC_WEAPON = 9,
	ITEM_SOULSUCKER = 10,
	ITEM_DRAIN_MISSILES = 11,
	ITEM_WEAK_WEAPON = 12,
	ITEM_CAUSES_FEAR = 13,
	ITEM_POISONED_WEAPON = 14,
	// General abilities
	ITEM_PROTECTION = 30,
	ITEM_FULL_PROTECTION = 31,
	ITEM_FIRE_PROTECTION = 32,
	ITEM_COLD_PROTECTION = 33,
	ITEM_POISON_PROTECTION = 34,
	ITEM_MAGIC_PROTECTION = 35,
	ITEM_ACID_PROTECTION = 36,
	ITEM_SKILL = 37,
	ITEM_STRENGTH = 38,
	ITEM_DEXTERITY = 39,
	ITEM_INTELLIGENCE = 40,
	ITEM_ACCURACY = 41,
	ITEM_THIEVING = 42,
	ITEM_GIANT_STRENGTH = 43,
	ITEM_LIGHTER_OBJECT = 44,
	ITEM_HEAVIER_OBJECT = 45,
	ITEM_OCCASIONAL_BLESS = 46,
	ITEM_OCCASIONAL_HASTE = 47,
	ITEM_LIFE_SAVING = 48,
	ITEM_PROTECT_FROM_PETRIFY = 49,
	ITEM_REGENERATE = 50,
	ITEM_POISON_AUGMENT = 51,
	ITEM_DISEASE_PARTY = 52,
	ITEM_WILL = 53,
	ITEM_FREE_ACTION = 54,
	ITEM_SPEED = 55,
	ITEM_SLOW_WEARER = 56,
	ITEM_PROTECT_FROM_UNDEAD = 57,
	ITEM_PROTECT_FROM_DEMONS = 58,
	ITEM_PROTECT_FROM_HUMANOIDS = 59,
	ITEM_PROTECT_FROM_REPTILES = 60,
	ITEM_PROTECT_FROM_GIANTS = 61,
	ITEM_PROTECT_FROM_DISEASE = 62,
	// Nonspell Usable
	ITEM_POISON_WEAPON = 70, //put poison on weapon
	ITEM_BLESS_CURSE = 71,
	ITEM_AFFECT_POISON = 72,
	ITEM_HASTE_SLOW = 73,
	ITEM_AFFECT_INVULN = 74,
	ITEM_AFFECT_MAGIC_RES = 75,
	ITEM_AFFECT_WEB = 76,
	ITEM_AFFECT_DISEASE = 77,
	ITEM_AFFECT_SANCTUARY = 78,
	ITEM_AFFECT_DUMBFOUND = 79,
	ITEM_AFFECT_MARTYRS_SHIELD = 80,
	ITEM_AFFECT_SLEEP = 81,
	ITEM_AFFECT_PARALYSIS = 82,
	ITEM_AFFECT_ACID = 83,
	ITEM_BLISS = 84,
	ITEM_AFFECT_EXPERIENCE = 85,
	ITEM_AFFECT_SKILL_POINTS = 86,
	ITEM_AFFECT_HEALTH = 87,
	ITEM_AFFECT_SPELL_POINTS = 88,
	ITEM_DOOM = 89,
	ITEM_LIGHT = 90,
	ITEM_STEALTH = 91,
	ITEM_FIREWALK = 92,
	ITEM_FLYING = 93,
	ITEM_MAJOR_HEALING = 94,
	// Spell Usable
	ITEM_SPELL_FLAME = 110,
	ITEM_SPELL_FIREBALL = 111,
	ITEM_SPELL_FIRESTORM = 112,
	ITEM_SPELL_KILL = 113,
	ITEM_SPELL_ICE_BOLT = 114,
	ITEM_SPELL_SLOW = 115,
	ITEM_SPELL_SHOCKWAVE = 116,
	ITEM_SPELL_DISPEL_UNDEAD = 117,
	ITEM_SPELL_DISPEL_SPIRIT = 118,
	ITEM_SPELL_SUMMONING = 119,
	ITEM_SPELL_MASS_SUMMONING = 120,
	ITEM_SPELL_ACID_SPRAY = 121,
	ITEM_SPELL_STINKING_CLOUD = 122,
	ITEM_SPELL_SLEEP_FIELD = 123,
	ITEM_SPELL_VENOM = 124,
	ITEM_SPELL_SHOCKSTORM = 125,
	ITEM_SPELL_PARALYSIS = 126,
	ITEM_SPELL_WEB_SPELL = 127,
	ITEM_SPELL_STRENGTHEN_TARGET = 128, //wand of carrunos effect
	ITEM_SPELL_QUICKFIRE = 129,
	ITEM_SPELL_MASS_CHARM = 130,
	ITEM_SPELL_MAGIC_MAP = 131,
	ITEM_SPELL_DISPEL_BARRIER = 132,
	ITEM_SPELL_MAKE_ICE_WALL = 133,
	ITEM_SPELL_CHARM_SPELL = 134,
	ITEM_SPELL_ANTIMAGIC_CLOUD = 135,
	// Reagents
	ITEM_HOLLY = 150, // Holly/Toadstool
	ITEM_COMFREY_ROOT = 151,
	ITEM_GLOWING_NETTLE = 152,
	ITEM_WORMGRASS = 153, // Crypt Shroom/Wormgr.
	ITEM_ASPTONGUE_MOLD = 154,
	ITEM_EMBER_FLOWERS = 155,
	ITEM_GRAYMOLD = 156,
	ITEM_MANDRAKE = 157,
	ITEM_SAPPHIRE = 158,
	ITEM_SMOKY_CRYSTAL = 159,
	ITEM_RESSURECTION_BALM = 160,
	ITEM_LOCKPICKS = 161,
	// Missile Abilities
	ITEM_MISSILE_RETURNING = 170,
	ITEM_MISSILE_LIGHTNING = 171,
	ITEM_MISSILE_EXPLODING = 172,
	ITEM_MISSILE_ACID = 173,
	ITEM_MISSILE_SLAY_UNDEAD = 174,
	ITEM_MISSILE_SLAY_DEMON = 175,
	ITEM_MISSILE_HEAL_TARGET = 176,
};


/* adven[i].skills */ //complete
enum eSkill {
	SKILL_STRENGTH = 0,
	SKILL_DEXTERITY = 1,
	SKILL_INTELLIGENCE = 2,
	SKILL_EDGED_WEAPONS = 3,
	SKILL_BASHING_WEAPONS = 4,
	SKILL_POLE_WEAPONS = 5,
	SKILL_THROWN_MISSILES = 6,
	SKILL_ARCHERY = 7,
	SKILL_DEFENSE = 8,
	SKILL_MAGE_SPELLS = 9,
	SKILL_PRIEST_SPELLS = 10,
	SKILL_MAGE_LORE = 11,
	SKILL_ALCHEMY = 12,
	SKILL_ITEM_LORE = 13,
	SKILL_DISARM_TRAPS = 14,
	SKILL_LOCKPICKING = 15,
	SKILL_ASSASSINATION = 16,
	SKILL_POISON = 17,
	SKILL_LUCK = 18,
};

/* adven[i].traits */ //complete
enum eTrait {
	TRAIT_TOUGHNESS = 0,
	TRAIT_MAGICALLY_APT = 1,
	TRAIT_AMBIDEXTROUS = 2,
	TRAIT_NIMBLE = 3,
	TRAIT_CAVE_LORE = 4,
	TRAIT_WOODSMAN = 5,
	TRAIT_GOOD_CONST = 6,
	TRAIT_HIGHLY_ALERT = 7,
	TRAIT_STRENGTH = 8,
	TRAIT_RECUPERATION = 9,
	TRAIT_SLUGGISH = 10,
	TRAIT_MAGICALLY_INEPT = 11,
	TRAIT_FRAIL = 12,
	TRAIT_CHRONIC_DISEASE = 13,
	TRAIT_BAD_BACK = 14,
	TRAIT_PACIFIST = 15,
};


/* damage type*/
/* used as parameter to some functions */
enum eDamageType {
	DAMAGE_WEAPON = 0,
	DAMAGE_FIRE = 1,
	DAMAGE_POISON = 2,
	DAMAGE_MAGIC = 3,
	DAMAGE_UNBLOCKABLE = 4, //from the source files - the display is the same as the magic one (damage_monst in SPECIALS.cpp)
	DAMAGE_COLD = 5,
	DAMAGE_UNDEAD = 6, //from the source files - the display is the same as the weapon one
	DAMAGE_DEMON = 7, //from the source files - the display is the same as the weapon one
	// 8 and 9 aren't defined : doesn't print any damage. According to the source files the 9 is DAMAGE_MARKED though. Wrong ?
	DAMAGE_MARKED = 10, // usage: DAMAGE_MARKED + damage_type
	DAMAGE_WEAPON_MARKED = 10,
	DAMAGE_FIRE_MARKED = 11,
	DAMAGE_POISON_MARKED = 12,
	DAMAGE_MAGIC_MARKED = 13,
	DAMAGE_UNBLOCKABLE_MARKED = 14,
	DAMAGE_COLD_MARKED = 15,
	DAMAGE_UNDEAD_MARKED = 16,
	DAMAGE_DEMON_MARKED = 17,
	DAMAGE_NO_PRINT = 30, // usage: DAMAGE_NO_PRINT + damage_type
	DAMAGE_WEAPON_NO_PRINT = 30,
	DAMAGE_FIRE_NO_PRINT = 31,
	DAMAGE_POISON_NO_PRINT = 32,
	DAMAGE_MAGIC_NO_PRINT = 33,
	DAMAGE_UNBLOCKABLE_NO_PRINT = 34,
	DAMAGE_COLD_NO_PRINT = 35,
	DAMAGE_UNDEAD_NO_PRINT = 36,
	DAMAGE_DEMON_NO_PRINT = 37,
	// What about both NO_PRINT and MARKED?
};

inline void operator -= (eDamageType& cur, eDamageType othr){
	if((othr == DAMAGE_MARKED && cur >= DAMAGE_MARKED && cur < DAMAGE_NO_PRINT) ||
	   (othr == DAMAGE_NO_PRINT && cur >= DAMAGE_NO_PRINT))
		cur = (eDamageType) ((int)cur - (int)othr);
}

inline void operator += (eDamageType& cur, eDamageType othr){
	if((othr == DAMAGE_MARKED || othr == DAMAGE_NO_PRINT) && cur < DAMAGE_MARKED)
		cur = (eDamageType) ((int)cur + (int)othr);
}

//class sbyte {
//	signed char c;
//public:
//	operator int() {return c;}
//	sbyte(signed char k) : c(k) {}
//}