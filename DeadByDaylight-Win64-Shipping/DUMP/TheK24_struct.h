// Enum TheK24.EContaminator
enum class EContaminator : uint8 {
	Zombie = 0,
	Killer = 1,
	Mori = 2,
	EContaminator_MAX = 3
};

// Enum TheK24.EBlastMineRemovedReason
enum class EBlastMineRemovedReason : uint8 {
	Exploded = 0,
	LifetimeExpired = 1,
	BlastMineEndPlay = 2,
	EBlastMineRemovedReason_MAX = 3
};

// Enum TheK24.EZombieState
enum class EZombieState : uint8 {
	InPool = 0,
	Spawn = 1,
	Patrolling = 2,
	Searching = 3,
	Chase = 4,
	Attack = 5,
	Dying = 6,
	Dead = 7,
	ChaseSearching = 8,
	InPlaceIdle = 9,
	Stunned = 10,
	FallSmash = 11,
	AttackCooldown = 12,
	Stop = 13,
	EZombieState_MAX = 14
};

// Enum TheK24.EZombieGender
enum class EZombieGender : uint8 {
	Male = 0,
	Female = 1,
	EZombieGender_MAX = 2
};

