// Enum DeadByDaylight.EEndGameReason
enum class EEndGameReason : uint8 {
	None = 0,
	Normal = 1,
	KillerLeft = 2,
	PlayerLeftDuringLoading = 3,
	KillerLeftEarly = 4,
	InvalidPlayerRoles = 5,
	LoadingTimeout = 6,
	EEndGameReason_MAX = 7
};

// Enum DeadByDaylight.ETileSpawnPointType
enum class ETileSpawnPointType : uint8 {
	Unspecified = 0,
	Survivor = 1,
	SurvivorItem = 2,
	Killer = 3,
	KillerItem = 4,
	InteractableObject = 5,
	BasementObject = 6,
	FinisherMori = 7,
	Count = 8,
	ETileSpawnPointType_MAX = 9
};

// Enum DeadByDaylight.EServerUseNetAsyncLoading
enum class EServerUseNetAsyncLoading : uint8 {
	NotSet = 0,
	Yes = 1,
	No = 2,
	EServerUseNetAsyncLoading_MAX = 3
};

// Enum DeadByDaylight.EIntroState
enum class EIntroState : uint8 {
	WaitingToStart = 0,
	RotationStarted = 1,
	RotationCompleted = 2,
	PanInStarted = 3,
	PanInCompleted = 4,
	EIntroState_MAX = 5
};

// Enum DeadByDaylight.EDBDScoreTypes
enum class EDBDScoreTypes : uint8 {
	DBDCamperScore_SurviveHealthy = 0,
	DBDCamperScore_SurviveWounded = 1,
	DBDCamperScore_SurviveKO = 2,
	DBDCamperScore_UnlockHatch = 3,
	DBDCamperScore_EscapeThroughHatch = 4,
	DBDCamperScore_AllEscapeThroughHatch = 5,
	DBDCamperScore_EscapeCarry = 6,
	DBDCamperScore_SurviveStreakSmall = 7,
	DBDCamperScore_SurviveStreakBig = 8,
	DBDCamperScore_DamageStateChanged = 9,
	DBDCamperScore_NearFriendInNeed = 10,
	DBDCamperScore_NearFriendInNeed_PostExit = 11,
	DBDCamperScore_FoundCamper = 12,
	DBDCamperScore_CoopObjectives = 13,
	DBDCamperScore_OpenDoorPercent = 14,
	DBDCamperScore_OpenDoor = 15,
	DBDCamperScore_GeneratorPercent = 16,
	DBDCamperScore_GeneratorSkillCheckSuccess = 17,
	DBDCamperScore_GeneratorSkillCheckBonus = 18,
	DBDCamperScore_SearchablePercent = 19,
	DBDCamperScore_SearchCompleteFinalContributionPercent = 20,
	DBDCamperScore_AddItemToMap = 21,
	DBDCamperScore_FixGenerator = 22,
	DBDCamperScore_FixSpecialMapGenerator = 23,
	DBDCamperScore_LastSurvivorFixGenerator = 24,
	DBDCamperScore_RepairDamagedGenerator = 25,
	DBDCamperScore_PowerExitGates = 26,
	DBDCamperScore_CoopAltruism = 27,
	DBDCamperScore_HealPercent = 28,
	DBDCamperScore_HealPercent_PostExit = 29,
	DBDCamperScore_HealFromDying = 30,
	DBDCamperScore_HealFromDying_PostExit = 31,
	DBDCamperScore_HealFromInjured = 32,
	DBDCamperScore_HealFromInjured_PostExit = 33,
	DBDCamperScore_HealSkillCheckSuccess = 34,
	DBDCamperScore_HealSkillCheckBonus = 35,
	DBDCamperScore_HealSelfPercent = 36,
	DBDCamperScore_HealSelfSkillCheckSuccess = 37,
	DBDCamperScore_HealSelfSkillCheckBonus = 38,
	DBDCamperScore_HitAfterHookSave = 39,
	DBDCamperScore_HitNearFriendInNeed = 40,
	DBDCamperScore_HitNearUnhookedFriendInNeed = 41,
	DBDCamperScore_SabotageHook = 42,
	DBDCamperScore_SabotageHookSkillCheckSuccess = 43,
	DBDCamperScore_SabotageHookSkillCheckBonus = 44,
	DBDCamperScore_EscapeFromHook = 45,
	DBDCamperScore_HookStrugglePerSecond = 46,
	DBDCamperScore_SaveFromHook = 47,
	DBDCamperScore_SaveFromHook_PostExit = 48,
	DBDCamperScore_WasUnhooked = 49,
	DBDCamperScore_SabotageBearTrap = 50,
	DBDCamperScore_SabotageBearTrapSkillCheckSuccess = 51,
	DBDCamperScore_SabotageBearTrapSkillCheckBonus = 52,
	DBDCamperScore_DisableBearTrap = 53,
	DBDCamperScore_SaveFromBearTrap = 54,
	DBDCamperScore_SaveFromBearTrap_PostExit = 55,
	DBDCamperScore_EscapeBearTrap = 56,
	DBDCamperScore_BasementChillingPerSecond = 57,
	DBDCamperScore_CoopBoldness = 58,
	DBDCamperScore_SlasherStun = 59,
	DBDCamperScore_SlasherStunCarrying = 60,
	DBDCamperScore_SlasherBlind = 61,
	DBDCamperScore_SlasherBurnInvisibility = 62,
	DBDCamperScore_ChasePerSecond = 63,
	DBDCamperScore_ChaseEscape = 64,
	DBDCamperScore_ChaseSteal = 65,
	DBDCamperScore_ChaseBlind = 66,
	DBDCamperScore_VaultInChase = 67,
	DBDCamperScore_NoiseDistraction = 68,
	DBDCamperScore_SprintingNearSlasherPerSecond = 69,
	DBDCamperScore_UnhideNearSlasher = 70,
	DBDCamperScore_EscapeWhileChased = 71,
	DBDCamperScore_DestroyPhantomTrap = 72,
	DBDCamperScore_NewItem = 73,
	DBDCamperScore_StartMatchWithUltraRareItem = 74,
	DBDCamperScore_ItemFrom = 75,
	DBDCamperScore_ExposerAdded = 76,
	DBDSlasherScore_Destroy = 77,
	DBDSlasherScore_Kill = 78,
	DBDSlasherScore_BleedOut = 79,
	DBDSlasherScore_BleedOutPercent = 80,
	DBDSlasherScore_AttackSuccess = 81,
	DBDSlasherScore_AttackDeviousness = 82,
	DBDSlasherScore_InterruptGenerator = 83,
	DBDSlasherScore_InterruptWindow = 84,
	DBDSlasherScore_InterruptHide = 85,
	DBDSlasherScore_InterruptExit = 86,
	DBDSlasherScore_InterruptUnhook = 87,
	DBDSlasherScore_InterruptChest = 88,
	DBDSlasherScore_InterruptOpenHatch = 89,
	DBDSlasherScore_InterruptExitHatch = 90,
	DBDSlasherScore_FindHiding = 91,
	DBDSlasherScore_PlaceTrap = 92,
	DBDSlasherScore_Trap = 93,
	DBDSlasherScore_TrapPickup = 94,
	DBDSlasherScore_Hook = 95,
	DBDSlasherScore_SacrificePercent = 96,
	DBDSlasherScore_SacrificeSuccess = 97,
	DBDSlasherScore_SacrificedCount = 98,
	DBDSlasherScore_NoEscape = 99,
	DBDSlasherScore_ChaseStart = 100,
	DBDSlasherScore_ChasePerSecond = 101,
	DBDSlasherScore_CloakStalkPerSecond = 102,
	DBDSlasherScore_UncloakInView = 103,
	DBDSlasherScore_UncloakAttack = 104,
	DBDSlasherScore_EvadeInvisBurn = 105,
	DBDSlasherScore_EvadeBlind = 106,
	DBDSlasherScore_CamperDisconnect = 107,
	DBDSlasherScore_HitCamperWithChainsaw = 108,
	DBDSlasherScore_RunningWithChainsaw = 109,
	DBDSlasherScore_ChainBlinkAttack = 110,
	DBDSlasherScore_ChainBlinkInterrupt = 111,
	DBDSlasherScore_ChainBlinkInterruptAfter3 = 112,
	DBDSlasherScore_ChainBlinkStartChase = 113,
	DBDSlasherScore_StalkpointGained = 114,
	DBDSlasherScore_StalkerTierIncrement = 115,
	DBDSlasherScore_StalkerTierFirstTime = 116,
	DBDSlasherScore_StalkerKillAllCampers = 117,
	DBDSlasherScore_PhantomTrapSet = 118,
	DBDSlasherScore_PhantomTrapTrigger = 119,
	DBDSlasherScore_PhantomTrapTriggerAttack = 120,
	DBDSlasherScore_PhantomTrapTeleportAttack = 121,
	DBDSlasherScore_PhantomTrapTeleportAttackAllCampers = 122,
	DBDSlasherScore_ThrillOfTheHunt = 123,
	DBDPlayerScore_BloodwebLevelUp = 124,
	DBDPlayerScore_BloodwebPrestigeLevelUp = 125,
	DBDPlayerScore_BloodwebPrestige3LevelUp = 126,
	DBDPlayerScore_AwardPips = 127,
	DBDPlayerScore_AddBloodpoints = 128,
	DBDPlayerScore_BloodpointsOneCategory = 129,
	DBDPlayerScore_MaxBloodpointsAllCategories = 130,
	DBDPlayerScore_AddNewPerk = 131,
	DBDPlayerScore_PerkLevelUp = 132,
	DBDPlayerScore_BurnOfferingUltraRare = 133,
	DBDPlayerScore_StartGame = 134,
	DBDPlayerScore_UnlockRanking = 135,
	DBDPlayerScore_FinishWithPerks = 136,
	DBDCamperScore_CheatObjectives = 137,
	DBDCamperScore_CheatSurvival = 138,
	DBDCamperScore_CheatAltruism = 139,
	DBDCamperScore_CheatBoldness = 140,
	DBDSlasherScore_CheatSacrifice = 141,
	DBDSlasherScore_CheatBrutality = 142,
	DBDSlasherScore_CheatDeviousness = 143,
	DBDSlasherScore_CheatHunter = 144,
	DBDCamperScore_CleanseDullTotem = 145,
	DBDCamperScore_CleanseHexTotem = 146,
	DBDPlayerScore_BalancedLanding = 147,
	DBDPlayerScore_Lithe = 148,
	DBDSlasherScore_DamageGenerator = 149,
	DBDSlasherScore_Vault = 150,
	DBDCamperScore_StartInjuredBleedout = 151,
	DBDCamperScore_FullRecovery = 152,
	DBDCamperScore_FirstTimeDying = 153,
	DBDCamperScore_SecondTimeDying = 154,
	DBDCamperScore_FirecrackerDisturbance = 155,
	DBDCamperScore_GeneratorSkillCheckRuinBonus = 156,
	DBDCamperScore_SlasherBurnBlink = 157,
	DBDCamperScore_DieSacrificed = 158,
	DBDCamperScore_DieBleedOut = 159,
	DBDCamperScore_DieKill = 160,
	DBDPlayerScore_EndGame = 161,
	DBDPlayerScore_EnterParadise = 162,
	DBDSlasherScore_CamperHookedFirstTime = 163,
	DBDSlasherScore_CamperEnterHookStrugglePhase = 164,
	DBDSlasherScore_ElectroShockSurvivor = 165,
	DBDSlasherScore_BringAllSurvivorsToMadnessTier3 = 166,
	DBDSlasherScore_BringSurvivorUpOneMadnessTier = 167,
	DBDSlasherScore_HitSurvivorAfterElectroShock = 168,
	DBDSlasherScore_PickupCamper = 169,
	DBDSlasherScore_Blink = 170,
	DBDSlasherScore_TeleportToPhantomTrap = 171,
	DBDSlasherScore_HatchetThrow = 172,
	DBDSlasherScore_HatchetHit = 173,
	DBDSlasherScore_HatchetSkillShotHit = 174,
	DBDSlasherScore_HatchetFarHit = 175,
	DBDCamperScore_QuickVault = 176,
	DBDCamperScore_QuickCloset = 177,
	DBDCamperScore_StartGeneratorRepair = 178,
	DBDCamperScore_StartCleansingTotem = 179,
	DBDCamperScore_FirstRepairSkillCheck = 180,
	DBDSlasherScore_CamperDisconnectedBeforeMatchStart = 181,
	DBDSlasherScore_CamperDisconnectedDuringMatch = 182,
	DBDCamperScore_NearFriendInNeed_GeneratorsComplete = 183,
	DBDCamperScore_HealPercent_GeneratorsComplete = 184,
	DBDCamperScore_HealFromDying_GeneratorsComplete = 185,
	DBDCamperScore_SaveFromHook_GeneratorsComplete = 186,
	DBDCamperScore_SaveFromBearTrap_GeneratorsComplete = 187,
	DBDCamperScore_SnapOutOfIt = 188,
	DBDSlasherScore_HookInBasement = 189,
	DBDSlasherScore_LFChainsawHit = 190,
	DBDCamperScore_PalletDrop = 191,
	DBDCamperScore_Vault = 192,
	DBDSlasherScore_StartChaseWithChainsawAttack = 193,
	DBDSlasherScore_MissedAttackInChase = 194,
	DBDCamperScore_DodgeAndVault = 195,
	DBDCamperScore_BeginQuickVault = 196,
	DBDSlasherScore_StartChainsawAttack = 197,
	DBDCamperScore_WakeUpBySkillCheck = 198,
	DBDCamperScore_FallAsleep = 199,
	DBDCamperScore_WakeUpSelf = 200,
	DBDCamperScore_WakeUpOther = 201,
	DBDSlasherScore_RecentlyAsleepAttack = 202,
	DBDSlasherScore_SurvivorPartyOnBasementHooks = 203,
	DBDCamperScore_LootBasementChest = 204,
	DBDPlayerScore_OpenMysteryBox = 205,
	DBDGameEvent_SurvivorDowned = 206,
	DBDGameEvent_SurvivorDied = 207,
	DBDGameEvent_KillerCloak = 208,
	DBDSlasherScore_SetReverseBearTrap = 209,
	DBDSlasherScore_AbductionDash = 210,
	DBDSlasherScore_DashHitSuccess = 211,
	DBDSlasherScore_KillWithReverseBearTrap = 212,
	DBDCamperScore_SearchRBTKey = 213,
	DBDCamperScore_EscapeRBT = 214,
	DBDGameEvent_ReplacedGoodSkillCheckAsGreat = 215,
	DBDCamperScore_RemoveReverseBearTrapSkillCheckSuccess = 216,
	DBDCamperScore_RemoveReverseBearTrapSkillCheckBonus = 217,
	DBDSlasherScore_DamageGeneratorWhileHooked = 218,
	DBDGameEvent_SurvivorDamaged = 219,
	DBDGameEvent_SurvivorHealed = 220,
	DBDGameEvent_Interruption = 221,
	DBDGameEvent_SurvivorFailedHealSkillcheck = 222,
	DBDGameEvent_HookedSurvivorSacrificeBegin = 223,
	DBDGameEvent_AcquireEventKillerCoin = 224,
	DBDGameEvent_AcquireEventSurvivorCoin = 225,
	DBDCamperScore_EventGeneratorFixed = 226,
	DBDSlasherScore_HookedOnEventHook = 227,
	DBDGameEvent_GeneratorProgress = 228,
	DBDSlasherScore_DownSmokedCamper = 229,
	DBDSlasherScore_HitSmokedCamper = 230,
	DBDSlasherScore_SurvivorEnterGasCloud = 231,
	DBDSlasherScore_BombDirectHit = 232,
	DBDSlasherScore_ThrowBomb = 233,
	DBDGameEvent_CoopAction = 234,
	DBDSlasherScore_StartActivePhaseWalk = 235,
	DBDScore_Count = 236,
	Count = 237,
	EDBDScoreTypes_MAX = 238
};

// Enum DeadByDaylight.ECustomizationCategory
enum class ECustomizationCategory : uint8 {
	None = 0,
	SurvivorHead = 1,
	SurvivorTorso = 2,
	SurvivorLegs = 3,
	KillerHead = 4,
	KillerBody = 5,
	KillerWeapon = 6,
	Outfits = 7,
	Charm = 8,
	ECustomizationCategory_MAX = 9
};

// Enum DeadByDaylight.EOfferingCategory
enum class EOfferingCategory : uint8 {
	None = 0,
	Bloodpoints = 1,
	Mapmods = 2,
	Realms = 3,
	Shrouds = 4,
	Wards = 5,
	CharacterXP = 6,
	Luck = 7,
	Moris = 8,
	EOfferingCategory_MAX = 9
};

// Enum DeadByDaylight.EPerkCategory
enum class EPerkCategory : uint8 {
	None = 0,
	Navigation = 1,
	Perception = 2,
	Safeguard = 3,
	Concealment = 4,
	Strategy = 5,
	Support = 6,
	Adaptation = 7,
	Chasing = 8,
	Tracking = 9,
	Cruelty = 10,
	Trickery = 11,
	Obstruction = 12,
	Hinderance = 13,
	Enhancement = 14,
	Any = 15,
	EPerkCategory_MAX = 16
};

// Enum DeadByDaylight.ETeachableStatus
enum class ETeachableStatus : uint8 {
	Unknown = 0,
	Locked = 1,
	AvailableInShrine = 2,
	Checked = 3,
	ETeachableStatus_MAX = 4
};

// Enum DeadByDaylight.EEmblemQuality
enum class EEmblemQuality : uint8 {
	None = 0,
	Bronze = 1,
	Silver = 2,
	Gold = 3,
	Iridescent = 4,
	Count = 5,
	EEmblemQuality_MAX = 6
};

// Enum DeadByDaylight.ECamperDamageState
enum class ECamperDamageState : uint8 {
	VE_Healthy = 0,
	VE_Injured = 1,
	VE_KO = 2,
	VE_Dead = 3,
	VE_MAX = 4
};

// Enum DeadByDaylight.EHealthType
enum class EHealthType : uint8 {
	Alive = 0,
	Sacrificed = 1,
	Killed = 2,
	BledOut = 3,
	Left_Game = 4,
	EHealthType_MAX = 5
};

// Enum DeadByDaylight.EImmobilizedState
enum class EImmobilizedState : uint8 {
	VE_None = 0,
	VE_Hooked = 1,
	VE_Trapped = 2,
	VE_Hiding = 3,
	VE_Dead = 4,
	VE_InDeathBed = 5,
	VE_HidingInLocker = 6,
	VE_TwinImmobilized = 7,
	VE_MAX = 8
};

// Enum DeadByDaylight.EAttackZoneSet
enum class EAttackZoneSet : uint8 {
	VE_OriginalZones = 0,
	VE_WedgeZones = 1,
	VE_MAX = 2
};

// Enum DeadByDaylight.EOfferingAnimState
enum class EOfferingAnimState : uint8 {
	None = 0,
	Idle = 1,
	Init = 2,
	Reveal = 3,
	ShowInteraction = 4,
	Burned = 5,
	Returned = 6,
	Cancel = 7,
	Hidden = 8,
	EOfferingAnimState_MAX = 9
};

// Enum DeadByDaylight.EInteractionComparisonPriority
enum class EInteractionComparisonPriority : uint8 {
	Lower = 0,
	Equal = 1,
	Higher = 2,
	EInteractionComparisonPriority_MAX = 3
};

// Enum DeadByDaylight.EInteractionOwnership
enum class EInteractionOwnership : uint8 {
	AnyCanUse = 0,
	OnlyOwnerCanUse = 1,
	OwnerCannotUse = 2,
	EInteractionOwnership_MAX = 3
};

// Enum DeadByDaylight.ESnapBackPositionType
enum class ESnapBackPositionType : uint8 {
	SnapBackToInitialPosition = 0,
	SnapBackToOffsetPositionFromSnap = 1,
	ESnapBackPositionType_MAX = 2
};

// Enum DeadByDaylight.ESnapBackType
enum class ESnapBackType : uint8 {
	None = 0,
	Always = 1,
	OnInteractionCancelledOnly = 2,
	OnInteractionEndOnly = 3,
	OnSurvivorDownedOnly = 4,
	ESnapBackType_MAX = 5
};

// Enum DeadByDaylight.ETrapType
enum class ETrapType : uint8 {
	None = 0,
	BlastMine = 1,
	Wiretap = 2,
	RepressedAlliance = 3,
	NitrogenGrenade = 4,
	ETrapType_MAX = 5
};

// Enum DeadByDaylight.ETotemState
enum class ETotemState : uint8 {
	Cleansed = 0,
	Dull = 1,
	Hex = 2,
	Boon = 3,
	ETotemState_MAX = 4
};

// Enum DeadByDaylight.ETutorialStep
enum class ETutorialStep : uint8 {
	Survivor_NotStarted = 0,
	Survivor_CompleteGenerator = 1,
	Survivor_EvadeKiller = 2,
	Survivor_OnHook = 3,
	Done = 4,
	Invalid = 5,
	ETutorialStep_MAX = 6
};

// Enum DeadByDaylight.EInventoryType
enum class EInventoryType : uint8 {
	Main = 0,
	Backpack = 1,
	EInventoryType_MAX = 2
};

// Enum DeadByDaylight.EItemDropType
enum class EItemDropType : uint8 {
	DropManually = 0,
	DropForcefully = 1,
	UseItem = 2,
	EItemDropType_MAX = 3
};

// Enum DeadByDaylight.EAttachToSocketNameEnum
enum class EAttachToSocketNameEnum : uint8 {
	ManualAttachment = 0,
	HandItemSocket = 1,
	Weapon_SocketLT = 2,
	Weapon_SocketRT = 3,
	LanternCollectableSocket = 4,
	Tentacle_SocketLT = 5,
	EAttachToSocketNameEnum_MAX = 6
};

// Enum DeadByDaylight.ECollectableState
enum class ECollectableState : uint8 {
	OnGround = 0,
	Stored = 1,
	Equipped = 2,
	ToBeDropped = 3,
	InSearchable = 4,
	ECollectableState_MAX = 5
};

// Enum DeadByDaylight.ECollectableCategory
enum class ECollectableCategory : uint8 {
	Common = 0,
	Rare = 1,
	ECollectableCategory_MAX = 2
};

// Enum DeadByDaylight.EItemHandPosition
enum class EItemHandPosition : uint8 {
	None = 0,
	HandleItem = 1,
	AimItem = 2,
	SmallItem = 3,
	FirecrackerItem = 4,
	VaccineItem = 5,
	FragileObjectItem = 6,
	SprayBottleItem = 7,
	VhsItem = 8,
	WormholeFatherKeyCardItem = 9,
	EItemHandPosition_MAX = 10
};

// Enum DeadByDaylight.EAtlantaItemProgressionBarEnum
enum class EAtlantaItemProgressionBarEnum : uint8 {
	PrimaryBar = 0,
	SecondaryBar = 1,
	EAtlantaItemProgressionBarEnum_MAX = 2
};

// Enum DeadByDaylight.ELanternState
enum class ELanternState : uint8 {
	Collectable = 0,
	Collected = 1,
	Destroyed = 2,
	Destroyable = 3,
	ELanternState_MAX = 4
};

// Enum DeadByDaylight.EHitValidatorConfigName
enum class EHitValidatorConfigName : uint8 {
	Default = 0,
	Hatchet = 1,
	Bomb = 2,
	Harpoon = 3,
	Oni = 4,
	Whip = 5,
	Tail = 6,
	DefaultProjectile = 7,
	EHitValidatorConfigName_MAX = 8
};

// Enum DeadByDaylight.EMovementCurveType
enum class EMovementCurveType : uint8 {
	AdditiveSpeedCurve = 0,
	MultiplicativeSpeedCurve = 1,
	EMovementCurveType_MAX = 2
};

// Enum DeadByDaylight.EAudioCustomizationCategory
enum class EAudioCustomizationCategory : uint8 {
	None = 0,
	AudioCharacterName = 1,
	AudioCharacterSubName = 2,
	AudioCharacterHead = 3,
	AudioCharacterClothes = 4,
	AudioCharacterShoes = 5,
	AudioCharacterWeapon = 6,
	AudioCharacterAmbiance = 7,
	AudioCharacterState = 8,
	EAudioCustomizationCategory_MAX = 9
};

// Enum DeadByDaylight.EGameplayElementType
enum class EGameplayElementType : uint8 {
	Generic = 0,
	MeatLocker_Small = 1,
	TileLights = 2,
	MeatLocker_Big = 3,
	Searchable = 4,
	EdgeObjects = 5,
	LivingWorldObjects = 6,
	Hatch = 7,
	Bookshelves = 8,
	Totems = 9,
	QuadrantSpawn = 10,
	EdgeObjectsBlocker = 11,
	BreakableWalls = 12,
	Escape = 13,
	ThemeSpawner = 14,
	Basement_Attachments = 15,
	SteamPipe = 16,
	SteamPipeButton = 17,
	Count = 18,
	EGameplayElementType_MAX = 19
};

// Enum DeadByDaylight.EActionButtonState
enum class EActionButtonState : uint8 {
	Normal = 0,
	Toggled = 1,
	Disabled = 2,
	Hidden = 3,
	EActionButtonState_MAX = 4
};

// Enum DeadByDaylight.EKnowledgeSharingType
enum class EKnowledgeSharingType : uint8 {
	Possessor = 0,
	Survivors = 1,
	Killers = 2,
	All = 3,
	EKnowledgeSharingType_MAX = 4
};

// Enum DeadByDaylight.EAIHideInLockerState
enum class EAIHideInLockerState : uint8 {
	WalkToLocker = 0,
	GetIntoLocker = 1,
	HidingInLocker = 2,
	EAIHideInLockerState_MAX = 3
};

// Enum DeadByDaylight.EAIRepairGeneratorState
enum class EAIRepairGeneratorState : uint8 {
	FindAvailableGeneratorPosition = 0,
	WalkToGenerator = 1,
	RotateTowardsGenerator = 2,
	BeginGeneratorRepairs = 3,
	RepairingGenerator = 4,
	EAIRepairGeneratorState_MAX = 5
};

// Enum DeadByDaylight.EOwnershipBehaviour
enum class EOwnershipBehaviour : uint8 {
	Personal = 0,
	Shared = 1,
	EOwnershipBehaviour_MAX = 2
};

// Enum DeadByDaylight.EStackingBehaviours
enum class EStackingBehaviours : uint8 {
	Stackable = 0,
	Override = 1,
	EStackingBehaviours_MAX = 2
};

// Enum DeadByDaylight.EAdditiveBehaviour
enum class EAdditiveBehaviour : uint8 {
	AddValues = 0,
	MaxValue = 1,
	EAdditiveBehaviour_MAX = 2
};

// Enum DeadByDaylight.EContextualType
enum class EContextualType : uint8 {
	None = 0,
	RedGlyph = 1,
	BlueGlyph = 2,
	YellowGlyph = 3,
	PurpleGlyph = 4,
	IceBlueGlyph = 5,
	GreenGlyph = 6,
	OrangeGlyph = 7,
	PinkGlyph = 8,
	GlyphUpperBound = 9,
	ToxinPlantHalloween2020 = 10,
	PumpkinHalloween2021 = 11,
	CoreMemoryPortal = 12,
	EContextualType_MAX = 13
};

// Enum DeadByDaylight.EArchiveStoryType
enum class EArchiveStoryType : uint8 {
	NotSet = 0,
	CurrentStory = 1,
	PastStory = 2,
	EventStory = 3,
	EArchiveStoryType_MAX = 4
};

// Enum DeadByDaylight.EArm
enum class EArm : uint8 {
	Left = 0,
	Right = 1,
	EArm_MAX = 2
};

// Enum DeadByDaylight.EAtlantaControlTypeSetting
enum class EAtlantaControlTypeSetting : uint8 {
	CameraFullScreen = 0,
	SnapOnJoystick = 1,
	EAtlantaControlTypeSetting_MAX = 2
};

// Enum DeadByDaylight.EDeepLinkUid
enum class EDeepLinkUid : uint8 {
	NONE = 0,
	StorefrontSpecialOffers = 1,
	StorefrontFeatured = 2,
	StorefrontPremium = 3,
	StorefrontSubscription = 4,
	Calendar = 5,
	RitualsStarter = 6,
	RitualsDaily = 7,
	RitualsWeekly = 8,
	MenuCharactersSurvivors = 9,
	MenuCharactersKillers = 10,
	MenuCustomizations = 11,
	MenuEvents = 12,
	MenuFriends = 13,
	Loadout = 14,
	BloodmarketSurvivors = 15,
	BloodmarketKillers = 16,
	External = 17,
	EDeepLinkUid_MAX = 18
};

// Enum DeadByDaylight.EAtlantaDisplayStandPosition
enum class EAtlantaDisplayStandPosition : uint8 {
	Forefront = 0,
	Background = 1,
	EAtlantaDisplayStandPosition_MAX = 2
};

// Enum DeadByDaylight.EEventsType
enum class EEventsType : uint8 {
	Generic = 0,
	Calendar = 1,
	BonusACEvent = 2,
	FirstPremiumPurchase = 3,
	MonthlyPass = 4,
	Count = 5,
	EEventsType_MAX = 6
};

// Enum DeadByDaylight.EFreeTicketButtonState
enum class EFreeTicketButtonState : uint8 {
	Disabled = 0,
	Enabled = 1,
	InEffect = 2,
	None = 3,
	EFreeTicketButtonState_MAX = 4
};

// Enum DeadByDaylight.EQuitGameReason
enum class EQuitGameReason : uint8 {
	None = 0,
	Logout = 1,
	Suspend = 2,
	Shutdown = 3,
	Count = 4,
	EQuitGameReason_MAX = 5
};

// Enum DeadByDaylight.EFrameRateLimitButtonSetting
enum class EFrameRateLimitButtonSetting : uint8 {
	ThirtyFPS = 0,
	SixtyFPS = 1,
	EFrameRateLimitButtonSetting_MAX = 2
};

// Enum DeadByDaylight.EKillerSoundComparisonType
enum class EKillerSoundComparisonType : uint8 {
	Equal = 0,
	IsGreaterThan = 1,
	IsLesserThan = 2,
	EKillerSoundComparisonType_MAX = 3
};

// Enum DeadByDaylight.EMobileLoginAuthContext
enum class EMobileLoginAuthContext : uint8 {
	Splash = 0,
	OverlayMenu = 1,
	ResumeFromSuspend = 2,
	EMobileLoginAuthContext_MAX = 3
};

// Enum DeadByDaylight.EAtlantaRewardType
enum class EAtlantaRewardType : uint8 {
	Item = 0,
	AddOn = 1,
	Offering = 2,
	BloodPoints = 3,
	IridescentShards = 4,
	AuricCells = 5,
	Customization = 6,
	FreeTicket = 7,
	MysteryBox = 8,
	Character = 9,
	DuplicatesRefundKey = 10,
	Count = 11,
	EAtlantaRewardType_MAX = 12
};

// Enum DeadByDaylight.EAtlantaRitualRewardUIType
enum class EAtlantaRitualRewardUIType : uint8 {
	Item = 0,
	AddOn = 1,
	Offering = 2,
	BloodPoints = 3,
	IridescentShards = 4,
	AuricCells = 5,
	Customization = 6,
	CustoTicket = 7,
	MysteryBox = 8,
	EAtlantaRitualRewardUIType_MAX = 9
};

// Enum DeadByDaylight.EAltantaRitualUIType
enum class EAltantaRitualUIType : uint8 {
	Single = 0,
	Master = 1,
	Special = 2,
	EAltantaRitualUIType_MAX = 3
};

// Enum DeadByDaylight.EAttackEventType
enum class EAttackEventType : uint8 {
	VE_None = 0,
	VE_BasicAttackAttempt = 1,
	VE_BasicAttackHit = 2,
	VE_SpecialAttackAttempt = 3,
	VE_SpecialAttackHit = 4,
	VE_MAX = 5
};

// Enum DeadByDaylight.EBPBonusType
enum class EBPBonusType : uint8 {
	None = 0,
	Event = 1,
	Offerings = 2,
	Others = 3,
	EBPBonusType_MAX = 4
};

// Enum DeadByDaylight.EBloodchestType
enum class EBloodchestType : uint8 {
	None = 0,
	Chest = 1,
	SuperChests = 2,
	EntityBox = 3,
	EBloodchestType_MAX = 4
};

// Enum DeadByDaylight.EBloodwebFillingMethod
enum class EBloodwebFillingMethod : uint8 {
	RestrictionsBasedOnData = 0,
	FillAll = 1,
	EBloodwebFillingMethod_MAX = 2
};

// Enum DeadByDaylight.EBloodMarketRefreshMethod
enum class EBloodMarketRefreshMethod : uint8 {
	Automatic = 0,
	Manual = 1,
	EBloodMarketRefreshMethod_MAX = 2
};

// Enum DeadByDaylight.EBloodwebDefinitionContentType
enum class EBloodwebDefinitionContentType : uint8 {
	Empty = 0,
	Nodes = 1,
	Paths = 2,
	NodesAndPaths = 3,
	NodesNoPath = 1,
	EBloodwebDefinitionContentType_MAX = 4
};

// Enum DeadByDaylight.EBloodwebDistributionType
enum class EBloodwebDistributionType : uint8 {
	PerWeb = 0,
	PerRing = 1,
	EBloodwebDistributionType_MAX = 2
};

// Enum DeadByDaylight.EBloodwebDataSource
enum class EBloodwebDataSource : uint8 {
	ByLevel = 0,
	ByRing = 1,
	EBloodwebDataSource_MAX = 2
};

// Enum DeadByDaylight.EBloodwebSaveReason
enum class EBloodwebSaveReason : uint8 {
	PayToRefresh = 0,
	PrestigeUp = 1,
	ShouldRebuild = 2,
	Cheat = 3,
	EBloodwebSaveReason_MAX = 4
};

// Enum DeadByDaylight.EBloodwebNodeGateTypes
enum class EBloodwebNodeGateTypes : uint8 {
	RequiredRank = 0,
	RequiredItem = 1,
	Count = 2,
	EBloodwebNodeGateTypes_MAX = 3
};

// Enum DeadByDaylight.EBloodwebNodeContentType
enum class EBloodwebNodeContentType : uint8 {
	Empty = 0,
	Perks = 1,
	PerkBuffs_Do_Not_Use_Deprecated = 2,
	Offerings = 3,
	Items = 4,
	AddOn = 5,
	Chests = 6,
	PerksPacks = 7,
	IridiscentShards = 8,
	AuricCells = 9,
	SuperChests = 10,
	CosmeticItems = 11,
	Bloodpoints = 12,
	FreeTicket = 13,
	EntityBox = 14,
	Count = 15,
	EBloodwebNodeContentType_MAX = 16
};

// Enum DeadByDaylight.EBloodwebNodeState
enum class EBloodwebNodeState : uint8 {
	Inactive = 0,
	Available = 1,
	Locked_Do_Not_Use_Deprecated = 2,
	Collected = 3,
	Consumed = 4,
	Count = 5,
	EBloodwebNodeState_MAX = 6
};

// Enum DeadByDaylight.EBloodwebRing
enum class EBloodwebRing : uint8 {
	CenterRing = 0,
	InnerRing = 1,
	MiddleRing = 2,
	OuterRing = 3,
	EntityRing = 4,
	RingCount = 5,
	Count = 6,
	EBloodwebRing_MAX = 7
};

// Enum DeadByDaylight.EBreakableState
enum class EBreakableState : uint8 {
	Unbroken = 0,
	Broken = 1,
	EBreakableState_MAX = 2
};

// Enum DeadByDaylight.ECameraOffsetState
enum class ECameraOffsetState : uint8 {
	None = 0,
	Default = 1,
	Crouching = 2,
	Crawling = 3,
	Carried = 4,
	ECameraOffsetState_MAX = 5
};

// Enum DeadByDaylight.ECameraFadeState
enum class ECameraFadeState : uint8 {
	FadedIn = 0,
	FadingOut = 1,
	FadedOut = 2,
	FadingIn = 3,
	ECameraFadeState_MAX = 4
};

// Enum DeadByDaylight.EManualZoomType
enum class EManualZoomType : uint8 {
	None = 0,
	TargetZoomValue = 1,
	CurveFloatProgression = 2,
	EManualZoomType_MAX = 3
};

// Enum DeadByDaylight.EDBDCameraSocketID
enum class EDBDCameraSocketID : uint8 {
	VE_None = 0,
	VE_Default = 1,
	VE_Killcam = 2,
	VE_Reaction = 3,
	VE_Struggle = 4,
	VE_Sacrifice = 5,
	VE_MAX = 6
};

// Enum DeadByDaylight.EEscapeType
enum class EEscapeType : uint8 {
	Escape_ExitGate = 0,
	Escape_Hatch = 1,
	Escape_KillerDisconnect = 2,
	Escape_MAX = 3
};

// Enum DeadByDaylight.ECDNPatchCompleteStatus
enum class ECDNPatchCompleteStatus : uint8 {
	Success = 0,
	NotEnoughDiskSpace = 1,
	PatchInstallDownloadError = 2,
	PatchInstallFileConstructionFail = 3,
	PatchInstallMoveFileToInstallFail = 4,
	PatchInstallBuildVerifyFail = 5,
	PatchInstallApplicationClosing = 6,
	PatchInstallApplicationError = 7,
	PatchInstallUserCanceled = 8,
	PatchInstallPrerequisiteError = 9,
	PatchInstallInitializationError = 10,
	PatchInstallPathLengthExceeded = 11,
	PatchInstallOutOfDiskSpace = 12,
	PatchInstallUnknownError = 13,
	FailureToMountContent = 14,
	InstalledContentNotFound = 15,
	InvalidPendingContent = 16,
	CantFindContentToDownload = 17,
	NoPatchForCurrentPlatformAndVersion = 18,
	FailureToRetrieveContent = 19,
	CancelledByUser = 20,
	ECDNPatchCompleteStatus_MAX = 21
};

// Enum DeadByDaylight.ECharacterToolItemType
enum class ECharacterToolItemType : uint8 {
	None = 0,
	Outfit = 1,
	OutfitPiece = 2,
	Charm = 3,
	ECharacterToolItemType_MAX = 4
};

// Enum DeadByDaylight.EChargeableInteractionBarType
enum class EChargeableInteractionBarType : uint8 {
	VE_Normal = 0,
	VE_ProgressPips = 1,
	VE_MAX = 2
};

// Enum DeadByDaylight.ECharmCategory
enum class ECharmCategory : uint8 {
	None = 0,
	Small = 1,
	Medium = 2,
	Big = 3,
	Short = 4,
	Wide = 5,
	Chibi = 6,
	Square = 7,
	Tablet = 8,
	Perk = 9,
	ECharmCategory_MAX = 10
};

// Enum DeadByDaylight.ECommentatorContextCode
enum class ECommentatorContextCode : uint8 {
	AnyRole_Start = 0,
	AnyRoleInvitationCollected = 1,
	Killer_Start = 64,
	KillerStartOfMatch = 65,
	KillerDamageGenerator = 66,
	KillerDamagePallet = 67,
	KillerDamageBreakableWall = 68,
	KillerFoundSurvivorInLocker = 69,
	KillerLastManStanding = 70,
	KillerWins = 71,
	Survivor_Start = 128,
	SurvivorStartOfMatch = 129,
	SurvivorHexTotemCleansed = 130,
	SurvivorHit = 131,
	SurvivorHooked = 132,
	SurvivorHideInLocker = 133,
	SurvivorEscapes = 134,
	SurvivorLastManStanding = 135,
	Menu_Start = 192,
	MenuSplashScreen = 193,
	MenuOpenedEventPopup = 194,
	MenuOnlineLobby = 195,
	MenuOfferingScreen = 196,
	ECommentatorContextCode_MAX = 197
};

// Enum DeadByDaylight.EContext
enum class EContext : uint8 {
	None = 0,
	ArchiveIntro = 1,
	ArchiveMenu = 2,
	ArchivePastStories = 3,
	ArchiveRewards = 4,
	ArchiveStory = 5,
	ArchiveCompendium = 6,
	ArchiveRift = 7,
	ArchiveTome = 8,
	BloodWeb = 9,
	Character = 10,
	Consent = 11,
	Credits = 12,
	Customization = 13,
	GameFlowOff = 14,
	Hud = 15,
	Inbox = 16,
	LightSensitivity = 17,
	Loading = 18,
	Loadout = 19,
	Lobby = 20,
	LobbyOff = 21,
	MainMenu = 22,
	Onboarding = 23,
	RoleSelection = 24,
	SpecialEventLoading = 25,
	Spectate = 26,
	Splash = 27,
	Store = 28,
	Tally = 29,
	Tutorial = 30,
	ArchivePassPurchasePopup = 31,
	ArchiveTierPurchasePopup = 32,
	DailyRewardsPopup = 33,
	EventEntryPopup = 34,
	FearMarketPopup = 35,
	FriendSearchPopup = 36,
	GenericRefreshingPopup = 37,
	NewContentPopup = 38,
	ProcessingPopup = 39,
	ReportPlayerPopup = 40,
	SeasonEndPopup = 41,
	SeasonEndRankRewardsPopup = 42,
	UnlockPersonalPerksPopup = 43,
	LoadoutMenuPopup = 44,
	NewActiveTomePopup = 45,
	ReportFeedbackPopup = 46,
	UMGArchivePassPurchasePopup = 47,
	UMGArchiveTierPurchasePopup = 48,
	UMGDailyRitualsPopup = 49,
	UMGEventEntryPopup = 50,
	UMGFearMarketPopup = 51,
	UMGFriendSearchPopup = 52,
	UMGGenericPopup = 53,
	UMGGenericTextInputPopup = 54,
	UMGProcessingPopup = 55,
	UMGProgressionSystemInfoPopup = 56,
	UMGSeasonEndRankRewardsPopup = 57,
	UMGUnlockPersonalPerksPopup = 58,
	Count = 59,
	EContext_MAX = 60
};

// Enum DeadByDaylight.EItemDomain
enum class EItemDomain : uint8 {
	Store = 0,
	Local = 1,
	Any = 2,
	EItemDomain_MAX = 3
};

// Enum DeadByDaylight.EOwnership
enum class EOwnership : uint8 {
	Owned = 0,
	NotOwned = 1,
	Any = 2,
	EOwnership_MAX = 3
};

// Enum DeadByDaylight.EHudEditorDragAxisOption
enum class EHudEditorDragAxisOption : uint8 {
	PositiveSide = 0,
	NegativeSide = 1,
	BothSide = 2,
	EHudEditorDragAxisOption_MAX = 3
};

// Enum DeadByDaylight.EUMGDailyRewardWidgetState
enum class EUMGDailyRewardWidgetState : uint8 {
	Unknown = 0,
	Locked = 1,
	ReadyToCollect = 2,
	NewlyCollected = 3,
	Collected = 4,
	MysteryLocked = 5,
	MysteryReadyToDiscover = 6,
	MysteryNewlyDiscovered = 7,
	EUMGDailyRewardWidgetState_MAX = 8
};

// Enum DeadByDaylight.DBDScalabilityLevel
enum class DBDScalabilityLevel : uint8 {
	LOW = 0,
	MEDIUM = 1,
	HIGH = 2,
	EPIC = 3,
	ULTRA = 4,
	DBDScalabilityLevel_MAX = 5
};

// Enum DeadByDaylight.EAIDodgeType
enum class EAIDodgeType : uint8 {
	FORWARD_SIDE_STEP = 0,
	SIDE_STEP = 1,
	BACKWARD_SIDE_STEP = 2,
	EAIDodgeType_MAX = 3
};

// Enum DeadByDaylight.EInLockerSkillsContext
enum class EInLockerSkillsContext : uint8 {
	None = 0,
	Goal = 1,
	OutOfTerrorRadius = 2,
	EInLockerSkillsContext_MAX = 3
};

// Enum DeadByDaylight.EPawnInputPressTypes
enum class EPawnInputPressTypes : uint8 {
	None = 0,
	FastInteract = 1,
	Interact = 2,
	Struggle = 3,
	Slash = 4,
	Attack = 5,
	Action = 6,
	SecondaryAction = 7,
	UseItem = 8,
	DropItem = 9,
	Gesture01 = 10,
	Gesture02 = 11,
	Gesture03 = 12,
	Gesture04 = 13,
	Run = 14,
	RunningFastInteraction = 15,
	AbilityTwo = 16,
	CancelMinigame = 17,
	EPawnInputPressTypes_MAX = 18
};

// Enum DeadByDaylight.EAIDifficultyLevel
enum class EAIDifficultyLevel : uint8 {
	VeryEasy = 0,
	Easy = 1,
	Medium = 2,
	Hard = 3,
	Suggested = 4,
	Random = 5,
	None = 6,
	Max = 6,
	EAIDifficultyLevel_MAX = 7
};

// Enum DeadByDaylight.ECharacterMovementTypes
enum class ECharacterMovementTypes : uint8 {
	Normal = 0,
	Run = 1,
	Crouch = 2,
	ECharacterMovementTypes_MAX = 3
};

// Enum DeadByDaylight.EAITerrorLevel
enum class EAITerrorLevel : uint8 {
	None = 0,
	Low = 1,
	Min = 1,
	Medium = 2,
	High = 3,
	VeryHigh = 4,
	Max = 4,
	EAITerrorLevel_MAX = 5
};

// Enum DeadByDaylight.ECustomMovementMode
enum class ECustomMovementMode : uint8 {
	CUSTOM_MOVE_None = 0,
	CUSTOM_MOVE_Snapping = 1,
	CUSTOM_MOVE_MAX = 2
};

// Enum DeadByDaylight.ESurvivorFleePathStrategy
enum class ESurvivorFleePathStrategy : uint8 {
	None = 0,
	HideFromLos = 1,
	ESurvivorFleePathStrategy_MAX = 2
};

// Enum DeadByDaylight.EDangerTraverseState
enum class EDangerTraverseState : uint8 {
	SAFE = 0,
	WAIT = 1,
	TRAVERSE_CROUCH = 2,
	TRAVERSE_RUN = 3,
	UNDODGEABLE = 4,
	EDangerTraverseState_MAX = 5
};

// Enum DeadByDaylight.EDiceRollType
enum class EDiceRollType : uint8 {
	VE_EscapeHook = 0,
	VE_EscapeTrap = 1,
	VE_TrapInflictsDying = 2,
	VE_TriggerSkillCheck = 3,
	VE_TriggerFootNoise = 4,
	VE_TriggerCrowAlert = 5,
	VE_MAX = 6
};

// Enum DeadByDaylight.EDisconnectErrors
enum class EDisconnectErrors : uint8 {
	None = 0,
	SteamAuthFailure = 1,
	SteamAuthFailureKickedFromServer = 2,
	EACServerValidationFailure = 3,
	EACValidationFailureKickedFromServer = 4,
	EACClientNotRunning = 5,
	EACClientIntegrityViolation = 6,
	PlayerRemovedOnSuspend = 7,
	LostConnectionToHost = 8,
	LostConnectionToProfileService = 9,
	MirrorsUnscheduledSessionDestruction = 10,
	SessionKilledByMirrors = 11,
	UnableToSaveProfileAfterRetries = 12,
	UnableToGetPlayerLevel = 13,
	UnableToEarnPlayerXp = 14,
	UnableToUpdatePips = 15,
	UnableToUpdateRatings = 16,
	ClientProviderAuthenticationFailed = 17,
	UnableToSyncCachedCurrency = 18,
	OwnershipValidationFailure = 19,
	UnableToUpdateEndOfMatchInfo = 20,
	TravelFailure = 21,
	SessionKilledByServerLost = 22,
	SessionKilledByServerTimeout = 23,
	SessionKilledByClientLostNetwork = 24,
	EDisconnectErrors_MAX = 25
};

// Enum DeadByDaylight.EEmblemProgressionType
enum class EEmblemProgressionType : uint8 {
	SurvivorLightbringerStartingValue = 0,
	SurvivorLightbringerGeneratorRepair = 1,
	SurvivorLightbringerTotemCleanse = 2,
	SurvivorLightbringerKillerDiversion = 3,
	SurvivorLightbringerExitGameOpen = 4,
	SurvivorUnbrokenTimeAlive = 5,
	SurvivorBenevolentStartingValue = 6,
	SurvivorBenevolentHealing = 7,
	SurvivorBenevolentHooked = 8,
	SurvivorBenevolentUnhook = 9,
	SurvivorBenevolentPerformUnhook = 10,
	SurvivorBenevolentSaveFromKiller = 11,
	SurvivorBenevolentUnsafeUnhook = 12,
	SurvivorBenevolentHitWhileCarrying = 13,
	SurvivorEvaderStartingValue = 14,
	SurvivorEvaderSneaking = 15,
	SurvivorEvaderChaseWon = 16,
	SurvivorEvaderChaseLost = 17,
	SurvivorEvaderPalletStun = 18,
	KillerGatekeeperStartingValue = 19,
	KillerGatekeeperGeneratorDefense = 20,
	KillerGatekeeperGatesClosed = 21,
	KillerDevoutStartingValue = 22,
	KillerDevoutSacrifice = 23,
	KillerDevoutDisconnect = 24,
	KillerDevoutMoris = 25,
	KillerDevoutAllSurvivorsHooked = 26,
	KillerDevoutHooksBonus = 27,
	KillerMaliciousStartingValue = 28,
	KillerMaliciousInjuries = 29,
	KillerMaliciousHookStages = 30,
	KillerMaliciousInjuriesHealed = 31,
	KillerMaliciousEscapeGrasp = 32,
	KillerMaliciousDisconnect = 33,
	KillerChaserStartingValue = 34,
	KillerChaserSurvivorFound = 35,
	KillerChaserSurvivorLost = 36,
	KillerChaserHit = 37,
	KillerChaserChaseWon = 38,
	KillerChaserProximityToHookPenalty = 39,
	Invalid = 40,
	EEmblemProgressionType_MAX = 41
};

// Enum DeadByDaylight.EEmblemEvaluation
enum class EEmblemEvaluation : uint8 {
	Authority = 0,
	Local = 1,
	EEmblemEvaluation_MAX = 2
};

// Enum DeadByDaylight.EErrorCodes
enum class EErrorCodes : int32 {
	None = 0,
	SavefileDeserializationFailure = 100,
	SavefileDecryptionFailure = 101,
	SavefileEmpty = 102,
	SavefileBadPlayerId = 103,
	SavefileEmptyPlayerUID = 104,
	SavefileInvalidUniqueNetID = 105,
	SavefileInvalidPlayerState = 106,
	SavefileBackendError = 107,
	KrakenRankError = 108,
	KrakenRatingsError = 109,
	SavefileKrakenPlayerForbidden = 110,
	SyncCachedCurrencyError = 111,
	CurrencyTransactionError = 112,
	StateDownloadFailed = 113,
	StatcacheDecryptionFailed = 114,
	SavefilePlayerLoadUIDMismatch = 115,
	SavefilePlayerStateUIDMismatch = 116,
	CharacterMigrationGetError = 130,
	CharacterMigrationGetError_BadProfile = 131,
	SavefileEncryptionFailure = 200,
	SaveFailedInvalidData = 201,
	SaveFailedInvalidJSON = 202,
	SaveFailedDecodeDataString = 203,
	SaveFailedCompressDataString = 204,
	SaveFailedEncryptString = 205,
	StatcacheEncryptionFailed = 206,
	SaveFailedCloudErrorTimeout = 300,
	JsonToPersistenDataFailed = 301,
	SaveFailedCloudErrorAfterRetries = 302,
	StateUploadFailed = 303,
	GetPlayerLevelRequestError = 400,
	EarnPlayerXpRequestError = 401,
	EarnPlayerXpParamError = 402,
	EndOfMatchError = 403,
	OnboardingFailGet = 410,
	OnboardingFailUpdate = 411,
	OnboardingFailRequest = 412,
	MatchCancelledPlayerLeftDuringLoading = 500,
	MatchCancelledInvalidPlayerRoles = 501,
	MatchCancelledLoadingTimeout = 502,
	PakValidationFailed = 600,
	KrakenSdkMismatch = 601,
	EErrorCodes_MAX = 602
};

// Enum DeadByDaylight.EGameIntroSteps
enum class EGameIntroSteps : uint8 {
	Idling = 0,
	PlayingIntro = 1,
	LoopingCamView = 2,
	EGameIntroSteps_MAX = 3
};

// Enum DeadByDaylight.ELevelLoadingSteps
enum class ELevelLoadingSteps : uint8 {
	Invalid = 0,
	WaitingForProceduralLevelBuilder = 1,
	WaitingForPlayersToBeSpawned = 2,
	WaitingForAIPawnToBeSpawned = 3,
	WaitingForKillerSpecificStateComponentLogic = 4,
	WaitingForMapSpecificComponentLogic = 5,
	WaitingForAssetPreloader = 6,
	WaitingForLoadoutAndTheme = 7,
	WaitingForPIAToBeSpawnedAndInitialized = 8,
	WaitingForNavmeshComputation = 9,
	SetGameLoadedAndReadyToPlay = 10,
	WaitingForIntroToBeDone = 11,
	LoadingCompleted = 12,
	FirstLoadingStep = 1,
	Count = 12,
	ELevelLoadingSteps_MAX = 13
};

// Enum DeadByDaylight.ELoadProgress
enum class ELoadProgress : uint8 {
	NotStarted = 0,
	Init = 1,
	SetupPIE = 2,
	ArtificialDelay = 3,
	DisconnectingPresencePlugin = 4,
	ValidateOnlineSubsystem = 5,
	CheckingPlatformService = 6,
	PreMirrorsLogin = 7,
	ConnectingToMirrors = 8,
	StartEAC = 9,
	LoadingAuthInfo = 10,
	LoadingBackendConfigs = 11,
	SetupRichPresence = 12,
	LoadingBackendTunables = 13,
	ApplyingCDNPatch = 14,
	AquiringExternalAuthentication = 15,
	LoadingPlayerIndependentShopData = 16,
	LicenseCache = 17,
	LoadingExperiments = 18,
	LoadingEvents = 19,
	LoadingInventory = 20,
	LoadingCinematics = 21,
	SyncingOwnedCharacters = 22,
	LoadingProfile = 23,
	LoadingMirrorCurrencies = 24,
	LoadingWallet = 25,
	LoadingConsent = 26,
	LoadingGameConfigs = 27,
	LoadingCharacterXPTables = 28,
	CheckingPendingTransactions = 29,
	LoadingContentSchedule = 30,
	LoadingNews = 31,
	SendingAnalytics = 32,
	LoadingDailyRituals = 33,
	CalculatingLatencies = 34,
	ValidateData = 35,
	ValidatingClientVersion = 36,
	CheckingNeedForCurrencyMigration = 37,
	MigratingCurrenciesToMirror = 38,
	SyncingFriendsList = 39,
	Complete = 40,
	Locating = 41,
	InitializingRTMConnection = 42,
	LoadingStreamVideoData = 43,
	CollectingFreeCatalogItems = 44,
	DownloadDynamicContent = 45,
	CheckingMobilePendingTransactions = 46,
	LoadMarketingBanners = 47,
	LoadingSubscriptionStatus = 48,
	RequestingTrackingAuthorization = 49,
	LoadingExperimentalFeatures = 50,
	LoadingMatchIncentives = 51,
	LoadingLoadoutPresets = 52,
	LoadingBackendCharacterData = 53,
	LoadingPrestige = 54,
	UpdatingPlatformStoreContent = 55,
	UpdatingOwnedContent = 56,
	LoadingShrine = 57,
	LoadingReportFeedback = 58,
	ValidatingKrakenSDKVersion = 59,
	LoadingGameConfigsDS = 60,
	LoadingCatalog = 61,
	LoadingS3PrestigeData = 62,
	ELoadProgress_MAX = 63
};

// Enum DeadByDaylight.EProceduralDebugMode
enum class EProceduralDebugMode : uint8 {
	None = 0,
	NoMap = 1,
	TilesSmall = 2,
	TilesBig = 3,
	Count = 4,
	EProceduralDebugMode_MAX = 5
};

// Enum DeadByDaylight.EAIEvadeLoopSides
enum class EAIEvadeLoopSides : uint8 {
	Left = 0,
	Right = 1,
	Count = 2,
	EAIEvadeLoopSides_MAX = 3
};

// Enum DeadByDaylight.EAuthoritativeMovementFlag
enum class EAuthoritativeMovementFlag : uint8 {
	INTERACTION = 0,
	SLASHED = 1,
	CHEAT = 2,
	DROPPED = 3,
	NOPUSH = 4,
	INTERACTIONNOPUSH = 5,
	DREAMWORLD_NOSLASHERCOLLISION = 6,
	NOPUSHFORCED = 7,
	COUNT = 8,
	EAuthoritativeMovementFlag_MAX = 9
};

// Enum DeadByDaylight.EPlayerMovementDirection
enum class EPlayerMovementDirection : uint8 {
	Left = 0,
	Right = 1,
	Forward = 2,
	Backward = 3,
	EPlayerMovementDirection_MAX = 4
};

// Enum DeadByDaylight.ECharacterStance
enum class ECharacterStance : uint8 {
	VE_Stand = 0,
	VE_Crouch = 1,
	VE_Crawl = 2,
	VE_MAX = 3
};

// Enum DeadByDaylight.EPlayerGameplayEventType
enum class EPlayerGameplayEventType : uint8 {
	VE_UnhookedOther = 0,
	VE_UntrappedOther = 1,
	VE_HealedOther = 2,
	VE_MAX = 3
};

// Enum DeadByDaylight.EBotReplacementState
enum class EBotReplacementState : uint8 {
	NotReplacedWithBot = 0,
	BeingReplacedWithBot = 1,
	ReplacedWithBot = 2,
	EBotReplacementState_MAX = 3
};

// Enum DeadByDaylight.EVisibleMenuActorType
enum class EVisibleMenuActorType : uint8 {
	None = 0,
	Pawn = 1,
	Hook = 2,
	Charm = 3,
	EVisibleMenuActorType_MAX = 4
};

// Enum DeadByDaylight.EToastInputType
enum class EToastInputType : uint8 {
	Toast_Accept = 0,
	Toast_Reject = 1,
	Toast_Close = 2,
	Toast_MAX = 3
};

// Enum DeadByDaylight.EShadowSystem
enum class EShadowSystem : uint8 {
	CascadedShadowMap = 0,
	AdaptiveShadowMap = 1,
	EShadowSystem_MAX = 2
};

// Enum DeadByDaylight.EDialogConditionSubject
enum class EDialogConditionSubject : uint8 {
	Instigator = 0,
	Target = 1,
	NoCondition = 2,
	EDialogConditionSubject_MAX = 3
};

// Enum DeadByDaylight.EDisplayStandActorType
enum class EDisplayStandActorType : uint8 {
	None = 0,
	Character = 1,
	Hook = 2,
	Charm = 3,
	EDisplayStandActorType_MAX = 4
};

// Enum DeadByDaylight.EDoctorAbilityPhase
enum class EDoctorAbilityPhase : uint8 {
	VE_Charging = 0,
	VE_Firing = 1,
	VE_None = 2,
	VE_MAX = 3
};

// Enum DeadByDaylight.EDoctorAbilityType
enum class EDoctorAbilityType : uint8 {
	VE_ShockTherapy = 0,
	VE_StaticBlast = 1,
	VE_None = 2,
	VE_MAX = 3
};

// Enum DeadByDaylight.EEndGameScenarioTrigger
enum class EEndGameScenarioTrigger : uint8 {
	ClosedHatch = 0,
	OpenedGate = 1,
	CheatUsed = 2,
	NotActivated = 3,
	EEndGameScenarioTrigger_MAX = 4
};

// Enum DeadByDaylight.EEnergyTypeEnum
enum class EEnergyTypeEnum : uint8 {
	EInvalid = 0,
	EBattery = 1,
	EHealth = 2,
	EEnergyTypeEnum_MAX = 3
};

// Enum DeadByDaylight.EErrorEventType
enum class EErrorEventType : uint8 {
	FailedToCalculateRankProgress = 0,
	FailedToEarnPlayerXp = 1,
	FailedToGrandBloodPoints = 2,
	FailedToSyncWalletChanges = 3,
	InvalidLobbyId = 4,
	InvalidGameState = 5,
	InvalidSessionId = 6,
	EErrorEventType_MAX = 7
};

// Enum DeadByDaylight.EEscapeDoorActivationMode
enum class EEscapeDoorActivationMode : uint8 {
	Standard = 0,
	Tutorial = 1,
	EEscapeDoorActivationMode_MAX = 2
};

// Enum DeadByDaylight.EConditionSubject
enum class EConditionSubject : uint8 {
	Instigator = 0,
	Target = 1,
	EConditionSubject_MAX = 2
};

// Enum DeadByDaylight.EEventItemContentType
enum class EEventItemContentType : uint8 {
	None = 0,
	Cells = 1,
	Character = 2,
	Customization = 3,
	NameChangeCard = 4,
	FreeTicket = 5,
	OtherCurrency = 6,
	Item = 7,
	Addon = 8,
	Offering = 9,
	Count = 10,
	EEventItemContentType_MAX = 11
};

// Enum DeadByDaylight.EFeaturedStoreContentType
enum class EFeaturedStoreContentType : uint8 {
	None = 0,
	Character = 1,
	Customization = 2,
	Outfit = 3,
	Count = 4,
	EFeaturedStoreContentType_MAX = 5
};

// Enum DeadByDaylight.EDBDFeatureType
enum class EDBDFeatureType : uint8 {
	None = 0,
	Archives = 1,
	DailyRituals = 2,
	CustomGame = 3,
	Bloodweb = 4,
	Offerings = 5,
	Items = 6,
	Addons = 7,
	EventStore = 8,
	EDBDFeatureType_MAX = 9
};

// Enum DeadByDaylight.ELoadoutType
enum class ELoadoutType : uint8 {
	Item = 0,
	Perk = 1,
	Offering = 2,
	ELoadoutType_MAX = 3
};

// Enum DeadByDaylight.FlickeringLightType
enum class FlickeringLightType : uint8 {
	Point = 0,
	Rect = 1,
	Spot = 2,
	FlickeringLightType_MAX = 3
};

// Enum DeadByDaylight.EFriendUIRichPresence
enum class EFriendUIRichPresence : uint8 {
	Undefined = 0,
	InMenus = 1,
	InLobby = 2,
	InMatch = 3,
	Connected = 4,
	Closing = 5,
	EFriendUIRichPresence_MAX = 6
};

// Enum DeadByDaylight.EFriendUIStatus
enum class EFriendUIStatus : uint8 {
	Offline = 0,
	Online = 1,
	PlayingDBD = 2,
	PendingSentRequest = 3,
	PendingReceivedRequest = 4,
	NotFriend = 5,
	Self = 6,
	EFriendUIStatus_MAX = 7
};

// Enum DeadByDaylight.EFlowTransitionType
enum class EFlowTransitionType : uint8 {
	Tally = 0,
	OnlineLobby = 1,
	PartyLobby = 2,
	OfflineLobby = 3,
	Splash = 4,
	RoleSelection = 5,
	None = 6,
	EFlowTransitionType_MAX = 7
};

// Enum DeadByDaylight.EUIFlowEvent
enum class EUIFlowEvent : uint8 {
	None = 0,
	AtlantaRoleSelectionScreenReady = 1,
	AtlantaNavigationScreenReady = 2,
	InGameHudReady = 3,
	LoadingScreenReady = 4,
	OfflineLobbyScreenReady = 5,
	OnlineLobbyScreenReady = 6,
	RoleSelectionScreenReady = 7,
	SplashScreenReady = 8,
	TallyScreenReady = 9,
	PartyLobbyScreenReady = 10,
	StoreScreenReady = 11,
	EUIFlowEvent_MAX = 12
};

// Enum DeadByDaylight.EWorldFlowEvent
enum class EWorldFlowEvent : uint8 {
	None = 0,
	GameLevelLoaded = 1,
	LoadingGameLevel = 2,
	LoadingOfflineParadise = 3,
	LoadingOnlineLobbyLevel = 4,
	OfflineLobbyMapLoaded = 5,
	OfflineParadiseLoaded = 6,
	OnlineLobbyMapLoaded = 7,
	StartScreenMapLoaded = 8,
	LoadingSplashScreen = 9,
	EWorldFlowEvent_MAX = 10
};

// Enum DeadByDaylight.EGameFlowStep
enum class EGameFlowStep : uint8 {
	None = 0,
	InGame = 1,
	OfflineLobby = 2,
	OfflineTally = 3,
	OnlineLobby = 4,
	SplashScreen = 5,
	PartyLobby = 6,
	Store = 7,
	RoleSelection = 8,
	EGameFlowStep_MAX = 9
};

// Enum DeadByDaylight.EGameplayModifierSource
enum class EGameplayModifierSource : uint8 {
	VE_Perk = 0,
	VE_StatusEffect = 1,
	VE_Item = 2,
	VE_ItemAddon = 3,
	VE_All = 4,
	VE_PerkOrStatusEffect = 5,
	VE_PerkStatusOrAddon = 6,
	VE_MAX = 7
};

// Enum DeadByDaylight.EGateType
enum class EGateType : uint8 {
	VE_AndGate = 0,
	VE_TimerGate = 1,
	VE_MAX = 2
};

// Enum DeadByDaylight.EGestureID
enum class EGestureID : uint8 {
	POINT = 0,
	COME = 1,
	EGestureID_MAX = 2
};

// Enum DeadByDaylight.EHatchState
enum class EHatchState : uint8 {
	Hidden = 0,
	DefaultClose = 1,
	Opened = 2,
	ForcedClose = 3,
	EHatchState_MAX = 4
};

// Enum DeadByDaylight.EHintCategory
enum class EHintCategory : uint8 {
	Lore = 0,
	Survivor = 1,
	Killer = 2,
	EHintCategory_MAX = 3
};

// Enum DeadByDaylight.EHookType
enum class EHookType : uint8 {
	Hook = 0,
	DeathBed = 1,
	None = 2,
	EHookType_MAX = 3
};

// Enum DeadByDaylight.EProgressModifier
enum class EProgressModifier : uint8 {
	Default = 0,
	Buff = 1,
	Debuff = 2,
	EProgressModifier_MAX = 3
};

// Enum DeadByDaylight.EndSessionAction
enum class EndSessionAction : uint8 {
	Restart = 0,
	Shutdown = 1,
	EndSessionAction_MAX = 2
};

// Enum DeadByDaylight.EKeyBindingsType
enum class EKeyBindingsType : int32 {
	None = -1,
	Run = 0,
	Crouch = 1,
	UseItem = 2,
	DropItemSurvivor = 3,
	PickUpItem = 4,
	ActionSurvivor = 5,
	SecondaryActionSurvivor = 6,
	AbilitySurvivor = 7,
	AbilityTwoSurvivor = 8,
	EventAbilitySurvivor = 9,
	Gesture1 = 10,
	Gesture2 = 11,
	WiggleRightSkillCheck = 12,
	WiggleLeftSkillCheck = 13,
	Attack = 14,
	Power = 15,
	SecondaryPower = 16,
	EventAbilityKiller = 17,
	DropSurvivor = 18,
	PickUp = 19,
	Aim = 20,
	ForwardSurvivor = 21,
	BackSurvivor = 22,
	LeftSurvivor = 23,
	RightSurvivor = 24,
	CameraUpSurvivor = 25,
	CameraDownSurvivor = 26,
	CameraLeftSurvivor = 27,
	CameraRightSurvivor = 28,
	ForwardKiller = 29,
	BackKiller = 30,
	LeftKiller = 31,
	RightKiller = 32,
	AimKiller = 33,
	CameraUpKiller = 34,
	CameraDownKiller = 35,
	CameraLeftKiller = 36,
	CameraRightKiller = 37,
	EKeyBindingsType_MAX = 38
};

// Enum DeadByDaylight.EKeyBindingsCategories
enum class EKeyBindingsCategories : int32 {
	None = -1,
	Movement = 0,
	Interactions = 1,
	Camera = 2,
	Gestures = 3,
	EKeyBindingsCategories_MAX = 4
};

// Enum DeadByDaylight.EKillerTutorialEndGameType
enum class EKillerTutorialEndGameType : uint8 {
	DeathByHook = 0,
	DeathByEndGameCollapse = 1,
	EKillerTutorialEndGameType_MAX = 2
};

// Enum DeadByDaylight.EKillerHeight
enum class EKillerHeight : uint8 {
	Short = 0,
	Average = 1,
	Tall = 2,
	EKillerHeight_MAX = 3
};

// Enum DeadByDaylight.EFPVTransitionStrategy
enum class EFPVTransitionStrategy : uint8 {
	TurnInvisible = 0,
	SquishTorsoBackward = 1,
	EFPVTransitionStrategy_MAX = 2
};

// Enum DeadByDaylight.ELevelBuilderStepState
enum class ELevelBuilderStepState : uint8 {
	Failed = 0,
	Pending = 1,
	Complete = 2,
	Skipped = 3,
	ELevelBuilderStepState_MAX = 4
};

// Enum DeadByDaylight.ELevelBuildingState
enum class ELevelBuildingState : uint8 {
	NotInitialized = 0,
	WaitingForInitialSync = 1,
	SyncSeeds = 2,
	GetAvailableItems = 3,
	PendingGettingItems = 4,
	GettingLevelsDone = 5,
	PendingPremadeMapStreaming = 6,
	GetThemedTiles = 7,
	PendingGettingTiles = 8,
	SpawnEscapeTiles = 9,
	SpawnBasementTile = 10,
	SpawningLevelTiles = 11,
	SpawnInterTileElements = 12,
	PendingInterTileElementsSpawning = 13,
	SpawningActors = 14,
	SpawningMultiPassActors = 15,
	AttachParentActors = 16,
	StallingForRemotes = 17,
	BuildingDone = 18,
	BuildingStateCount = 19,
	ELevelBuildingState_MAX = 20
};

// Enum DeadByDaylight.EPlayerDataType
enum class EPlayerDataType : uint8 {
	None = 0,
	PlayerState = 1,
	SocialPartyMember = 2,
	BotPartyMember = 3,
	EPlayerDataType_MAX = 4
};

// Enum DeadByDaylight.ELobbyWaitStopReason
enum class ELobbyWaitStopReason : uint8 {
	StartMatchWait = 0,
	PlayerCancelled = 1,
	Unknown = 2,
	ELobbyWaitStopReason_MAX = 3
};

// Enum DeadByDaylight.EMainMenuButton
enum class EMainMenuButton : uint8 {
	News = 0,
	PlaySurvivor = 1,
	PlayKiller = 2,
	KillYourFriends = 3,
	DailyRituals = 4,
	Store = 5,
	Settings = 6,
	Onboarding = 7,
	Credits = 8,
	QuitGame = 9,
	Friends = 10,
	Archives = 11,
	Count = 12,
	EMainMenuButton_MAX = 13
};

// Enum DeadByDaylight.EMapActorCategory
enum class EMapActorCategory : uint8 {
	None = 0,
	Objective = 1,
	Chest = 2,
	BlackLock = 3,
	KillerObject = 4,
	ExitGate = 5,
	EMapActorCategory_MAX = 6
};

// Enum DeadByDaylight.EQuadDirection
enum class EQuadDirection : uint8 {
	None = 0,
	Up = 1,
	Down = 2,
	Left = 3,
	Right = 4,
	Empty = 5,
	EQuadDirection_MAX = 6
};

// Enum DeadByDaylight.ETileVariation
enum class ETileVariation : uint8 {
	None = 0,
	BlueTag = 1,
	PinkTag = 2,
	YellowTag = 3,
	GreenTag = 4,
	Empty = 5,
	ETileVariation_MAX = 6
};

// Enum DeadByDaylight.EPathType
enum class EPathType : uint8 {
	None = 0,
	Straight = 1,
	DeadEnd = 2,
	Corner = 3,
	Crossroads = 4,
	TJunction = 5,
	OrientationOnly = 6,
	Unspecified = 7,
	OrientedCrossroads = 8,
	EPathType_MAX = 9
};

// Enum DeadByDaylight.EDensity
enum class EDensity : uint8 {
	Unspecified = 0,
	Light = 1,
	Moderate = 2,
	Heavy = 3,
	Empty = 4,
	EDensity_MAX = 5
};

// Enum DeadByDaylight.ETileType
enum class ETileType : uint8 {
	None = 0,
	Blocker = 1,
	Any = 2,
	Forest = 3,
	Building = 4,
	Maze = 5,
	Landmark = 6,
	Signature = 7,
	ETileType_MAX = 8
};

// Enum DeadByDaylight.EDirection
enum class EDirection : uint8 {
	Up = 0,
	Down = 1,
	Left = 2,
	Right = 3,
	UpLeft = 4,
	UpRight = 5,
	DownLeft = 6,
	DownRight = 7,
	EDirection_MAX = 8
};

// Enum DeadByDaylight.EBasementType
enum class EBasementType : uint8 {
	None = 0,
	Basic = 1,
	MainBuilding = 2,
	Shack = 3,
	Count = 4,
	EBasementType_MAX = 5
};

// Enum DeadByDaylight.EQuadrantSpawnType
enum class EQuadrantSpawnType : uint8 {
	L_Shape = 0,
	Square = 1,
	Rect_X = 2,
	Rect_Y = 3,
	Rect = 4,
	None = 5,
	EQuadrantSpawnType_MAX = 6
};

// Enum DeadByDaylight.EQuadrant
enum class EQuadrant : uint8 {
	BottomRight = 0,
	BottomLeft = 1,
	TopLeft = 2,
	TopRight = 3,
	Count = 4,
	EQuadrant_MAX = 5
};

// Enum DeadByDaylight.EQueueingState
enum class EQueueingState : uint8 {
	None = 0,
	Queueing = 1,
	MatchCreated = 2,
	MatchOpened = 3,
	WaitingForTransactions = 4,
	Complete = 5,
	EQueueingState_MAX = 6
};

// Enum DeadByDaylight.EPlayerAnimState
enum class EPlayerAnimState : uint8 {
	VE_Default = 0,
	VE_Injured = 1,
	VE_InjuredCrouch = 2,
	VE_Crouch = 3,
	VE_MAX = 4
};

// Enum DeadByDaylight.EGuidedState
enum class EGuidedState : uint8 {
	VE_None = 0,
	VE_PrepBeingKilled = 1,
	VE_BeingKilled = 2,
	VE_PrepGuidedAction = 3,
	VE_BeingHelpedOffHookFront = 4,
	VE_BeingPickedUp = 5,
	VE_BeingPutDown = 6,
	VE_BeingCarried = 7,
	VE_BeingPutOnHook = 8,
	VE_BeingHealed = 9,
	VE_BeingPulledFromCloset = 10,
	VE_BeingHelpedFromTrap = 11,
	VE_AttachReverseBearTrap = 12,
	VE_BeingMended = 13,
	VE_BeingInjectedWithSerum = 14,
	VE_CarriedByK29Rush = 15,
	VE_BeingCleansedOfK29Infection = 16,
	VE_MAX = 17
};

// Enum DeadByDaylight.EOfferingEffectType
enum class EOfferingEffectType : uint8 {
	Invalid = 0,
	SlasherPointsAll = 1,
	PointsBrutality = 2,
	PointsDeviouness = 3,
	PointsSacrice = 4,
	PointsHunting = 5,
	CamperPointsAll = 6,
	PointsObjective = 7,
	PointsSurvival = 8,
	PointsAltruism = 9,
	PointsBoldness = 10,
	SurvivorCharacterXP = 11,
	KillerCharacterXP = 12,
	CamperItemLostPrevention = 13,
	KillerItemLostPrevention = 14,
	Luck = 15,
	IndustrialThemeSelectionModifier = 16,
	JunkyardThemeSelectionModifier = 17,
	FarmThemeSelectionModifier = 18,
	SwampThemeSelectionModifier = 19,
	MapModifier = 20,
	ChestCountModifier = 21,
	PortableHookCountModifier = 22,
	LairCountModifier = 23,
	PlayerGrouping = 24,
	FarKiller = 25,
	KillAllowedModifier = 26,
	LightingModification = 27,
	FogModification = 28,
	LivingWorldObjectCountModifier = 29,
	LivingWorldObjectMultModifier = 30,
	KillLastSurvivor = 31,
	SuburbsThemeSelectionModifier = 32,
	AsylumThemeSelectionModifier = 33,
	KillerSelectionModifier = 34,
	HospitalThemeSelectionModifier = 35,
	KillAllowedAfterStrugglePhase = 36,
	BorealThemeSelectionModifier = 37,
	SpringwoodThemeSelectionModifier = 38,
	FinlandThemeSelectionModifier = 39,
	JapaneseCountrySideSelectionModifier = 40,
	KenyaThemeSelectionModifier = 41,
	QatarThemeSelectionModifier = 42,
	UkraineThemeSelectionModifier = 43,
	WalesThemeSelectionModifier = 44,
	CancelThemeSelectionModifier = 45,
	BasementMainBuildingModifier = 46,
	BasementShackModifier = 47,
	HatchMainBuildingModifier = 48,
	HatchShackModifier = 49,
	EclipseThemeSelectionModifier = 50,
	IonThemeSelectionModifier = 51,
	MeteorThemeSelectionModifier = 52,
	QuantumThemeSelectionModifier = 53,
	UmbraThemeSelectionModifier = 54,
	WormholeThemeSelectionModifier = 55,
	SpecialEvent = 56,
	SpecialEventTallyBonus = 57,
	ObjectSubsitution = 58,
	ObjectAddition = 59,
	EOfferingEffectType_MAX = 60
};

// Enum DeadByDaylight.EOfferingType
enum class EOfferingType : uint8 {
	None = 0,
	Atmosphere = 1,
	Lighting = 2,
	Points = 3,
	Zone = 4,
	Position = 5,
	Chest = 6,
	Hook = 7,
	Protection = 8,
	Hatch = 9,
	Odds = 10,
	Killing = 11,
	World = 12,
	Luck = 13,
	Killer = 14,
	ProceduralGeneration = 15,
	CharacterXP = 16,
	Count = 17,
	EOfferingType_MAX = 18
};

// Enum DeadByDaylight.EOfferingCombinationResult
enum class EOfferingCombinationResult : uint8 {
	None = 0,
	Stacked = 1,
	CoConsummed = 2,
	Overruling = 3,
	Cancelled = 4,
	EOfferingCombinationResult_MAX = 5
};

// Enum DeadByDaylight.EOfferingSequenceState
enum class EOfferingSequenceState : uint8 {
	SmokeIn = 0,
	FadeOut = 1,
	FadeIn = 2,
	NotInitialized = 3,
	Idle = 4,
	Init = 5,
	InitDone = 6,
	Reveal = 7,
	RevealDone = 8,
	ShowInteraction = 9,
	Finalize = 10,
	Done = 11,
	EOfferingSequenceState_MAX = 12
};

// Enum DeadByDaylight.EOfflineLobbyState
enum class EOfflineLobbyState : uint8 {
	None = 0,
	RoleSelection = 1,
	OfflineLobby = 2,
	Store = 3,
	PartyLobby = 4,
	Archives = 5,
	EOfflineLobbyState_MAX = 6
};

// Enum DeadByDaylight.EOniAttackType
enum class EOniAttackType : uint8 {
	VE_NotDemonMode = 0,
	VE_DemonBasicAttack = 1,
	VE_DemonPowerAttack = 2,
	VE_DemonDashAttack = 3,
	VE_MAX = 4
};

// Enum DeadByDaylight.EJoinSessionFailureType
enum class EJoinSessionFailureType : uint8 {
	None = 0,
	JoiningAlreadyStartedGame = 1,
	JoiningPrivateGame = 2,
	JoiningAlreadyFullGame = 3,
	JoiningInvitation = 4,
	JoiningFailedOnDisconnect = 5,
	JoiningHostUnreachable = 6,
	JoiningIncompatibleServer = 7,
	MatchmakingInfoExpired = 8,
	EJoinSessionFailureType_MAX = 9
};

// Enum DeadByDaylight.EOnlineOperation
enum class EOnlineOperation : uint8 {
	None = 0,
	HostGame = 1,
	EndingSession = 2,
	DestroyingSession = 3,
	PreparingJoinGame = 4,
	JoinGame = 5,
	JoinCancelled = 6,
	OnlineCheck = 7,
	CancellingMatchmaking = 8,
	EOnlineOperation_MAX = 9
};

// Enum DeadByDaylight.EOverlayMode
enum class EOverlayMode : uint8 {
	Default = 0,
	TrialOrTally = 1,
	TutorialLevel = 2,
	TutorialBotMatch = 3,
	EOverlayMode_MAX = 4
};

// Enum DeadByDaylight.EOverlayTabs
enum class EOverlayTabs : uint8 {
	Settings = 0,
	Controls = 1,
	Help = 2,
	Survivors = 3,
	CoreTabCount = 4,
	About = 5,
	Language = 6,
	EOverlayTabs_MAX = 7
};

// Enum DeadByDaylight.EPalletStunZoneSideStrategy
enum class EPalletStunZoneSideStrategy : uint8 {
	OppositeSideToPlayerExecutingPulldown = 0,
	SameSideToPlayerExecutingPulldown = 1,
	EPalletStunZoneSideStrategy_MAX = 2
};

// Enum DeadByDaylight.EPalletPushSideStrategy
enum class EPalletPushSideStrategy : uint8 {
	PushToClosestPalletSide = 0,
	PushOppositeToPlayerExecutingPulldown = 1,
	EPalletPushSideStrategy_MAX = 2
};

// Enum DeadByDaylight.EPalletSide
enum class EPalletSide : uint8 {
	None = 0,
	Left = 1,
	Right = 2,
	EPalletSide_MAX = 3
};

// Enum DeadByDaylight.EPalletState
enum class EPalletState : uint8 {
	Up = 0,
	Falling = 1,
	Fallen = 2,
	Destroyed = 3,
	EPalletState_MAX = 4
};

// Enum DeadByDaylight.EPerkTokenSoundStrategy
enum class EPerkTokenSoundStrategy : uint8 {
	NoSound = 0,
	SoundOnEveryTokenChange = 1,
	SoundOnReachMaxTokens = 2,
	EPerkTokenSoundStrategy_MAX = 3
};

// Enum DeadByDaylight.EPerspectiveActivationCondition
enum class EPerspectiveActivationCondition : uint8 {
	LocallyControlled = 0,
	LocallyObserved = 1,
	NotLocallyObserved = 2,
	EPerspectiveActivationCondition_MAX = 3
};

// Enum DeadByDaylight.ESaveGameFailureType
enum class ESaveGameFailureType : uint8 {
	None = 0,
	InvalidPlayerID = 1,
	InvalidGameInstance = 2,
	NoServerConnection = 3,
	UserNotSignedIn = 4,
	Unknown = 5,
	ESaveGameFailureType_MAX = 6
};

// Enum DeadByDaylight.ERequestState
enum class ERequestState : uint8 {
	VE_None = 0,
	VE_Pending = 1,
	VE_Success = 2,
	VE_Fail = 3,
	VE_MAX = 4
};

// Enum DeadByDaylight.EInteractionValidationState
enum class EInteractionValidationState : uint8 {
	None = 0,
	Predicted = 1,
	Authorized = 2,
	DeniedByRaceCondition = 3,
	DeniedByTimeout = 4,
	DeniedByError = 5,
	EInteractionValidationState_MAX = 6
};

// Enum DeadByDaylight.ESecondaryActionRequestTypes
enum class ESecondaryActionRequestTypes : uint8 {
	None = 0,
	SecondaryActionRequested = 1,
	SecondaryActionRequestedFromCancel = 2,
	ESecondaryActionRequestTypes_MAX = 3
};

// Enum DeadByDaylight.ERadialProgressBarType
enum class ERadialProgressBarType : uint8 {
	Yellow = 0,
	Red = 1,
	ERadialProgressBarType_MAX = 2
};

// Enum DeadByDaylight.EPreLevelGenerationModifierType
enum class EPreLevelGenerationModifierType : uint8 {
	None = 0,
	ModifyKillerObjectCount = 1,
	EPreLevelGenerationModifierType_MAX = 2
};

// Enum DeadByDaylight.EPrestigeRewardType
enum class EPrestigeRewardType : uint8 {
	None = 0,
	Customization = 1,
	Perk = 2,
	EPrestigeRewardType_MAX = 3
};

// Enum DeadByDaylight.ESurvivorGrouping
enum class ESurvivorGrouping : uint8 {
	Invalid = 0,
	Separated = 1,
	Grouped2_3 = 2,
	Grouped3_2 = 3,
	Grouped4_1 = 4,
	ESurvivorGrouping_MAX = 5
};

// Enum DeadByDaylight.EscapeStrategyType
enum class EscapeStrategyType : uint8 {
	EscapeDoor = 0,
	EscapeHatch = 1,
	EscapeStrategyType_MAX = 2
};

// Enum DeadByDaylight.EPromoPackContentType
enum class EPromoPackContentType : uint8 {
	None = 0,
	Item = 1,
	Addon = 2,
	Offering = 3,
	Character = 4,
	Customization = 5,
	Bonus = 6,
	BloodPoints = 7,
	IridescentShards = 8,
	FreeTicket = 9,
	Count = 10,
	EPromoPackContentType_MAX = 11
};

// Enum DeadByDaylight.EConditionNeedsType
enum class EConditionNeedsType : uint8 {
	AllTrue = 0,
	AnyTrue = 1,
	EConditionNeedsType_MAX = 2
};

// Enum DeadByDaylight.ERefundSource
enum class ERefundSource : uint8 {
	None = 0,
	BloodMarket = 1,
	DailyCalendar = 2,
	PromoPack = 3,
	Count = 4,
	ERefundSource_MAX = 5
};

// Enum DeadByDaylight.ESaveGameErrorCategory
enum class ESaveGameErrorCategory : uint8 {
	EvaluateDisconnectPenalty = 0,
	SaveGameSaveError = 1,
	SaveGameUnreadable = 2,
	SaveGameValidation = 3,
	SaveFailed = 4,
	ESaveGameErrorCategory_MAX = 5
};

// Enum DeadByDaylight.EScreenType
enum class EScreenType : uint8 {
	eScaleformScreen = 0,
	eUMGScreen = 1,
	eMixedScaleformUMG = 2,
	EScreenType_MAX = 3
};

// Enum DeadByDaylight.EScreenshotToolTargetSubCategory
enum class EScreenshotToolTargetSubCategory : uint8 {
	None = 0,
	Id = 1,
	CharacterId = 2,
	OutfitId = 3,
	GenderRole = 4,
	Category = 5,
	EScreenshotToolTargetSubCategory_MAX = 6
};

// Enum DeadByDaylight.EScreenshotToolTargetCategory
enum class EScreenshotToolTargetCategory : uint8 {
	None = 0,
	Piece = 1,
	TwoPieces = 2,
	Outfit = 3,
	Charm = 4,
	EScreenshotToolTargetCategory_MAX = 5
};

// Enum DeadByDaylight.EScreenshotToolBatchType
enum class EScreenshotToolBatchType : uint8 {
	SelectedItemOrOutfit = 0,
	SelectedItemOrOutfitSeparated = 1,
	SelectedCharacterItems = 2,
	SelectedCharacterOutfits = 3,
	SelectedCharacterAndCategory = 4,
	ItemsMissingIcon = 5,
	OutfitMissingIcon = 6,
	CharmsMissingIcon = 7,
	PerkCharmsMissingIcon = 8,
	AllItems = 9,
	AllOutfits = 10,
	AllCharms = 11,
	AllPerkCharms = 12,
	EScreenshotToolBatchType_MAX = 13
};

// Enum DeadByDaylight.EScreenshotToolState
enum class EScreenshotToolState : uint8 {
	None = 0,
	PrepareBatch = 1,
	GenerateIcons = 2,
	ShaderCompilation = 3,
	GenerateAsset = 4,
	SaveAndCheckout = 5,
	FinishSuccess = 6,
	FinishFail = 7,
	FinishCancel = 8,
	EScreenshotToolState_MAX = 9
};

// Enum DeadByDaylight.SettingsId
enum class SettingsId : int32 {
	None = -1,
	Language = 0,
	RevokeConsent = 1,
	RevokeMarketingConsent = 2,
	BhvrAccount = 3,
	AllowCrossplayGeneric = 4,
	AllowCrossplayLive = 5,
	AutoDeclineFriendRequests = 6,
	PlayerId = 7,
	PartyPrivacy = 8,
	Quality = 9,
	AutoAdjust = 10,
	Resolution = 11,
	ScreenResolution = 12,
	RenderSize = 13,
	FullScreen = 14,
	HUDConstrainedAspectRatio = 15,
	VSync = 16,
	AntiAliasingMode = 17,
	MenuScaleFactor = 18,
	HudScaleFactor = 19,
	SkillCheckScaleFactor = 20,
	LargeText = 21,
	BloodwebInteractionBehaviour = 22,
	TerrorRadiusVisualFeedback = 23,
	HUDPlayerNamesVisibility = 24,
	HUDKillerHookCountVisibility = 25,
	HUDScoreEventsVisibility = 26,
	LegacyPrestigePortraits = 27,
	ChallengeProgression = 28,
	ChallengeCompletion = 29,
	MainVolume = 30,
	MenuMusicVolume = 31,
	Headphones = 32,
	MuteOnFocusLost = 33,
	InvertYAxis = 34,
	SurvivorMouseSensitivity = 35,
	SurvivorControllerSensitivity = 36,
	KillerMouseSensitivity = 37,
	KillerControllerSensitivity = 38,
	SurvivorToggleInteractions = 39,
	KillerToggleInteractions = 40,
	SprintToCancel = 41,
	ColorBarPalette = 42,
	ColorBlindMode = 43,
	ColorBlindModeIntensity = 44,
	BeginnerMode = 45,
	Subtitles = 46,
	SubtitlesBackgroundOpacity = 47,
	SubtitlesSize = 48,
	IsAnonymousMode = 49,
	HideYourName = 50,
	HideOtherNames = 51,
	HiddenMatchmakingDelay = 52,
	SurvivorCameraSensitivity = 53,
	KillerCameraSensitivity = 54,
	MenuMusicVolumeOn = 55,
	MainVolumeOn = 56,
	AimAssist = 57,
	SurvivorQuickTurn = 58,
	KillerQuickTurn = 59,
	FPSLimit = 60,
	AutoQuality = 61,
	ControlType = 62,
	CustomizedControls = 63,
	DynamicResolution = 64,
	InvertYAxisSurvivor = 65,
	BetaWiggleSkillCheck = 66,
	HapticsVibrationPS5 = 67,
	SettingsId_MAX = 68
};

// Enum DeadByDaylight.SettingsSubCategory
enum class SettingsSubCategory : int32 {
	None = -1,
	Language = 0,
	Tutorial = 1,
	Privacy = 2,
	Accessibility = 3,
	InGameText = 4,
	ColorBlindMode = 5,
	MotionSickness = 6,
	Social = 7,
	GameplayPrivacy = 8,
	Graphics = 9,
	UIHud = 10,
	Audio = 11,
	CommonControls = 12,
	SurvivorControls = 13,
	KillerControls = 14,
	Atlanta = 15,
	SettingsSubCategory_MAX = 16
};

// Enum DeadByDaylight.SettingsCategory
enum class SettingsCategory : int32 {
	None = -1,
	General = 0,
	Accessibility = 1,
	Beta = 2,
	Online = 3,
	Graphics = 4,
	Audio = 5,
	Controls = 6,
	Atlanta = 7,
	SettingsCategory_MAX = 8
};

// Enum DeadByDaylight.SettingsType
enum class SettingsType : int32 {
	None = -1,
	Button = 0,
	PlayerId = 1,
	NumericStepper = 2,
	Dropdown = 3,
	ColorBar = 4,
	TextStepper = 5,
	BoolTextStepper = 6,
	Checkbox = 7,
	SettingsType_MAX = 8
};

// Enum DeadByDaylight.EStoreUITag
enum class EStoreUITag : uint8 {
	None = 0,
	Sale = 1,
	New = 2,
	LimitedTime = 3,
	EStoreUITag_MAX = 4
};

// Enum DeadByDaylight.ECatalogStatus
enum class ECatalogStatus : uint8 {
	NotReady = 0,
	Updating = 1,
	Fetched = 2,
	ECatalogStatus_MAX = 3
};

// Enum DeadByDaylight.EShopLoadProgress
enum class EShopLoadProgress : uint8 {
	None = 0,
	LoadCatalog = 1,
	LoadCurrencyPacks = 2,
	PlatformStoreCatalog = 3,
	Inventory = 4,
	Wallet = 5,
	FeaturedPageContent = 6,
	EShopLoadProgress_MAX = 7
};

// Enum DeadByDaylight.ESoftBanReason
enum class ESoftBanReason : int32 {
	Invalid = -1,
	Harassment = 0,
	Griefing = 1,
	Exploits = 2,
	Unsportsmanlike = 3,
	Count = 4,
	ESoftBanReason_MAX = 5
};

// Enum DeadByDaylight.ESoundIndicatorType
enum class ESoundIndicatorType : uint8 {
	None = 0,
	CloseNoiseIndicator = 1,
	ExitOpenedIndicator = 2,
	GeneratorIndicator = 3,
	HatchIndicator = 4,
	HookedIndicator = 5,
	KillerCuesIndicator = 6,
	GlobalSoundIndicator = 7,
	DirectionalTerrorRadiusIndicator = 8,
	ESoundIndicatorType_MAX = 9
};

// Enum DeadByDaylight.ESpawnerStrategyType
enum class ESpawnerStrategyType : uint8 {
	None = 0,
	NoAccumulation = 1,
	LimitAccumulation = 2,
	ESpawnerStrategyType_MAX = 3
};

// Enum DeadByDaylight.EGiftSpecialAction
enum class EGiftSpecialAction : uint8 {
	None = 0,
	KeplerGift = 1,
	EGiftSpecialAction_MAX = 2
};

// Enum DeadByDaylight.ESpecialEventBloodwebChestCondition
enum class ESpecialEventBloodwebChestCondition : uint8 {
	Default = 0,
	All = 1,
	WithEventItem = 2,
	ESpecialEventBloodwebChestCondition_MAX = 3
};

// Enum DeadByDaylight.ESpecialEventDependency
enum class ESpecialEventDependency : uint8 {
	None = 0,
	Archives = 1,
	ESpecialEventDependency_MAX = 2
};

// Enum DeadByDaylight.ESpecialEventGameMode
enum class ESpecialEventGameMode : uint8 {
	Progression = 0,
	Counter = 1,
	Collection = 2,
	ESpecialEventGameMode_MAX = 3
};

// Enum DeadByDaylight.ESpecialEventStatus
enum class ESpecialEventStatus : uint8 {
	Inactive = 0,
	ActiveMain = 1,
	ActivePost = 2,
	ESpecialEventStatus_MAX = 3
};

// Enum DeadByDaylight.ELoadCompleteState
enum class ELoadCompleteState : uint8 {
	InProgress = 0,
	Success = 1,
	ReloginRequested = 2,
	FailedEAC = 3,
	FailedRecoverable = 4,
	FailedRecoverableProfileLoad = 5,
	FailedRecoverableWindowsStoreAndXboxLiveAccountNotMatching = 6,
	FailedUnequipedDisableditems = 7,
	FailedBlocking = 8,
	FailedBlockingNoDBDServer = 9,
	FailedBlockingNotConnected = 10,
	FailedBlockedNoNetworkConnection = 11,
	FailedBlockingSharedAuthenticationFailed = 12,
	FailedBlockingPlatformNotAuthenticated = 13,
	FailedBlockingPlatformSubsystemNotInitialized = 14,
	FailedBlockingOnlinePresenceNotInitialized = 15,
	FailedBlockingPlatformNetUniqueIdInvalid = 16,
	FailedBlockingInvalidLocalPlayer = 17,
	FailedBlockingInvalidGameObjects = 18,
	FailedBlockingInvalidSDA = 19,
	FailedBlockingInvalidClientVersion = 20,
	FailedBlockingInvalidAtlantaClientVersion = 21,
	FailedBlockingWindowsStoreAccountNotLoggedIn = 22,
	FailedBlockingSSLCACert = 23,
	FailedBlockingUserCancelled = 24,
	FailedBlockingCDNFailure = 25,
	FailedBlockingCDNContentError = 26,
	FailedBlockingCDNCantFindContentToDownload = 27,
	FailedBlockingCDNNoPatchForCurrentPlatformAndVersion = 28,
	FailedBlockingCDNNotEnoughDiskSpace = 29,
	FailedBlockingCDNFailureToRetrieveContent = 30,
	FailedRecoverableCDNUserCancelled = 31,
	FailedBlockingVersionFileError = 32,
	FailedBlockingRTMConnection = 33,
	FailedBlockingMaxTrialsReached = 34,
	FailedBlockingMirrorsHealthCheckFailed = 35,
	FailedBlockingTutorialRewardsFetchFailed = 36,
	FailedBlockingUserBanned = 37,
	FailedRetrieveStoreItem = 38,
	FailedControllerConnnection = 39,
	FailedProfileSignedIn = 40,
	FailedBlockingMandatoryConsent = 41,
	ELoadCompleteState_MAX = 42
};

// Enum DeadByDaylight.EExternalEffectSource
enum class EExternalEffectSource : uint8 {
	None = 0,
	Perk = 1,
	Addon = 2,
	Power = 3,
	EExternalEffectSource_MAX = 4
};

// Enum DeadByDaylight.EStoreBannerLocation
enum class EStoreBannerLocation : uint8 {
	Primary = 0,
	Secondary = 1,
	EStoreBannerLocation_MAX = 2
};

// Enum DeadByDaylight.EInteractionStorerRole
enum class EInteractionStorerRole : uint8 {
	None = 0,
	AuthorityAndAutonomousProxy = 1,
	ClientAndAutonomousProxy = 2,
	AuthorityAndSimulatedProxy = 3,
	ClientAndSimulatedProxy = 4,
	EInteractionStorerRole_MAX = 5
};

// Enum DeadByDaylight.ETextBannerPosition
enum class ETextBannerPosition : uint8 {
	TopLeft = 0,
	MiddleLeft = 1,
	BottomLeft = 2,
	MiddleRight = 3,
	BottomRight = 4,
	TopCenter = 5,
	MiddleCenter = 6,
	BottomCenter = 7,
	ETextBannerPosition_MAX = 8
};

// Enum DeadByDaylight.EStorefrontState
enum class EStorefrontState : uint8 {
	None = 0,
	Character = 1,
	Currency = 2,
	Customization = 3,
	Featured = 4,
	PromoPacks = 5,
	ShrineOfSecrets = 6,
	Subscriptions = 7,
	LandingPage = 8,
	Count = 9,
	EStorefrontState_MAX = 10
};

// Enum DeadByDaylight.EStoreTab
enum class EStoreTab : uint8 {
	Featured = 0,
	Characters = 1,
	Currency = 2,
	ShrineOfSecrets = 3,
	TabCount = 4,
	EStoreTab_MAX = 5
};

// Enum DeadByDaylight.EStoreState
enum class EStoreState : uint8 {
	None = 0,
	Featured = 1,
	CharacterSelection = 2,
	CharacterStory = 3,
	CharacterCatalog = 4,
	BuyCurrency = 5,
	ShrineOfSecrets = 6,
	EStoreState_MAX = 7
};

// Enum DeadByDaylight.EStreamVideoDataType
enum class EStreamVideoDataType : uint8 {
	None = 0,
	LoreCinematic = 1,
	SurvivorTutorial = 2,
	KillerTutorial = 3,
	Count = 4,
	EStreamVideoDataType_MAX = 5
};

// Enum DeadByDaylight.ESubscriptionRewardType
enum class ESubscriptionRewardType : uint8 {
	None = 0,
	Item = 1,
	AddOn = 2,
	Offering = 3,
	FreeTicket = 4,
	AuricCells = 5,
	BloodPoints = 6,
	IridescentShards = 7,
	Customization = 8,
	Character = 9,
	ESubscriptionRewardType_MAX = 10
};

// Enum DeadByDaylight.ETrapRemovedReason
enum class ETrapRemovedReason : uint8 {
	KillerInteraction = 0,
	LifetimeExpired = 1,
	EndPlay = 2,
	InteractableInvalidated = 3,
	OwnerLeft = 4,
	ETrapRemovedReason_MAX = 5
};

// Enum DeadByDaylight.ETrapBombState
enum class ETrapBombState : uint8 {
	Idle = 0,
	Activating = 1,
	ActivatedLeft = 2,
	ActivatedRight = 3,
	ETrapBombState_MAX = 4
};

// Enum DeadByDaylight.EPromptType
enum class EPromptType : uint8 {
	None = 0,
	ExitsPowered = 1,
	HatchSpawned = 2,
	HatchOpened = 3,
	EPromptType_MAX = 4
};

// Enum DeadByDaylight.ENotificationStyle
enum class ENotificationStyle : uint8 {
	None = 0,
	Game = 1,
	Tutorial = 2,
	ENotificationStyle_MAX = 3
};

// Enum DeadByDaylight.EPromptPriority
enum class EPromptPriority : uint8 {
	Tutorial = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	EPromptPriority_MAX = 4
};

// Enum DeadByDaylight.ELegalTermsStatus
enum class ELegalTermsStatus : uint8 {
	None = 0,
	Accepted = 1,
	Declined = 2,
	ELegalTermsStatus_MAX = 3
};

// Enum DeadByDaylight.EInventoryGridFormat
enum class EInventoryGridFormat : uint8 {
	DEFAULT = 0,
	DIAMOND = 1,
	HONEYCOMB = 2,
	EInventoryGridFormat_MAX = 3
};

// Enum DeadByDaylight.ENewContentType
enum class ENewContentType : uint8 {
	FEATURED_CONTENT = 1,
	NEW_CONTENT = 2,
	PATCH_NOTES = 3,
	DEV_MESSAGES = 4,
	EVENTS = 5,
	SALE = 6,
	COMMUNITY = 7,
	ENewContentType_MAX = 8
};

// Enum DeadByDaylight.EOverlayButtonOptions
enum class EOverlayButtonOptions : uint8 {
	HIDDEN = 0,
	DISABLED = 1,
	ENABLED = 2,
	EOverlayButtonOptions_MAX = 3
};

// Enum DeadByDaylight.EUIControllerType
enum class EUIControllerType : uint8 {
	KeyboardMouse = 0,
	GamePad = 1,
	EUIControllerType_MAX = 2
};

// Enum DeadByDaylight.EForumLanguages
enum class EForumLanguages : uint8 {
	None = 0,
	de = 1,
	en = 2,
	ja = 3,
	ru = 4,
	EForumLanguages_MAX = 5
};

// Enum DeadByDaylight.ECustomerSupportLanguages
enum class ECustomerSupportLanguages : uint8 {
	None = 0,
	de = 1,
	en = 2,
	ja = 3,
	ru = 4,
	es = 5,
	fr = 6,
	it = 7,
	ko = 8,
	pl = 9,
	pt = 10,
	th = 11,
	zh = 12,
	ECustomerSupportLanguages_MAX = 13
};

// Enum DeadByDaylight.ELeaveLobbyReason
enum class ELeaveLobbyReason : uint8 {
	eNone = 0,
	eNetworkDisconnect = 1,
	eProfileOffline = 2,
	eAppSuspended = 3,
	eInternetDisconnect = 4,
	eHostDisconnect = 5,
	eDLCInstalled = 6,
	eTrialExtensionExpired = 7,
	ePartyManagementError = 8,
	ELeaveLobbyReason_MAX = 9
};

// Enum DeadByDaylight.EFriendSearchPanelOption
enum class EFriendSearchPanelOption : uint8 {
	NotFoundPanel = 0,
	NonFriendPanel = 1,
	FriendRequestReceivedPanel = 2,
	FriendRequestSentPanel = 3,
	FriendPanel = 4,
	IsOwnerPanel = 5,
	EFriendSearchPanelOption_MAX = 6
};

// Enum DeadByDaylight.EFriendContainerType
enum class EFriendContainerType : uint8 {
	Connected = 0,
	Disconnected = 1,
	PendingSentRequest = 2,
	RecentlyPlayed = 3,
	SocialSuggestions = 4,
	PendingReceivedRequest = 5,
	QueriedPlayer = 6,
	Unknown = 7,
	EFriendContainerType_MAX = 8
};

// Enum DeadByDaylight.EPurchasePopupState
enum class EPurchasePopupState : uint8 {
	Information = 0,
	TitleOnly = 1,
	EPurchasePopupState_MAX = 2
};

// Enum DeadByDaylight.EAtlantaSettingMenuType
enum class EAtlantaSettingMenuType : uint8 {
	TabButton = 0,
	AlwaysDisplay = 1,
	EAtlantaSettingMenuType_MAX = 2
};

// Enum DeadByDaylight.EBloodStoreRowStyle
enum class EBloodStoreRowStyle : uint8 {
	FiveItemRow = 0,
	ThreeItemRow = 1,
	EBloodStoreRowStyle_MAX = 2
};

// Enum DeadByDaylight.EButtonType
enum class EButtonType : uint8 {
	None = 0,
	AttackButton = 1,
	PowerButton = 2,
	CancelButton = 3,
	SettingsButton = 4,
	SecondaryActionButton = 5,
	PowerAttackJoystick = 6,
	EButtonType_MAX = 7
};

// Enum DeadByDaylight.EInboxMessageTimeUnit
enum class EInboxMessageTimeUnit : uint8 {
	Days = 0,
	Hours = 1,
	Minutes = 2,
	EInboxMessageTimeUnit_MAX = 3
};

// Enum DeadByDaylight.EInboxMessageUIState
enum class EInboxMessageUIState : uint8 {
	New = 0,
	Read = 1,
	Archived = 2,
	EInboxMessageUIState_MAX = 3
};

// Enum DeadByDaylight.EInboxMessageUIType
enum class EInboxMessageUIType : uint8 {
	None = 0,
	Social = 1,
	Rewards = 2,
	News = 3,
	EInboxMessageUIType_MAX = 4
};

// Enum DeadByDaylight.EPartyPlayerSlotWidgetState
enum class EPartyPlayerSlotWidgetState : uint8 {
	None = 0,
	Empty = 1,
	NotReady = 2,
	Ready = 3,
	Hidden = 4,
	EPartyPlayerSlotWidgetState_MAX = 5
};

// Enum DeadByDaylight.ERewardLayoutBox
enum class ERewardLayoutBox : uint8 {
	Top = 0,
	Bottom = 1,
	ERewardLayoutBox_MAX = 2
};

// Enum DeadByDaylight.ESettingScreenButtonData
enum class ESettingScreenButtonData : uint8 {
	PRIVACY = 0,
	EULA = 1,
	CREDITS = 2,
	SURVIVORTUTORIAL = 3,
	KILLERTUTORIAL = 4,
	SURVIVORCINEMATIC = 5,
	KILLERCINEMATIC = 6,
	LORECINEMATIC = 7,
	COMMUNITY = 8,
	PLAYERCLOUDID = 9,
	SUBSCRIBE = 10,
	TERMSOFUSE = 11,
	ESettingScreenButtonData_MAX = 12
};

// Enum DeadByDaylight.ENavigationState
enum class ENavigationState : uint8 {
	RoleSelection = 0,
	Customization = 1,
	CharacterSelection = 2,
	Lobby = 3,
	BloodStore = 4,
	None = 5,
	ENavigationState_MAX = 6
};

// Enum DeadByDaylight.EInventoryButtonState
enum class EInventoryButtonState : uint8 {
	StateDisabled = 0,
	StateEmpty = 1,
	StateLocked = 2,
	StateWithItem = 3,
	StateWithItemDisabled = 4,
	StateWithItemLocked = 5,
	StatePrivate = 6,
	EInventoryButtonState_MAX = 7
};

// Enum DeadByDaylight.EFogScreenButton
enum class EFogScreenButton : uint8 {
	AddCurrency = 0,
	Setting = 1,
	Chat = 2,
	EFogScreenButton_MAX = 3
};

// Enum DeadByDaylight.ERoleSelectionScreenButton
enum class ERoleSelectionScreenButton : uint8 {
	DailyRitual = 0,
	Inbox = 1,
	InviteFriend = 2,
	Setting = 3,
	Marketing = 4,
	Events = 5,
	ERoleSelectionScreenButton_MAX = 6
};

// Enum DeadByDaylight.ENavigationScreenButton
enum class ENavigationScreenButton : uint8 {
	AddCurrency = 0,
	Back = 1,
	Bloodweb = 2,
	ChangeRole = 3,
	CharacterSelection = 4,
	Customization = 5,
	InviteFriend = 6,
	Loadout = 7,
	Start = 8,
	Subscriptions = 9,
	EditCustomGame = 10,
	CustomGameRequestRole = 11,
	ENavigationScreenButton_MAX = 12
};

// Enum DeadByDaylight.EInboxScreenButton
enum class EInboxScreenButton : uint8 {
	Rewards = 0,
	Social = 1,
	News = 2,
	Back = 3,
	EInboxScreenButton_MAX = 4
};

// Enum DeadByDaylight.ETallyListPageID
enum class ETallyListPageID : uint8 {
	Scoreboard = 0,
	Bloodpoints = 1,
	Rank = 2,
	PlayerLevel = 3,
	CharacterLevel = 4,
	NumberOfPages = 5,
	ETallyListPageID_MAX = 6
};

// Enum DeadByDaylight.EToastWidgetType
enum class EToastWidgetType : uint8 {
	Simple = 0,
	Interactable = 1,
	EToastWidgetType_MAX = 2
};

// Enum DeadByDaylight.ELinkedVomitState
enum class ELinkedVomitState : uint8 {
	Idle = 0,
	Charging = 1,
	Vomiting = 2,
	ELinkedVomitState_MAX = 3
};

// ScriptStruct DeadByDaylight.CombinedExperimentData
// Size: 0x01 (Inherited: 0x00)
struct FCombinedExperimentData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.DBDFeatureLockProgress
// Size: 0x01 (Inherited: 0x00)
struct FDBDFeatureLockProgress {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.GameEventData
// Size: 0x28 (Inherited: 0x00)
struct FGameEventData {
	struct ADBDPlayer* Instigator; // 0x00(0x08)
	struct AActor* Target; // 0x08(0x08)
	float CustomValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UObject* CustomObjectParameter; // 0x18(0x08)
	int32_t CustomIntValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.SelectedOffering
// Size: 0x10 (Inherited: 0x00)
struct FSelectedOffering {
	int32_t ownerId; // 0x00(0x04)
	struct FName OfferingName; // 0x04(0x0c)
};

// ScriptStruct DeadByDaylight.BuiltLevelData
// Size: 0xb0 (Inherited: 0x00)
struct FBuiltLevelData {
	struct FName ThemeName; // 0x00(0x0c)
	struct FName ThemeWeather; // 0x0c(0x0c)
	struct FName AudioStateThemes; // 0x18(0x0c)
	struct FName AudioStateWeather; // 0x24(0x0c)
	struct FName AudioThemeEvent; // 0x30(0x0c)
	struct FName AudioLimitPointEvent; // 0x3c(0x0c)
	struct TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank; // 0x48(0x30)
	struct FString MapName; // 0x78(0x10)
	int32_t TileCount; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FDependency> Dependencies; // 0x90(0x10)
	struct FName SpecialEventId; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct DeadByDaylight.Dependency
// Size: 0x38 (Inherited: 0x00)
struct FDependency {
	enum class ETileSpawnPointType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSoftObjectPath AssetReference; // 0x08(0x20)
	struct AActor* Object; // 0x28(0x08)
	bool Unique; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t Count; // 0x34(0x04)
};

// ScriptStruct DeadByDaylight.GamePresetData
// Size: 0x90 (Inherited: 0x00)
struct FGamePresetData {
	struct TArray<char> _mapAvailabilities; // 0x00(0x10)
	struct TArray<char> _perkAvailabilities; // 0x10(0x10)
	struct TArray<char> _offeringAvailabilities; // 0x20(0x10)
	struct TArray<char> _itemAvailabilities; // 0x30(0x10)
	struct TArray<char> _itemAddonAvailabilities; // 0x40(0x10)
	struct TArray<char> _customizationItemAvailabilities; // 0x50(0x10)
	struct TArray<char> _characterAvailabilities; // 0x60(0x10)
	bool _allowDlcContent; // 0x70(0x01)
	bool _privateMatch; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct FCustomGameBotsData _botsData; // 0x78(0x18)
};

// ScriptStruct DeadByDaylight.OfferingData
// Size: 0x18 (Inherited: 0x00)
struct FOfferingData {
	bool OfferingReady; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FSelectedOffering> offerings; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.SpecialBehaviourObjectsInfo
// Size: 0x14 (Inherited: 0x00)
struct FSpecialBehaviourObjectsInfo {
	struct FName SpecialBehaviourId; // 0x00(0x0c)
	int32_t amountRequired; // 0x0c(0x04)
	int32_t TimesInteractedWith; // 0x10(0x04)
};

// ScriptStruct DeadByDaylight.ScoreEventData
// Size: 0x18 (Inherited: 0x00)
struct FScoreEventData {
	struct AActor* Target; // 0x00(0x08)
	float PercentToAward; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UObject* CustomObjectParameter; // 0x10(0x08)
};

// ScriptStruct DeadByDaylight.InteractionPlayerProperties
// Size: 0x50 (Inherited: 0x00)
struct FInteractionPlayerProperties {
	struct FVector_NetQuantize AverageVelocityAtStart; // 0x00(0x0c)
	struct FVector_NetQuantize PlayerPositionAtStart; // 0x0c(0x0c)
	struct FRotator PlayerRotationAtStart; // 0x18(0x0c)
	struct TWeakObjectPtr<struct ADBDPlayer> requester; // 0x24(0x08)
	struct FVector_NetQuantize SnapPositionAtStart; // 0x2c(0x0c)
	struct FRotator SnapRotationAtStart; // 0x38(0x0c)
	float SnapDistanceAtStart; // 0x44(0x04)
	float SnapTimeAtStart; // 0x48(0x04)
	bool ShouldSnapPosition; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct DeadByDaylight.OnMovementCacheStruct
// Size: 0x0c (Inherited: 0x00)
struct FOnMovementCacheStruct {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct DeadByDaylight.EffectCameraTypeSettings
// Size: 0x03 (Inherited: 0x00)
struct FEffectCameraTypeSettings {
	enum class ECustomizationCategory category; // 0x00(0x01)
	bool VisibilityInFirstPerson; // 0x01(0x01)
	bool VisibilityInThirdPerson; // 0x02(0x01)
};

// ScriptStruct DeadByDaylight.InventorySlotData
// Size: 0x128 (Inherited: 0x00)
struct FInventorySlotData {
	struct FName ItemId; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString IconFilePath; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString ParentDisplayName; // 0x30(0x10)
	struct FString ParentTypeDisplayName; // 0x40(0x10)
	bool IsParentAvailable; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString Description; // 0x58(0x10)
	struct TArray<enum class EPerkCategory> PerkCategory; // 0x68(0x10)
	enum class EOfferingCategory OfferingCategory; // 0x78(0x01)
	enum class EInventoryItemType ItemType; // 0x79(0x01)
	enum class EItemRarity Rarity; // 0x7a(0x01)
	enum class EStatusEffectType StatusEffectType; // 0x7b(0x01)
	int32_t Level; // 0x7c(0x04)
	struct FString Subtitle; // 0x80(0x10)
	int32_t StackCount; // 0x90(0x04)
	enum class EItemAvailability Availability; // 0x94(0x01)
	bool IsTeachablePerk; // 0x95(0x01)
	bool IsSlasherPerk; // 0x96(0x01)
	bool IsPerkAvailableInFearMarket; // 0x97(0x01)
	bool IsPerkAvailableInBloodWeb; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t TeachableLevel; // 0x9c(0x04)
	struct FString DlcDisplayName; // 0xa0(0x10)
	bool IsLocked; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FSpecialEventUIInfo EventInfo; // 0xb8(0x60)
	int32_t UnlockableLevel; // 0x118(0x04)
	bool IsLimitedItem; // 0x11c(0x01)
	bool IsPrivateIcon; // 0x11d(0x01)
	bool IsEnabled; // 0x11e(0x01)
	bool IsSharablePerk; // 0x11f(0x01)
	enum class ELoadoutPartState LoadoutPartState; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
};

// ScriptStruct DeadByDaylight.SpecialEventUIInfo
// Size: 0x60 (Inherited: 0x00)
struct FSpecialEventUIInfo {
	struct FString EventId; // 0x00(0x10)
	struct FString EventBannerFrameLabel; // 0x10(0x10)
	struct FString EventThemeFrameLabel; // 0x20(0x10)
	struct FText EventName; // 0x30(0x18)
	bool IsPastEvent; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString BloodwebCollectSoundEvent; // 0x50(0x10)
};

// ScriptStruct DeadByDaylight.TooltipPressedData
// Size: 0x18 (Inherited: 0x00)
struct FTooltipPressedData {
	struct FVector2D touchPosition; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.TeachableData
// Size: 0x140 (Inherited: 0x00)
struct FTeachableData {
	struct FInventorySlotData InventorySlotData; // 0x00(0x128)
	enum class ETeachableStatus Status; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32_t UnlockLevel; // 0x12c(0x04)
	struct FString Message; // 0x130(0x10)
};

// ScriptStruct DeadByDaylight.EmblemSlotData
// Size: 0x70 (Inherited: 0x00)
struct FEmblemSlotData {
	enum class EEmblemQuality Quality; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Title; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	int32_t Score; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FString> IconPaths; // 0x30(0x10)
	struct TArray<int32_t> ThresholdPoints; // 0x40(0x10)
	float CurrentPoints; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FEmblemProgressionData> ProgressionData; // 0x58(0x10)
	int32_t CharacterExperience; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct DeadByDaylight.EmblemProgressionData
// Size: 0x18 (Inherited: 0x00)
struct FEmblemProgressionData {
	struct FString ProgressionText; // 0x00(0x10)
	float ProgressionPercent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.StoreItemSlotData
// Size: 0x1e0 (Inherited: 0x00)
struct FStoreItemSlotData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ItemId; // 0x08(0x0c)
	enum class ECustomizationCategory category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName MirrorsId; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString IconPath; // 0x28(0x10)
	struct FString DisplayName; // 0x38(0x10)
	struct FString DisplayCollectionName; // 0x48(0x10)
	struct FString Description; // 0x58(0x10)
	struct FString RoleCategoryInfo; // 0x68(0x10)
	struct FString RarityPartInfo; // 0x78(0x10)
	enum class EItemRarity Rarity; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FSpecialEventUIInfo EventInfo; // 0x90(0x60)
	struct TArray<struct FPurchaseCurrencyData> PurchaseDataList; // 0xf0(0x10)
	struct TArray<struct FName> ParentBundleIds; // 0x100(0x10)
	struct TArray<struct FName> ChildrenItemIds; // 0x110(0x10)
	struct FCustomTransformation CustomTransformation; // 0x120(0x14)
	bool IsOwned; // 0x134(0x01)
	bool IsBuyable; // 0x135(0x01)
	bool IsEquipped; // 0x136(0x01)
	bool IsNewInStore; // 0x137(0x01)
	bool IsLocked; // 0x138(0x01)
	bool IsInStore; // 0x139(0x01)
	enum class EPlayerRole AssociatedRole; // 0x13a(0x01)
	char pad_13B[0x5]; // 0x13b(0x05)
	struct FDateTime ReleaseDate; // 0x140(0x08)
	bool IsEnabled; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FString RemainingTimeItem; // 0x150(0x10)
	struct FString RemainingTimeDiscount; // 0x160(0x10)
	char pad_170[0x70]; // 0x170(0x70)
};

// ScriptStruct DeadByDaylight.CustomTransformation
// Size: 0x14 (Inherited: 0x00)
struct FCustomTransformation {
	bool UseCustomTransformation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D CustomScale; // 0x04(0x08)
	struct FVector2D CustomTranslation; // 0x0c(0x08)
};

// ScriptStruct DeadByDaylight.PurchaseCurrencyData
// Size: 0x20 (Inherited: 0x00)
struct FPurchaseCurrencyData {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ECurrencyType CurrencyType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Price; // 0x0c(0x04)
	float DiscountPercentage; // 0x10(0x04)
	bool IsAffordable; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
};

// ScriptStruct DeadByDaylight.CamperHealResult
// Size: 0x18 (Inherited: 0x00)
struct FCamperHealResult {
	enum class ECamperDamageState PreviousDamageState; // 0x00(0x01)
	enum class ECamperDamageState CurrentDamageState; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t HealAmount; // 0x04(0x04)
	struct TArray<struct ADBDPlayer*> Healers; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.DBDTimer
// Size: 0x28 (Inherited: 0x00)
struct FDBDTimer {
	char pad_0[0x8]; // 0x00(0x08)
	float _startTime; // 0x08(0x04)
	bool _startTimeDirty; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FFloat_NetQuantize8 _timeLeft; // 0x10(0x08)
	bool _replicateTimeLeft; // 0x18(0x01)
	char pad_19[0xb]; // 0x19(0x0b)
	float _interpSpeed; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.AttackDelegatePair
// Size: 0x10 (Inherited: 0x00)
struct FAttackDelegatePair {
	struct UDBDAttack* _attack; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct DeadByDaylight.TargetFocusTimer
// Size: 0x38 (Inherited: 0x00)
struct FTargetFocusTimer {
	struct ACamperPlayer* _camper; // 0x00(0x08)
	struct FDBDTimer _cooldownTimer; // 0x08(0x28)
	float _totalTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct DeadByDaylight.SecondaryInteractionProperties
// Size: 0x38 (Inherited: 0x00)
struct FSecondaryInteractionProperties {
	struct FString SecondaryInteractionID; // 0x00(0x10)
	enum class EInputInteractionType SecondaryInteractionInputType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText SecondaryInteractionDescriptionText; // 0x18(0x18)
	bool ShouldShow; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct DeadByDaylight.InteractionArray
// Size: 0x10 (Inherited: 0x00)
struct FInteractionArray {
	struct TArray<struct TWeakObjectPtr<struct UInteractionDefinition>> _interactions; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.DataTableDropdown
// Size: 0x30 (Inherited: 0x00)
struct FDataTableDropdown {
	struct FName RowValue; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString DataTableName; // 0x10(0x10)
	struct FName ColumnName; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct DeadByDaylight.FearMarketOfferingInstance
// Size: 0x20 (Inherited: 0x00)
struct FFearMarketOfferingInstance {
	struct TArray<struct FFearMarketItemInstance> ObjectsForSale; // 0x00(0x10)
	struct FDateTime starttime; // 0x10(0x08)
	struct FDateTime EndTime; // 0x18(0x08)
};

// ScriptStruct DeadByDaylight.FearMarketItemInstance
// Size: 0x30 (Inherited: 0x00)
struct FFearMarketItemInstance {
	struct FName ItemId; // 0x00(0x0c)
	int32_t BloodpointConversion; // 0x0c(0x04)
	bool Purchased; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float DiscountPercentage; // 0x14(0x04)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct DeadByDaylight.FirecrackerEffectData
// Size: 0x10 (Inherited: 0x00)
struct FFirecrackerEffectData {
	struct AFirecracker* Firecracker; // 0x00(0x08)
	bool IsInRange; // 0x08(0x01)
	bool IsFirstTime; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct DeadByDaylight.SnappingData
// Size: 0x24 (Inherited: 0x00)
struct FSnappingData {
	bool DoSnapPosition; // 0x00(0x01)
	bool DoSnapRotation; // 0x01(0x01)
	bool DoSnapRoll; // 0x02(0x01)
	bool useZCoord; // 0x03(0x01)
	bool sweepOnFinalSnap; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FVector targetPosition; // 0x08(0x0c)
	struct FRotator TargetRotation; // 0x14(0x0c)
	float Duration; // 0x20(0x04)
};

// ScriptStruct DeadByDaylight.CosmeticPieceMeshLoadingData
// Size: 0x380 (Inherited: 0x00)
struct FCosmeticPieceMeshLoadingData {
	char pad_0[0x378]; // 0x00(0x378)
	struct USkeletalMesh* SkeletalMesh; // 0x378(0x08)
};

// ScriptStruct DeadByDaylight.AkObservedPlayerSoundLoop
// Size: 0x40 (Inherited: 0x28)
struct FAkObservedPlayerSoundLoop : FAkSoundLoop {
	char pad_28[0x10]; // 0x28(0x10)
	struct TWeakObjectPtr<struct UPlayerPerspectiveComponent> _perspectiveComponent; // 0x38(0x08)
};

// ScriptStruct DeadByDaylight.RoleDropdown
// Size: 0x02 (Inherited: 0x00)
struct FRoleDropdown {
	bool ShowRoleSelection; // 0x00(0x01)
	enum class EPlayerRole Role; // 0x01(0x01)
};

// ScriptStruct DeadByDaylight.CharacterDropdown
// Size: 0x08 (Inherited: 0x02)
struct FCharacterDropdown : FRoleDropdown {
	char pad_2[0x2]; // 0x02(0x02)
	int32_t characterId; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.AIDetectedStimulus
// Size: 0x88 (Inherited: 0x00)
struct FAIDetectedStimulus {
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Velocity; // 0x20(0x0c)
	struct FVector LastHasBeenSeenLocation; // 0x2c(0x0c)
	struct FVector LastHasBeenSeenDirection; // 0x38(0x0c)
	float LastHasBeenSeenTime; // 0x44(0x04)
	float NextHasBeenSeenUpdateTime; // 0x48(0x04)
	float AtTime; // 0x4c(0x04)
	struct FName Tag; // 0x50(0x0c)
	char pad_5C[0x2c]; // 0x5c(0x2c)
};

// ScriptStruct DeadByDaylight.AITunableParameter
// Size: 0x10 (Inherited: 0x00)
struct FAITunableParameter {
	float defaultValue; // 0x00(0x04)
	struct FName TunableName; // 0x04(0x0c)
};

// ScriptStruct DeadByDaylight.AIRoll
// Size: 0x24 (Inherited: 0x00)
struct FAIRoll {
	struct FAITunableParameter Random; // 0x00(0x10)
	struct FAITunableParameter OnFailCooldown; // 0x10(0x10)
	char pad_20[0x4]; // 0x20(0x04)
};

// ScriptStruct DeadByDaylight.PerkDropdown
// Size: 0x10 (Inherited: 0x02)
struct FPerkDropdown : FRoleDropdown {
	char pad_2[0x2]; // 0x02(0x02)
	struct FName perkId; // 0x04(0x0c)
};

// ScriptStruct DeadByDaylight.PerkIdDropdown
// Size: 0x10 (Inherited: 0x10)
struct FPerkIdDropdown : FPerkDropdown {
};

// ScriptStruct DeadByDaylight.ClippedActor
// Size: 0x60 (Inherited: 0x00)
struct FClippedActor {
	struct TArray<struct TWeakObjectPtr<struct UPrimitiveComponent>> DisplayComponents; // 0x00(0x10)
	struct TMap<struct UPrimitiveComponent*, struct TWeakObjectPtr<struct UPrimitiveComponent>> CollidingPrimitives; // 0x10(0x50)
};

// ScriptStruct DeadByDaylight.ActorSpawnerProperties
// Size: 0x38 (Inherited: 0x00)
struct FActorSpawnerProperties {
	struct TSoftClassPtr<UObject> SceneElement; // 0x00(0x30)
	float Weight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct DeadByDaylight.SpawnerElement
// Size: 0x10 (Inherited: 0x00)
struct FSpawnerElement {
	struct TArray<struct FActorSpawnerProperties> ObjectsToBeSpawned; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.ActorVariationElements
// Size: 0x38 (Inherited: 0x00)
struct FActorVariationElements {
	enum class ETileVariation Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftClassPtr<UObject> Element; // 0x08(0x30)
};

// ScriptStruct DeadByDaylight.AddonDropdown
// Size: 0x10 (Inherited: 0x02)
struct FAddonDropdown : FRoleDropdown {
	char pad_2[0x2]; // 0x02(0x02)
	struct FName AddonID; // 0x04(0x0c)
};

// ScriptStruct DeadByDaylight.AimAssistInfo
// Size: 0x18 (Inherited: 0x00)
struct FAimAssistInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct DeadByDaylight.AITrailEvent
// Size: 0x30 (Inherited: 0x00)
struct FAITrailEvent {
	struct FVector Location; // 0x00(0x0c)
	float starttime; // 0x0c(0x04)
	float EndTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FGameplayTag IgnoreOnPerkTag; // 0x20(0x0c)
	struct FGenericTeamId TeamIdentifier; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct DeadByDaylight.AnimationMappingRow
// Size: 0x18 (Inherited: 0x08)
struct FAnimationMappingRow : FDBDTableRowBase {
	struct TArray<struct FAnimationMapping> Mappings; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.AnimationMapping
// Size: 0x58 (Inherited: 0x08)
struct FAnimationMapping : FDBDTableRowBase {
	struct TSoftObjectPtr<UAnimMontage> MontageAsset; // 0x08(0x30)
	struct TArray<struct FName> Tags; // 0x38(0x10)
	struct UAnimMontage* _montage; // 0x48(0x08)
	bool _loadAttempted; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct DeadByDaylight.AnimBudgeterGameConfig
// Size: 0x28 (Inherited: 0x00)
struct FAnimBudgeterGameConfig {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Ps4Budget; // 0x04(0x04)
	float Ps5Budget; // 0x08(0x04)
	float XboxOneBudget; // 0x0c(0x04)
	float XsxBudget; // 0x10(0x04)
	float SwitchBudget; // 0x14(0x04)
	struct TArray<float> SteamBudgets; // 0x18(0x10)
};

// ScriptStruct DeadByDaylight.ArchiveS3Journal
// Size: 0x08 (Inherited: 0x00)
struct FArchiveS3Journal {
	int32_t Nodes; // 0x00(0x04)
	int32_t StartingPages; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.ArchiveQuestSpecialBehaviour
// Size: 0x58 (Inherited: 0x18)
struct FArchiveQuestSpecialBehaviour : FDBDTableRowBaseWithId {
	struct FText Description; // 0x18(0x18)
	enum class EContextualType Type; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName SpawnObjectId; // 0x34(0x0c)
	enum class EAdditiveBehaviour AdditiveBehaviour; // 0x40(0x01)
	enum class EStackingBehaviours StackableBehaviour; // 0x41(0x01)
	enum class EOwnershipBehaviour OwnershipBehaviour; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t SpawnQuantity; // 0x44(0x04)
	struct TArray<struct FSpecialBehaviourSpawnableComponent> SpawnableComponents; // 0x48(0x10)
};

// ScriptStruct DeadByDaylight.SpecialBehaviourSpawnableComponent
// Size: 0x38 (Inherited: 0x00)
struct FSpecialBehaviourSpawnableComponent {
	struct TSoftClassPtr<UObject> Component; // 0x00(0x30)
	bool ShouldSpawnOnSurvivor; // 0x30(0x01)
	bool ShouldSpawnOnKiller; // 0x31(0x01)
	bool ShouldSpawnOnGameState; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// ScriptStruct DeadByDaylight.ArchiveDefinition
// Size: 0xd8 (Inherited: 0x18)
struct FArchiveDefinition : FDBDTableRowBaseWithId {
	struct FText Title; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct FString PurchasePassPicturePath; // 0x48(0x10)
	struct FString PurchaseTierPicturePath; // 0x58(0x10)
	struct FText PurchasePassPopupMessage; // 0x68(0x18)
	enum class EArchivesEventStyle EventStyle; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TSoftObjectPtr<UTexture2D> StoryBookMarkTexture; // 0x88(0x30)
	struct FString StyleFrameLabel; // 0xb8(0x10)
	struct FString EventStoryLabel; // 0xc8(0x10)
};

// ScriptStruct DeadByDaylight.QuestEventDefinition
// Size: 0x58 (Inherited: 0x18)
struct FQuestEventDefinition : FDBDTableRowBaseWithId {
	struct TArray<struct FGameplayTag> TrackedGameEvents; // 0x18(0x10)
	struct TSoftClassPtr<UObject> QuestEventEvaluator; // 0x28(0x30)
};

// ScriptStruct DeadByDaylight.ArchiveQuestObjectiveDefinition
// Size: 0x60 (Inherited: 0x18)
struct FArchiveQuestObjectiveDefinition : FDBDTableRowBaseWithId {
	struct FText Description; // 0x18(0x18)
	struct FText RulesDescription; // 0x30(0x18)
	enum class EQuestProgressionType ProgressionType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FName> DescriptionParameters; // 0x50(0x10)
};

// ScriptStruct DeadByDaylight.ArchiveNodeDefinition
// Size: 0x68 (Inherited: 0x18)
struct FArchiveNodeDefinition : FDBDTableRowBaseWithId {
	struct FText DisplayName; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct FString IconPath; // 0x48(0x10)
	enum class EPlayerRole PlayerRole; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName cinematicId; // 0x5c(0x0c)
};

// ScriptStruct DeadByDaylight.RewardTrackData
// Size: 0x28 (Inherited: 0x00)
struct FRewardTrackData {
	struct TArray<struct FRewardTrackTierData> TierInfo; // 0x00(0x10)
	uint32_t Requirement; // 0x10(0x04)
	char pad_14[0x14]; // 0x14(0x14)
};

// ScriptStruct DeadByDaylight.RewardTrackTierData
// Size: 0x38 (Inherited: 0x00)
struct FRewardTrackTierData {
	uint32_t TierId; // 0x00(0x04)
	uint32_t TierGroup; // 0x04(0x04)
	struct TArray<struct FRewardResponseItem> Free; // 0x08(0x10)
	bool Free_IsSet; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FRewardResponseItem> Premium; // 0x20(0x10)
	bool Premium_IsSet; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct DeadByDaylight.RewardResponseItem
// Size: 0x30 (Inherited: 0x00)
struct FRewardResponseItem {
	struct FString Type; // 0x00(0x10)
	bool Type_IsSet; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString ID; // 0x18(0x10)
	int32_t Amount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct DeadByDaylight.ArchiveRewardsData
// Size: 0x78 (Inherited: 0x00)
struct FArchiveRewardsData {
	int32_t XpRequirement; // 0x00(0x04)
	int32_t StarsEarnedPerLevel; // 0x04(0x04)
	struct FString PreStartDate; // 0x08(0x10)
	struct FString StartDate; // 0x18(0x10)
	struct FString EndDate; // 0x28(0x10)
	struct FString PostEndDate; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)
};

// ScriptStruct DeadByDaylight.ArchivesConfig
// Size: 0x04 (Inherited: 0x00)
struct FArchivesConfig {
	int32_t CommunityNodeRefreshInterval; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.BonusTierTooltipVisibility
// Size: 0x18 (Inherited: 0x00)
struct FBonusTierTooltipVisibility {
	struct FString ArchiveId; // 0x00(0x10)
	bool IsVisible; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct DeadByDaylight.PlayerDataForQuestConditions
// Size: 0x88 (Inherited: 0x00)
struct FPlayerDataForQuestConditions {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct DeadByDaylight.ArchivesMapFromS3
// Size: 0x40 (Inherited: 0x00)
struct FArchivesMapFromS3 {
	struct TArray<struct FStoryLevel> Level; // 0x00(0x10)
	struct FString RiftId; // 0x10(0x10)
	bool RiftId_IsSet; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString SpecialEventId; // 0x28(0x10)
	bool SpecialEventId_IsSet; // 0x38(0x01)
	bool NewTomePopup; // 0x39(0x01)
	bool NewTomePopup_IsSet; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct DeadByDaylight.StoryLevel
// Size: 0xe0 (Inherited: 0x00)
struct FStoryLevel {
	struct TArray<struct FString> Start; // 0x00(0x10)
	struct TArray<struct FString> End; // 0x10(0x10)
	struct FString StartDate; // 0x20(0x10)
	struct TMap<struct FString, struct FArchivesNodeDefinition> Nodes; // 0x30(0x50)
	struct TArray<struct FRewardResponseItem> EndNodeRewards; // 0x80(0x10)
	bool EndNodeRewards_IsSet; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct FRewardResponseItem> LevelRewards; // 0x98(0x10)
	bool LevelRewards_IsSet; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FRewardResponseItem> TaskRewards; // 0xb0(0x10)
	bool TaskRewards_IsSet; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct FRewardResponseItem> ChallengeRewards; // 0xc8(0x10)
	bool ChallengeRewards_IsSet; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct DeadByDaylight.ArchivesNodeDefinition
// Size: 0xc8 (Inherited: 0x00)
struct FArchivesNodeDefinition {
	struct FString ClientInfoId; // 0x00(0x10)
	struct FArchivesNodeCoordinates Coordinates; // 0x10(0x10)
	struct TArray<struct FString> Neighbors; // 0x20(0x10)
	struct FString NodeType; // 0x30(0x10)
	struct TMap<struct FString, struct FArchivesObjective> Objectives; // 0x40(0x50)
	bool Objectives_IsSet; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct FString> Journal; // 0x98(0x10)
	bool Journal_IsSet; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FRewardResponseItem> Reward; // 0xb0(0x10)
	bool Reward_IsSet; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// ScriptStruct DeadByDaylight.ArchivesObjective
// Size: 0x60 (Inherited: 0x00)
struct FArchivesObjective {
	struct FString ObjectiveId; // 0x00(0x10)
	bool ObjectiveId_IsSet; // 0x10(0x01)
	bool IncrementWithEventRepetitions; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t NeededProgression; // 0x14(0x04)
	struct TArray<struct FArchivesQuestCondition> Conditions; // 0x18(0x10)
	bool Conditions_IsSet; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FArchivesQuestEvent> QuestEvent; // 0x30(0x10)
	bool QuestEvent_IsSet; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FArchivesQuestSpecialBehaviour> SpecialBehaviours; // 0x48(0x10)
	bool SpecialBehaviours_IsSet; // 0x58(0x01)
	bool IsCommunityObjective; // 0x59(0x01)
	bool IsCommunityObjective_IsSet; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
};

// ScriptStruct DeadByDaylight.ArchivesQuestSpecialBehaviour
// Size: 0x28 (Inherited: 0x00)
struct FArchivesQuestSpecialBehaviour {
	struct FString ID; // 0x00(0x10)
	struct FString Params; // 0x10(0x10)
	bool Params_IsSet; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DeadByDaylight.ArchivesQuestEvent
// Size: 0x40 (Inherited: 0x00)
struct FArchivesQuestEvent {
	struct FString QuestEventId; // 0x00(0x10)
	int32_t Repetition; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Parameters; // 0x18(0x10)
	struct FString Operation; // 0x28(0x10)
	bool Parameters_IsSet; // 0x38(0x01)
	bool Operation_IsSet; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct DeadByDaylight.ArchivesQuestCondition
// Size: 0x20 (Inherited: 0x00)
struct FArchivesQuestCondition {
	struct FString Key; // 0x00(0x10)
	struct TArray<struct FString> value; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.ArchivesNodeCoordinates
// Size: 0x10 (Inherited: 0x00)
struct FArchivesNodeCoordinates {
	double X; // 0x00(0x08)
	double Y; // 0x08(0x08)
};

// ScriptStruct DeadByDaylight.ArmIKSensorDatum
// Size: 0x30 (Inherited: 0x00)
struct FArmIKSensorDatum {
	struct FName ShoulderBoneName; // 0x00(0x0c)
	char pad_C[0x24]; // 0x0c(0x24)
};

// ScriptStruct DeadByDaylight.AssetLibraryLoader
// Size: 0x28 (Inherited: 0x00)
struct FAssetLibraryLoader {
	struct UAssetLibrary* AssetLibrary; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct DeadByDaylight.AssignedPerkProperties
// Size: 0x14 (Inherited: 0x00)
struct FAssignedPerkProperties {
	struct FName perkId; // 0x00(0x0c)
	int32_t PerkLevel; // 0x0c(0x04)
	bool IsTeachable; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct DeadByDaylight.AtlantaAuricCellPacksUIData
// Size: 0x38 (Inherited: 0x00)
struct FAtlantaAuricCellPacksUIData {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FCurrencyPurchaseData> CurrencyPurchaseData; // 0x10(0x10)
	int32_t FirstPurchaseBundleMultiplier; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FDateTime FirstPurchaseBundleMultiplierEndDate; // 0x28(0x08)
	bool isSet; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct DeadByDaylight.CurrencyPurchaseData
// Size: 0x68 (Inherited: 0x00)
struct FCurrencyPurchaseData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString IconPath; // 0x08(0x10)
	struct FString CurrencyName; // 0x18(0x10)
	struct FString CurrencyIcon; // 0x28(0x10)
	int32_t CurrencyAmount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString DisplayedPrice; // 0x40(0x10)
	float BonusPercentage; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FDateTime BonusEndDate; // 0x58(0x08)
	int32_t BasicCurrencyAmount; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct DeadByDaylight.AtlantaBaseEventsUIData
// Size: 0xe8 (Inherited: 0x00)
struct FAtlantaBaseEventsUIData {
	struct FString EventId; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	struct FText Title; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
	struct FString CampaignName; // 0x50(0x10)
	struct UTexture2DDynamic* Image; // 0x60(0x08)
	int32_t EventPriority; // 0x68(0x04)
	int32_t BannerPriority; // 0x6c(0x04)
	struct FString DeepLink; // 0x70(0x10)
	struct FDateTime StartDate; // 0x80(0x08)
	struct FDateTime EndDate; // 0x88(0x08)
	struct FDateTime DisplayStartDate; // 0x90(0x08)
	struct FDateTime DisplayEndDate; // 0x98(0x08)
	struct FDateTime BannerStartDate; // 0xa0(0x08)
	struct FDateTime BannerEndDate; // 0xa8(0x08)
	struct FDateTime HotStartDate; // 0xb0(0x08)
	struct FDateTime HotEndDate; // 0xb8(0x08)
	struct FDateTime NewStartDate; // 0xc0(0x08)
	struct FDateTime NewEndDate; // 0xc8(0x08)
	struct TArray<struct FString> RelatedItemsId; // 0xd0(0x10)
	bool mustHideParticipateButton; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// ScriptStruct DeadByDaylight.AtlantaBonusACEventsUIData
// Size: 0x120 (Inherited: 0xe8)
struct FAtlantaBonusACEventsUIData : FAtlantaBaseEventsUIData {
	struct FAtlantaAuricCellPacksUIData auricPacksData; // 0xe8(0x38)
};

// ScriptStruct DeadByDaylight.AtlantaCalendarEventsUIData
// Size: 0x118 (Inherited: 0xe8)
struct FAtlantaCalendarEventsUIData : FAtlantaBaseEventsUIData {
	char pad_E8[0x30]; // 0xe8(0x30)
};

// ScriptStruct DeadByDaylight.AtlantaDeepLinkData
// Size: 0x20 (Inherited: 0x08)
struct FAtlantaDeepLinkData : FDBDTableRowBase {
	struct FString URL; // 0x08(0x10)
	enum class EDeepLinkUid DeepLink; // 0x18(0x01)
	bool HasCustomParameters; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct DeadByDaylight.DeviceProfiles
// Size: 0x40 (Inherited: 0x08)
struct FDeviceProfiles : FDBDTableRowBase {
	struct FText Cpu; // 0x08(0x18)
	struct FText GPU; // 0x20(0x18)
	int32_t Quality; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct DeadByDaylight.AtlantaEventElementUIData
// Size: 0x30 (Inherited: 0x00)
struct FAtlantaEventElementUIData {
	enum class EPromoPackContentType ElementType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText DisplayName; // 0x08(0x18)
	struct FName NameID; // 0x20(0x0c)
	struct FColor Color; // 0x2c(0x04)
};

// ScriptStruct DeadByDaylight.AtlantaFreeTicketCombinedData
// Size: 0x230 (Inherited: 0x00)
struct FAtlantaFreeTicketCombinedData {
	struct FAtlantaFreeTicketUIData UIData; // 0x00(0x220)
	enum class EPlayerRole Role; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	int32_t DurationInMinutes; // 0x224(0x04)
	int32_t Quantity; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
};

// ScriptStruct DeadByDaylight.BaseItemData
// Size: 0x168 (Inherited: 0x08)
struct FBaseItemData : FDBDTableRowBase {
	enum class EInventoryItemType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FItemUIData UIData; // 0x10(0xc0)
	struct FText GenericDisplayName; // 0xd0(0x18)
	struct TSoftClassPtr<UObject> ItemBlueprint; // 0xe8(0x30)
	struct TSoftObjectPtr<UDBDPrimaryDataAsset> AssetData; // 0x118(0x30)
	struct FString ItemId; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)
};

// ScriptStruct DeadByDaylight.ItemUIData
// Size: 0xc0 (Inherited: 0x00)
struct FItemUIData {
	struct FText DisplayName; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct TArray<struct FString> IconFilePathList; // 0x30(0x10)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> IconAssetList; // 0x40(0x10)
	struct FCustomTransformation CustomTransformation; // 0x50(0x14)
	uint32_t PlatformsUnlicensedNameOverride; // 0x64(0x04)
	uint32_t PlatformsUnlicensedDescriptionOverride; // 0x68(0x04)
	uint32_t PlatformsForIconUnlicensedFilePathListOverride; // 0x6c(0x04)
	struct TArray<struct FString> IconUnlicensedFilePathListOverride; // 0x70(0x10)
	bool LicenseExpirationOverride; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FText DisplayNameUnlicensedOverride; // 0x88(0x18)
	struct FText DescriptionUnlicensedOverride; // 0xa0(0x18)
	int32_t AssociatedCharacterIndex; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct DeadByDaylight.ItemData
// Size: 0x1f8 (Inherited: 0x168)
struct FItemData : FBaseItemData {
	struct TSoftObjectPtr<USkeletalMesh> ItemMesh; // 0x168(0x30)
	enum class EItemHandPosition HandPosition; // 0x198(0x01)
	enum class EPlayerRole Role; // 0x199(0x01)
	enum class EItemRarity Rarity; // 0x19a(0x01)
	bool Inventory; // 0x19b(0x01)
	bool Chest; // 0x19c(0x01)
	enum class EKillerAbilities RequiredKillerAbility; // 0x19d(0x01)
	char pad_19E[0x2]; // 0x19e(0x02)
	struct FItemAvailability Availability; // 0x1a0(0x40)
	bool IsInNonViolentBuild; // 0x1e0(0x01)
	bool IsAvailableInAtlantaBuild; // 0x1e1(0x01)
	bool AntiDLC; // 0x1e2(0x01)
	bool Bloodweb; // 0x1e3(0x01)
	bool CanKeepInLoadout; // 0x1e4(0x01)
	bool IsBotSupported; // 0x1e5(0x01)
	char pad_1E6[0x2]; // 0x1e6(0x02)
	struct FName EventId; // 0x1e8(0x0c)
	bool CanUseAfterEventEnd; // 0x1f4(0x01)
	enum class ELoadoutItemType ItemType; // 0x1f5(0x01)
	char pad_1F6[0x2]; // 0x1f6(0x02)
};

// ScriptStruct DeadByDaylight.ItemAvailability
// Size: 0x40 (Inherited: 0x00)
struct FItemAvailability {
	enum class EItemAvailability ItemAvailability; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString DLCId; // 0x08(0x10)
	struct TArray<struct FString> AdditionalDlcIds; // 0x18(0x10)
	int32_t CloudInventoryId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString CommunityId; // 0x30(0x10)
};

// ScriptStruct DeadByDaylight.AtlantaFreeTicketUIData
// Size: 0x220 (Inherited: 0x1f8)
struct FAtlantaFreeTicketUIData : FItemData {
	struct FSlateColor IconColor; // 0x1f8(0x28)
};

// ScriptStruct DeadByDaylight.AtlantaFreeTicketAffectedUIData
// Size: 0x30 (Inherited: 0x00)
struct FAtlantaFreeTicketAffectedUIData {
	struct FString InEffectBGFilePath; // 0x00(0x10)
	struct FName ID; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FDateTime EndDate; // 0x20(0x08)
	bool HasFreeTicketToUse; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct DeadByDaylight.AtlantaGenericEventUIData
// Size: 0xf8 (Inherited: 0xe8)
struct FAtlantaGenericEventUIData : FAtlantaBaseEventsUIData {
	struct TArray<struct FAtlantaEventElementUIData> elementsUIData; // 0xe8(0x10)
};

// ScriptStruct DeadByDaylight.AtlantaKillerSoundDistanceData
// Size: 0x18 (Inherited: 0x08)
struct FAtlantaKillerSoundDistanceData : FDBDTableRowBase {
	float MinRadiusSoundDistance; // 0x08(0x04)
	float MaxRadiusSoundDistance; // 0x0c(0x04)
	float MinRangeSoundHeard; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.AtlantaKillerSoundIndicatorData
// Size: 0x38 (Inherited: 0x08)
struct FAtlantaKillerSoundIndicatorData : FDBDTableRowBase {
	float MinRadiusSoundDistance; // 0x08(0x04)
	float MaxRadiusSoundDistance; // 0x0c(0x04)
	float MinRangeSoundHeard; // 0x10(0x04)
	bool CanBeGlobalSound; // 0x14(0x01)
	bool CanDiminishWithDistance; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct FAtlantaKillerSoundConditionData> GlobalSoundConditions; // 0x18(0x10)
	struct TArray<struct FAtlantaKillerSoundConditionData> DiminishWithDistanceConditions; // 0x28(0x10)
};

// ScriptStruct DeadByDaylight.AtlantaKillerSoundConditionData
// Size: 0x20 (Inherited: 0x08)
struct FAtlantaKillerSoundConditionData : FDBDTableRowBase {
	struct FName RTPCAudioID; // 0x08(0x0c)
	float ComparisonValue; // 0x14(0x04)
	enum class EKillerSoundComparisonType ValueComparisonType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct DeadByDaylight.AtlantaMonthlyPassEventUIData
// Size: 0x128 (Inherited: 0xe8)
struct FAtlantaMonthlyPassEventUIData : FAtlantaBaseEventsUIData {
	char pad_E8[0x40]; // 0xe8(0x40)
};

// ScriptStruct DeadByDaylight.AtlantaNoiseIndicatorDistanceData
// Size: 0x20 (Inherited: 0x08)
struct FAtlantaNoiseIndicatorDistanceData : FDBDTableRowBase {
	struct FString Description; // 0x08(0x10)
	float DistanceForNoiseIndicatorToAppear; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.AtlantaOnBoardingData
// Size: 0x48 (Inherited: 0x08)
struct FAtlantaOnBoardingData : FDBDTableRowBase {
	struct FName onBoardingID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Title; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
};

// ScriptStruct DeadByDaylight.AtlantaRewardUIData
// Size: 0x60 (Inherited: 0x00)
struct FAtlantaRewardUIData {
	struct FName ID; // 0x00(0x0c)
	enum class EAtlantaRewardType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString IconFilePath; // 0x18(0x10)
	enum class ECurrencyType Currency; // 0x28(0x01)
	enum class EItemRarity Rarity; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FText DisplayName; // 0x30(0x18)
	struct FText Description; // 0x48(0x18)
};

// ScriptStruct DeadByDaylight.AtlantaRitualsUIScreenData
// Size: 0x30 (Inherited: 0x00)
struct FAtlantaRitualsUIScreenData {
	struct FDateTime DailyRefreshTime; // 0x00(0x08)
	struct FDateTime WeeklyRefreshTime; // 0x08(0x08)
	struct TArray<struct FAtlantaRitualUIData> DailyRituals; // 0x10(0x10)
	struct TArray<struct FAtlantaRitualUIData> WeeklyRituals; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.AtlantaRitualUIData
// Size: 0x68 (Inherited: 0x00)
struct FAtlantaRitualUIData {
	int32_t ID; // 0x00(0x04)
	enum class EAltantaRitualUIType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString Title; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct FString IconFilePath; // 0x28(0x10)
	bool IsNew; // 0x38(0x01)
	bool isClaimed; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float ProgressPercentage; // 0x3c(0x04)
	int32_t RefreshPrice; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FAtlantaRitualRewardUIData> Rewards; // 0x48(0x10)
	struct TArray<struct FAtlantaSubRitualUIData> SubRituals; // 0x58(0x10)
};

// ScriptStruct DeadByDaylight.AtlantaSubRitualUIData
// Size: 0x18 (Inherited: 0x00)
struct FAtlantaSubRitualUIData {
	struct FString Description; // 0x00(0x10)
	int32_t TargetNumber; // 0x10(0x04)
	int32_t CurrentNumber; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.AtlantaRitualRewardUIData
// Size: 0x20 (Inherited: 0x00)
struct FAtlantaRitualRewardUIData {
	enum class EAtlantaRitualRewardUIType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Quantity; // 0x04(0x04)
	struct FString IconFilePath; // 0x08(0x10)
	enum class EItemRarity Rarity; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct DeadByDaylight.AtlantaTutorialEndReward
// Size: 0x28 (Inherited: 0x08)
struct FAtlantaTutorialEndReward : FDBDTableRowBase {
	int32_t BloodpointReward; // 0x08(0x04)
	int32_t AuricCellsRewards; // 0x0c(0x04)
	int32_t FearTokensReward; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FName> CharactersRewards; // 0x18(0x10)
};

// ScriptStruct DeadByDaylight.AtlantaTutorialLevelData
// Size: 0x70 (Inherited: 0x08)
struct FAtlantaTutorialLevelData : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Title; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct FString IconPath; // 0x48(0x10)
	struct FString MapName; // 0x58(0x10)
	bool IsKillerTutorial; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct DeadByDaylight.TutorialNotificationData
// Size: 0xb0 (Inherited: 0x08)
struct FTutorialNotificationData : FDBDTableRowBase {
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FString IconPath; // 0x38(0x10)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x48(0x30)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x78(0x30)
	bool IsShowAnalyticEnabled; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct DeadByDaylight.AtlantaTutorialNotificationData
// Size: 0xc0 (Inherited: 0xb0)
struct FAtlantaTutorialNotificationData : FTutorialNotificationData {
	struct TArray<struct TSoftObjectPtr<UPaperSprite>> Textures; // 0xb0(0x10)
};

// ScriptStruct DeadByDaylight.AtlantaTutorialTallyData
// Size: 0x20 (Inherited: 0x00)
struct FAtlantaTutorialTallyData {
	bool IsKiller; // 0x00(0x01)
	bool FirstTimeCompleted; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t BloodpointsScore; // 0x04(0x04)
	int32_t AuricCells; // 0x08(0x04)
	int32_t FearTokens; // 0x0c(0x04)
	struct TArray<struct FName> Characters; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.AtlCookedMapDescription
// Size: 0x40 (Inherited: 0x00)
struct FAtlCookedMapDescription {
	struct FName ThemeName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<UWorld> MapAsset; // 0x10(0x30)
};

// ScriptStruct DeadByDaylight.AttackEventTypeDetails
// Size: 0x30 (Inherited: 0x08)
struct FAttackEventTypeDetails : FDBDTableRowBase {
	struct FGameplayTag GameplayTag; // 0x08(0x0c)
	enum class EAttackEventType AttackEventType; // 0x14(0x01)
	bool CanBeProtective; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32_t AssociatedCharacter; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Description; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.AttackHitResult
// Size: 0x88 (Inherited: 0x00)
struct FAttackHitResult {
	struct ADBDPlayer* Attacker; // 0x00(0x08)
	struct ADBDPlayer* Target; // 0x08(0x08)
	struct UDBDAttack* Attack; // 0x10(0x08)
	bool IsBasicAttack; // 0x18(0x01)
	bool CosmeticOnly; // 0x19(0x01)
	char pad_1A[0x6e]; // 0x1a(0x6e)
};

// ScriptStruct DeadByDaylight.AvailableInteractionCalculator
// Size: 0x1c0 (Inherited: 0x00)
struct FAvailableInteractionCalculator {
	char pad_0[0x48]; // 0x00(0x48)
	struct TSet<struct UInteractionDefinition*> _interactions; // 0x48(0x50)
	char pad_98[0x118]; // 0x98(0x118)
	float _fullEvaluationFrequency; // 0x1b0(0x04)
	int32_t _maxFramesForFullEvaluation; // 0x1b4(0x04)
	float _secondsBetweenNullReferenceCleanup; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// ScriptStruct DeadByDaylight.BackendCinematicsContent
// Size: 0x10 (Inherited: 0x00)
struct FBackendCinematicsContent {
	struct TArray<struct FBackendCinematicsContentData> Cinematics; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.BackendCinematicsContentData
// Size: 0x48 (Inherited: 0x00)
struct FBackendCinematicsContentData {
	struct FString ID; // 0x00(0x10)
	bool AllowSkip; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString StartDate; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FString EndDate; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct DeadByDaylight.BalanceToolGameConfig
// Size: 0x10 (Inherited: 0x00)
struct FBalanceToolGameConfig {
	struct TArray<struct FBalanceToolOverrideEntry> Overrides; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.BalanceToolOverrideEntry
// Size: 0x30 (Inherited: 0x00)
struct FBalanceToolOverrideEntry {
	struct FString DbName; // 0x00(0x10)
	struct FString RowName; // 0x10(0x10)
	struct FString value; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.BaseTooltipData
// Size: 0x98 (Inherited: 0x00)
struct FBaseTooltipData {
	struct FString Title; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct FVector2D touchPosition; // 0x20(0x08)
	struct TSoftClassPtr<UObject> LeftTooltipWidgetAsset; // 0x28(0x30)
	struct TSoftClassPtr<UObject> RightTooltipWidgetAsset; // 0x58(0x30)
	char pad_88[0x10]; // 0x88(0x10)
};

// ScriptStruct DeadByDaylight.BlindPackData
// Size: 0x168 (Inherited: 0x168)
struct FBlindPackData : FBaseItemData {
};

// ScriptStruct DeadByDaylight.BlockableReplicatedDatum
// Size: 0x20 (Inherited: 0x00)
struct FBlockableReplicatedDatum {
	struct TArray<struct TWeakObjectPtr<struct UObject>> Sources; // 0x00(0x10)
	struct TArray<struct FPlayerBlockData> BlockedPlayersData; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.PlayerBlockData
// Size: 0x18 (Inherited: 0x00)
struct FPlayerBlockData {
	struct ADBDPlayer* BlockedPlayer; // 0x00(0x08)
	struct FGameplayTag BlockStyle; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.BloodDecal
// Size: 0x6c (Inherited: 0x00)
struct FBloodDecal {
	char pad_0[0x6c]; // 0x00(0x6c)
};

// ScriptStruct DeadByDaylight.BloodstoreRowUnlockThreshold
// Size: 0x10 (Inherited: 0x08)
struct FBloodstoreRowUnlockThreshold : FDBDTableRowBase {
	int32_t PreviousRowPurchasedItemsCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.BloodwebChest
// Size: 0x38 (Inherited: 0x08)
struct FBloodwebChest : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	struct FName EventId; // 0x14(0x0c)
	enum class EBloodchestType ChestType; // 0x20(0x01)
	enum class EItemRarity Rarity; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<float> GivenItemRarity; // 0x28(0x10)
};

// ScriptStruct DeadByDaylight.BloodwebContentTypePerRingDistribution
// Size: 0x60 (Inherited: 0x08)
struct FBloodwebContentTypePerRingDistribution : FDBDTableRowBase {
	int32_t PerkPerRingMinCount; // 0x08(0x04)
	int32_t PerkPerRingMaxCount; // 0x0c(0x04)
	int32_t PerkPerRingWeight; // 0x10(0x04)
	int32_t OfferingPerRingMinCount; // 0x14(0x04)
	int32_t OfferingPerRingMaxCount; // 0x18(0x04)
	int32_t OfferingPerRingWeight; // 0x1c(0x04)
	int32_t ItemPerRingMinCount; // 0x20(0x04)
	int32_t ItemPerRingMaxCount; // 0x24(0x04)
	int32_t ItemPerRingWeight; // 0x28(0x04)
	int32_t AddOnPerRingMinCount; // 0x2c(0x04)
	int32_t AddOnPerRingMaxCount; // 0x30(0x04)
	int32_t AddOnPerRingWeight; // 0x34(0x04)
	int32_t ChestPerRingMinCount; // 0x38(0x04)
	int32_t ChestPerRingMaxCount; // 0x3c(0x04)
	int32_t ChestPerRingWeight; // 0x40(0x04)
	int32_t PerksPackPerRingMinCount; // 0x44(0x04)
	int32_t PerksPackPerRingMaxCount; // 0x48(0x04)
	int32_t PerksPackPerRingWeight; // 0x4c(0x04)
	int32_t IridiscentShardsPackPerRingMinCount; // 0x50(0x04)
	int32_t IridiscentShardsPackPerRingMaxCount; // 0x54(0x04)
	int32_t IridiscentShardsPackPerRingWeight; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct DeadByDaylight.BloodwebCostModifier
// Size: 0x10 (Inherited: 0x08)
struct FBloodwebCostModifier : FDBDTableRowBase {
	enum class EBloodwebNodeContentType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float CostModifier; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.BlockingNode
// Size: 0x18 (Inherited: 0x00)
struct FBlockingNode {
	struct FString ID; // 0x00(0x10)
	int32_t BlockingCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.BloodwebGenerationRulesData
// Size: 0x70 (Inherited: 0x00)
struct FBloodwebGenerationRulesData {
	struct TArray<struct FBloodwebRingComposition> RingComposition; // 0x00(0x10)
	struct FBloodwebRarityCost RarityCost; // 0x10(0x28)
	struct FBloodwebTypeCostModifiers TypeCostModifiers; // 0x38(0x14)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FBloodwebChestProbability> ChestProbability; // 0x50(0x10)
	struct TArray<struct FBloodwebEventChestProbability> EventChestProbability; // 0x60(0x10)
};

// ScriptStruct DeadByDaylight.BloodwebEventChestProbability
// Size: 0x20 (Inherited: 0x00)
struct FBloodwebEventChestProbability {
	struct FString EventId; // 0x00(0x10)
	struct TArray<struct FBloodwebChestProbability> Chests; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.BloodwebChestProbability
// Size: 0x20 (Inherited: 0x00)
struct FBloodwebChestProbability {
	struct FString ID; // 0x00(0x10)
	struct FString ChestRarity; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.BloodwebTypeCostModifiers
// Size: 0x14 (Inherited: 0x00)
struct FBloodwebTypeCostModifiers {
	float addon; // 0x00(0x04)
	float Chest; // 0x04(0x04)
	float Items; // 0x08(0x04)
	float offerings; // 0x0c(0x04)
	float Perks; // 0x10(0x04)
};

// ScriptStruct DeadByDaylight.BloodwebRarityCost
// Size: 0x28 (Inherited: 0x00)
struct FBloodwebRarityCost {
	int32_t Artifact; // 0x00(0x04)
	int32_t Common; // 0x04(0x04)
	int32_t Legendary; // 0x08(0x04)
	int32_t Rare; // 0x0c(0x04)
	int32_t SpecialEvent; // 0x10(0x04)
	int32_t Spectral; // 0x14(0x04)
	int32_t Teachable; // 0x18(0x04)
	int32_t UltraRare; // 0x1c(0x04)
	int32_t Uncommon; // 0x20(0x04)
	int32_t VeryRare; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.BloodwebRingComposition
// Size: 0x18 (Inherited: 0x00)
struct FBloodwebRingComposition {
	int32_t EntityStartingRound; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> NodeCountPerRing; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.BloodwebMandatoryContentByLevel
// Size: 0x30 (Inherited: 0x08)
struct FBloodwebMandatoryContentByLevel : FDBDTableRowBase {
	int32_t Level; // 0x08(0x04)
	struct FName ForcedItem01; // 0x0c(0x0c)
	struct FName ForcedItem02; // 0x18(0x0c)
	struct FName ForcedItem03; // 0x24(0x0c)
};

// ScriptStruct DeadByDaylight.BloodwebNode
// Size: 0x90 (Inherited: 0x00)
struct FBloodwebNode {
	struct FBloodwebNodeProperties Properties; // 0x00(0x20)
	struct TArray<struct FBloodwebNodeGate> Gates; // 0x20(0x10)
	enum class EBloodwebNodeState State; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString NodeId; // 0x38(0x10)
	struct FName ContentId; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FBloodwebChest BloodwebChest; // 0x58(0x38)
};

// ScriptStruct DeadByDaylight.BloodwebNodeGate
// Size: 0x08 (Inherited: 0x08)
struct FBloodwebNodeGate : FDBDTableRowBase {
};

// ScriptStruct DeadByDaylight.BloodwebNodeProperties
// Size: 0x20 (Inherited: 0x00)
struct FBloodwebNodeProperties {
	enum class EBloodwebNodeContentType ContentType; // 0x00(0x01)
	enum class EItemRarity Rarity; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FString> Tags; // 0x08(0x10)
	int32_t characterId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.ContentPerWebDistribution
// Size: 0x10 (Inherited: 0x00)
struct FContentPerWebDistribution {
	int32_t CumulativeWeight; // 0x00(0x04)
	int32_t Weight; // 0x04(0x04)
	int32_t MinCount; // 0x08(0x04)
	int32_t MaxCount; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.ContentPerRingDistribution
// Size: 0x30 (Inherited: 0x00)
struct FContentPerRingDistribution {
	struct TArray<int32_t> WeightList; // 0x00(0x10)
	struct TArray<int32_t> MinCountList; // 0x10(0x10)
	struct TArray<int32_t> MaxCountList; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.RarityPerWebDistribution
// Size: 0x0c (Inherited: 0x00)
struct FRarityPerWebDistribution {
	int32_t Weight; // 0x00(0x04)
	int32_t MinCount; // 0x04(0x04)
	int32_t MaxCount; // 0x08(0x04)
};

// ScriptStruct DeadByDaylight.RarityPerRingDistribution
// Size: 0x30 (Inherited: 0x00)
struct FRarityPerRingDistribution {
	struct TArray<int32_t> WeightList; // 0x00(0x10)
	struct TArray<int32_t> MinCountList; // 0x10(0x10)
	struct TArray<int32_t> MaxCountList; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.AccessNode
// Size: 0x18 (Inherited: 0x00)
struct FAccessNode {
	struct FString ID; // 0x00(0x10)
	int32_t AccessCost; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.BloodwebNodeCost
// Size: 0x10 (Inherited: 0x08)
struct FBloodwebNodeCost : FDBDTableRowBase {
	enum class EItemRarity Rarity; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Cost; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.BloodwebNodeRarityCost
// Size: 0x10 (Inherited: 0x08)
struct FBloodwebNodeRarityCost : FDBDTableRowBase {
	enum class EItemRarity Rarity; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Cost; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.BloodwebNodesPerRingDistribution
// Size: 0x10 (Inherited: 0x08)
struct FBloodwebNodesPerRingDistribution : FDBDTableRowBase {
	int32_t MinCount; // 0x08(0x04)
	int32_t MaxCount; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.BloodWebPersistentData
// Size: 0x50 (Inherited: 0x00)
struct FBloodWebPersistentData {
	int32_t VersionNumber; // 0x00(0x04)
	int32_t Level; // 0x04(0x04)
	struct TArray<struct FBloodWebRingPersistentData> RingData; // 0x08(0x10)
	struct TArray<struct FName> Paths; // 0x18(0x10)
	struct FString EntityCurrentNode; // 0x28(0x10)
	struct FDateTime GenerationDate; // 0x38(0x08)
	struct FString Seed; // 0x40(0x10)
};

// ScriptStruct DeadByDaylight.BloodWebRingPersistentData
// Size: 0x10 (Inherited: 0x00)
struct FBloodWebRingPersistentData {
	struct TArray<struct FBloodwebNode> NodeData; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.BloodwebPrestigeModifiers
// Size: 0x28 (Inherited: 0x08)
struct FBloodwebPrestigeModifiers : FDBDTableRowBase {
	float CommonItemProbabilityModifier; // 0x08(0x04)
	float UncommonItemProbabilityModifier; // 0x0c(0x04)
	float RareItemProbabilityModifier; // 0x10(0x04)
	float VeryRareItemProbabilityModifier; // 0x14(0x04)
	float UltraRareItemProbabilityModifier; // 0x18(0x04)
	float ArtifactItemProbabilityModifier; // 0x1c(0x04)
	float SpectralItemProbabilityModifier; // 0x20(0x04)
	float LegendaryItemProbabilityModifier; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.BloodwebProgressionValue
// Size: 0xf0 (Inherited: 0x08)
struct FBloodwebProgressionValue : FDBDTableRowBase {
	int32_t InnerRingNodeCount; // 0x08(0x04)
	int32_t MiddleRingNodeCount; // 0x0c(0x04)
	int32_t OuterRingNodeCount; // 0x10(0x04)
	int32_t Common_MinCount; // 0x14(0x04)
	int32_t Common_MaxCount; // 0x18(0x04)
	int32_t Uncommon_MinCount; // 0x1c(0x04)
	int32_t Uncommon_MaxCount; // 0x20(0x04)
	int32_t Rare_MinCount; // 0x24(0x04)
	int32_t Rare_MaxCount; // 0x28(0x04)
	int32_t VeryRare_MinCount; // 0x2c(0x04)
	int32_t VeryRare_MaxCount; // 0x30(0x04)
	int32_t UltraRare_MinCount; // 0x34(0x04)
	int32_t UltraRare_MaxCount; // 0x38(0x04)
	int32_t Artifact_MinCount; // 0x3c(0x04)
	int32_t Artifact_MaxCount; // 0x40(0x04)
	int32_t Spectral_MinCount; // 0x44(0x04)
	int32_t Spectral_MaxCount; // 0x48(0x04)
	int32_t SpecialEvent_MinCount; // 0x4c(0x04)
	int32_t SpecialEvent_MaxCount; // 0x50(0x04)
	int32_t Legendary_MinCount; // 0x54(0x04)
	int32_t Legendary_MaxCount; // 0x58(0x04)
	int32_t InnerRingCommonItemProbability; // 0x5c(0x04)
	int32_t MiddleRingCommonItemProbability; // 0x60(0x04)
	int32_t OuterRingCommonItemProbability; // 0x64(0x04)
	int32_t InnerRingUncommonItemProbability; // 0x68(0x04)
	int32_t MiddleRingUncommonItemProbability; // 0x6c(0x04)
	int32_t OuterRingUncommonItemProbability; // 0x70(0x04)
	int32_t InnerRingRareItemProbability; // 0x74(0x04)
	int32_t MiddleRingRareItemProbability; // 0x78(0x04)
	int32_t OuterRingRareItemProbability; // 0x7c(0x04)
	int32_t InnerRingVeryRareItemProbability; // 0x80(0x04)
	int32_t MiddleRingVeryRareItemProbability; // 0x84(0x04)
	int32_t OuterRingVeryRareItemProbability; // 0x88(0x04)
	int32_t InnerRingUltraRareItemProbability; // 0x8c(0x04)
	int32_t MiddleRingUltraRareItemProbability; // 0x90(0x04)
	int32_t OuterRingUltraRareItemProbability; // 0x94(0x04)
	int32_t InnerRingArtifactItemProbability; // 0x98(0x04)
	int32_t MiddleRingArtifactItemProbability; // 0x9c(0x04)
	int32_t OuterRingArtifactItemProbability; // 0xa0(0x04)
	int32_t InnerRingSpectralItemProbability; // 0xa4(0x04)
	int32_t MiddleRingSpectralItemProbability; // 0xa8(0x04)
	int32_t OuterRingSpectralItemProbability; // 0xac(0x04)
	int32_t InnerRingSpecialEventItemProbability; // 0xb0(0x04)
	int32_t MiddleRingSpecialEventItemProbability; // 0xb4(0x04)
	int32_t OuterRingSpecialEventItemProbability; // 0xb8(0x04)
	int32_t InnerRingLegendaryItemProbability; // 0xbc(0x04)
	int32_t MiddleRingLegendaryItemProbability; // 0xc0(0x04)
	int32_t OuterRingLegendaryItemProbability; // 0xc4(0x04)
	int32_t InnerRingEpicItemProbability; // 0xc8(0x04)
	int32_t MiddleRingEpicItemProbability; // 0xcc(0x04)
	int32_t OuterRingEpicItemProbability; // 0xd0(0x04)
	int32_t InnerRingSuperEpicItemProbability; // 0xd4(0x04)
	int32_t MiddleRingSuperEpicItemProbability; // 0xd8(0x04)
	int32_t OuterRingSuperEpicItemProbability; // 0xdc(0x04)
	int32_t InnerRingUltraEpicItemProbability; // 0xe0(0x04)
	int32_t MiddleRingUltraEpicItemProbability; // 0xe4(0x04)
	int32_t OuterRingUltraEpicItemProbability; // 0xe8(0x04)
	int32_t EntityStartingRound; // 0xec(0x04)
};

// ScriptStruct DeadByDaylight.BloodwebRarityPerRingDistribution
// Size: 0x98 (Inherited: 0x08)
struct FBloodwebRarityPerRingDistribution : FDBDTableRowBase {
	int32_t CommonMinCount; // 0x08(0x04)
	int32_t CommonMaxCount; // 0x0c(0x04)
	int32_t CommonWeight; // 0x10(0x04)
	int32_t UncommonMinCount; // 0x14(0x04)
	int32_t UncommonMaxCount; // 0x18(0x04)
	int32_t UncommonWeight; // 0x1c(0x04)
	int32_t RareMinCount; // 0x20(0x04)
	int32_t RareMaxCount; // 0x24(0x04)
	int32_t RareWeight; // 0x28(0x04)
	int32_t VeryRareMinCount; // 0x2c(0x04)
	int32_t VeryRareMaxCount; // 0x30(0x04)
	int32_t VeryRareWeight; // 0x34(0x04)
	int32_t UltraRareMinCount; // 0x38(0x04)
	int32_t UltraRareMaxCount; // 0x3c(0x04)
	int32_t UltraRareWeight; // 0x40(0x04)
	int32_t ArtefactMinCount; // 0x44(0x04)
	int32_t ArtefactMaxCount; // 0x48(0x04)
	int32_t ArtefactWeight; // 0x4c(0x04)
	int32_t SpectralMinCount; // 0x50(0x04)
	int32_t SpectralMaxCount; // 0x54(0x04)
	int32_t SpectralWeight; // 0x58(0x04)
	int32_t SpecialEventMinCount; // 0x5c(0x04)
	int32_t SpecialEventMaxCount; // 0x60(0x04)
	int32_t SpecialEventWeight; // 0x64(0x04)
	int32_t LegendaryMinCount; // 0x68(0x04)
	int32_t LegendaryMaxCount; // 0x6c(0x04)
	int32_t LegendaryWeight; // 0x70(0x04)
	int32_t EpicMinCount; // 0x74(0x04)
	int32_t EpicMaxCount; // 0x78(0x04)
	int32_t EpicWeight; // 0x7c(0x04)
	int32_t SuperEpicMinCount; // 0x80(0x04)
	int32_t SuperEpicMaxCount; // 0x84(0x04)
	int32_t SuperEpicWeight; // 0x88(0x04)
	int32_t UltraEpicMinCount; // 0x8c(0x04)
	int32_t UltraEpicMaxCount; // 0x90(0x04)
	int32_t UltraEpicWeight; // 0x94(0x04)
};

// ScriptStruct DeadByDaylight.DBDPerPlatformFloat
// Size: 0x04 (Inherited: 0x00)
struct FDBDPerPlatformFloat {
	struct FPerPlatformFloat value; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.DBDPerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FDBDPerPlatformInt {
	struct FPerPlatformInt value; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.BonusPointEventsData
// Size: 0x10 (Inherited: 0x00)
struct FBonusPointEventsData {
	struct TArray<struct FBonusPointEventsItemData> BonusPointEvents; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.BonusPointEventsItemData
// Size: 0xa0 (Inherited: 0x00)
struct FBonusPointEventsItemData {
	struct FString EventTitle; // 0x00(0x10)
	struct FString EventDescription; // 0x10(0x10)
	bool EventDescription_IsSet; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	uint32_t EventType; // 0x24(0x04)
	double Multiplier; // 0x28(0x08)
	struct FString starttime; // 0x30(0x10)
	struct FString EndTime; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)
};

// ScriptStruct DeadByDaylight.BorderElements
// Size: 0x18 (Inherited: 0x00)
struct FBorderElements {
	enum class EDirection Direction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UActorSpawner*> Elements; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.BotMatchConfig
// Size: 0x20 (Inherited: 0x00)
struct FBotMatchConfig {
	struct TArray<struct FString> DSPlatformSBM; // 0x00(0x10)
	struct TArray<struct FString> DSPlatformTutorialBotMatch; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.BundleData
// Size: 0xd0 (Inherited: 0x00)
struct FBundleData {
	struct FName ID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FItemUIData UIData; // 0x10(0xc0)
};

// ScriptStruct DeadByDaylight.CameraAttachment
// Size: 0x18 (Inherited: 0x00)
struct FCameraAttachment {
	struct USceneComponent* Parent; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.CamperDamageResult
// Size: 0x60 (Inherited: 0x00)
struct FCamperDamageResult {
	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* damageSource; // 0x10(0x08)
	struct ACharacter* damagePlayerOwner; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
	struct UGameplayModifierContainer* KOPreventedSource; // 0x28(0x08)
	char pad_30[0x30]; // 0x30(0x30)
};

// ScriptStruct DeadByDaylight.ManagedMaterialGroup
// Size: 0x30 (Inherited: 0x00)
struct FManagedMaterialGroup {
	struct UObject* Source; // 0x00(0x08)
	struct FString Group; // 0x08(0x10)
	struct FDelegate Condition; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct DeadByDaylight.CharacterAnimationAssetDropdown
// Size: 0x18 (Inherited: 0x00)
struct FCharacterAnimationAssetDropdown {
	bool IsAnimBP; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString AnimAsset; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.CharacterAnimationAssetOutfitOverride
// Size: 0x28 (Inherited: 0x18)
struct FCharacterAnimationAssetOutfitOverride : FCharacterAnimationAssetDropdown {
	struct FName OutfitId; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.RoleItemCategoryDropdown
// Size: 0x0c (Inherited: 0x08)
struct FRoleItemCategoryDropdown : FCharacterDropdown {
	bool IncludeOutfits; // 0x08(0x01)
	bool IncludeNone; // 0x09(0x01)
	enum class ECustomizationCategory category; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct DeadByDaylight.CharacterAnimationDropdown
// Size: 0x20 (Inherited: 0x0c)
struct FCharacterAnimationDropdown : FRoleItemCategoryDropdown {
	bool IncludeAllAnimations; // 0x0c(0x01)
	bool IsAnimBP; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FString AnimAsset; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.CharacterCustomizationDataTable
// Size: 0x40 (Inherited: 0x08)
struct FCharacterCustomizationDataTable : FDBDTableRowBase {
	int32_t characterIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<UDataTable> CustomizationStoreDB; // 0x10(0x30)
};

// ScriptStruct DeadByDaylight.CharacterCustomizationDropdown
// Size: 0x5c (Inherited: 0x08)
struct FCharacterCustomizationDropdown : FCharacterDropdown {
	struct FName OutfitId; // 0x08(0x0c)
	struct FName SurvivorHead; // 0x14(0x0c)
	struct FName SurvivorTorso; // 0x20(0x0c)
	struct FName SurvivorLegs; // 0x2c(0x0c)
	struct FName KillerHead; // 0x38(0x0c)
	struct FName KillerBody; // 0x44(0x0c)
	struct FName KillerWeapon; // 0x50(0x0c)
};

// ScriptStruct DeadByDaylight.CharacterCustomizationPresetsList
// Size: 0x18 (Inherited: 0x00)
struct FCharacterCustomizationPresetsList {
	int32_t characterId; // 0x00(0x04)
	int32_t ActivePreset; // 0x04(0x04)
	struct TArray<struct FCharacterCustomizationPreset> Presets; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.CharacterCustomizationPreset
// Size: 0x38 (Inherited: 0x00)
struct FCharacterCustomizationPreset {
	struct FName Head; // 0x00(0x0c)
	struct FName TorsoOrBody; // 0x0c(0x0c)
	struct FName LegsOrWeapon; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FCharmIdSlot> Charms; // 0x28(0x10)
};

// ScriptStruct DeadByDaylight.CharacterDescription
// Size: 0x240 (Inherited: 0x08)
struct FCharacterDescription : FDBDTableRowBase {
	int32_t characterIndex; // 0x08(0x04)
	enum class EPlayerRole Role; // 0x0c(0x01)
	enum class ECharacterDifficulty Difficulty; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FText DisplayName; // 0x10(0x18)
	struct FText BackStory; // 0x28(0x18)
	struct FText Biography; // 0x40(0x18)
	struct FName IconFilePath; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture2D* HudIcon; // 0x68(0x08)
	struct FName BackgroundImagePath; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FCustomizedMeshPart> CustomizationDescription; // 0x80(0x10)
	struct FString ChapterDlcId; // 0x90(0x10)
	struct TArray<struct FString> AdditionalDlcIds; // 0xa0(0x10)
	bool AvailableIfDlcInstalled; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FName DebugName; // 0xb4(0x0c)
	bool IsInChunk0; // 0xc0(0x01)
	bool IsAvailableInNonViolentBuild; // 0xc1(0x01)
	bool IsAvailableInAtlantaBuild; // 0xc2(0x01)
	char pad_C3[0x1]; // 0xc3(0x01)
	uint32_t PlatformExclusiveFlag; // 0xc4(0x04)
	struct TSoftClassPtr<UObject> GamePawn; // 0xc8(0x30)
	struct TSoftClassPtr<UObject> MenuPawn; // 0xf8(0x30)
	struct FName DefaultItem; // 0x128(0x0c)
	struct FName DefaultPerk; // 0x134(0x0c)
	enum class EGender gender; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct TArray<enum class EKillerAbilities> KillerAbilities; // 0x148(0x10)
	struct FDataTableProxy TunableDB; // 0x158(0x40)
	enum class EKillerHeight KillerHeight; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FSlideShowDescription SlideShowDescriptions; // 0x1a0(0x68)
	bool HideStoreCustomizations; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct TArray<struct FName> CustomizationCategories; // 0x210(0x10)
	struct FString characterId; // 0x220(0x10)
	char pad_230[0x10]; // 0x230(0x10)
};

// ScriptStruct DeadByDaylight.SlideShowDescription
// Size: 0x68 (Inherited: 0x08)
struct FSlideShowDescription : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Overview; // 0x18(0x18)
	struct FText Playstyle; // 0x30(0x18)
	struct FString ImageFilePath; // 0x48(0x10)
	struct TArray<enum class EPerkCategory> PerkCategory; // 0x58(0x10)
};

// ScriptStruct DeadByDaylight.CustomizedMeshPart
// Size: 0x48 (Inherited: 0x00)
struct FCustomizedMeshPart {
	enum class ECustomizationCategory category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDataTableDropdown DefaultItemId; // 0x08(0x30)
	struct FName SocketName; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct DeadByDaylight.CharacterDescriptionOverride
// Size: 0xd0 (Inherited: 0x08)
struct FCharacterDescriptionOverride : FDBDTableRowBase {
	struct TArray<struct FName> RequiredItemIds; // 0x08(0x10)
	struct FText DisplayNameOverride; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> HudIconOverride; // 0x30(0x30)
	struct TSoftClassPtr<UObject> MenuBlueprint; // 0x60(0x30)
	struct TSoftClassPtr<UObject> GameBlueprint; // 0x90(0x30)
	struct FName IconFilePathOverride; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct DeadByDaylight.CharacterInfoData
// Size: 0x320 (Inherited: 0x00)
struct FCharacterInfoData {
	struct FCharacterSlotData SlotData; // 0x00(0x1c8)
	struct FString Description; // 0x1c8(0x10)
	struct TArray<struct FTeachableData> TeachablePerksData; // 0x1d8(0x10)
	struct FInventorySlotData PowerData; // 0x1e8(0x128)
	struct FKillerAttributesData KillerAttributesData; // 0x310(0x0c)
	bool IsKiller; // 0x31c(0x01)
	bool IsEnabled; // 0x31d(0x01)
	char pad_31E[0x2]; // 0x31e(0x02)
};

// ScriptStruct DeadByDaylight.KillerAttributesData
// Size: 0x0c (Inherited: 0x00)
struct FKillerAttributesData {
	float Speed; // 0x00(0x04)
	float TerrorRadius; // 0x04(0x04)
	enum class EKillerHeight Height; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct DeadByDaylight.CharacterSlotData
// Size: 0x1c8 (Inherited: 0x00)
struct FCharacterSlotData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ID; // 0x08(0x0c)
	int32_t characterIndex; // 0x14(0x04)
	struct FString IconFilePath; // 0x18(0x10)
	struct FString BackgroundImagePath; // 0x28(0x10)
	struct FString DisplayName; // 0x38(0x10)
	struct FString Biography; // 0x48(0x10)
	struct FString DLCId; // 0x58(0x10)
	struct FString DLCTitle; // 0x68(0x10)
	struct FString PackId; // 0x78(0x10)
	struct FString PackTitle; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	struct FPrestigeData PrestigeData; // 0x9c(0x08)
	enum class ECharacterDifficulty Difficulty; // 0xa4(0x01)
	bool IsUnlocked; // 0xa5(0x01)
	bool IsDLCPurchasable; // 0xa6(0x01)
	bool IsDLCValid; // 0xa7(0x01)
	struct TArray<struct FPurchaseCurrencyData> PurchaseDataList; // 0xa8(0x10)
	int32_t ItemsOwned; // 0xb8(0x04)
	int32_t TotalItems; // 0xbc(0x04)
	bool ShowNew; // 0xc0(0x01)
	bool IsDlcLockedKiller; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct FSpecialEventUIInfo EventInfo; // 0xc8(0x60)
	bool IsEnabled; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	bool HasNonSelectedPerks; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FAtlantaFreeTicketAffectedUIData FreeTicketAffectedData; // 0x138(0x30)
	char pad_168[0x30]; // 0x168(0x30)
	enum class EPlayerRole PlayerRole; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FString RemainingTimeItem; // 0x1a0(0x10)
	struct FString RemainingTimeDiscount; // 0x1b0(0x10)
	char pad_1C0[0x8]; // 0x1c0(0x08)
};

// ScriptStruct DeadByDaylight.PrestigeData
// Size: 0x08 (Inherited: 0x00)
struct FPrestigeData {
	int32_t Level; // 0x00(0x04)
	float Progress; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.CharacterLevelData
// Size: 0x20 (Inherited: 0x00)
struct FCharacterLevelData {
	int32_t Level; // 0x00(0x04)
	int32_t ExperienceToNextLevel; // 0x04(0x04)
	bool IsComplete; // 0x08(0x01)
	bool HasPerksBeenSelected; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FAssignedPerkProperties> PerkSelection; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.CharacterLoadoutPresetsList
// Size: 0x18 (Inherited: 0x00)
struct FCharacterLoadoutPresetsList {
	int32_t characterId; // 0x00(0x04)
	int32_t ActivePreset; // 0x04(0x04)
	struct TArray<struct FCharacterLoadoutPreset> Presets; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.CharacterLoadoutPreset
// Size: 0x40 (Inherited: 0x00)
struct FCharacterLoadoutPreset {
	struct FName PowerOrItem; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> addons; // 0x10(0x10)
	struct TArray<struct FName> Perks; // 0x20(0x10)
	struct FName Favor; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct DeadByDaylight.LoadoutPresetListId
// Size: 0x08 (Inherited: 0x00)
struct FLoadoutPresetListId {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct DeadByDaylight.CharacterSlideData
// Size: 0x68 (Inherited: 0x00)
struct FCharacterSlideData {
	struct FString DisplayName; // 0x00(0x10)
	struct FString Overview; // 0x10(0x10)
	struct FString Playstyle; // 0x20(0x10)
	enum class EPlayerRole Role; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ImageFilePath; // 0x38(0x10)
	struct TArray<enum class EPerkCategory> SurvivorPerkCategories; // 0x48(0x10)
	struct FString KillerPowerIconPath; // 0x58(0x10)
};

// ScriptStruct DeadByDaylight.CharacterToolItemData
// Size: 0x10 (Inherited: 0x00)
struct FCharacterToolItemData {
	enum class ECharacterToolItemType _type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName _id; // 0x04(0x0c)
};

// ScriptStruct DeadByDaylight.CharacterToolSpawnParameters
// Size: 0x03 (Inherited: 0x00)
struct FCharacterToolSpawnParameters {
	bool IsAnimated; // 0x00(0x01)
	bool ShowPower; // 0x01(0x01)
	bool UseMasterPoseForItems; // 0x02(0x01)
};

// ScriptStruct DeadByDaylight.CharacterToolData
// Size: 0x80 (Inherited: 0x00)
struct FCharacterToolData {
	enum class EPlayerRole Role; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t characterId; // 0x04(0x04)
	struct FName OutfitId; // 0x08(0x0c)
	struct FName CharmId; // 0x14(0x0c)
	struct FName SurvivorHead; // 0x20(0x0c)
	struct FName SurvivorTorso; // 0x2c(0x0c)
	struct FName SurvivorLegs; // 0x38(0x0c)
	struct FName KillerHead; // 0x44(0x0c)
	struct FName KillerBody; // 0x50(0x0c)
	struct FName KillerWeapon; // 0x5c(0x0c)
	bool IsAnimBP; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString AnimAsset; // 0x70(0x10)
};

// ScriptStruct DeadByDaylight.ChargeData
// Size: 0x10 (Inherited: 0x00)
struct FChargeData {
	struct AActor* Instigator; // 0x00(0x08)
	float ChargeAmount; // 0x08(0x04)
	bool BypassSkillCheckFail; // 0x0c(0x01)
	bool IsOneTimeIncrease; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct DeadByDaylight.CharmAttacherAnimationTweak
// Size: 0x28 (Inherited: 0x00)
struct FCharmAttacherAnimationTweak {
	struct UAnimInstance* OverrideAnimInstance; // 0x00(0x08)
	struct FVector AttachPointTranslation; // 0x08(0x0c)
	struct FRotator AttachPointRotation; // 0x14(0x0c)
	int32_t ConstraintType; // 0x20(0x04)
	float MagicTweakingFloat; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.CharmDropdown
// Size: 0x10 (Inherited: 0x02)
struct FCharmDropdown : FRoleDropdown {
	bool ShowCharmSelection; // 0x02(0x01)
	bool ShowCommonCharms; // 0x03(0x01)
	struct FName CharmId; // 0x04(0x0c)
};

// ScriptStruct DeadByDaylight.CharmSlot
// Size: 0xb8 (Inherited: 0x00)
struct FCharmSlot {
	int32_t slotIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftClassPtr<UObject> CharmAttacherClass; // 0x08(0x30)
	struct FCharmAttacherAnimationTweak DefaultAnimationTweak; // 0x38(0x28)
	struct TMap<struct FName, struct FCharmAttacherAnimationTweak> AnimationTweakByTag; // 0x60(0x50)
	struct ACharmAttacher* CharmAttacherSpawned; // 0xb0(0x08)
};

// ScriptStruct DeadByDaylight.ChaseUpdateInfo
// Size: 0x48 (Inherited: 0x00)
struct FChaseUpdateInfo {
	struct FTargetFocusTimer ChaseTimer; // 0x00(0x38)
	float SurvivorTravelDistance; // 0x38(0x04)
	float KillerTravelDistance; // 0x3c(0x04)
	enum class ECamperDamageState ChaseStartHealthStatus; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct DeadByDaylight.Cinematic
// Size: 0x58 (Inherited: 0x00)
struct FCinematic {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct DeadByDaylight.MaterialOriginalState
// Size: 0x18 (Inherited: 0x00)
struct FMaterialOriginalState {
	struct UMeshComponent* MeshWithChangedMaterials; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterial; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.MaterialMapForClip
// Size: 0x28 (Inherited: 0x08)
struct FMaterialMapForClip : FDBDTableRowBase {
	struct UMaterialInterface* SrcMaterial; // 0x08(0x08)
	struct UMaterialInterface* DstMaterial; // 0x10(0x08)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> StaticMeshToApply; // 0x18(0x10)
};

// ScriptStruct DeadByDaylight.StaticMeshesArrayForClip
// Size: 0x10 (Inherited: 0x00)
struct FStaticMeshesArrayForClip {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.CombinedPartyFriendData
// Size: 0x168 (Inherited: 0x00)
struct FCombinedPartyFriendData {
	char pad_0[0x168]; // 0x00(0x168)
};

// ScriptStruct DeadByDaylight.CombinedSpecialEventData
// Size: 0x2c0 (Inherited: 0x00)
struct FCombinedSpecialEventData {
	char pad_0[0x2c0]; // 0x00(0x2c0)
};

// ScriptStruct DeadByDaylight.CommentatorAudioContext
// Size: 0x30 (Inherited: 0x00)
struct FCommentatorAudioContext {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FAkEventWithSubtitle> AudioEvents; // 0x08(0x10)
	int32_t PlayProbability; // 0x18(0x04)
	struct FInt32Range Delay; // 0x1c(0x10)
	char NumMatchesBeforeContextRepeat; // 0x2c(0x01)
	char NumOccurencesBeforeEventRepeat; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct DeadByDaylight.AkEventWithSubtitle
// Size: 0x38 (Inherited: 0x00)
struct FAkEventWithSubtitle {
	struct UAkAudioEvent* AudioEvent; // 0x00(0x08)
	char Weight; // 0x08(0x01)
	bool HasSubtitles; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FCustomSoundFXData> RequiredAudioSwitch; // 0x10(0x10)
	struct TArray<struct FCustomSoundFXData> ForbiddenAudioSwitch; // 0x20(0x10)
	uint32_t DelayMsBeforeSubtitles; // 0x30(0x04)
	int32_t SubtitleEventPriority; // 0x34(0x04)
};

// ScriptStruct DeadByDaylight.CustomSoundFXData
// Size: 0x18 (Inherited: 0x00)
struct FCustomSoundFXData {
	enum class EAudioCustomizationCategory AudioCategory; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString switchState; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.CommentatorContextCodeMapping
// Size: 0x18 (Inherited: 0x08)
struct FCommentatorContextCodeMapping : FDBDTableRowBase {
	struct FGameplayTag GameEventTag; // 0x08(0x0c)
	enum class ECommentatorContextCode CommentatorContextCode; // 0x14(0x01)
	enum class EPlayerTeam RequiredPlayerTeam; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct DeadByDaylight.ConsentContentData
// Size: 0x20 (Inherited: 0x00)
struct FConsentContentData {
	struct FString ID; // 0x00(0x10)
	struct TArray<struct FConsentContentVersionData> Versions; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.ConsentContentVersionData
// Size: 0xc0 (Inherited: 0x00)
struct FConsentContentVersionData {
	struct FString label; // 0x00(0x10)
	int64_t EntryDate; // 0x10(0x08)
	struct TMap<struct FString, struct FString> Title; // 0x18(0x50)
	struct TMap<struct FString, struct FString> Content; // 0x68(0x50)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct DeadByDaylight.ConsentDefinitionData
// Size: 0x50 (Inherited: 0x00)
struct FConsentDefinitionData {
	struct FString ID; // 0x00(0x10)
	struct TArray<struct FString> platform; // 0x10(0x10)
	struct TArray<struct FString> Sku; // 0x20(0x10)
	bool Sku_IsSet; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FString> Language; // 0x38(0x10)
	bool NeedAcceptance; // 0x48(0x01)
	bool IsMandatory; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct DeadByDaylight.ContentMetadata
// Size: 0x18 (Inherited: 0x00)
struct FContentMetadata {
	bool RebootClient; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString DeploymentDate; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.ContentScheduleData
// Size: 0x20 (Inherited: 0x00)
struct FContentScheduleData {
	struct TArray<struct FContentScheduleRecord> Schedule; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.ContentScheduleRecord
// Size: 0x140 (Inherited: 0x00)
struct FContentScheduleRecord {
	int32_t Priority; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Description; // 0x08(0x10)
	bool Description_IsSet; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString LinkedEventId; // 0x20(0x10)
	bool LinkedEventId_IsSet; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TMap<struct FString, float> MapsThemeWeight; // 0x38(0x50)
	bool MapsThemeWeight_IsSet; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TMap<struct FString, float> MapsWeight; // 0x90(0x50)
	bool MapsWeight_IsSet; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TArray<struct FString> FeaturedMap; // 0xe8(0x10)
	bool FeaturedMap_IsSet; // 0xf8(0x01)
	char pad_F9[0x17]; // 0xf9(0x17)
	struct FString StartDate; // 0x110(0x10)
	bool StartDate_IsSet; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FString EndDate; // 0x128(0x10)
	bool EndDate_IsSet; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// ScriptStruct DeadByDaylight.ContextEventData
// Size: 0x68 (Inherited: 0x00)
struct FContextEventData {
	struct FString ContextGroupName; // 0x00(0x10)
	uint32_t ContextGroupUid; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PreviousContextName; // 0x18(0x10)
	uint32_t PreviousContextUid; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString CurrentContextName; // 0x30(0x10)
	uint32_t CurrentContextUid; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString NextContextName; // 0x48(0x10)
	uint32_t NextContextUid; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FDateTime Timestamp; // 0x60(0x08)
};

// ScriptStruct DeadByDaylight.CoreRitualsBackendData
// Size: 0x30 (Inherited: 0x08)
struct FCoreRitualsBackendData : FDBDTableRowBase {
	int32_t DifficultyThreshold; // 0x08(0x04)
	float DifficultyTolerance; // 0x0c(0x04)
	int32_t DifficultyDisplayThreshold; // 0x10(0x04)
	enum class ERewardType DifficultyRewardsType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t DifficultyRewardsAmount; // 0x18(0x04)
	enum class ECurrencyType DifficultyRewardsId; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FString ritualId; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.CoreRitualsContent
// Size: 0x18 (Inherited: 0x00)
struct FCoreRitualsContent {
	struct FCoreRitualsTunables Config; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCoreRitualsEntry> Data; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.CoreRitualsEntry
// Size: 0x20 (Inherited: 0x00)
struct FCoreRitualsEntry {
	struct FString ID; // 0x00(0x10)
	struct TArray<struct FCoreRitualsDifficulty> Difficulty; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.CoreRitualsDifficulty
// Size: 0x20 (Inherited: 0x00)
struct FCoreRitualsDifficulty {
	float Threshold; // 0x00(0x04)
	float Tolerance; // 0x04(0x04)
	int32_t DisplayThreshold; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FRewardResponseItem> Rewards; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.CoreRitualsTunables
// Size: 0x04 (Inherited: 0x00)
struct FCoreRitualsTunables {
	int32_t MaxRituals; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.CurrencyPackData
// Size: 0x200 (Inherited: 0x1f8)
struct FCurrencyPackData : FItemData {
	enum class ECurrencyType CurrencyType; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
};

// ScriptStruct DeadByDaylight.CurrencyUIData
// Size: 0x78 (Inherited: 0x08)
struct FCurrencyUIData : FDBDTableRowBase {
	enum class ECurrencyType CurrencyType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Description; // 0x10(0x18)
	struct FText DisplayName; // 0x28(0x18)
	struct FString IconPath; // 0x40(0x10)
	struct FSlateColor CurrencyColorTheme; // 0x50(0x28)
};

// ScriptStruct DeadByDaylight.CustomizationCategoryData
// Size: 0x48 (Inherited: 0x08)
struct FCustomizationCategoryData : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	enum class ECustomizationCategory category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString IconPath; // 0x18(0x10)
	struct FText DisplayName; // 0x28(0x18)
	enum class EPlayerRole Role; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct DeadByDaylight.CustomizationData
// Size: 0x140 (Inherited: 0x08)
struct FCustomizationData : FDBDTableRowBase {
	int32_t AssociatedCharacter; // 0x08(0x04)
	enum class EPlayerRole AssociatedRole; // 0x0c(0x01)
	enum class EItemRarity Rarity; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FItemUIData UIData; // 0x10(0xc0)
	struct FItemAvailability Availability; // 0xd0(0x40)
	struct FString InclusionVersion; // 0x110(0x10)
	struct FString CustomizationId; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
};

// ScriptStruct DeadByDaylight.CustomizationItemData
// Size: 0x378 (Inherited: 0x140)
struct FCustomizationItemData : FCustomizationData {
	enum class ECustomizationCategory category; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct TSoftObjectPtr<USkeletalMesh> ItemMesh; // 0x148(0x30)
	struct TSoftClassPtr<UObject> AnimClass; // 0x178(0x30)
	struct TSoftClassPtr<UObject> ItemBlueprint; // 0x1a8(0x30)
	struct TArray<struct FMaterialReplacerData> MaterialsMap; // 0x1d8(0x10)
	struct FConditionalMaterialReplacer ConditionalMaterialReplacer; // 0x1e8(0x60)
	struct TArray<struct FTextureReplacerData> TexturesMap; // 0x248(0x10)
	struct TArray<struct FName> SkeletalComponentTags; // 0x258(0x10)
	struct FGameplayTagContainer CosmeticOverrideSemanticTags; // 0x268(0x20)
	struct FText CollectionName; // 0x288(0x18)
	struct FText CollectionDescription; // 0x2a0(0x18)
	int32_t PrestigeUlockLevel; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FString PrestigeUnlockDate; // 0x2c0(0x10)
	struct FName EventId; // 0x2d0(0x0c)
	enum class ECharmCategory CharmCategory; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct TArray<struct FBPAttachementSocketData> SocketAttachements; // 0x2e0(0x10)
	struct TArray<struct FUnlockSaveStatCondition> UnlockingConditions; // 0x2f0(0x10)
	bool IsInStore; // 0x300(0x01)
	bool IsInNonViolentBuild; // 0x301(0x01)
	bool IsAvailableInAtlantaBuild; // 0x302(0x01)
	char pad_303[0x1]; // 0x303(0x01)
	uint32_t PlatformExclusiveFlag; // 0x304(0x04)
	struct TArray<struct FCustomSoundFXData> CustomSFXs; // 0x308(0x10)
	struct FCustomAnimData AnimationData; // 0x318(0x60)
};

// ScriptStruct DeadByDaylight.CustomAnimData
// Size: 0x60 (Inherited: 0x00)
struct FCustomAnimData {
	struct TSoftClassPtr<UObject> MenuAnimationBlueprint; // 0x00(0x30)
	struct TSoftClassPtr<UObject> InGameAnimationBlueprint; // 0x30(0x30)
};

// ScriptStruct DeadByDaylight.UnlockSaveStatCondition
// Size: 0x14 (Inherited: 0x00)
struct FUnlockSaveStatCondition {
	struct FName StatName; // 0x00(0x0c)
	float ValueRequired; // 0x0c(0x04)
	bool isCharacterSpecific; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct DeadByDaylight.BPAttachementSocketData
// Size: 0xe0 (Inherited: 0x00)
struct FBPAttachementSocketData {
	struct TSoftClassPtr<UObject> AccessoryBlueprint; // 0x00(0x30)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x30(0x30)
	struct FName SocketName; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FMaterialReplacerData> MaterialsMap; // 0x70(0x10)
	struct FConditionalMaterialReplacer ConditionalMaterialReplacer; // 0x80(0x60)
};

// ScriptStruct DeadByDaylight.ConditionalMaterialReplacer
// Size: 0x60 (Inherited: 0x00)
struct FConditionalMaterialReplacer {
	struct FName ItemTag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, struct FMaterialReplacerArray> ConditionalMaterials; // 0x10(0x50)
};

// ScriptStruct DeadByDaylight.MaterialReplacerArray
// Size: 0x10 (Inherited: 0x00)
struct FMaterialReplacerArray {
	struct TArray<struct FMaterialReplacerData> MaterialsMap; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.MaterialReplacerData
// Size: 0x60 (Inherited: 0x00)
struct FMaterialReplacerData {
	struct TSoftObjectPtr<UMaterialInterface> From; // 0x00(0x30)
	struct TSoftObjectPtr<UMaterialInterface> To; // 0x30(0x30)
};

// ScriptStruct DeadByDaylight.TextureReplacerData
// Size: 0x70 (Inherited: 0x00)
struct FTextureReplacerData {
	struct TSoftObjectPtr<UMaterialInterface> BaseMaterial; // 0x00(0x30)
	struct TSoftObjectPtr<UTexture2D> ReplacementTexture; // 0x30(0x30)
	struct FName TextureParameterName; // 0x60(0x0c)
	int32_t ExplicitMaterialSlot; // 0x6c(0x04)
};

// ScriptStruct DeadByDaylight.CustomizationItemDropdown
// Size: 0x10 (Inherited: 0x02)
struct FCustomizationItemDropdown : FRoleDropdown {
	char pad_2[0x2]; // 0x02(0x02)
	struct FName ItemId; // 0x04(0x0c)
};

// ScriptStruct DeadByDaylight.CustomizationTooltipData
// Size: 0x290 (Inherited: 0x98)
struct FCustomizationTooltipData : FBaseTooltipData {
	char pad_98[0x1f8]; // 0x98(0x1f8)
};

// ScriptStruct DeadByDaylight.ItemVfxLoadingData
// Size: 0x10 (Inherited: 0x00)
struct FItemVfxLoadingData {
	struct AItemVfx* ItemVfx; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct DeadByDaylight.AccessoryLoadingData
// Size: 0xe8 (Inherited: 0x00)
struct FAccessoryLoadingData {
	char pad_0[0xe0]; // 0x00(0xe0)
	struct UAccessory* Accessory; // 0xe0(0x08)
};

// ScriptStruct DeadByDaylight.HudEditorDragFromParentAxisLimit
// Size: 0x14 (Inherited: 0x00)
struct FHudEditorDragFromParentAxisLimit {
	bool enable; // 0x00(0x01)
	enum class EHudEditorDragAxisOption AxisOption; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MinDragDistance; // 0x04(0x04)
	bool ScaleMinDragDistanceWithParent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxDragDistance; // 0x0c(0x04)
	bool ScaleMaxDragDistanceWithParent; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct DeadByDaylight.DailyRewardCalendarData
// Size: 0x30 (Inherited: 0x00)
struct FDailyRewardCalendarData {
	struct TArray<struct FDailyRewardData> DailyRewardList; // 0x00(0x10)
	int32_t CurrentlyActiveDailyRewardIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDateTime CalendarStartDate; // 0x18(0x08)
	struct FDateTime CalendarExpirationDate; // 0x20(0x08)
	bool isSet; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct DeadByDaylight.DailyRewardData
// Size: 0x40 (Inherited: 0x00)
struct FDailyRewardData {
	enum class EAtlantaRewardType RewardType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CurrencyAmount; // 0x04(0x04)
	struct FString IconPath; // 0x08(0x10)
	struct FString ParentIconPath; // 0x18(0x10)
	struct FString ItemName; // 0x28(0x10)
	int32_t index; // 0x38(0x04)
	bool IsMarkedSpecial; // 0x3c(0x01)
	enum class EItemRarity ItemRarity; // 0x3d(0x01)
	enum class EUMGDailyRewardWidgetState State; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
};

// ScriptStruct DeadByDaylight.MapSoundsToAvoid
// Size: 0x10 (Inherited: 0x00)
struct FMapSoundsToAvoid {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct DeadByDaylight.MapMeshToAkAudioEvent
// Size: 0x40 (Inherited: 0x00)
struct FMapMeshToAkAudioEvent {
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x00(0x30)
	struct UAkAudioEvent* SoundEvent; // 0x30(0x08)
	float MinDelayBetweenEvents; // 0x38(0x04)
	float MinDelayBetweenObject; // 0x3c(0x04)
};

// ScriptStruct DeadByDaylight.DBD_SoundSpawnerData
// Size: 0x28 (Inherited: 0x00)
struct FDBD_SoundSpawnerData {
	struct TArray<struct TSoftClassPtr<UObject>> TriggerObject; // 0x00(0x10)
	bool TriggerVisualForCamper; // 0x10(0x01)
	bool TriggerVisualForSlasher; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct TSoftClassPtr<UObject>> ActorToSpawnVisual; // 0x18(0x10)
};

// ScriptStruct DeadByDaylight.MovementConversionData
// Size: 0x02 (Inherited: 0x00)
struct FMovementConversionData {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct DeadByDaylight.AICamperDodgeTunableRowData
// Size: 0x40 (Inherited: 0x08)
struct FAICamperDodgeTunableRowData : FDBDTableRowBase {
	int32_t characterId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Description; // 0x10(0x18)
	enum class EAIDodgeType BestDodgeType; // 0x28(0x01)
	bool RequireInSight; // 0x29(0x01)
	bool RequireAttackState; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float Duration; // 0x2c(0x04)
	float Range; // 0x30(0x04)
	float AttackPlusSurvivorHalfWidth; // 0x34(0x04)
	float FieldOfView; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct DeadByDaylight.AIItemWeightTunableRowData
// Size: 0x18 (Inherited: 0x08)
struct FAIItemWeightTunableRowData : FDBDTableRowBase {
	float CountWeight; // 0x08(0x04)
	float EnergyWeight; // 0x0c(0x04)
	float ConditionalWeight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.AIDifficultyTunableRowData
// Size: 0x18 (Inherited: 0x08)
struct FAIDifficultyTunableRowData : FDBDTableRowBase {
	float VeryEasy; // 0x08(0x04)
	float Easy; // 0x0c(0x04)
	float Medium; // 0x10(0x04)
	float Hard; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.AtlantaRitualContainer
// Size: 0x50 (Inherited: 0x00)
struct FAtlantaRitualContainer {
	struct TMap<struct FString, struct FAtlantaRitualSetArray> RitualsMap; // 0x00(0x50)
};

// ScriptStruct DeadByDaylight.AtlantaRitualSetArray
// Size: 0x10 (Inherited: 0x00)
struct FAtlantaRitualSetArray {
	struct TArray<struct FAtlantaRitualSet> rituals; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.AtlantaRitualSet
// Size: 0x38 (Inherited: 0x00)
struct FAtlantaRitualSet {
	struct TArray<struct FAtlantaRitualInstance> Instances; // 0x00(0x10)
	struct TArray<struct FRewardItem> RewardItems; // 0x10(0x10)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct DeadByDaylight.AtlantaRitualInstance
// Size: 0x60 (Inherited: 0x00)
struct FAtlantaRitualInstance {
	struct FName RitualKey; // 0x00(0x0c)
	int32_t characterId; // 0x0c(0x04)
	enum class EPlayerRole Role; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<enum class EDBDScoreTypes> TrackedEvents; // 0x18(0x10)
	struct TArray<struct FString> TrackedGameEvents; // 0x28(0x10)
	struct UAtlantaRitualEvaluatorBase* Evaluator; // 0x38(0x08)
	struct FAtlantaRitualDifficulty Difficulty; // 0x40(0x0c)
	float Progress; // 0x4c(0x04)
	bool Active; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FDateTime ExpiryDate; // 0x58(0x08)
};

// ScriptStruct DeadByDaylight.AtlantaRitualDifficulty
// Size: 0x0c (Inherited: 0x00)
struct FAtlantaRitualDifficulty {
	float Threshold; // 0x00(0x04)
	float Tolerance; // 0x04(0x04)
	float DisplayThreshold; // 0x08(0x04)
};

// ScriptStruct DeadByDaylight.AtlantaRitualSetIndex
// Size: 0x18 (Inherited: 0x00)
struct FAtlantaRitualSetIndex {
	int32_t index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ritualType; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.AtlantaRitualDefinition
// Size: 0x68 (Inherited: 0x08)
struct FAtlantaRitualDefinition : FDBDTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x38(0x30)
};

// ScriptStruct DeadByDaylight.AttackSubstateRequestResult
// Size: 0x03 (Inherited: 0x00)
struct FAttackSubstateRequestResult {
	bool IsValid; // 0x00(0x01)
	enum class EAttackSubstate RequestedNextSubstate; // 0x01(0x01)
	enum class EAttackSubstate ServerNextSubstate; // 0x02(0x01)
};

// ScriptStruct DeadByDaylight.DBDAttackTargetTracker
// Size: 0xb8 (Inherited: 0x00)
struct FDBDAttackTargetTracker {
	bool _useTargetTracking; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FStatProperty _targetSnapDistance; // 0x08(0x88)
	struct FName _ownerEyeSocketName; // 0x90(0x0c)
	struct FName _targetBoneName; // 0x9c(0x0c)
	struct TWeakObjectPtr<struct ACharacter> _trackedTarget; // 0xa8(0x08)
	struct TWeakObjectPtr<struct ADBDPlayer> _owningPlayer; // 0xb0(0x08)
};

// ScriptStruct DeadByDaylight.AuthenticationInfo
// Size: 0x18 (Inherited: 0x00)
struct FAuthenticationInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct DeadByDaylight.StaticMeshAutoBatch
// Size: 0x40 (Inherited: 0x00)
struct FStaticMeshAutoBatch {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
	struct TArray<struct UStaticMeshComponent*> staticMeshComponents; // 0x30(0x10)
};

// ScriptStruct DeadByDaylight.PerMeshInstancingData
// Size: 0x190 (Inherited: 0x00)
struct FPerMeshInstancingData {
	struct TMap<uint32_t, struct UInstancedStaticMeshComponent*> gpuCulling_hashToInstancedMeshes; // 0x00(0x50)
	struct TMap<uint32_t, struct UInstancedStaticMeshComponent*> gpuCullingSwap_hashToInstancedMeshes; // 0x50(0x50)
	struct TMap<uint32_t, struct UInstancedStaticMeshComponent*> hism_hashToInstancedMeshes; // 0xa0(0x50)
	char pad_F0[0xa0]; // 0xf0(0xa0)
};

// ScriptStruct DeadByDaylight.WebPath
// Size: 0x28 (Inherited: 0x00)
struct FWebPath {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct DeadByDaylight.WebNode
// Size: 0x28 (Inherited: 0x00)
struct FWebNode {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct DeadByDaylight.CharacterSavedProfileData
// Size: 0x1a0 (Inherited: 0x00)
struct FCharacterSavedProfileData {
	int32_t BloodWebLevel; // 0x00(0x04)
	int32_t TimesConfronted; // 0x04(0x04)
	struct TArray<struct FDateTime> PrestigeEarnedDates; // 0x08(0x10)
	struct FBloodWebPersistentData BloodWebData; // 0x18(0x50)
	struct FPlayerLoadoutData CharacterLoadoutData; // 0x68(0xa8)
	struct FEquippedPlayerCustomization CurrentCustomization; // 0x110(0x38)
	struct TArray<struct FName> UniquePerksAdded; // 0x148(0x10)
	bool CharacterBloodwebMigrationIsDone; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct TArray<struct FCharacterSavedInventoryData> InventoryData; // 0x160(0x10)
	struct TArray<struct FSavedCharacterLevelData> CharacterLevelData; // 0x170(0x10)
	struct TArray<struct FSavedStatsData> StatProgression; // 0x180(0x10)
	int32_t PrestigeLevel; // 0x190(0x04)
	int32_t LegacyPrestigeLevel; // 0x194(0x04)
	int32_t CharacterExperience; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// ScriptStruct DeadByDaylight.SavedStatsData
// Size: 0x14 (Inherited: 0x00)
struct FSavedStatsData {
	uint32_t Version; // 0x00(0x04)
	struct FName Name; // 0x04(0x0c)
	float value; // 0x10(0x04)
};

// ScriptStruct DeadByDaylight.SavedCharacterLevelData
// Size: 0x18 (Inherited: 0x00)
struct FSavedCharacterLevelData {
	int32_t Level; // 0x00(0x04)
	bool HasPerksBeenSelected; // 0x04(0x01)
	bool HasPerkSelectionBeenGenerated; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct TArray<struct FAssignedPerkProperties> PerkSelection; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.CharacterSavedInventoryData
// Size: 0x10 (Inherited: 0x00)
struct FCharacterSavedInventoryData {
	uint32_t Version; // 0x00(0x04)
	struct FName Name; // 0x04(0x0c)
};

// ScriptStruct DeadByDaylight.PlayerLoadoutData
// Size: 0xa8 (Inherited: 0x00)
struct FPlayerLoadoutData {
	struct FName Item; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> ItemAddOns; // 0x10(0x10)
	struct TArray<struct FName> CamperPerks; // 0x20(0x10)
	struct TArray<int32_t> CamperPerkLevels; // 0x30(0x10)
	struct FName CamperFavor; // 0x40(0x0c)
	struct FName Power; // 0x4c(0x0c)
	struct TArray<struct FName> PowerAddOns; // 0x58(0x10)
	struct TArray<struct FName> SlasherPerks; // 0x68(0x10)
	struct TArray<int32_t> SlasherPerkLevels; // 0x78(0x10)
	struct FName SlasherFavor; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<enum class EPerkCategory> RandomPerks; // 0x98(0x10)
};

// ScriptStruct DeadByDaylight.SpawnInfo
// Size: 0x70 (Inherited: 0x00)
struct FSpawnInfo {
	struct UObject* ActorClass; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FName AttachSocket; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString AttachParentName; // 0x50(0x10)
	struct UObject* AttachParentClass; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct DeadByDaylight.AffectedMaterialAndVariant
// Size: 0x10 (Inherited: 0x00)
struct FAffectedMaterialAndVariant {
	struct UMaterialInterface* AffectedMaterial; // 0x00(0x08)
	struct UMaterialInterface* MaterialVariant; // 0x08(0x08)
};

// ScriptStruct DeadByDaylight.ConsoleUserSettings
// Size: 0xd0 (Inherited: 0x00)
struct FConsoleUserSettings {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x08(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x18(0x10)
	int32_t MenuScaleFactor; // 0x28(0x04)
	int32_t HudScaleFactor; // 0x2c(0x04)
	int32_t SkillCheckScaleFactor; // 0x30(0x04)
	bool LargeText; // 0x34(0x01)
	bool BloodwebInteractionBehaviour; // 0x35(0x01)
	bool TerrorRadiusVisualFeedback; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	int32_t Gamma; // 0x38(0x04)
	bool HUDPlayerNamesVisibility; // 0x3c(0x01)
	bool HUDScoreEventsVisibility; // 0x3d(0x01)
	bool HUDKillerHookCountVisibility; // 0x3e(0x01)
	bool SurvivorSpecificPingIcon; // 0x3f(0x01)
	bool LegacyPrestigePortraits; // 0x40(0x01)
	bool ChallengeProgression; // 0x41(0x01)
	bool ChallengeCompletion; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t MainVolume; // 0x44(0x04)
	int32_t MenuMusicVolume; // 0x48(0x04)
	bool UseHeadphones; // 0x4c(0x01)
	bool MuteOnFocusLost; // 0x4d(0x01)
	bool HapticsVibrationPS5; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	int32_t KillerMouseSensitivity; // 0x50(0x04)
	int32_t SurvivorMouseSensitivity; // 0x54(0x04)
	int32_t KillerControllerSensitivity; // 0x58(0x04)
	int32_t SurvivorControllerSensitivity; // 0x5c(0x04)
	bool InvertY; // 0x60(0x01)
	bool SurvivorInvertY; // 0x61(0x01)
	bool KillerToggleInteractions; // 0x62(0x01)
	bool SurvivorToggleInteractions; // 0x63(0x01)
	bool SprintToCancel; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t HighestWeightSeenNews; // 0x68(0x04)
	bool UseAtlantaCustomizedHuds; // 0x6c(0x01)
	bool UseAtlantaSurvivorQuickTurn; // 0x6d(0x01)
	bool UseAtlantaKillerQuickTurn; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
	struct TArray<struct FAtlantaCustomizedHudSettings> AtlantaCustomizedHuds; // 0x70(0x10)
	bool HasAcceptedCrossplayPopup; // 0x80(0x01)
	bool HasAcceptedProgressionSystemInfoPopup; // 0x81(0x01)
	bool HasAcceptedCrossProgressionPopup; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)
	struct FBonusTierTooltipVisibility BonusTierTooltipVisibility; // 0x88(0x18)
	struct FString PartyPrivacyState; // 0xa0(0x10)
	int32_t ColorBlindMode; // 0xb0(0x04)
	int32_t ColorBlindModeIntensity; // 0xb4(0x04)
	bool BeginnerMode; // 0xb8(0x01)
	bool Subtitles; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	int32_t SubtitlesBackgroundOpacity; // 0xbc(0x04)
	int32_t SubtitlesSize; // 0xc0(0x04)
	bool IsAnonymousMode; // 0xc4(0x01)
	bool HideYourName; // 0xc5(0x01)
	bool HideOtherNames; // 0xc6(0x01)
	bool HiddenMatchmakingDelay; // 0xc7(0x01)
	bool HasAcceptedHapticsVibrationPopup; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct DeadByDaylight.AtlantaCustomizedHudSettings
// Size: 0x40 (Inherited: 0x00)
struct FAtlantaCustomizedHudSettings {
	struct FGameplayTag ID; // 0x00(0x0c)
	struct FVector2D NormalizedOffset; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	float RenderOpacity; // 0x18(0x04)
	int32_t Version; // 0x1c(0x04)
	struct FGameplayTagContainer OverlapWrapperIds; // 0x20(0x20)
};

// ScriptStruct DeadByDaylight.CurrencyConversion
// Size: 0x50 (Inherited: 0x00)
struct FCurrencyConversion {
	struct TMap<enum class ECurrencyType, float> AmountInOtherCurrency; // 0x00(0x50)
};

// ScriptStruct DeadByDaylight.DBDCustomizationToolData
// Size: 0xe58 (Inherited: 0x00)
struct FDBDCustomizationToolData {
	struct FCustomizationItemData Head; // 0x00(0x378)
	struct FCustomizationItemData Torso; // 0x378(0x378)
	struct FCustomizationItemData Leg; // 0x6f0(0x378)
	struct FCustomizationItemData Bodies; // 0xa68(0x378)
	struct FString characterName; // 0xde0(0x10)
	struct FString RoleName; // 0xdf0(0x10)
	struct USkeletalMesh* BaseSkeleton; // 0xe00(0x08)
	struct UTexture2D* MaskTexture; // 0xe08(0x08)
	struct UAnimationAsset* AnimationToPlay; // 0xe10(0x08)
	struct FString StrHeadDLC; // 0xe18(0x10)
	struct FString StrTorsoDLC; // 0xe28(0x10)
	struct FString StrLegDLC; // 0xe38(0x10)
	struct FString StrBodiesDLC; // 0xe48(0x10)
};

// ScriptStruct DeadByDaylight.DailyRitualContainer
// Size: 0x28 (Inherited: 0x00)
struct FDailyRitualContainer {
	struct FDateTime LastRitualReceivedDate; // 0x00(0x08)
	struct FDateTime LastRitualPopupDate; // 0x08(0x08)
	struct FDateTime LastRitualDismissedDate; // 0x10(0x08)
	struct TArray<struct FDailyRitualInstance> rituals; // 0x18(0x10)
};

// ScriptStruct DeadByDaylight.DailyRitualInstance
// Size: 0x78 (Inherited: 0x00)
struct FDailyRitualInstance {
	struct FString ritualId; // 0x00(0x10)
	struct TArray<enum class EDBDScoreTypes> TrackedEvents; // 0x10(0x10)
	struct TArray<struct FGameplayTag> TrackedGameEvents; // 0x20(0x10)
	struct TArray<int32_t> CharacterIDs; // 0x30(0x10)
	struct TArray<enum class EPlayerRole> Roles; // 0x40(0x10)
	float Progress; // 0x50(0x04)
	float Threshold; // 0x54(0x04)
	float Tolerance; // 0x58(0x04)
	float DisplayThreshold; // 0x5c(0x04)
	float ExpReward; // 0x60(0x04)
	bool Active; // 0x64(0x01)
	bool IsTemporary; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct FDateTime DateAssigned; // 0x68(0x08)
	struct URitualEvaluatorBase* Evaluator; // 0x70(0x08)
};

// ScriptStruct DeadByDaylight.DailyRitualDefinition
// Size: 0xd8 (Inherited: 0x08)
struct FDailyRitualDefinition : FDBDTableRowBase {
	struct FString ritualId; // 0x08(0x10)
	struct FText DisplayName; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct FString IconPath; // 0x48(0x10)
	struct FDailyRitualPossibleCharacters PossibleCharacters; // 0x58(0x30)
	struct TArray<enum class EDBDScoreTypes> TrackedEvents; // 0x88(0x10)
	struct TArray<struct FGameplayTag> TrackedGameEvents; // 0x98(0x10)
	struct TSoftClassPtr<UObject> Evaluator; // 0xa8(0x30)
};

// ScriptStruct DeadByDaylight.DailyRitualPossibleCharacters
// Size: 0x30 (Inherited: 0x00)
struct FDailyRitualPossibleCharacters {
	struct TArray<int32_t> CharacterIDs; // 0x00(0x10)
	struct TArray<enum class EPlayerRole> Roles; // 0x10(0x10)
	struct TArray<enum class EPlayerRole> SelectOneCharacterFromRoles; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.RitualEvent
// Size: 0x30 (Inherited: 0x00)
struct FRitualEvent {
	enum class EDBDScoreTypes scoreType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGameplayTag gameEventType; // 0x04(0x0c)
	float Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct ADBDPlayer* Instigator; // 0x18(0x08)
	struct ADBDPlayerState* InstigatorPlayerState; // 0x20(0x08)
	struct AActor* Target; // 0x28(0x08)
};

// ScriptStruct DeadByDaylight.SlasherLoadout
// Size: 0x80 (Inherited: 0x00)
struct FSlasherLoadout {
	struct TArray<struct FDebugLoadoutPerk> Perks; // 0x00(0x10)
	struct TArray<struct FDebugLoadoutAddon> PowerAddonIDs; // 0x10(0x10)
	struct FCharacterCustomizationDropdown Slasher; // 0x20(0x5c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct DeadByDaylight.DebugLoadoutAddon
// Size: 0x10 (Inherited: 0x00)
struct FDebugLoadoutAddon {
	struct FAddonDropdown AddonDropdown; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.DebugLoadoutPerk
// Size: 0x14 (Inherited: 0x00)
struct FDebugLoadoutPerk {
	struct FPerkDropdown PerkDropdown; // 0x00(0x10)
	int32_t PerkLevel; // 0x10(0x04)
};

// ScriptStruct DeadByDaylight.CamperLoadout
// Size: 0xc0 (Inherited: 0x00)
struct FCamperLoadout {
	struct FCharacterCustomizationDropdown camper; // 0x00(0x5c)
	struct FCharmDropdown Slot0_CharmID; // 0x5c(0x10)
	struct FCharmDropdown Slot1_CharmID; // 0x6c(0x10)
	struct FCharmDropdown Slot2_CharmID; // 0x7c(0x10)
	struct FItemIdDropdown Item; // 0x8c(0x10)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct FDebugLoadoutAddon> AddonIDs; // 0xa0(0x10)
	struct TArray<struct FDebugLoadoutPerk> Perks; // 0xb0(0x10)
};

// ScriptStruct DeadByDaylight.ItemIdDropdown
// Size: 0x10 (Inherited: 0x02)
struct FItemIdDropdown : FRoleDropdown {
	char pad_2[0x2]; // 0x02(0x02)
	struct FName ItemId; // 0x04(0x0c)
};

// ScriptStruct DeadByDaylight.AttackTypeDetails
// Size: 0x28 (Inherited: 0x08)
struct FAttackTypeDetails : FDBDTableRowBase {
	enum class EAttackType attackType; // 0x08(0x01)
	bool IsBasicAttack; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t AssociatedCharacter; // 0x0c(0x04)
	struct FText Description; // 0x10(0x18)
};

// ScriptStruct DeadByDaylight.LevelUpDetails
// Size: 0x58 (Inherited: 0x08)
struct FLevelUpDetails : FDBDTableRowBase {
	int32_t Level; // 0x08(0x04)
	int32_t Prestige; // 0x0c(0x04)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FName ItemId; // 0x40(0x0c)
	enum class EInventoryItemType ItemType; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t AssociatedCharacter; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct DeadByDaylight.PerkLevelDefinition
// Size: 0x04 (Inherited: 0x00)
struct FPerkLevelDefinition {
	int32_t CountRequired; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.EACClientInfo
// Size: 0x28 (Inherited: 0x00)
struct FEACClientInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct DeadByDaylight.ProgressionPoints
// Size: 0x08 (Inherited: 0x00)
struct FProgressionPoints {
	enum class EEmblemProgressionType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Points; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.DBDEmblemDefinition
// Size: 0xb0 (Inherited: 0x08)
struct FDBDEmblemDefinition : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TArray<enum class EPlayerRole> Roles; // 0x48(0x10)
	struct TSoftClassPtr<UObject> CustomEmblem; // 0x58(0x30)
	struct TArray<struct FString> IconFilePaths; // 0x88(0x10)
	enum class EEmblemEvaluation EmblemEvaluation; // 0x98(0x01)
	bool Enabled; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct TArray<struct FEmblemProgressionID> EmblemProgressionData; // 0xa0(0x10)
};

// ScriptStruct DeadByDaylight.EmblemProgressionID
// Size: 0x30 (Inherited: 0x00)
struct FEmblemProgressionID {
	enum class EEmblemProgressionType EmblemProgressionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText DefaultDescription; // 0x08(0x18)
	struct TArray<struct FEmblemProgressionDescriptionByQuality> DescriptionsByQuality; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.EmblemProgressionDescriptionByQuality
// Size: 0x20 (Inherited: 0x00)
struct FEmblemProgressionDescriptionByQuality {
	enum class EEmblemQuality EmblemQuality; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct DeadByDaylight.EndOfMatchRPCData
// Size: 0x18 (Inherited: 0x00)
struct FEndOfMatchRPCData {
	struct FString _jsonData; // 0x00(0x10)
	bool _isValid; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct DeadByDaylight.GameEventForwarderInfo
// Size: 0x20 (Inherited: 0x00)
struct FGameEventForwarderInfo {
	struct TArray<struct FGameplayTag> GameEventsToRegister; // 0x00(0x10)
	struct FGameplayTag ForwardedEvent; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.LanguageMapping
// Size: 0x20 (Inherited: 0x08)
struct FLanguageMapping : FTableRowBase {
	struct FString Language; // 0x08(0x10)
	enum class ECustomerSupportLanguages CustomerSupportId; // 0x18(0x01)
	enum class EForumLanguages ForumId; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct DeadByDaylight.SharedAuthenticationTokenInformation
// Size: 0x30 (Inherited: 0x00)
struct FSharedAuthenticationTokenInformation {
	struct FString LoginProvider; // 0x00(0x10)
	struct FString AuthToken; // 0x10(0x10)
	struct FString TokenType; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.DBDFoliageInfo
// Size: 0x18 (Inherited: 0x00)
struct FDBDFoliageInfo {
	struct UFoliageType* FoliageType; // 0x00(0x08)
	struct TArray<struct FDBDFoliageInstance> Instances; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.DBDFoliageInstance
// Size: 0x4c (Inherited: 0x00)
struct FDBDFoliageInstance {
	int32_t BaseId; // 0x00(0x04)
	struct FGuid ProceduralGuid; // 0x04(0x10)
	struct FVector Location; // 0x14(0x0c)
	struct FRotator Rotation; // 0x20(0x0c)
	struct FRotator PreAlignRotation; // 0x2c(0x0c)
	struct FVector DrawScale3D; // 0x38(0x0c)
	float ZOffset; // 0x44(0x04)
	uint32_t Flags; // 0x48(0x04)
};

// ScriptStruct DeadByDaylight.KeyDisplayInfo
// Size: 0x40 (Inherited: 0x00)
struct FKeyDisplayInfo {
	struct FKey Key; // 0x00(0x20)
	struct FString KeyDisplayName; // 0x20(0x10)
	struct FString PromptType; // 0x30(0x10)
};

// ScriptStruct DeadByDaylight.SaveDataBase
// Size: 0x10 (Inherited: 0x00)
struct FSaveDataBase {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t VersionNumber; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileData
// Size: 0x1e0 (Inherited: 0x10)
struct FLegacyPlayerSavedProfileData : FSaveDataBase {
	struct FString PlayerUID; // 0x10(0x10)
	struct FLegacyPlayerSavedProfileDataShared SharedData; // 0x20(0x40)
	struct FLegacyPlayerSavedProfileDataLocal LocalData; // 0x60(0x180)
};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileDataLocal
// Size: 0x180 (Inherited: 0x00)
struct FLegacyPlayerSavedProfileDataLocal {
	int32_t Tokens; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> offerings; // 0x08(0x10)
	bool FirstTimePlaying; // 0x18(0x01)
	bool HasBeenGivenKillerTutorialEndReward; // 0x19(0x01)
	bool HasBeenGivenSurvivorTutorialEndReward; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	int32_t Wins; // 0x1c(0x04)
	int32_t Losses; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<int32_t, struct FLegacyCharacterSavedProfileData> CharacterData; // 0x28(0x50)
	uint64_t CurrentSeasonTicks; // 0x78(0x08)
	struct FLegacySavedDailyRitualContainer DailyRituals; // 0x80(0x18)
	struct FLegacySavedFearMarketOfferingInstance FearMarket; // 0x98(0x20)
	struct FLegacySavedPlayerLoadoutData LastConnectedLoadout; // 0xb8(0x98)
	int32_t LastConnectedCharacterIndex; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FDateTime DisconnectPenaltyTime; // 0x158(0x08)
	int32_t _bloodpoints; // 0x160(0x04)
	int32_t _bonusBloodpoints; // 0x164(0x04)
	int32_t _unclampedBloodpoints; // 0x168(0x04)
	int32_t _fearTokens; // 0x16c(0x04)
	struct FDateTime _ongoingGameTime; // 0x170(0x08)
	bool _fearTokensMigrated; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
};

// ScriptStruct DeadByDaylight.LegacySavedPlayerLoadoutData
// Size: 0x98 (Inherited: 0x00)
struct FLegacySavedPlayerLoadoutData {
	struct FName Item; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> ItemAddOns; // 0x10(0x10)
	struct TArray<struct FName> CamperPerks; // 0x20(0x10)
	struct TArray<int32_t> CamperPerkLevels; // 0x30(0x10)
	struct FName CamperFavor; // 0x40(0x0c)
	struct FName Power; // 0x4c(0x0c)
	struct TArray<struct FName> PowerAddOns; // 0x58(0x10)
	struct TArray<struct FName> SlasherPerks; // 0x68(0x10)
	struct TArray<int32_t> SlasherPerkLevels; // 0x78(0x10)
	struct FName SlasherFavor; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct DeadByDaylight.LegacySavedFearMarketOfferingInstance
// Size: 0x20 (Inherited: 0x00)
struct FLegacySavedFearMarketOfferingInstance {
	struct TArray<struct FLegacySavedFearMarketItemInstance> ObjectsForSale; // 0x00(0x10)
	struct FDateTime starttime; // 0x10(0x08)
	struct FDateTime EndTime; // 0x18(0x08)
};

// ScriptStruct DeadByDaylight.LegacySavedFearMarketItemInstance
// Size: 0x18 (Inherited: 0x00)
struct FLegacySavedFearMarketItemInstance {
	struct FName ItemId; // 0x00(0x0c)
	int32_t Cost; // 0x0c(0x04)
	int32_t BloodpointConversion; // 0x10(0x04)
	bool Purchased; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct DeadByDaylight.LegacySavedDailyRitualContainer
// Size: 0x18 (Inherited: 0x00)
struct FLegacySavedDailyRitualContainer {
	struct FDateTime LastRitualReceivedDate; // 0x00(0x08)
	struct TArray<struct FLegacySavedDailyRitualInstance> rituals; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.LegacySavedDailyRitualInstance
// Size: 0x78 (Inherited: 0x00)
struct FLegacySavedDailyRitualInstance {
	struct FName RitualKey; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> CharacterIDs; // 0x10(0x10)
	struct TArray<enum class EPlayerRole> Roles; // 0x20(0x10)
	float Progress; // 0x30(0x04)
	float Threshold; // 0x34(0x04)
	float Tolerance; // 0x38(0x04)
	float DisplayThreshold; // 0x3c(0x04)
	float ExpReward; // 0x40(0x04)
	bool Active; // 0x44(0x01)
	bool Rewarded; // 0x45(0x01)
	bool StateChanged; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	struct FDateTime DateAssigned; // 0x48(0x08)
	int32_t NbGameElapsed; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<enum class EDBDScoreTypes> TrackedEvents; // 0x58(0x10)
	struct TArray<struct FGameplayTag> TrackedGameEvents; // 0x68(0x10)
};

// ScriptStruct DeadByDaylight.LegacyCharacterSavedProfileData
// Size: 0x130 (Inherited: 0x00)
struct FLegacyCharacterSavedProfileData {
	int32_t VersionNumber; // 0x00(0x04)
	int32_t BloodPoints; // 0x04(0x04)
	int32_t BloodWebLevel; // 0x08(0x04)
	int32_t PrestigeLevel; // 0x0c(0x04)
	int32_t TimesConfronted; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FDateTime> PrestigeDates; // 0x18(0x10)
	struct FLegacySavedBloodWebPersistentData BloodWebData; // 0x28(0x40)
	struct FLegacySavedPlayerLoadoutData CharacterLoadoutData; // 0x68(0x98)
	struct TArray<struct FName> Inventory; // 0x100(0x10)
	struct TArray<struct FLegacyCharacterSavedInventoryData> InventoryData; // 0x110(0x10)
	struct TArray<struct FName> CurrentCustomization; // 0x120(0x10)
};

// ScriptStruct DeadByDaylight.LegacyCharacterSavedInventoryData
// Size: 0x18 (Inherited: 0x00)
struct FLegacyCharacterSavedInventoryData {
	uint32_t Version; // 0x00(0x04)
	struct FName Name; // 0x04(0x0c)
	int64_t TimeObtainedSinceEpoch; // 0x10(0x08)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodWebPersistentData
// Size: 0x40 (Inherited: 0x00)
struct FLegacySavedBloodWebPersistentData {
	int32_t VersionNumber; // 0x00(0x04)
	int32_t Level; // 0x04(0x04)
	struct TArray<struct FLegacySavedBloodWebRingPersistentData> RingData; // 0x08(0x10)
	struct TArray<struct FName> Paths; // 0x18(0x10)
	struct FString EntityCurrentNode; // 0x28(0x10)
	struct FDateTime GenerationDate; // 0x38(0x08)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodWebRingPersistentData
// Size: 0x10 (Inherited: 0x00)
struct FLegacySavedBloodWebRingPersistentData {
	struct TArray<struct FLegacySavedBloodwebNode> NodeData; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNode
// Size: 0x80 (Inherited: 0x00)
struct FLegacySavedBloodwebNode {
	struct FLegacySavedBloodwebNodeProperties Properties; // 0x00(0x18)
	struct TArray<struct FLegacySavedBloodwebNodeGate> Gates; // 0x18(0x10)
	enum class EBloodwebNodeState State; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString NodeId; // 0x30(0x10)
	struct FName ContentId; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FLegacySavedBloodwebChest BloodwebChest; // 0x50(0x30)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebChest
// Size: 0x30 (Inherited: 0x00)
struct FLegacySavedBloodwebChest {
	struct FName ID; // 0x00(0x0c)
	struct FName EventId; // 0x0c(0x0c)
	enum class EItemRarity Rarity; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<float> GivenItemRarity; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNodeGate
// Size: 0x20 (Inherited: 0x00)
struct FLegacySavedBloodwebNodeGate {
	struct FName Description; // 0x00(0x0c)
	enum class EItemRarity Rarity; // 0x0c(0x01)
	enum class EPlayerRole Role; // 0x0d(0x01)
	enum class EBloodwebNodeGateTypes GateType; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct FString Param; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNodeProperties
// Size: 0x18 (Inherited: 0x00)
struct FLegacySavedBloodwebNodeProperties {
	enum class EBloodwebNodeContentType ContentType; // 0x00(0x01)
	enum class EItemRarity Rarity; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FString> Tags; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileDataShared
// Size: 0x40 (Inherited: 0x00)
struct FLegacyPlayerSavedProfileDataShared {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString playerName; // 0x08(0x10)
	int32_t SelectedCamperIndex; // 0x18(0x04)
	int32_t SelectedSlasherIndex; // 0x1c(0x04)
	struct TArray<struct FName> SelectedCharacterCustomization; // 0x20(0x10)
	int32_t SlasherSkulls; // 0x30(0x04)
	int32_t CamperSkulls; // 0x34(0x04)
	int32_t CamperStreak; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct DeadByDaylight.TypeFoliageToAutomateDensity
// Size: 0x68 (Inherited: 0x00)
struct FTypeFoliageToAutomateDensity {
	struct TSoftObjectPtr<UStaticMesh> SourceMesh; // 0x00(0x30)
	struct TSoftObjectPtr<UStaticMesh> ReplacementMesh; // 0x30(0x30)
	bool bGenerateOverlaps; // 0x60(0x01)
	bool bReceiveDecals; // 0x61(0x01)
	enum class ECanBeCharacterBase bCanCharacterStepOn; // 0x62(0x01)
	enum class EDetailMode DetailMode; // 0x63(0x01)
	float MinimumFoliageRadius; // 0x64(0x04)
};

// ScriptStruct DeadByDaylight.OutlineOverrideConfig
// Size: 0x60 (Inherited: 0x00)
struct FOutlineOverrideConfig {
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> TranslucencyDefaultMaterialsOverride; // 0x00(0x10)
	struct TMap<struct TSoftClassPtr<UObject>, struct FOutlineConfig> OutlineOverride; // 0x10(0x50)
};

// ScriptStruct DeadByDaylight.OutlineConfig
// Size: 0x10 (Inherited: 0x00)
struct FOutlineConfig {
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> TranslucencyMaterials; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.OutlineColourConfiguration
// Size: 0x10 (Inherited: 0x00)
struct FOutlineColourConfiguration {
	struct FLinearColor ColourValue; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.DBDOutlineRenderStrategySelector
// Size: 0x40 (Inherited: 0x00)
struct FDBDOutlineRenderStrategySelector {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* _actorForStrategy; // 0x08(0x08)
	struct UBaseOutlineRenderStrategy* _selectedStrategy; // 0x10(0x08)
	char pad_18[0x28]; // 0x18(0x28)
};

// ScriptStruct DeadByDaylight.GamePersistentData
// Size: 0x108 (Inherited: 0x00)
struct FGamePersistentData {
	int32_t PlayerCount; // 0x00(0x04)
	int32_t spectatorCount; // 0x04(0x04)
	struct FGamePresetData GamePresetData; // 0x08(0x90)
	char pad_98[0x70]; // 0x98(0x70)
};

// ScriptStruct DeadByDaylight.SessionInfos
// Size: 0x48 (Inherited: 0x00)
struct FSessionInfos {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct DeadByDaylight.CloudInventoryItem
// Size: 0x10 (Inherited: 0x00)
struct FCloudInventoryItem {
	int32_t DefinitionId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	uint64_t InstanceId; // 0x08(0x08)
};

// ScriptStruct DeadByDaylight.AnimData
// Size: 0x01 (Inherited: 0x00)
struct FAnimData {
	enum class ECharacterStance Stance; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.PlayerFinishStats
// Size: 0x01 (Inherited: 0x00)
struct FPlayerFinishStats {
	int8_t NumberOfSurvivorsKilledOrSacrificed; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.LookInputScalingData
// Size: 0x80 (Inherited: 0x00)
struct FLookInputScalingData {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct DeadByDaylight.LookInputAxisScalingData
// Size: 0x40 (Inherited: 0x00)
struct FLookInputAxisScalingData {
	struct FDBDTimer ScalingTimer; // 0x00(0x28)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct DeadByDaylight.PlayerPersistentData
// Size: 0x958 (Inherited: 0x00)
struct FPlayerPersistentData {
	enum class EPlayerRole GameRole; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPlayerLoadoutData StartingLoadout; // 0x08(0xa8)
	struct FPlayerLoadoutData CurrentLoadout; // 0xb0(0xa8)
	char pad_158[0x98]; // 0x158(0x98)
	struct FPlayerSavedProfileData SavedData; // 0x1f0(0x718)
	enum class EPlatformFlag PlayerPlatform; // 0x908(0x04)
	enum class EProviderFlag PlayerProvider; // 0x90c(0x04)
	char pad_910[0x48]; // 0x910(0x48)
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileData
// Size: 0x718 (Inherited: 0x00)
struct FPlayerSavedProfileData {
	struct FString PlayerUID; // 0x00(0x10)
	struct FPlayerSavedProfileDataShared SharedData; // 0x10(0x68)
	struct FPlayerSavedProfileDataLocal LocalData; // 0x78(0x5d0)
	struct FConsoleUserSettings ConsoleUserSettings; // 0x648(0xd0)
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileDataLocal
// Size: 0x5d0 (Inherited: 0x00)
struct FPlayerSavedProfileDataLocal {
	int32_t Tokens; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> offerings; // 0x08(0x10)
	struct TMap<struct FName, bool> PageVisited; // 0x18(0x50)
	struct TMap<struct FName, bool> ChatVisible; // 0x68(0x50)
	struct TMap<struct FName, bool> OnboardingCompleted; // 0xb8(0x50)
	int32_t ConsecutiveMatchStreak; // 0x108(0x04)
	int32_t Wins; // 0x10c(0x04)
	int32_t Losses; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	uint64_t CurrentSeasonTicks; // 0x118(0x08)
	struct FDailyRitualSaveData DailyRitualSaveData; // 0x120(0x08)
	struct FUIViewFlagSaveData UIViewFlags; // 0x128(0xf0)
	struct FFearMarketOfferingInstance FearMarket; // 0x218(0x20)
	struct FPlayerLoadoutData LastConnectedLoadout; // 0x238(0xa8)
	int32_t LastConnectedCharacterIndex; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FDateTime DisconnectPenaltyTime; // 0x2e8(0x08)
	struct FDateTime LastMatchEndTime; // 0x2f0(0x08)
	struct FDateTime LastMatchStartTime; // 0x2f8(0x08)
	struct FDateTime LastKillerMatchEndTime; // 0x300(0x08)
	struct FDateTime LastSurvivorMatchEndTime; // 0x308(0x08)
	struct FBloodWebPersistentData BloodStoreKillers; // 0x310(0x50)
	struct FBloodWebPersistentData BloodStoreSurvivors; // 0x360(0x50)
	bool CrossplayAllowed; // 0x3b0(0x01)
	bool AutoDeclineFriendInvites; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct TArray<struct FCharacterCustomizationPresetsList> CharacterCustomizationPresets; // 0x3b8(0x10)
	struct TArray<struct FCharacterLoadoutPresetsList> CharacterLoadoutPresets; // 0x3c8(0x10)
	struct FPlayerSavedProfileCumulativeData _cumulativeData; // 0x3d8(0x48)
	struct TArray<struct FSavedStatsData> _savedPlayerStats; // 0x420(0x10)
	bool _hasBeenGivenKillerTutorialEndReward; // 0x430(0x01)
	bool _hasBeenGivenSurvivorTutorialEndReward; // 0x431(0x01)
	bool _hasSeenBloodpointsOnboardingCurrencyPopup; // 0x432(0x01)
	bool _hasSeenAuricCellsOnboardingCurrencyPopup; // 0x433(0x01)
	bool _hasSeenIridescentShardsOnboardingCurrencyPopup; // 0x434(0x01)
	bool _hasSeenLightSensitivity; // 0x435(0x01)
	bool _hasSeenMainMenu; // 0x436(0x01)
	char pad_437[0x1]; // 0x437(0x01)
	struct TMap<int32_t, struct FCharacterSavedProfileData> _characterData; // 0x438(0x50)
	struct TMap<struct FName, struct FSpecialEventSavedData> _specialEvent; // 0x488(0x50)
	struct TSet<struct FName> _seenCinematics; // 0x4d8(0x50)
	struct TSet<struct FName> _seenFeatures; // 0x528(0x50)
	struct TMap<struct FString, struct FReleaseSavedData> _releases; // 0x578(0x50)
	bool _hasBeginnerTooltipsBeenDisabledAtLevel; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
};

// ScriptStruct DeadByDaylight.ReleaseSavedData
// Size: 0x01 (Inherited: 0x00)
struct FReleaseSavedData {
	bool NewChapterPopupSeen; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.SpecialEventSavedData
// Size: 0x02 (Inherited: 0x00)
struct FSpecialEventSavedData {
	bool EventEntryScreenOpened; // 0x00(0x01)
	bool EventSplashScreenSeen; // 0x01(0x01)
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileCumulativeData
// Size: 0x48 (Inherited: 0x00)
struct FPlayerSavedProfileCumulativeData {
	bool FirstTimePlaying; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CumulativeMatches; // 0x04(0x04)
	int32_t CumulativeMatchesLeft; // 0x08(0x04)
	int32_t CumulativeMatchesAsSurvivor; // 0x0c(0x04)
	int32_t CumulativeMatchesLeftAsSurvivor; // 0x10(0x04)
	int32_t CumulativeMatchesAsKiller; // 0x14(0x04)
	int32_t CumulativeMatchesLeftAsKiller; // 0x18(0x04)
	int32_t CumulativeMatchesAsSurvivorNoFriends; // 0x1c(0x04)
	int32_t CumulativeMatchesAsKillerNoFriends; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FDateTime LastMatchTimestamp; // 0x28(0x08)
	struct FDateTime LastSessionTimestamp; // 0x30(0x08)
	int32_t CumulativeSessions; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTimespan CumulativePlaytime; // 0x40(0x08)
};

// ScriptStruct DeadByDaylight.UIViewFlagSaveData
// Size: 0xf0 (Inherited: 0x00)
struct FUIViewFlagSaveData {
	struct TMap<struct FString, bool> CharactersFirstBloodweb; // 0x00(0x50)
	struct TMap<struct FString, bool> ArchiveStoryHasBeenSeenStatus; // 0x50(0x50)
	struct TMap<struct FString, bool> ArchiveNewTomeAnimationHasBeenSeenStatus; // 0xa0(0x50)
};

// ScriptStruct DeadByDaylight.DailyRitualSaveData
// Size: 0x08 (Inherited: 0x00)
struct FDailyRitualSaveData {
	struct FDateTime LastRitualPopupDate; // 0x00(0x08)
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileDataShared
// Size: 0x68 (Inherited: 0x00)
struct FPlayerSavedProfileDataShared {
	struct FString playerName; // 0x00(0x10)
	int32_t SelectedCamperIndex; // 0x10(0x04)
	int32_t SelectedSlasherIndex; // 0x14(0x04)
	struct FEquippedPlayerCustomization SelectedCharacterCustomization; // 0x18(0x38)
	int32_t CamperStreak; // 0x50(0x04)
	bool ShowPortraitBorder; // 0x54(0x01)
	bool HasActiveSubscription; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FString PlatformId; // 0x58(0x10)
};

// ScriptStruct DeadByDaylight.CharacterStateData
// Size: 0x20 (Inherited: 0x00)
struct FCharacterStateData {
	int32_t _pips; // 0x00(0x04)
	struct FName _powerId; // 0x04(0x0c)
	struct TArray<struct FName> _addonIds; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.PlayerDataSync
// Size: 0x90 (Inherited: 0x00)
struct FPlayerDataSync {
	struct FPlayerStateData PlayerData; // 0x00(0x38)
	struct FEquippedPlayerCustomization EquippedCustomization; // 0x38(0x38)
	struct FName EquipedItemId; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FName> EquipedItemAddonIds; // 0x80(0x10)
};

// ScriptStruct DeadByDaylight.PlayerStateData
// Size: 0x38 (Inherited: 0x00)
struct FPlayerStateData {
	int32_t CharacterLevel; // 0x00(0x04)
	struct FName EquipedFavorId; // 0x04(0x0c)
	struct TArray<struct FName> EquipedPerkIds; // 0x10(0x10)
	struct TArray<int32_t> EquipedPerkLevels; // 0x20(0x10)
	enum class EGameState _playerGameState; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t _prestigeLevel; // 0x34(0x04)
};

// ScriptStruct DeadByDaylight.PlayerHUDInfos
// Size: 0x60 (Inherited: 0x08)
struct FPlayerHUDInfos : FDBDTableRowBase {
	enum class EPlayerRole Role; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftClassPtr<UObject> HUDClass; // 0x10(0x30)
	struct FSoftObjectPath TouchInterfaceName; // 0x40(0x20)
};

// ScriptStruct DeadByDaylight.RankResetStartingPips
// Size: 0x04 (Inherited: 0x00)
struct FRankResetStartingPips {
	int32_t NewPipAmount; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.RankGroupDefinition
// Size: 0x18 (Inherited: 0x00)
struct FRankGroupDefinition {
	int32_t RankThreshold; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> PipThresholds; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.RankDefinition
// Size: 0x04 (Inherited: 0x00)
struct FRankDefinition {
	int32_t PipsRequired; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.SaveDataV7
// Size: 0x3e8 (Inherited: 0x10)
struct FSaveDataV7 : FSaveDataBase {
	struct FString PlayerUID; // 0x10(0x10)
	int32_t SelectedCamperIndex; // 0x20(0x04)
	int32_t SelectedSlasherIndex; // 0x24(0x04)
	struct TArray<struct FName> offerings; // 0x28(0x10)
	bool FirstTimePlaying; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t ConsecutiveMatchStreak; // 0x3c(0x04)
	bool HasBeenGivenKillerTutorialEndReward; // 0x40(0x01)
	bool HasBeenGivenSurvivorTutorialEndReward; // 0x41(0x01)
	bool HasSeenBloodpointsOnboardingCurrencyPopup; // 0x42(0x01)
	bool HasSeenAuricCellsOnboardingCurrencyPopup; // 0x43(0x01)
	bool HasSeenIridescentShardsOnboardingCurrencyPopup; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	uint64_t CurrentSeasonTicks; // 0x48(0x08)
	int32_t LastConnectedCharacterIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString DisconnectPenaltyTime; // 0x58(0x10)
	struct FString LastMatchEndTime; // 0x68(0x10)
	struct FString LastMatchStartTime; // 0x78(0x10)
	struct FString LastKillerMatchEndTime; // 0x88(0x10)
	struct FString LastSurvivorMatchEndTime; // 0x98(0x10)
	int32_t Experience; // 0xa8(0x04)
	int32_t BonusExperience; // 0xac(0x04)
	int32_t FearTokens; // 0xb0(0x04)
	bool FearTokensMigrated; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct FString OngoingGameTime; // 0xb8(0x10)
	int32_t CumulativeMatches; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FKeyTupleBool> PageVisited; // 0xd0(0x10)
	struct TArray<struct FKeyTupleBool> ChatVisible; // 0xe0(0x10)
	int32_t CumulativeMatchesAsSurvivor; // 0xf0(0x04)
	int32_t CumulativeMatchesAsKiller; // 0xf4(0x04)
	int32_t CumulativeMatchesAsSurvivorNoFriends; // 0xf8(0x04)
	int32_t CumulativeMatchesAsKillerNoFriends; // 0xfc(0x04)
	struct FDateTime LastMatchTimestamp; // 0x100(0x08)
	struct FDateTime LastSessionTimestamp; // 0x108(0x08)
	int32_t CumulativeSessions; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString CumulativePlaytime; // 0x118(0x10)
	struct TArray<struct FCharacterKeyTuple> CharacterData; // 0x128(0x10)
	struct TArray<struct FName> OwnedCharms; // 0x138(0x10)
	struct FSavedDailyRitualContainerV7 DailyRituals; // 0x148(0x40)
	struct FSavedFearMarketOfferingInstanceV7 FearMarket; // 0x188(0x30)
	struct FLegacySavedPlayerLoadoutData LastLoadout; // 0x1b8(0x98)
	struct FConsoleUserSettings ConsoleUserSettings; // 0x250(0xd0)
	struct TArray<struct FSavedStatsDataV7> PlayerStatProgression; // 0x320(0x10)
	struct TArray<struct FString> OwnedContent; // 0x330(0x10)
	struct TArray<struct FSavedSpecialEventDataV7> SpecialEvent; // 0x340(0x10)
	struct FLegacySavedBloodWebPersistentData BloodStoreKillers; // 0x350(0x40)
	struct FLegacySavedBloodWebPersistentData BloodStoreSurvivors; // 0x390(0x40)
	struct TArray<struct FKeyTupleBool> OnboardingCompleted; // 0x3d0(0x10)
	bool IsCrossplayAllowed; // 0x3e0(0x01)
	bool AutoDeclineFriendInvites; // 0x3e1(0x01)
	char pad_3E2[0x6]; // 0x3e2(0x06)
};

// ScriptStruct DeadByDaylight.KeyTupleBool
// Size: 0x10 (Inherited: 0x00)
struct FKeyTupleBool {
	struct FName Key; // 0x00(0x0c)
	bool value; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct DeadByDaylight.SavedSpecialEventDataV7
// Size: 0x28 (Inherited: 0x00)
struct FSavedSpecialEventDataV7 {
	struct FName EventId; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> SeenCinematics; // 0x10(0x10)
	bool EventEntryScreenOpened; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DeadByDaylight.SavedStatsDataV7
// Size: 0x10 (Inherited: 0x00)
struct FSavedStatsDataV7 {
	struct FName Name; // 0x00(0x0c)
	float value; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.SavedFearMarketOfferingInstanceV7
// Size: 0x30 (Inherited: 0x00)
struct FSavedFearMarketOfferingInstanceV7 {
	struct TArray<struct FLegacySavedFearMarketItemInstance> ObjectsForSale; // 0x00(0x10)
	struct FString starttime; // 0x10(0x10)
	struct FString EndTime; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.SavedDailyRitualContainerV7
// Size: 0x40 (Inherited: 0x00)
struct FSavedDailyRitualContainerV7 {
	struct FString LastRitualReceivedDate; // 0x00(0x10)
	struct FString LastRitualPopupDate; // 0x10(0x10)
	struct FString LastRitualDismissedDate; // 0x20(0x10)
	struct TArray<struct FLegacySavedDailyRitualInstance> rituals; // 0x30(0x10)
};

// ScriptStruct DeadByDaylight.CharacterKeyTuple
// Size: 0x160 (Inherited: 0x00)
struct FCharacterKeyTuple {
	int32_t Key; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCharacterSavedProfileDataV7 Data; // 0x08(0x158)
};

// ScriptStruct DeadByDaylight.CharacterSavedProfileDataV7
// Size: 0x158 (Inherited: 0x00)
struct FCharacterSavedProfileDataV7 {
	int32_t BloodWebLevel; // 0x00(0x04)
	int32_t PrestigeLevel; // 0x04(0x04)
	int32_t CharacterExperience; // 0x08(0x04)
	int32_t TimesConfronted; // 0x0c(0x04)
	struct TArray<struct FString> PrestigeDates; // 0x10(0x10)
	struct FLegacySavedBloodWebPersistentData BloodWebData; // 0x20(0x40)
	struct FLegacySavedPlayerLoadoutData CharacterLoadoutData; // 0x60(0x98)
	struct TArray<struct FCharacterSavedInventoryDataV7> Inventory; // 0xf8(0x10)
	struct TArray<struct FSavedCharacterLevelDataV7> CharacterProgression; // 0x108(0x10)
	struct TArray<struct FSavedStatsDataV7> StatProgression; // 0x118(0x10)
	struct TArray<struct FName> CurrentCustomization; // 0x128(0x10)
	struct TArray<struct FSavedCharmSlotData> CurrentCharmCustomization; // 0x138(0x10)
	struct TArray<struct FName> UniquePerksAdded; // 0x148(0x10)
};

// ScriptStruct DeadByDaylight.SavedCharmSlotData
// Size: 0x10 (Inherited: 0x00)
struct FSavedCharmSlotData {
	int8_t slotIndex; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName CharmId; // 0x04(0x0c)
};

// ScriptStruct DeadByDaylight.SavedCharacterLevelDataV7
// Size: 0x18 (Inherited: 0x00)
struct FSavedCharacterLevelDataV7 {
	int32_t Level; // 0x00(0x04)
	bool HasPerksBeenSelected; // 0x04(0x01)
	bool HasPerkSelectionBeenGenerated; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct TArray<struct FAssignedPerkPropertiesV7> PerkSelection; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.AssignedPerkPropertiesV7
// Size: 0x14 (Inherited: 0x00)
struct FAssignedPerkPropertiesV7 {
	struct FName perkId; // 0x00(0x0c)
	int32_t PerkLevel; // 0x0c(0x04)
	bool IsTeachable; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct DeadByDaylight.CharacterSavedInventoryDataV7
// Size: 0x20 (Inherited: 0x00)
struct FCharacterSavedInventoryDataV7 {
	struct FName ID; // 0x00(0x0c)
	int32_t Num; // 0x0c(0x04)
	struct FString I; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.SaveDataV8
// Size: 0x598 (Inherited: 0x10)
struct FSaveDataV8 : FSaveDataBase {
	struct FString PlayerUID; // 0x10(0x10)
	int32_t SelectedCamperIndex; // 0x20(0x04)
	int32_t SelectedSlasherIndex; // 0x24(0x04)
	struct TArray<struct FName> offerings; // 0x28(0x10)
	bool FirstTimePlaying; // 0x38(0x01)
	bool HasSeenLightSensitivity; // 0x39(0x01)
	bool HasSeenMainMenu; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	int32_t ConsecutiveMatchStreak; // 0x3c(0x04)
	bool HasBeenGivenKillerTutorialEndReward; // 0x40(0x01)
	bool HasBeenGivenSurvivorTutorialEndReward; // 0x41(0x01)
	bool HasSeenBloodpointsOnboardingCurrencyPopup; // 0x42(0x01)
	bool HasSeenAuricCellsOnboardingCurrencyPopup; // 0x43(0x01)
	bool HasSeenIridescentShardsOnboardingCurrencyPopup; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	uint64_t CurrentSeasonTicks; // 0x48(0x08)
	int32_t LastConnectedCharacterIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString DisconnectPenaltyTime; // 0x58(0x10)
	struct FString LastMatchEndTime; // 0x68(0x10)
	struct FString LastMatchStartTime; // 0x78(0x10)
	struct FString LastKillerMatchEndTime; // 0x88(0x10)
	struct FString LastSurvivorMatchEndTime; // 0x98(0x10)
	int32_t CumulativeMatches; // 0xa8(0x04)
	int32_t CumulativeMatchesLeft; // 0xac(0x04)
	struct TArray<struct FKeyTupleBool> PageVisited; // 0xb0(0x10)
	struct TArray<struct FKeyTupleBool> ChatVisible; // 0xc0(0x10)
	int32_t CumulativeMatchesAsSurvivor; // 0xd0(0x04)
	int32_t CumulativeMatchesLeftAsSurvivor; // 0xd4(0x04)
	int32_t CumulativeMatchesAsKiller; // 0xd8(0x04)
	int32_t CumulativeMatchesLeftAsKiller; // 0xdc(0x04)
	int32_t CumulativeMatchesAsSurvivorNoFriends; // 0xe0(0x04)
	int32_t CumulativeMatchesAsKillerNoFriends; // 0xe4(0x04)
	struct FDateTime LastMatchTimestamp; // 0xe8(0x08)
	struct FDateTime LastSessionTimestamp; // 0xf0(0x08)
	int32_t CumulativeSessions; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString CumulativePlaytime; // 0x100(0x10)
	struct TArray<struct FCharacterKeyTuple> CharacterData; // 0x110(0x10)
	struct TArray<struct FName> OwnedCharms; // 0x120(0x10)
	struct FSavedDailyRitualContainerV7 DailyRituals; // 0x130(0x40)
	struct FSavedFearMarketOfferingInstanceV7 FearMarket; // 0x170(0x30)
	struct FLegacySavedPlayerLoadoutData LastLoadout; // 0x1a0(0x98)
	struct FConsoleUserSettings ConsoleUserSettings; // 0x238(0xd0)
	struct TArray<struct FSavedStatsDataV7> PlayerStatProgression; // 0x308(0x10)
	struct TArray<struct FString> OwnedContent; // 0x318(0x10)
	struct TArray<struct FSavedSpecialEventDataV8> SpecialEvent; // 0x328(0x10)
	struct TArray<struct FSavedReleaseDataV8> Releases; // 0x338(0x10)
	struct TSet<struct FName> SeenCinematics; // 0x348(0x50)
	struct TSet<struct FName> SeenFeatures; // 0x398(0x50)
	struct FLegacySavedBloodWebPersistentData BloodStoreKillers; // 0x3e8(0x40)
	struct FLegacySavedBloodWebPersistentData BloodStoreSurvivors; // 0x428(0x40)
	struct TArray<struct FKeyTupleBool> OnboardingCompleted; // 0x468(0x10)
	struct FDailyRitualSaveData DailyRitualSaveData; // 0x478(0x08)
	struct FUIViewFlagSaveData UIViewFlags; // 0x480(0xf0)
	bool IsCrossplayAllowed; // 0x570(0x01)
	bool AutoDeclineFriendInvites; // 0x571(0x01)
	bool HasBeginnerTooltipsBeenDisabledAtLevel; // 0x572(0x01)
	bool ShowPortraitBorder; // 0x573(0x01)
	char pad_574[0x4]; // 0x574(0x04)
	struct TArray<struct FCharacterCustomizationPresetsList> CharacterCustomizationPresets; // 0x578(0x10)
	struct TArray<struct FCharacterLoadoutPresetsList> CharacterLoadoutPresets; // 0x588(0x10)
};

// ScriptStruct DeadByDaylight.SavedReleaseDataV8
// Size: 0x18 (Inherited: 0x00)
struct FSavedReleaseDataV8 {
	struct FString Version; // 0x00(0x10)
	bool NewChapterPopupSeen; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct DeadByDaylight.SavedSpecialEventDataV8
// Size: 0x10 (Inherited: 0x00)
struct FSavedSpecialEventDataV8 {
	struct FName EventId; // 0x00(0x0c)
	bool EventEntryScreenOpened; // 0x0c(0x01)
	bool EventSplashScreenSeen; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct DeadByDaylight.SaveValidationData
// Size: 0x30 (Inherited: 0x00)
struct FSaveValidationData {
	struct FString PlayerUID; // 0x00(0x10)
	struct TArray<int32_t> CharacterData; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.ScoreValue
// Size: 0x48 (Inherited: 0x08)
struct FScoreValue : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	enum class EDBDScoreCategory category; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t BloodpointValue; // 0x18(0x04)
	int32_t MaxBloodpointValue; // 0x1c(0x04)
	struct UCurveFloat* BloodpointDepreciationCurve; // 0x20(0x08)
	float OngoingWaitTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText DisplayName; // 0x30(0x18)
};

// ScriptStruct DeadByDaylight.ScoreCategoryData
// Size: 0x18 (Inherited: 0x08)
struct FScoreCategoryData : FDBDTableRowBase {
	enum class EDBDScoreCategory category; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ScoreCap; // 0x0c(0x04)
	int32_t ProgressionCap; // 0x10(0x04)
	int32_t AchievementCap; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.PlayerstateDataCache
// Size: 0x58 (Inherited: 0x00)
struct FPlayerstateDataCache {
	struct TMap<struct FName, struct FAwardedScores> awardedScoresByType; // 0x00(0x50)
	bool IsDataCacheValid; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct DeadByDaylight.AwardedScores
// Size: 0x10 (Inherited: 0x00)
struct FAwardedScores {
	struct TArray<struct FAwardedScore> Array; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.AwardedScore
// Size: 0x10 (Inherited: 0x00)
struct FAwardedScore {
	struct FName ScoreTypeId; // 0x00(0x0c)
	float BloodpointsAwarded; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.UserGameStats
// Size: 0xb0 (Inherited: 0x00)
struct FUserGameStats {
	bool Disconnected; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t FearTokens; // 0x04(0x04)
	int32_t Skulls; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<enum class EDBDScoreCategory, int32_t> BonusBloodpoints; // 0x10(0x50)
	struct TMap<enum class EDBDScoreCategory, int32_t> _bloodpoints; // 0x60(0x50)
};

// ScriptStruct DeadByDaylight.OngoingScoreData
// Size: 0x30 (Inherited: 0x00)
struct FOngoingScoreData {
	enum class EDBDScoreTypes scoreType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGameplayTag scoreTypeTag; // 0x04(0x0c)
	float TimeSinceScore; // 0x10(0x04)
	float ApplyScoreTimeout; // 0x14(0x04)
	float AccumulatedPercent; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* Target; // 0x20(0x08)
	struct UObject* CustomObjectParameter; // 0x28(0x08)
};

// ScriptStruct DeadByDaylight.PlayerFloatTuple
// Size: 0x10 (Inherited: 0x00)
struct FPlayerFloatTuple {
	struct ACharacter* Player; // 0x00(0x08)
	float value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.SurfaceTypeName
// Size: 0x18 (Inherited: 0x08)
struct FSurfaceTypeName : FDBDTableRowBase {
	struct FName Name; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.Toast
// Size: 0xb0 (Inherited: 0x08)
struct FToast : FDBDTableRowBase {
	float DisplayDuration; // 0x08(0x04)
	float lifetime; // 0x0c(0x04)
	struct FText ToastText; // 0x10(0x18)
	struct TMap<enum class EToastInputType, struct FToastButton> ButtonsData; // 0x28(0x50)
	float DelayBeforeInteraction; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TSoftObjectPtr<UTexture2D> ToastIcon; // 0x80(0x30)
};

// ScriptStruct DeadByDaylight.ToastButton
// Size: 0x20 (Inherited: 0x00)
struct FToastButton {
	struct FText ButtonText; // 0x00(0x18)
	bool IsRegression; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct DeadByDaylight.DDosGameConfigDS
// Size: 0x02 (Inherited: 0x00)
struct FDDosGameConfigDS {
	bool DDoSDetection; // 0x00(0x01)
	bool DDoSDetectionAnalytics; // 0x01(0x01)
};

// ScriptStruct DeadByDaylight.DebugModelExtArchiveQuestEvent
// Size: 0x28 (Inherited: 0x00)
struct FDebugModelExtArchiveQuestEvent {
	struct FString Parameters; // 0x00(0x10)
	struct FString QuestEventId; // 0x10(0x10)
	int32_t Repetition; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.DebugModelExtArchiveQuestSpecialBehaviours
// Size: 0x20 (Inherited: 0x00)
struct FDebugModelExtArchiveQuestSpecialBehaviours {
	struct FString ID; // 0x00(0x10)
	struct FString Params; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.DebugQuestModelExtArchiveCondition
// Size: 0x20 (Inherited: 0x00)
struct FDebugQuestModelExtArchiveCondition {
	struct FString Key; // 0x00(0x10)
	struct TArray<struct FString> value; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.DebugQuestModelExtArchiveObjective
// Size: 0x38 (Inherited: 0x00)
struct FDebugQuestModelExtArchiveObjective {
	struct TArray<struct FDebugQuestModelExtArchiveCondition> Conditions; // 0x00(0x10)
	int32_t NeededProgression; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FDebugModelExtArchiveQuestEvent> QuestEvents; // 0x18(0x10)
	struct TArray<struct FDebugModelExtArchiveQuestSpecialBehaviours> SpecialBehaviours; // 0x28(0x10)
};

// ScriptStruct DeadByDaylight.DedicatedServerGameConfig
// Size: 0x10 (Inherited: 0x00)
struct FDedicatedServerGameConfig {
	int32_t LatencyRetryCooldownSeconds; // 0x00(0x04)
	bool NewContentShutdown; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t NewContentShutdownMaxMinutes; // 0x08(0x04)
	int32_t NewContentShutdownMinMinutes; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.DedicatedSessionSearchCompletedEventData
// Size: 0x68 (Inherited: 0x00)
struct FDedicatedSessionSearchCompletedEventData {
	struct FString GameLiftSessionId; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	struct FString FleetId; // 0x20(0x10)
	struct FString IpAddress; // 0x30(0x10)
	int32_t Port; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString DnsName; // 0x48(0x10)
	struct FString Region; // 0x58(0x10)
};

// ScriptStruct DeadByDaylight.PCDeviceProfiles
// Size: 0x30 (Inherited: 0x08)
struct FPCDeviceProfiles : FDBDTableRowBase {
	struct FName Cpu; // 0x08(0x0c)
	struct FName GPU; // 0x14(0x0c)
	struct TArray<struct FResolutionQualityPair> Pairs; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.ResolutionQualityPair
// Size: 0x20 (Inherited: 0x08)
struct FResolutionQualityPair : FDBDTableRowBase {
	int32_t ResX; // 0x08(0x04)
	int32_t ResY; // 0x0c(0x04)
	int32_t Quality; // 0x10(0x04)
	bool AutoAdjust; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t ScreenScaleForWindowedMode; // 0x18(0x04)
	int32_t ScreenResolution; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.DialogPlannedPlayback
// Size: 0x20 (Inherited: 0x00)
struct FDialogPlannedPlayback {
	struct TArray<struct FAkEventWithSubtitle> PlannedClip; // 0x00(0x10)
	struct FGameplayTag GameEventTrigger; // 0x10(0x0c)
	bool IsDeletingAfterTrigger; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct DeadByDaylight.DialogEventSettings
// Size: 0x30 (Inherited: 0x00)
struct FDialogEventSettings {
	struct FGameplayTag GameEventTrigger; // 0x00(0x0c)
	enum class EDialogConditionSubject ConditionSubject; // 0x0c(0x01)
	bool OnlyPlayIfLocallyObserved; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FDialogClipSettings> Clips; // 0x10(0x10)
	bool OverrideCurrentAudio; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float DelayUntilPlay; // 0x24(0x04)
	float PlayProbability; // 0x28(0x04)
	int32_t EventPriority; // 0x2c(0x04)
};

// ScriptStruct DeadByDaylight.DialogClipSettings
// Size: 0x28 (Inherited: 0x00)
struct FDialogClipSettings {
	struct UAkAudioEvent* Clip; // 0x00(0x08)
	struct UDialogHandlerCondition* ConditionClass; // 0x08(0x08)
	struct UDialogHandlerCondition* Condition; // 0x10(0x08)
	int32_t Priority; // 0x18(0x04)
	int32_t Weight; // 0x1c(0x04)
	bool IsOnlyPlayingOnce; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DeadByDaylight.GeneratorQueryHandlePair
// Size: 0x28 (Inherited: 0x00)
struct FGeneratorQueryHandlePair {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct DeadByDaylight.DisplayStandControllerData
// Size: 0x70 (Inherited: 0x00)
struct FDisplayStandControllerData {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct DeadByDaylight.DownloadProgression
// Size: 0x30 (Inherited: 0x00)
struct FDownloadProgression {
	float DownloadSize; // 0x00(0x04)
	float TotalDownloadedSize; // 0x04(0x04)
	float DownloadSpeed; // 0x08(0x04)
	float InstallProgress; // 0x0c(0x04)
	bool IsDownloading; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText DownloadStatus; // 0x18(0x18)
};

// ScriptStruct DeadByDaylight.EffectsLocatorTargets
// Size: 0x08 (Inherited: 0x00)
struct FEffectsLocatorTargets {
	struct AActor* TargetActorClass; // 0x00(0x08)
};

// ScriptStruct DeadByDaylight.EmblemTooltipData
// Size: 0x108 (Inherited: 0x98)
struct FEmblemTooltipData : FBaseTooltipData {
	struct FEmblemSlotData EmblemSlotData; // 0x98(0x70)
};

// ScriptStruct DeadByDaylight.EventSubstitionData
// Size: 0x80 (Inherited: 0x08)
struct FEventSubstitionData : FDBDTableRowBase {
	struct FName _name; // 0x08(0x0c)
	bool _allowSubstitutionInKYF; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t _baseNumOfSubstitutionPerGroup; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FGameplayElementSubstitutions> _gameplaySubstitutionElements; // 0x20(0x10)
	struct TArray<struct FDependencyElementSubstitutions> _dependencySubstitutionElements; // 0x30(0x10)
	struct FTileSubstitutions _tileSubstitutions; // 0x40(0x10)
	struct FString _eventTileSuffix; // 0x50(0x10)
	struct TArray<struct FDependencyElementAddition> _dependencyElementAdditions; // 0x60(0x10)
	struct TArray<struct FGameplayElementAddition> _gameplayElementAdditions; // 0x70(0x10)
};

// ScriptStruct DeadByDaylight.GameplayElementAddition
// Size: 0x40 (Inherited: 0x00)
struct FGameplayElementAddition {
	struct TSoftClassPtr<UObject> _elementToAdd; // 0x00(0x30)
	enum class EGameplayElementType _spawnerType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t _numberToAdd; // 0x34(0x04)
	bool _numberToAddAffectedByOffering; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct DeadByDaylight.DependencyElementAddition
// Size: 0x38 (Inherited: 0x00)
struct FDependencyElementAddition {
	struct TSoftClassPtr<UObject> _object; // 0x00(0x30)
	enum class ETileSpawnPointType _type; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t _numberToAdd; // 0x34(0x04)
};

// ScriptStruct DeadByDaylight.TileSubstitutions
// Size: 0x10 (Inherited: 0x00)
struct FTileSubstitutions {
	struct TArray<struct FSubstitutionElements> _replacements; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.SubstitutionElements
// Size: 0x60 (Inherited: 0x00)
struct FSubstitutionElements {
	struct TSoftClassPtr<UObject> _elementToReplace; // 0x00(0x30)
	struct TSoftClassPtr<UObject> _elementToReplaceWith; // 0x30(0x30)
};

// ScriptStruct DeadByDaylight.ElementSubstitutions
// Size: 0x10 (Inherited: 0x00)
struct FElementSubstitutions {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.DependencyElementSubstitutions
// Size: 0x28 (Inherited: 0x10)
struct FDependencyElementSubstitutions : FElementSubstitutions {
	struct TArray<struct FSubstitutionElements> _replacements; // 0x10(0x10)
	enum class ETileSpawnPointType _type; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DeadByDaylight.GameplayElementSubstitutions
// Size: 0x28 (Inherited: 0x10)
struct FGameplayElementSubstitutions : FElementSubstitutions {
	struct TArray<struct FSubstitutionElements> _replacements; // 0x10(0x10)
	enum class EGameplayElementType _type; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DeadByDaylight.ExperimentData
// Size: 0x18 (Inherited: 0x08)
struct FExperimentData : FDBDTableRowBase {
	struct TArray<struct FName> AdditionalIds; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.PathPosition
// Size: 0x18 (Inherited: 0x00)
struct FPathPosition {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct DeadByDaylight.ExternalEffectData
// Size: 0x38 (Inherited: 0x00)
struct FExternalEffectData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct DeadByDaylight.FakePalletData
// Size: 0xd8 (Inherited: 0x08)
struct FFakePalletData : FDBDTableRowBase {
	struct TSoftClassPtr<UObject> LevelPalletBP; // 0x08(0x30)
	struct TSoftClassPtr<UObject> DreamPalletBP; // 0x38(0x30)
	struct TSoftClassPtr<UObject> PalletTrackerBP; // 0x68(0x30)
	struct TSoftObjectPtr<UStaticMesh> IllusionaryPalletStaticMesh; // 0x98(0x30)
	struct FName ID; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct DeadByDaylight.FeatureLocksContent
// Size: 0x10 (Inherited: 0x00)
struct FFeatureLocksContent {
	struct TArray<struct FFeatureLocksContentData> FeatureLocks; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.FeatureLocksContentData
// Size: 0x38 (Inherited: 0x00)
struct FFeatureLocksContentData {
	struct FString ID; // 0x00(0x10)
	struct FString Role; // 0x10(0x10)
	bool Role_IsSet; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FFeatureLocksConditionData> Condition; // 0x28(0x10)
};

// ScriptStruct DeadByDaylight.FeatureLocksConditionData
// Size: 0x30 (Inherited: 0x00)
struct FFeatureLocksConditionData {
	struct FString Left; // 0x00(0x10)
	struct FString Operator; // 0x10(0x10)
	struct FString Right; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.FilterLoadoutData
// Size: 0x78 (Inherited: 0x08)
struct FFilterLoadoutData : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x18(0x30)
	struct FText Title; // 0x48(0x18)
	struct TArray<enum class EPlayerRole> Role; // 0x60(0x10)
	enum class ELoadoutType LoadoutType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct DeadByDaylight.ForceSpawnTileData
// Size: 0x20 (Inherited: 0x00)
struct FForceSpawnTileData {
	struct FString Name; // 0x00(0x10)
	int32_t matrixX; // 0x10(0x04)
	int32_t matrixY; // 0x14(0x04)
	int32_t Rotation; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.FreeToPlayEventData
// Size: 0x30 (Inherited: 0x00)
struct FFreeToPlayEventData {
	struct FFreeToPlayData Event; // 0x00(0x30)
};

// ScriptStruct DeadByDaylight.FreeToPlayData
// Size: 0x30 (Inherited: 0x00)
struct FFreeToPlayData {
	char pad_0[0x10]; // 0x00(0x10)
	struct FString Start; // 0x10(0x10)
	struct FString End; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.GameEventDispatcherHandleBP
// Size: 0x20 (Inherited: 0x00)
struct FGameEventDispatcherHandleBP {
	struct FGameplayTag Filter; // 0x00(0x0c)
	struct FDelegate GameEventDelegate; // 0x0c(0x14)
};

// ScriptStruct DeadByDaylight.GameNotificationData
// Size: 0x28 (Inherited: 0x08)
struct FGameNotificationData : FDBDTableRowBase {
	enum class EPromptType PromptType; // 0x08(0x01)
	enum class EPromptPriority Priority; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText Content; // 0x10(0x18)
};

// ScriptStruct DeadByDaylight.ModifierTickableConditionReplicatedData
// Size: 0x18 (Inherited: 0x00)
struct FModifierTickableConditionReplicatedData {
	struct TArray<struct UBaseModifierCondition*> Conditions; // 0x00(0x10)
	bool HasCondition; // 0x10(0x01)
	bool AuthorityDataSet; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct DeadByDaylight.NotificationHistoryElement
// Size: 0x18 (Inherited: 0x00)
struct FNotificationHistoryElement {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct DeadByDaylight.GameplayNotificationData
// Size: 0x58 (Inherited: 0x00)
struct FGameplayNotificationData {
	struct FName SourceID; // 0x00(0x0c)
	enum class EInventoryItemType SourceType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t SourceIconIndex; // 0x10(0x04)
	int32_t SourceLevel; // 0x14(0x04)
	struct FName EffectId; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString EffectIconFilePath; // 0x28(0x10)
	enum class EStatusEffectType EffectType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FText EffectDisplayName; // 0x40(0x18)
};

// ScriptStruct DeadByDaylight.GarantiedRarityRingDistributionValues
// Size: 0x98 (Inherited: 0x08)
struct FGarantiedRarityRingDistributionValues : FDBDTableRowBase {
	int32_t InnerRingCommonItemProbability; // 0x08(0x04)
	int32_t MiddleRingCommonItemProbability; // 0x0c(0x04)
	int32_t OuterRingCommonItemProbability; // 0x10(0x04)
	int32_t InnerRingUncommonItemProbability; // 0x14(0x04)
	int32_t MiddleRingUncommonItemProbability; // 0x18(0x04)
	int32_t OuterRingUncommonItemProbability; // 0x1c(0x04)
	int32_t InnerRingRareItemProbability; // 0x20(0x04)
	int32_t MiddleRingRareItemProbability; // 0x24(0x04)
	int32_t OuterRingRareItemProbability; // 0x28(0x04)
	int32_t InnerRingVeryRareItemProbability; // 0x2c(0x04)
	int32_t MiddleRingVeryRareItemProbability; // 0x30(0x04)
	int32_t OuterRingVeryRareItemProbability; // 0x34(0x04)
	int32_t InnerRingUltraRareItemProbability; // 0x38(0x04)
	int32_t MiddleRingUltraRareItemProbability; // 0x3c(0x04)
	int32_t OuterRingUltraRareItemProbability; // 0x40(0x04)
	int32_t InnerRingArtifactItemProbability; // 0x44(0x04)
	int32_t MiddleRingArtifactItemProbability; // 0x48(0x04)
	int32_t OuterRingArtifactItemProbability; // 0x4c(0x04)
	int32_t InnerRingSpectralItemProbability; // 0x50(0x04)
	int32_t MiddleRingSpectralItemProbability; // 0x54(0x04)
	int32_t OuterRingSpectralItemProbability; // 0x58(0x04)
	int32_t InnerRingSpecialEventItemProbability; // 0x5c(0x04)
	int32_t MiddleRingSpecialEventItemProbability; // 0x60(0x04)
	int32_t OuterRingSpecialEventItemProbability; // 0x64(0x04)
	int32_t InnerRingLegendaryItemProbability; // 0x68(0x04)
	int32_t MiddleRingLegendaryItemProbability; // 0x6c(0x04)
	int32_t OuterRingLegendaryItemProbability; // 0x70(0x04)
	int32_t InnerRingEpicItemProbability; // 0x74(0x04)
	int32_t MiddleRingEpicItemProbability; // 0x78(0x04)
	int32_t OuterRingEpicItemProbability; // 0x7c(0x04)
	int32_t InnerRingSuperEpicItemProbability; // 0x80(0x04)
	int32_t MiddleRingSuperEpicItemProbability; // 0x84(0x04)
	int32_t OuterRingSuperEpicItemProbability; // 0x88(0x04)
	int32_t InnerRingUltraEpicItemProbability; // 0x8c(0x04)
	int32_t MiddleRingUltraEpicItemProbability; // 0x90(0x04)
	int32_t OuterRingUltraEpicItemProbability; // 0x94(0x04)
};

// ScriptStruct DeadByDaylight.DamageData
// Size: 0x20 (Inherited: 0x00)
struct FDamageData {
	bool _isRegressing; // 0x00(0x01)
	bool _isIntense; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct TWeakObjectPtr<struct ADBDPlayer> _lastDamageChangeSource; // 0x04(0x08)
	char pad_C[0x14]; // 0x0c(0x14)
};

// ScriptStruct DeadByDaylight.ReflectionCaptureTwoStates
// Size: 0x30 (Inherited: 0x00)
struct FReflectionCaptureTwoStates {
	struct FComponentReference ComponentReference; // 0x00(0x30)
};

// ScriptStruct DeadByDaylight.HintData
// Size: 0x60 (Inherited: 0x08)
struct FHintData : FDBDTableRowBase {
	enum class EHintCategory category; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FString IconPath; // 0x40(0x10)
	int32_t levelMin; // 0x50(0x04)
	int32_t levelMax; // 0x54(0x04)
	int32_t relevantCharacterID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct DeadByDaylight.HitValidationEditorConfig
// Size: 0x18 (Inherited: 0x08)
struct FHitValidationEditorConfig : FTableRowBase {
	enum class EHitValidatorConfigName ConfigName; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float CapsuleInflation; // 0x0c(0x04)
	float MaximumDistance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.HitValidationGameConfig
// Size: 0x18 (Inherited: 0x00)
struct FHitValidationGameConfig {
	bool enable; // 0x00(0x01)
	bool EnableCollisionCheck; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FHitValidationRecorder Recorder; // 0x04(0x04)
	struct TArray<struct FHitValidationValidator> Validators; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.HitValidationValidator
// Size: 0x18 (Inherited: 0x00)
struct FHitValidationValidator {
	float CapsuleInflation; // 0x00(0x04)
	float MaximumDistance; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.HitValidationRecorder
// Size: 0x04 (Inherited: 0x00)
struct FHitValidationRecorder {
	float CacheTimespan; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.HookLingerTimerHandleContainer
// Size: 0x10 (Inherited: 0x00)
struct FHookLingerTimerHandleContainer {
	struct AMeatHook* Hook; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct DeadByDaylight.PlayerInfoCache
// Size: 0x38 (Inherited: 0x00)
struct FPlayerInfoCache {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct DeadByDaylight.InteractionProficiencyProperties
// Size: 0x80 (Inherited: 0x08)
struct FInteractionProficiencyProperties : FDBDTableRowBase {
	struct FName ProficiencyID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftClassPtr<UObject> ProficiencyBlueprint; // 0x18(0x30)
	struct TArray<float> BuffLevelThresholds; // 0x48(0x10)
	struct TArray<float> DebuffLevelThresholds; // 0x58(0x10)
	bool HasLevels; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString IconFilePath; // 0x70(0x10)
};

// ScriptStruct DeadByDaylight.InteractionProficiencyData
// Size: 0x10 (Inherited: 0x00)
struct FInteractionProficiencyData {
	bool IsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Level; // 0x04(0x04)
	enum class EStatusEffectType ProficiencyType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float value; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.InteractionRequest
// Size: 0x18 (Inherited: 0x00)
struct FInteractionRequest {
	struct UInteractionDefinition* _interaction; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct ADBDPlayer* _requester; // 0x10(0x08)
};

// ScriptStruct DeadByDaylight.ItemAddonProperties
// Size: 0x250 (Inherited: 0x1f8)
struct FItemAddonProperties : FItemData {
	struct TSoftClassPtr<UObject> ItemAddonBlueprint; // 0x1f8(0x30)
	struct FParentItemIDs parentItem; // 0x228(0x18)
	struct TArray<struct FName> PreLevelGenerationModifierID; // 0x240(0x10)
};

// ScriptStruct DeadByDaylight.ParentItemIDs
// Size: 0x18 (Inherited: 0x00)
struct FParentItemIDs {
	bool MatchAnyItemID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> itemIds; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.ItemAddonInitializationData
// Size: 0x02 (Inherited: 0x00)
struct FItemAddonInitializationData {
	enum class EInventoryItemType InventoryItemType; // 0x00(0x01)
	bool AuthorityDataSet; // 0x01(0x01)
};

// ScriptStruct DeadByDaylight.ItemCharacterKillswitchData
// Size: 0x38 (Inherited: 0x00)
struct FItemCharacterKillswitchData {
	struct FCharacterFallbackData CharacterFallback; // 0x00(0x20)
	struct TArray<struct FString> DisabledItems; // 0x20(0x10)
	bool DisabledItems_IsSet; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct DeadByDaylight.CharacterFallbackData
// Size: 0x20 (Inherited: 0x00)
struct FCharacterFallbackData {
	struct FString DefaultKiller; // 0x00(0x10)
	struct FString DefaultSurvivor; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.ItemTooltipData
// Size: 0x120 (Inherited: 0x98)
struct FItemTooltipData : FBaseTooltipData {
	char pad_98[0x88]; // 0x98(0x88)
};

// ScriptStruct DeadByDaylight.ItemTypeData
// Size: 0xd0 (Inherited: 0x08)
struct FItemTypeData : FDBDTableRowBase {
	enum class ELoadoutItemType ItemType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FItemUIData UIData; // 0x10(0xc0)
};

// ScriptStruct DeadByDaylight.JwtGameConfig
// Size: 0x01 (Inherited: 0x00)
struct FJwtGameConfig {
	bool Enabled; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.KillerPOVSurvivorAimOffsetOverrideData
// Size: 0x40 (Inherited: 0x08)
struct FKillerPOVSurvivorAimOffsetOverrideData : FDBDTableRowBase {
	struct FGameplayTag PresenceTag; // 0x08(0x0c)
	float _heightOffset; // 0x14(0x04)
	struct UCurveFloat* _offsetPercentagePerDotProductCurve; // 0x18(0x08)
	struct TArray<struct FGameplayTag> _conditionalTagsRequired; // 0x20(0x10)
	struct TArray<struct FGameplayTag> ConditionalTagsPreventing; // 0x30(0x10)
};

// ScriptStruct DeadByDaylight.KillerSoundCueTracker
// Size: 0x1c (Inherited: 0x00)
struct FKillerSoundCueTracker {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct DeadByDaylight.KillerSpecificComponentsData
// Size: 0x48 (Inherited: 0x08)
struct FKillerSpecificComponentsData : FDBDTableRowBase {
	struct FGameplayTag KillerPresenceTag; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftClassPtr<UObject> KillerSpecificComponent; // 0x18(0x30)
};

// ScriptStruct DeadByDaylight.KillerSpecificNavmeshesData
// Size: 0x28 (Inherited: 0x08)
struct FKillerSpecificNavmeshesData : FDBDTableRowBase {
	struct FGameplayTag KillerPresenceTag; // 0x08(0x0c)
	struct FName NavmeshName; // 0x14(0x0c)
	int32_t NavmeshIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.LandingPageStorefrontTabData
// Size: 0x58 (Inherited: 0x00)
struct FLandingPageStorefrontTabData {
	struct FString Type; // 0x00(0x10)
	struct FDateTime NewStartDate; // 0x10(0x08)
	struct FDateTime NewEndDate; // 0x18(0x08)
	struct UTexture2DDynamic* Image; // 0x20(0x08)
	struct FText Title; // 0x28(0x18)
	struct FText TagText; // 0x40(0x18)
};

// ScriptStruct DeadByDaylight.LandingPageTabData
// Size: 0x58 (Inherited: 0x00)
struct FLandingPageTabData {
	struct FText DefaultText; // 0x00(0x18)
	struct TScriptInterface<ISlateTextureAtlasInterface> DefaultImage; // 0x18(0x10)
	struct FSlateColor BannerBackgroudColor; // 0x28(0x28)
	bool IsButtonEnabled; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct DeadByDaylight.ParadiseData
// Size: 0x58 (Inherited: 0x00)
struct FParadiseData {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct DeadByDaylight.LevelReadyToPlayRequirements
// Size: 0x10 (Inherited: 0x00)
struct FLevelReadyToPlayRequirements {
	struct ADBDPlayer* Player; // 0x00(0x08)
	char perkCount; // 0x08(0x01)
	char itemCount; // 0x09(0x01)
	char addonCount; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct DeadByDaylight.SceneLightingDescription
// Size: 0xd0 (Inherited: 0x00)
struct FSceneLightingDescription {
	struct FName ThemeName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FLightingSpecifics LightingDetailsLowMedium; // 0x10(0x30)
	struct FLightingSpecifics LightingDetailsHighUltra; // 0x40(0x30)
	struct FLightingSpecifics LightingAtlanta; // 0x70(0x30)
	struct TSoftObjectPtr<UTextureCube> TextureCube; // 0xa0(0x30)
};

// ScriptStruct DeadByDaylight.LightingSpecifics
// Size: 0x30 (Inherited: 0x00)
struct FLightingSpecifics {
	struct TSoftClassPtr<UObject> LightBlueprint; // 0x00(0x30)
};

// ScriptStruct DeadByDaylight.DirectionalHeightFogInterpolationValues
// Size: 0x98 (Inherited: 0x00)
struct FDirectionalHeightFogInterpolationValues {
	float FogDensity; // 0x00(0x04)
	struct FLinearColor FogInscatteringColor; // 0x04(0x10)
	float DirectionalInscatteringExponent; // 0x14(0x04)
	float DirectionalInscatteringStartDistance; // 0x18(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x1c(0x10)
	float FogHeightFalloff; // 0x2c(0x04)
	float FogMaxOpacity; // 0x30(0x04)
	float StartDistance; // 0x34(0x04)
	float SecondFogDensity; // 0x38(0x04)
	float SecondFogHeightFalloff; // 0x3c(0x04)
	float SecondFogHeightOffset; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FHeightFogGradientEntry> FogGradient; // 0x48(0x10)
	bool bReplaceVolumetricFogAlbedoWithColorGradient; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float VolumetricFogGradientIntensityMultiplier; // 0x5c(0x04)
	float DistanceUntilFlatFog; // 0x60(0x04)
	float DistanceUntilNoFog; // 0x64(0x04)
	bool bEnableVolumetricFog; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float VolumetricFogScatteringDistribution; // 0x6c(0x04)
	struct FColor VolumetricFogAlbedo; // 0x70(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x74(0x10)
	float VolumetricFogExtinctionScale; // 0x84(0x04)
	float VolumetricFogDistance; // 0x88(0x04)
	float VolumetricFogStaticLightingScatteringIntensity; // 0x8c(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct DeadByDaylight.LoadingImagesData
// Size: 0x40 (Inherited: 0x08)
struct FLoadingImagesData : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct TSoftObjectPtr<UPaperSprite>> Images; // 0x18(0x10)
	struct TArray<struct FLoadingInfoData> InfoData; // 0x28(0x10)
	bool IsAvailableForSurvivor; // 0x38(0x01)
	bool IsAvailableForKiller; // 0x39(0x01)
	bool IsGenericImages; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct DeadByDaylight.LoadingInfoData
// Size: 0x68 (Inherited: 0x00)
struct FLoadingInfoData {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x30(0x30)
	bool IsAvailableForKiller; // 0x60(0x01)
	bool IsAvailableForSurvivor; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct DeadByDaylight.LoadingTimeoutPerStep
// Size: 0x20 (Inherited: 0x00)
struct FLoadingTimeoutPerStep {
	struct FString StepName; // 0x00(0x10)
	float ExpectedTimeout; // 0x10(0x04)
	float HardCapTimeout; // 0x14(0x04)
	float TimeCapWithoutProgress; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.LoadoutSlotUnlockLevelValue
// Size: 0x10 (Inherited: 0x08)
struct FLoadoutSlotUnlockLevelValue : FDBDTableRowBase {
	enum class ELoadoutSlot LoadoutSlot; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t BloodWebLevel; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.PlayerLobbyOrderData
// Size: 0x18 (Inherited: 0x00)
struct FPlayerLobbyOrderData {
	struct FString playerID; // 0x00(0x10)
	int32_t slotIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.LobbyPlayerData
// Size: 0x50 (Inherited: 0x00)
struct FLobbyPlayerData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct DeadByDaylight.ObjectLock
// Size: 0x08 (Inherited: 0x00)
struct FObjectLock {
	struct TWeakObjectPtr<struct UObject> _lockingObject; // 0x00(0x08)
};

// ScriptStruct DeadByDaylight.KillerClosetActorsTypes
// Size: 0x58 (Inherited: 0x08)
struct FKillerClosetActorsTypes : FDBDTableRowBase {
	struct FGameplayTag KillerPresenceTag; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftClassPtr<UObject> ClosetActorClass; // 0x18(0x30)
	struct FName SocketToSpawnOn; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct DeadByDaylight.CustomLockerOutlineOverride
// Size: 0x50 (Inherited: 0x00)
struct FCustomLockerOutlineOverride {
	int32_t Priority; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayTag> LockerStateTags; // 0x08(0x10)
	struct TArray<struct FGameplayTag> PlayerStateTags; // 0x18(0x10)
	struct TArray<struct FGameplayTag> PlayerPerkFlags; // 0x28(0x10)
	struct FLinearColor OutlineColor; // 0x38(0x10)
	bool IsAlwaysVisible; // 0x48(0x01)
	bool FadeOutAsClosingIn; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct DeadByDaylight.LoudNoiseIndicatorData
// Size: 0x20 (Inherited: 0x00)
struct FLoudNoiseIndicatorData {
	struct UStaticMeshComponent* MeshMask; // 0x00(0x08)
	struct UStaticMeshComponent* DistortionMesh; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	float RemainingTime; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.MainMenuButtonData
// Size: 0x60 (Inherited: 0x08)
struct FMainMenuButtonData : FDBDTableRowBase {
	enum class EMainMenuButton ButtonType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText label; // 0x10(0x18)
	struct FText InfoTitle; // 0x28(0x18)
	struct FText LockedInfoTitle; // 0x40(0x18)
	bool IsDisabled; // 0x58(0x01)
	bool IsLocked; // 0x59(0x01)
	bool IsHidden; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
};

// ScriptStruct DeadByDaylight.GenerationParams
// Size: 0x04 (Inherited: 0x00)
struct FGenerationParams {
	int32_t Seed; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.TileProperties
// Size: 0x78 (Inherited: 0x00)
struct FTileProperties {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct DeadByDaylight.MapSpecificComponentsData
// Size: 0x48 (Inherited: 0x08)
struct FMapSpecificComponentsData : FDBDTableRowBase {
	struct FString MapName; // 0x08(0x10)
	struct TSoftClassPtr<UObject> MapSpecificComponent; // 0x18(0x30)
};

// ScriptStruct DeadByDaylight.MatchmakingContextData
// Size: 0x04 (Inherited: 0x00)
struct FMatchmakingContextData {
	uint32_t ContextId; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.MenuCharacterUIData
// Size: 0x28 (Inherited: 0x08)
struct FMenuCharacterUIData : FDBDTableRowBase {
	int32_t characterIndex; // 0x08(0x04)
	struct FVector offsetMainMenuForwardPosition; // 0x0c(0x0c)
	struct FVector offsetMainMenuBackwardPosition; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.MenuIndexChangeEventData
// Size: 0x04 (Inherited: 0x00)
struct FMenuIndexChangeEventData {
	int32_t index; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.MenuRoleChangeEventData
// Size: 0x01 (Inherited: 0x00)
struct FMenuRoleChangeEventData {
	enum class EPlayerRole PlayerRole; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.GameInfoEventData
// Size: 0x02 (Inherited: 0x00)
struct FGameInfoEventData {
	enum class EPlayerRole PlayerRole; // 0x00(0x01)
	enum class EGameType GameType; // 0x01(0x01)
};

// ScriptStruct DeadByDaylight.MontageInstanceInfo
// Size: 0x30 (Inherited: 0x00)
struct FMontageInstanceInfo {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct DeadByDaylight.NamedButton
// Size: 0x18 (Inherited: 0x00)
struct FNamedButton {
	int32_t ClickCounter; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString DisplayName; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.GuidingInfo
// Size: 0x18 (Inherited: 0x00)
struct FGuidingInfo {
	struct TArray<struct ADBDPlayer*> _guidingPlayers; // 0x00(0x10)
	enum class EGuidedState _guidedState; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct DeadByDaylight.NewsContentOnlineData
// Size: 0x18 (Inherited: 0x00)
struct FNewsContentOnlineData {
	struct TArray<struct FNewsContentDetails> News; // 0x00(0x10)
	bool News_isset; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct DeadByDaylight.NewsContentDetails
// Size: 0xb8 (Inherited: 0x00)
struct FNewsContentDetails {
	int32_t Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Version; // 0x08(0x10)
	struct FString Title; // 0x18(0x10)
	struct FString Description; // 0x28(0x10)
	struct FString ImagePath; // 0x38(0x10)
	bool ImagePath_IsSet; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString DwnImagePath; // 0x50(0x10)
	bool DwnImagePath_IsSet; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t ImageHeight; // 0x64(0x04)
	bool ImageHeight_IsSet; // 0x68(0x01)
	bool IsHidden; // 0x69(0x01)
	bool IsHidden_IsSet; // 0x6a(0x01)
	char pad_6B[0x21]; // 0x6b(0x21)
	int32_t Type; // 0x8c(0x04)
	bool Type_IsSet; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct FString> ContentTags; // 0x98(0x10)
	struct FString StartDate; // 0xa8(0x10)
};

// ScriptStruct DeadByDaylight.NodeContentDistributionValue
// Size: 0x60 (Inherited: 0x08)
struct FNodeContentDistributionValue : FDBDTableRowBase {
	int32_t Empty_Weight; // 0x08(0x04)
	int32_t Empty_MinCount; // 0x0c(0x04)
	int32_t Empty_MaxCount; // 0x10(0x04)
	int32_t Perks_Weight; // 0x14(0x04)
	int32_t Perks_MinCount; // 0x18(0x04)
	int32_t Perks_MaxCount; // 0x1c(0x04)
	int32_t PerksPacks_Weight; // 0x20(0x04)
	int32_t PerksPacks_MinCount; // 0x24(0x04)
	int32_t PerksPacks_MaxCount; // 0x28(0x04)
	int32_t Offerings_Weight; // 0x2c(0x04)
	int32_t Offerings_MinCount; // 0x30(0x04)
	int32_t Offerings_MaxCount; // 0x34(0x04)
	int32_t Items_Weight; // 0x38(0x04)
	int32_t Items_MinCount; // 0x3c(0x04)
	int32_t Items_MaxCount; // 0x40(0x04)
	int32_t AddOn_Weight; // 0x44(0x04)
	int32_t AddOn_MinCount; // 0x48(0x04)
	int32_t AddOn_MaxCount; // 0x4c(0x04)
	int32_t Chests_Weight; // 0x50(0x04)
	int32_t Chests_MinCount; // 0x54(0x04)
	int32_t Chests_MaxCount; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct DeadByDaylight.Offering
// Size: 0x230 (Inherited: 0x00)
struct FOffering {
	char pad_0[0x230]; // 0x00(0x230)
};

// ScriptStruct DeadByDaylight.OfferingProperties
// Size: 0x230 (Inherited: 0x1f8)
struct FOfferingProperties : FItemData {
	enum class EOfferingType OfferingType; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct TArray<struct FName> Tags; // 0x200(0x10)
	struct TArray<struct FOfferingEffect> Effects; // 0x210(0x10)
	struct FString BigIconFilePath; // 0x220(0x10)
};

// ScriptStruct DeadByDaylight.OfferingEffect
// Size: 0x28 (Inherited: 0x00)
struct FOfferingEffect {
	enum class EOfferingEffectType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> Tags; // 0x08(0x10)
	struct FName value; // 0x18(0x0c)
	float Modifier; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.OfferingTypeTexture
// Size: 0x30 (Inherited: 0x00)
struct FOfferingTypeTexture {
	struct FName Type; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSoftObjectPath TextureBack; // 0x10(0x20)
};

// ScriptStruct DeadByDaylight.RarityTexture
// Size: 0x30 (Inherited: 0x00)
struct FRarityTexture {
	struct FName Type; // 0x00(0x0c)
	enum class EItemRarity Rarity; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FSoftObjectPath Texture; // 0x10(0x20)
};

// ScriptStruct DeadByDaylight.OfferingCategoryData
// Size: 0xe0 (Inherited: 0x08)
struct FOfferingCategoryData : FDBDTableRowBase {
	enum class EOfferingCategory OfferingCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<enum class EPlayerRole> Role; // 0x10(0x10)
	struct FItemUIData UIData; // 0x20(0xc0)
};

// ScriptStruct DeadByDaylight.OfferingRevealDelays
// Size: 0x08 (Inherited: 0x00)
struct FOfferingRevealDelays {
	enum class EOfferingSequenceState RevealState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Delay; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.OfferingTriggerPositionData
// Size: 0x10 (Inherited: 0x00)
struct FOfferingTriggerPositionData {
	int32_t index; // 0x00(0x04)
	float PosX; // 0x04(0x04)
	float PosY; // 0x08(0x04)
	int32_t CardIndex; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.DBDQueueTimeInfo
// Size: 0x18 (Inherited: 0x00)
struct FDBDQueueTimeInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct DeadByDaylight.DBDConnectionStatus
// Size: 0x10 (Inherited: 0x00)
struct FDBDConnectionStatus {
	char pad_0[0x8]; // 0x00(0x08)
	struct UDBDGameInstance* _gameInstance; // 0x08(0x08)
};

// ScriptStruct DeadByDaylight.DBDSearchParams
// Size: 0x80 (Inherited: 0x00)
struct FDBDSearchParams {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct DeadByDaylight.DBDJoinParams
// Size: 0x01 (Inherited: 0x00)
struct FDBDJoinParams {
	enum class EGameType GameType; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.OnScreenDebugInfo
// Size: 0x40 (Inherited: 0x00)
struct FOnScreenDebugInfo {
	struct FString Message; // 0x00(0x10)
	struct FColor Color; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t Key; // 0x18(0x08)
	float TimeToDisplay; // 0x20(0x04)
	bool IsDrawDebug; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector DrawDebugLocation; // 0x28(0x0c)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct DeadByDaylight.OutfitData
// Size: 0x198 (Inherited: 0x08)
struct FOutfitData : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FItemUIData UIData; // 0x18(0xc0)
	struct FItemAvailability Availability; // 0xd8(0x40)
	struct TArray<struct FName> OutfitItems; // 0x118(0x10)
	struct FText CollectionName; // 0x128(0x18)
	struct FText CollectionDescription; // 0x140(0x18)
	struct FString InclusionVersion; // 0x158(0x10)
	bool IsAvailableInAtlantaBuild; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	struct FName CustomizedAudioStateCollection; // 0x16c(0x0c)
	struct FString _outfitId; // 0x178(0x10)
	char pad_188[0x10]; // 0x188(0x10)
};

// ScriptStruct DeadByDaylight.OutfitDropdown
// Size: 0x14 (Inherited: 0x08)
struct FOutfitDropdown : FCharacterDropdown {
	struct FName OutfitId; // 0x08(0x0c)
};

// ScriptStruct DeadByDaylight.RevealOptions
// Size: 0x28 (Inherited: 0x00)
struct FRevealOptions {
	bool IsUnaffectedByBlindness; // 0x00(0x01)
	bool IsOutlineAlwaysVisible; // 0x01(0x01)
	bool IsUnaffectedByFadeout; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Duration; // 0x04(0x04)
	float Range; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* ActorToTestRangeFrom; // 0x10(0x08)
	struct FGameplayTag OutlineMaterialOverride; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.SurvivorInfoData
// Size: 0x38 (Inherited: 0x00)
struct FSurvivorInfoData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct DeadByDaylight.PalletPushSettings
// Size: 0x02 (Inherited: 0x00)
struct FPalletPushSettings {
	bool IgnorePlayerExecutingPulldown; // 0x00(0x01)
	enum class EPalletPushSideStrategy PalletPushSideStrategy; // 0x01(0x01)
};

// ScriptStruct DeadByDaylight.PartyMemberUIData
// Size: 0x30 (Inherited: 0x00)
struct FPartyMemberUIData {
	bool _isLocalPlayer; // 0x00(0x01)
	bool _isReady; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString _mirrorId; // 0x08(0x10)
	struct FString _playerName; // 0x18(0x10)
	int32_t _playerId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct DeadByDaylight.PerkProperties
// Size: 0x2e8 (Inherited: 0x1f8)
struct FPerkProperties : FItemData {
	struct TArray<struct FName> Tags; // 0x1f8(0x10)
	struct TArray<struct FOfferingEffect> Effects; // 0x208(0x10)
	int32_t AssociatedPlayerIndex; // 0x218(0x04)
	int32_t MandatoryOnBloodweblevel; // 0x21c(0x04)
	int32_t TeachableOnBloodweblevel; // 0x220(0x04)
	int32_t AtlantaTeachableLevel; // 0x224(0x04)
	struct TArray<enum class EPerkCategory> PerkCategory; // 0x228(0x10)
	struct TSoftClassPtr<UObject> PerkBlueprint; // 0x238(0x30)
	struct TArray<enum class EItemRarity> PerkLevelRarity; // 0x268(0x10)
	struct TArray<struct FPerkLevelText> PerkLevelTunables; // 0x278(0x10)
	struct FText PerkLevel1Description; // 0x288(0x18)
	struct FText PerkLevel2Description; // 0x2a0(0x18)
	struct FText PerkLevel3Description; // 0x2b8(0x18)
	struct TArray<struct FString> AtlantaActivatableInteractionIDs; // 0x2d0(0x10)
	bool AtlantaLowPriority; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
};

// ScriptStruct DeadByDaylight.PerkLevelText
// Size: 0x28 (Inherited: 0x00)
struct FPerkLevelText {
	struct TArray<struct FString> Tunables; // 0x00(0x10)
	struct FText TextOverride; // 0x10(0x18)
};

// ScriptStruct DeadByDaylight.PerkInitializationData
// Size: 0x08 (Inherited: 0x00)
struct FPerkInitializationData {
	int32_t PerkLevel; // 0x00(0x04)
	enum class EInputInteractionType ActivatableInteractionInputType; // 0x04(0x01)
	bool AuthorityDataSet; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct DeadByDaylight.PerspectiveEffectData
// Size: 0x1c (Inherited: 0x00)
struct FPerspectiveEffectData {
	bool WantsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FDelegate ActivationEvent; // 0x04(0x14)
	enum class EPerspectiveActivationCondition Condition; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct DeadByDaylight.PlatformDlcData
// Size: 0xd8 (Inherited: 0x08)
struct FPlatformDlcData : FDBDTableRowBase {
	struct FString ID; // 0x08(0x10)
	struct FText UnlockDescription; // 0x18(0x18)
	struct FString Description; // 0x30(0x10)
	int32_t UISortOrder; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString HeritageID; // 0x48(0x10)
	struct FString DlcIdSteam; // 0x58(0x10)
	struct FString DlcIdEpic; // 0x68(0x10)
	struct FString DlcIdPS4; // 0x78(0x10)
	struct FString DlcId_XB1_XSX_GDK; // 0x88(0x10)
	struct FString DlcIdSwitch; // 0x98(0x10)
	struct FString DlcIdGRDK; // 0xa8(0x10)
	struct FString DlcIdPS5; // 0xb8(0x10)
	struct FString DlcIdStadia; // 0xc8(0x10)
};

// ScriptStruct DeadByDaylight.PlayerCapsuleQueryParams
// Size: 0x78 (Inherited: 0x00)
struct FPlayerCapsuleQueryParams {
	struct ADBDPlayer* Player; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct TSet<struct AActor*> ignoreActors; // 0x18(0x50)
	char pad_68[0x10]; // 0x68(0x10)
};

// ScriptStruct DeadByDaylight.PlayerLevelData
// Size: 0x0c (Inherited: 0x00)
struct FPlayerLevelData {
	int32_t LevelValue; // 0x00(0x04)
	int32_t PrestigeValue; // 0x04(0x04)
	int32_t MaxXp; // 0x08(0x04)
};

// ScriptStruct DeadByDaylight.PlayerLevelTooltipData
// Size: 0xa8 (Inherited: 0x98)
struct FPlayerLevelTooltipData : FBaseTooltipData {
	int32_t PlayerLevel; // 0x98(0x04)
	int32_t PlayerPrestige; // 0x9c(0x04)
	int32_t CurrentExperience; // 0xa0(0x04)
	int32_t NextLevelExperience; // 0xa4(0x04)
};

// ScriptStruct DeadByDaylight.PlayerReadyStatusData
// Size: 0x0c (Inherited: 0x00)
struct FPlayerReadyStatusData {
	int32_t playerID; // 0x00(0x04)
	int32_t slotIndex; // 0x04(0x04)
	bool IsReady; // 0x08(0x01)
	bool IsSlasher; // 0x09(0x01)
	bool IsLocalPlayer; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct DeadByDaylight.PlayerRoleRankData
// Size: 0x10 (Inherited: 0x00)
struct FPlayerRoleRankData {
	enum class EPlayerRole PlayerRole; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Rank; // 0x04(0x04)
	int32_t PipsRequiredForNextRank; // 0x08(0x04)
	int32_t ActivePips; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.PlayerRoundStartEventData
// Size: 0x50 (Inherited: 0x00)
struct FPlayerRoundStartEventData {
	enum class EPlayerRole PlayerRole; // 0x00(0x01)
	bool IsABot; // 0x01(0x01)
	enum class EAIDifficultyLevel BotDifficultyLevel; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FString BotName; // 0x08(0x10)
	struct FString BotMirrorID; // 0x18(0x10)
	int32_t characterId; // 0x28(0x04)
	int32_t PlayerRankForRole; // 0x2c(0x04)
	int32_t PrestigeLevel; // 0x30(0x04)
	int32_t BloodWebLevel; // 0x34(0x04)
	int32_t Pips; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FPlayerRankData> PlayerRankDataArray; // 0x40(0x10)
};

// ScriptStruct DeadByDaylight.PlayerRankData
// Size: 0x18 (Inherited: 0x00)
struct FPlayerRankData {
	struct FString MirrorsId; // 0x00(0x10)
	enum class EPlayerRole PlayerRole; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t PlayerRankForRole; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.PlayerScoreEmitterData
// Size: 0x80 (Inherited: 0x08)
struct FPlayerScoreEmitterData : FDBDTableRowBase {
	struct FGameplayTagQuery PawnSemanticTags; // 0x08(0x48)
	struct TSoftClassPtr<UObject> Emitter; // 0x50(0x30)
};

// ScriptStruct DeadByDaylight.PostAttackData
// Size: 0x07 (Inherited: 0x00)
struct FPostAttackData {
	bool IsOblivious; // 0x00(0x01)
	bool IsKO; // 0x01(0x01)
	bool IsExposed; // 0x02(0x01)
	bool IsPostPhaseWalkAttack; // 0x03(0x01)
	bool IsDownedInDemonMode; // 0x04(0x01)
	bool IsLegionBleedOutAttack; // 0x05(0x01)
	bool IsDemogorgonPounceAttack; // 0x06(0x01)
};

// ScriptStruct DeadByDaylight.PreLevelGenerationModifierProperties
// Size: 0x20 (Inherited: 0x08)
struct FPreLevelGenerationModifierProperties : FDBDTableRowBase {
	struct FName modifierID; // 0x08(0x0c)
	enum class EPreLevelGenerationModifierType modifierType; // 0x14(0x01)
	enum class EKillerAbilities KillerAbiliy; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float ModifierValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.PrestigeIconData
// Size: 0x40 (Inherited: 0x08)
struct FPrestigeIconData : FDBDTableRowBase {
	enum class EPlayerRole PlayerRole; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t PrestigeLevel; // 0x0c(0x04)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x10(0x30)
};

// ScriptStruct DeadByDaylight.PrestigeRewardData
// Size: 0x58 (Inherited: 0x08)
struct FPrestigeRewardData : FDBDTableRowBase {
	int32_t AssociatedCharacter; // 0x08(0x04)
	int32_t PrestigeLevel; // 0x0c(0x04)
	struct FPrestigeRewardStruct Rewards[0x3]; // 0x10(0x48)
};

// ScriptStruct DeadByDaylight.PrestigeRewardStruct
// Size: 0x18 (Inherited: 0x00)
struct FPrestigeRewardStruct {
	struct FString RewardId; // 0x00(0x10)
	enum class EPrestigeRewardType RewardType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t RewardPerkLevel; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.GeneratedLevelData
// Size: 0x330 (Inherited: 0x00)
struct FGeneratedLevelData {
	struct FString UsedPaperTileMap; // 0x00(0x10)
	struct FString PremadeMap; // 0x10(0x10)
	int32_t StreamRelatedSeed; // 0x20(0x04)
	int32_t AvailableEscapeCount; // 0x24(0x04)
	int32_t AvailableSurvivorItemCount; // 0x28(0x04)
	enum class ESurvivorGrouping GroupingType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct USceneComponent* KillerSpawnPoint; // 0x30(0x08)
	struct TArray<struct USceneComponent*> SurvivorSpawnPoints; // 0x38(0x10)
	struct TArray<struct USceneComponent*> InteractableElementsSpawnPoints; // 0x48(0x10)
	struct TMap<struct FName, int32_t> SpecialBehaviourRequestCounts; // 0x58(0x50)
	struct TMap<struct FName, struct FArrayOfSceneComponent> SpecialBehaviourSpawnPoints; // 0xa8(0x50)
	struct TMap<struct FName, struct FArrayOfSceneComponent> SpecialBehaviourActorSpawners; // 0xf8(0x50)
	struct TArray<struct USceneComponent*> SearchableSpawners; // 0x148(0x10)
	struct TArray<struct USceneComponent*> HexSpawners; // 0x158(0x10)
	struct TArray<struct USceneComponent*> KillerLairSpawners; // 0x168(0x10)
	struct TArray<struct USceneComponent*> HatchSpawners; // 0x178(0x10)
	struct TArray<struct USceneComponent*> MainBuildingHatchSpawners; // 0x188(0x10)
	struct TArray<struct USceneComponent*> ShackHatchSpawners; // 0x198(0x10)
	struct TArray<struct USceneComponent*> BreakableWallSpawners; // 0x1a8(0x10)
	struct TArray<struct USceneComponent*> EscapeSpawners; // 0x1b8(0x10)
	struct FManagedGameplayElementData BookshelfManagedGameplayElementData; // 0x1c8(0x50)
	struct FManagedGameplayElementData MeatHookManagedGameplayElementData; // 0x218(0x50)
	struct TArray<struct FDependency> LevelDependencies; // 0x268(0x10)
	struct TArray<struct FDependency> LateLevelDependencies; // 0x278(0x10)
	struct TArray<struct AActor*> FixedMapTileIds; // 0x288(0x10)
	struct TArray<struct AActor*> FixedMapOrphanSpawners; // 0x298(0x10)
	struct TArray<struct USceneComponent*> FinisherMoriSpawnPoints; // 0x2a8(0x10)
	struct TArray<struct USceneComponent*> SteamPipeSpawners; // 0x2b8(0x10)
	struct TArray<struct USceneComponent*> SteamPipeButtonSpawners; // 0x2c8(0x10)
	struct FName SpecialEventId; // 0x2d8(0x0c)
	bool UseForcedMap; // 0x2e4(0x01)
	bool UsePremadeMap; // 0x2e5(0x01)
	char pad_2E6[0x2]; // 0x2e6(0x02)
	struct FString GenerationLogs; // 0x2e8(0x10)
	struct FString GenerationErrors; // 0x2f8(0x10)
	int32_t GenerationPlayerCount; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct TArray<struct FForceSpawnTileData> ForceSpawnTileData; // 0x310(0x10)
	struct TArray<struct AActor*> LevelLightings; // 0x320(0x10)
};

// ScriptStruct DeadByDaylight.ManagedGameplayElementData
// Size: 0x50 (Inherited: 0x00)
struct FManagedGameplayElementData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UActorSpawner*> ActivatedSpawners; // 0x08(0x10)
	struct TArray<struct UActorSpawner*> RemovedSpawners; // 0x18(0x10)
	enum class EGameplayElementType PopulationType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float CurrentPopulationCost; // 0x2c(0x04)
	int32_t MaxPopulationCost; // 0x30(0x04)
	int32_t MinPopulationCost; // 0x34(0x04)
	float MapWidth; // 0x38(0x04)
	float MinProximityBetweenElements; // 0x3c(0x04)
	float MinDistSqrBetweenElements; // 0x40(0x04)
	float TileWidth; // 0x44(0x04)
	float FactorToAdjustToWhenOutOfProximity; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct DeadByDaylight.ArrayOfSceneComponent
// Size: 0x10 (Inherited: 0x00)
struct FArrayOfSceneComponent {
	struct TArray<struct USceneComponent*> sceneComp; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.QuadrantSpawnTypeProperties
// Size: 0x18 (Inherited: 0x00)
struct FQuadrantSpawnTypeProperties {
	enum class EQuadrantSpawnType QuadrantSpawnType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FSectionLenghtsProperties> SectionLenghts; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.SectionLenghtsProperties
// Size: 0x08 (Inherited: 0x00)
struct FSectionLenghtsProperties {
	enum class EDirection Direction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Length; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.SurvivorItemProperties
// Size: 0x0c (Inherited: 0x00)
struct FSurvivorItemProperties {
	enum class ECollectableCategory category; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
	int32_t MaxPopulation; // 0x08(0x04)
};

// ScriptStruct DeadByDaylight.EscapeTypeObjects
// Size: 0x18 (Inherited: 0x00)
struct FEscapeTypeObjects {
	enum class EscapeStrategyType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> EscapeObjects; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.KillerItemDependencies
// Size: 0x20 (Inherited: 0x08)
struct FKillerItemDependencies : FDBDTableRowBase {
	enum class EKillerAbilities killerAbility; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FKillerItemProperty> Items; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.KillerItemProperty
// Size: 0x70 (Inherited: 0x00)
struct FKillerItemProperty {
	struct TSoftClassPtr<UObject> Object; // 0x00(0x30)
	struct UCurveFloat* Population; // 0x30(0x08)
	enum class EGameplayElementType _gameplayElementType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TSoftClassPtr<UObject> IterativeWeightAdjustmentStrategyClass; // 0x40(0x30)
};

// ScriptStruct DeadByDaylight.EscapeStrategyProperty
// Size: 0x18 (Inherited: 0x00)
struct FEscapeStrategyProperty {
	enum class EscapeStrategyType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* Population; // 0x08(0x08)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.ManagedGameplayElementsPopulation
// Size: 0x48 (Inherited: 0x00)
struct FManagedGameplayElementsPopulation {
	enum class EGameplayElementType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftClassPtr<UObject> GameplayElementBlueprint; // 0x08(0x30)
	float MinDistance; // 0x38(0x04)
	int32_t MinPopulation; // 0x3c(0x04)
	int32_t MaxPopulation; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct DeadByDaylight.GameplayElementsPopulation
// Size: 0x78 (Inherited: 0x00)
struct FGameplayElementsPopulation {
	enum class EGameplayElementType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftClassPtr<UObject> GameplayElementBlueprint; // 0x08(0x30)
	int32_t MinPopulation; // 0x38(0x04)
	int32_t MaxPopulation; // 0x3c(0x04)
	int32_t MinGuaranteePopulation; // 0x40(0x04)
	int32_t SpawnPass; // 0x44(0x04)
	struct TSoftClassPtr<UObject> IterativeWeightAdjustmentStrategyClass; // 0x48(0x30)
};

// ScriptStruct DeadByDaylight.SurvivorGroupingProbability
// Size: 0x08 (Inherited: 0x00)
struct FSurvivorGroupingProbability {
	enum class ESurvivorGrouping Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Probability; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.KillerProperties
// Size: 0x20 (Inherited: 0x08)
struct FKillerProperties : FDBDTableRowBase {
	enum class EKillerAbilities killerAbility; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FGameplayElementSubstitutions> SubstitutionElements; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.ThemeProperties
// Size: 0x108 (Inherited: 0x08)
struct FThemeProperties : FDBDTableRowBase {
	struct FName Name; // 0x08(0x0c)
	struct FName Weather; // 0x14(0x0c)
	struct FName AudioStateThemes; // 0x20(0x0c)
	struct FName AudioStateWeather; // 0x2c(0x0c)
	struct FName AudioThemeEvent; // 0x38(0x0c)
	struct FName AudioLimitPointEvent; // 0x44(0x0c)
	struct TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank; // 0x50(0x30)
	struct FString TilePath; // 0x80(0x10)
	struct FString MapPath; // 0x90(0x10)
	int32_t ThemeNumber; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FText DisplayName; // 0xa8(0x18)
	enum class EThemeColorId ThemeColorId; // 0xc0(0x01)
	enum class EOfferingEffectType ThemeSelectionOfferingEffectType; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct TArray<struct FGameplayElementSubstitutions> SubstitutionElements; // 0xc8(0x10)
	struct TArray<struct FGameplayElementAddition> AdditionElements; // 0xd8(0x10)
	struct FString DlcIDString; // 0xe8(0x10)
	struct UBlackboardData* Blackboard; // 0xf8(0x08)
	bool Gesture; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct DeadByDaylight.QuadrantSpawnCategories
// Size: 0x20 (Inherited: 0x00)
struct FQuadrantSpawnCategories {
	struct FName QuadrantSpawnTag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FQuadrantSpawnItem> Items; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.QuadrantSpawnItem
// Size: 0x18 (Inherited: 0x00)
struct FQuadrantSpawnItem {
	enum class EQuadrantSpawnType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FWeightedItem> Elements; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.WeightedItem
// Size: 0x38 (Inherited: 0x00)
struct FWeightedItem {
	struct TSoftClassPtr<UObject> Element; // 0x00(0x30)
	float Weight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct DeadByDaylight.ProceduralMap
// Size: 0xc0 (Inherited: 0x08)
struct FProceduralMap : FDBDTableRowBase {
	struct FName MapId; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct FText ThemeName; // 0x30(0x18)
	struct FText Description; // 0x48(0x18)
	float HookMinDistance; // 0x60(0x04)
	int32_t HookMinCount; // 0x64(0x04)
	int32_t HookMaxCount; // 0x68(0x04)
	float BookShelvesMinDistance; // 0x6c(0x04)
	int32_t BookShelvesMinCount; // 0x70(0x04)
	int32_t BookShelvesMaxCount; // 0x74(0x04)
	int32_t LivingWorldObjectsMinCount; // 0x78(0x04)
	int32_t LivingWorldObjectsMaxCount; // 0x7c(0x04)
	struct FString ThumbnailPath; // 0x80(0x10)
	int32_t SortingIndex; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString DlcIDString; // 0x98(0x10)
	struct TArray<int32_t> FixedLayoutSeed; // 0xa8(0x10)
	bool IsInNonViolentBuild; // 0xb8(0x01)
	bool IsLicensed; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
};

// ScriptStruct DeadByDaylight.ProfileLoadEventData
// Size: 0x10 (Inherited: 0x00)
struct FProfileLoadEventData {
	bool FirstTimePlaying; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime Timestamp; // 0x08(0x08)
};

// ScriptStruct DeadByDaylight.PromoPackItemPayloadData
// Size: 0x01 (Inherited: 0x00)
struct FPromoPackItemPayloadData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.PromoPackCharacterPayloadData
// Size: 0x01 (Inherited: 0x01)
struct FPromoPackCharacterPayloadData : FPromoPackItemPayloadData {
};

// ScriptStruct DeadByDaylight.PromoPackContentTypeData
// Size: 0x60 (Inherited: 0x00)
struct FPromoPackContentTypeData {
	struct TSoftClassPtr<UObject> CorrespondingWidget; // 0x00(0x30)
	struct TSoftObjectPtr<UTexture2D> ContentTypeIcon; // 0x30(0x30)
};

// ScriptStruct DeadByDaylight.PromoPackCurrencyPayloadData
// Size: 0x04 (Inherited: 0x01)
struct FPromoPackCurrencyPayloadData : FPromoPackItemPayloadData {
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct DeadByDaylight.PromoPackData
// Size: 0x108 (Inherited: 0x08)
struct FPromoPackData : FDBDTableRowBase {
	struct FName ID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftObjectPtr<UPaperSprite> PromoPackIcon; // 0x18(0x30)
	struct FItemUIData UIData; // 0x48(0xc0)
};

// ScriptStruct DeadByDaylight.PromoPackItemData
// Size: 0x30 (Inherited: 0x00)
struct FPromoPackItemData {
	struct UTexture2D* ItemIcon; // 0x00(0x08)
	struct FName ItemId; // 0x08(0x0c)
	enum class EItemRarity ItemRarity; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t Amount; // 0x18(0x04)
	char pad_1C[0x14]; // 0x1c(0x14)
};

// ScriptStruct DeadByDaylight.PromoPackPurchaseUIData
// Size: 0x58 (Inherited: 0x00)
struct FPromoPackPurchaseUIData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FPurchaseCurrencyData AuricCellsPurchaseData; // 0x08(0x20)
	bool HasAuricCellsData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FPurchaseCurrencyData IridescentShardsPurchaseData; // 0x30(0x20)
	bool HasIridescentShards; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct DeadByDaylight.PromoPackSelectedItemData
// Size: 0x58 (Inherited: 0x00)
struct FPromoPackSelectedItemData {
	struct UTexture2D* ItemTypeIcon; // 0x00(0x08)
	struct FText ItemName; // 0x08(0x18)
	struct FText ItemSubTitle; // 0x20(0x18)
	struct FText ItemDescription; // 0x38(0x18)
	struct UUMGPromoPackItemWidget* Widget; // 0x50(0x08)
};

// ScriptStruct DeadByDaylight.PurchaseItemUIData
// Size: 0x50 (Inherited: 0x00)
struct FPurchaseItemUIData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ItemId; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText DisplayName; // 0x18(0x18)
	int32_t Quantity; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString IconPath; // 0x38(0x10)
	enum class EEventItemContentType ContentType; // 0x48(0x01)
	enum class EItemRarity Rarity; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct DeadByDaylight.RandomRewards
// Size: 0x18 (Inherited: 0x00)
struct FRandomRewards {
	struct TArray<struct FRandomRewardsData> RandomRewards; // 0x00(0x10)
	bool RandomRewards_IsSet; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct DeadByDaylight.RandomRewardsData
// Size: 0x20 (Inherited: 0x00)
struct FRandomRewardsData {
	struct FString RewardId; // 0x00(0x10)
	struct TArray<struct FRewardResponseItem> Rewards; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.RankNameData
// Size: 0x28 (Inherited: 0x08)
struct FRankNameData : FDBDTableRowBase {
	struct FText RankName; // 0x08(0x18)
	int32_t SubRanks; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.RankTooltipData
// Size: 0xc0 (Inherited: 0x98)
struct FRankTooltipData : FBaseTooltipData {
	enum class EPlayerRole CurrentPlayerRole; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FPlayerRoleRankData SurvivorRankData; // 0x9c(0x10)
	struct FPlayerRoleRankData KillerRankData; // 0xac(0x10)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct DeadByDaylight.RankUIData
// Size: 0x68 (Inherited: 0x08)
struct FRankUIData : FDBDTableRowBase {
	int32_t Rank; // 0x08(0x04)
	enum class EPlayerRole PlayerRole; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FSlateColor Color; // 0x10(0x28)
	struct TSoftObjectPtr<UTexture2D> Frame; // 0x38(0x30)
};

// ScriptStruct DeadByDaylight.RarityDistributionValue
// Size: 0x18 (Inherited: 0x08)
struct FRarityDistributionValue : FDBDTableRowBase {
	int32_t InnerRing; // 0x08(0x04)
	int32_t MiddleRing; // 0x0c(0x04)
	int32_t OuterRing; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct DeadByDaylight.DBDRecentGameplayEvents
// Size: 0x50 (Inherited: 0x00)
struct FDBDRecentGameplayEvents {
	struct TMap<enum class EDBDScoreTypes, struct FDateTime> _recentGameplayEvents; // 0x00(0x50)
};

// ScriptStruct DeadByDaylight.RefundUIData
// Size: 0x78 (Inherited: 0x00)
struct FRefundUIData {
	struct TArray<struct FAtlantaRewardUIData> OriginalRewards; // 0x00(0x10)
	struct FAtlantaRewardUIData Refund; // 0x10(0x60)
	int32_t FragmentAmount; // 0x70(0x04)
	int32_t FragmentRequiredAmount; // 0x74(0x04)
};

// ScriptStruct DeadByDaylight.RefundKeyUIData
// Size: 0x58 (Inherited: 0x00)
struct FRefundKeyUIData {
	struct FName ID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString IconFilePath; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
	enum class ERefundSource Source; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct DeadByDaylight.Region
// Size: 0x20 (Inherited: 0x00)
struct FRegion {
	struct FName Region; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString IP; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.ReportData
// Size: 0x30 (Inherited: 0x00)
struct FReportData {
	struct FString Type; // 0x00(0x10)
	struct FString Reason; // 0x10(0x10)
	struct FString Comment; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.RewardItemData
// Size: 0x38 (Inherited: 0x00)
struct FRewardItemData {
	struct FString IconPath; // 0x00(0x10)
	struct FString Title; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	enum class EItemRarity Rarity; // 0x30(0x01)
	enum class EInventoryItemType ItemType; // 0x31(0x01)
	bool IsDuplicate; // 0x32(0x01)
	enum class ECurrencyType CurrencyType; // 0x33(0x01)
	int32_t CurrencyAmount; // 0x34(0x04)
};

// ScriptStruct DeadByDaylight.S3AnalyticsConfig
// Size: 0x20 (Inherited: 0x00)
struct FS3AnalyticsConfig {
	bool GameInitVerbose; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString GameConsoleLogMinimumVerbosity; // 0x08(0x10)
	uint32_t MaxFramesUntilSend; // 0x18(0x04)
	int32_t MaxTrackedRecurrences; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.S3BeginnerTutorialLevelConfig
// Size: 0x08 (Inherited: 0x00)
struct FS3BeginnerTutorialLevelConfig {
	int32_t LevelToHideTutorial; // 0x00(0x04)
	int32_t PrestigeToHideTutorial; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.S3ContentVersionConfig
// Size: 0x10 (Inherited: 0x00)
struct FS3ContentVersionConfig {
	bool dsNewContentShutdown; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float dsNewContentShutdownMinMinutes; // 0x04(0x04)
	float dsNewContentShutdownMaxMinutes; // 0x08(0x04)
	bool clientNewContentForceReboot; // 0x0c(0x01)
	bool dsNewContentCatalogItemValidation; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct DeadByDaylight.S3DisconnectionBotReplacementConfig
// Size: 0x0c (Inherited: 0x00)
struct FS3DisconnectionBotReplacementConfig {
	bool EnableDisconnectionBotReplacement; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ReplacementBotRank; // 0x04(0x04)
	bool UsePlayerRankForReplacementBot; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct DeadByDaylight.S3DLCConfig
// Size: 0x10 (Inherited: 0x00)
struct FS3DLCConfig {
	struct TArray<struct FS3DLCAdditionalInfoEntry> DlcAdditionalInfo; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.S3DLCAdditionalInfoEntry
// Size: 0x40 (Inherited: 0x00)
struct FS3DLCAdditionalInfoEntry {
	struct FString DLCId; // 0x00(0x10)
	struct FString AvailableStartDate; // 0x10(0x10)
	bool AvailableStartDate_IsSet; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString AvailableEndDate; // 0x28(0x10)
	bool AvailableEndDate_IsSet; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct DeadByDaylight.S3FriendsListGameConfig
// Size: 0x0c (Inherited: 0x00)
struct FS3FriendsListGameConfig {
	int32_t MaxFriendSuggestionsFacebook; // 0x00(0x04)
	int32_t MaxFriendSuggestionsGoogle; // 0x04(0x04)
	int32_t MaxFriendSuggestionsRecentlyPlayed; // 0x08(0x04)
};

// ScriptStruct DeadByDaylight.S3GameConfigsData
// Size: 0x2e8 (Inherited: 0x00)
struct FS3GameConfigsData {
	struct FS3AnalyticsConfig Analytics; // 0x00(0x20)
	struct FArchivesConfig Archives; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FBalanceToolGameConfig BalanceTool; // 0x28(0x10)
	bool BalanceTool_IsSet; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FS3BeginnerTutorialLevelConfig BeginnerTutorialLevel; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct FBotMatchConfig BotMatch; // 0x48(0x20)
	struct FDedicatedServerGameConfig DedicatedServer; // 0x68(0x10)
	struct FS3DLCConfig Dlc; // 0x78(0x10)
	bool EnableNetAsyncLoading; // 0x88(0x01)
	bool EnablePlayersConnectionStatus; // 0x89(0x01)
	bool EnablePlayerIdInSurvey; // 0x8a(0x01)
	bool EnableBotsInCustomMatch; // 0x8b(0x01)
	bool DisableNavigationDuringMatchmaking; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float RTMTimeoutThreshold; // 0x90(0x04)
	float GameLoadingTimeout; // 0x94(0x04)
	bool EnableHapticVibration; // 0x98(0x01)
	bool EnableWinGDKAccountMismatchPopup; // 0x99(0x01)
	bool EnableAntiMoveHack; // 0x9a(0x01)
	bool EnablePostIISCinematic; // 0x9b(0x01)
	bool EnablePlayStationTrophiesIISSync; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct TMap<struct FString, bool> CrossPromoManagerPlatforms; // 0xa0(0x50)
	bool CrossPromoManagerPlatforms_IsSet; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FS3FriendsListGameConfig FriendsList; // 0xf4(0x0c)
	struct FHitValidationGameConfig HitValidation; // 0x100(0x18)
	struct FAnimBudgeterGameConfig AnimBudgeter; // 0x118(0x28)
	bool AnimBudgeter_IsSet; // 0x140(0x01)
	struct FJwtGameConfig Jwt; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	struct FS3MatchConfig Match; // 0x144(0x08)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FS3LoadingConfig Loading; // 0x150(0x30)
	struct TMap<struct FString, bool> MatchmakingCrossplayPlatforms; // 0x180(0x50)
	struct FS3MirrorsDefaultRetryPolicyConfig MirrorsDefaultRetryPolicy; // 0x1d0(0x0c)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct FS3OnlineConfig Online; // 0x1e0(0x20)
	struct FS3SecurityConfig Security; // 0x200(0x02)
	char pad_202[0x6]; // 0x202(0x06)
	struct FS3KrakenSdkValidationConfig KrakenSdkValidation; // 0x208(0x20)
	struct FS3ContentVersionConfig ContentVersion; // 0x228(0x10)
	struct FS3DisconnectionBotReplacementConfig DisconnectionBotReplacement; // 0x238(0x0c)
	char pad_244[0x4]; // 0x244(0x04)
	struct TMap<struct FString, bool> SocialCrossfriendsPlatforms; // 0x248(0x50)
	struct TMap<struct FString, bool> SocialCrossprogressionPlatforms; // 0x298(0x50)
};

// ScriptStruct DeadByDaylight.S3KrakenSdkValidationConfig
// Size: 0x20 (Inherited: 0x00)
struct FS3KrakenSdkValidationConfig {
	bool Enabled; // 0x00(0x01)
	bool UseWhitelist; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FString> Whitelist; // 0x08(0x10)
	bool Whitelist_IsSet; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct DeadByDaylight.S3SecurityConfig
// Size: 0x02 (Inherited: 0x00)
struct FS3SecurityConfig {
	bool AllowServerCheats; // 0x00(0x01)
	bool AllowClientGuestProviderOnServerLogin; // 0x01(0x01)
};

// ScriptStruct DeadByDaylight.S3OnlineConfig
// Size: 0x20 (Inherited: 0x00)
struct FS3OnlineConfig {
	struct TArray<int32_t> HiddenProgressiveQueueDelays; // 0x00(0x10)
	int32_t HiddenQueueDelayResetThreshold; // 0x10(0x04)
	int32_t RandomQueueDelayMin; // 0x14(0x04)
	int32_t RandomQueueDelayMax; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.S3MirrorsDefaultRetryPolicyConfig
// Size: 0x0c (Inherited: 0x00)
struct FS3MirrorsDefaultRetryPolicyConfig {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t RetryCount; // 0x04(0x04)
	int32_t TIMEOUT; // 0x08(0x04)
};

// ScriptStruct DeadByDaylight.S3LoadingConfig
// Size: 0x30 (Inherited: 0x00)
struct FS3LoadingConfig {
	struct FLoadingTimeoutPerStep GlobalTimeout; // 0x00(0x20)
	struct TArray<struct FLoadingTimeoutPerStep> TimeoutPerSteps; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.S3MatchConfig
// Size: 0x08 (Inherited: 0x00)
struct FS3MatchConfig {
	int32_t MaxMatchSeconds; // 0x00(0x04)
	int32_t MaxEndGameCollapseSeconds; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.S3GameConfigsDSData
// Size: 0x58 (Inherited: 0x00)
struct FS3GameConfigsDSData {
	struct FDDosGameConfigDS Ddos; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<int32_t, float> MapHistoryWeights; // 0x08(0x50)
};

// ScriptStruct DeadByDaylight.S3PrestigeData
// Size: 0x70 (Inherited: 0x00)
struct FS3PrestigeData {
	struct FS3PrestigeConfig Config; // 0x00(0x20)
	struct TMap<struct FString, struct FS3PrestigeCharacterRewards> RewardsByCharacters; // 0x20(0x50)
};

// ScriptStruct DeadByDaylight.S3PrestigeCharacterRewards
// Size: 0x10 (Inherited: 0x00)
struct FS3PrestigeCharacterRewards {
	struct TArray<struct FS3PrestigeRewards> RewardsByPrestigeLevel; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.S3PrestigeRewards
// Size: 0x18 (Inherited: 0x00)
struct FS3PrestigeRewards {
	int32_t PrestigeLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FS3PrestigeRewardItem> Rewards; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.S3PrestigeRewardItem
// Size: 0x28 (Inherited: 0x00)
struct FS3PrestigeRewardItem {
	struct FString ID; // 0x00(0x10)
	struct FString RewardType; // 0x10(0x10)
	int32_t PerkLevel; // 0x20(0x04)
	bool PerkLevel_IsSet; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct DeadByDaylight.S3PrestigeConfig
// Size: 0x20 (Inherited: 0x00)
struct FS3PrestigeConfig {
	int32_t MaxPrestige; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> PerkThresholds; // 0x08(0x10)
	int32_t PrestigeCost; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.ScreenshotToolViewOverridesData
// Size: 0x40 (Inherited: 0x08)
struct FScreenshotToolViewOverridesData : FTableRowBase {
	struct FScreenshotViewSetting Settings; // 0x08(0x28)
	struct TArray<struct FScreenshotToolTargetWithLabel> Targets; // 0x30(0x10)
};

// ScriptStruct DeadByDaylight.ScreenshotToolTargetWithLabel
// Size: 0x28 (Inherited: 0x00)
struct FScreenshotToolTargetWithLabel {
	struct FName label; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FScreenshotToolTarget Data; // 0x10(0x18)
};

// ScriptStruct DeadByDaylight.ScreenshotToolTarget
// Size: 0x18 (Inherited: 0x00)
struct FScreenshotToolTarget {
	enum class EScreenshotToolTargetCategory category; // 0x00(0x01)
	enum class EScreenshotToolTargetSubCategory Subcategory; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString RawData; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.ScreenshotViewSetting
// Size: 0x28 (Inherited: 0x00)
struct FScreenshotViewSetting {
	float distance; // 0x00(0x04)
	float LateralOffset; // 0x04(0x04)
	float HeightOffset; // 0x08(0x04)
	float CharacterYaw; // 0x0c(0x04)
	float CharacterRoll; // 0x10(0x04)
	float CharacterPitch; // 0x14(0x04)
	float CameraPitch; // 0x18(0x04)
	struct FName SocketName; // 0x1c(0x0c)
};

// ScriptStruct DeadByDaylight.OutfitAnimation
// Size: 0x38 (Inherited: 0x00)
struct FOutfitAnimation {
	struct FName label; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FCharacterAnimationAssetOutfitOverride Data; // 0x10(0x28)
};

// ScriptStruct DeadByDaylight.CharacterRoleAnimation
// Size: 0x30 (Inherited: 0x00)
struct FCharacterRoleAnimation {
	struct FName label; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FCharacterAnimationDropdown Data; // 0x10(0x20)
};

// ScriptStruct DeadByDaylight.CharacterAnimation
// Size: 0x40 (Inherited: 0x00)
struct FCharacterAnimation {
	struct FName label; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FCharacterAnimationDropdown Data; // 0x10(0x20)
	struct TArray<struct FCharacterAnimationAssetOutfitOverride> OutfitOverrides; // 0x30(0x10)
};

// ScriptStruct DeadByDaylight.ItemViewSetting
// Size: 0x44 (Inherited: 0x00)
struct FItemViewSetting {
	struct FName label; // 0x00(0x0c)
	struct FCustomizationItemDropdown Item; // 0x0c(0x10)
	struct FScreenshotViewSetting Settings; // 0x1c(0x28)
};

// ScriptStruct DeadByDaylight.CharacterItemCategoryViewSetting
// Size: 0x40 (Inherited: 0x00)
struct FCharacterItemCategoryViewSetting {
	struct FName label; // 0x00(0x0c)
	struct FRoleItemCategoryDropdown CharacterDropdown; // 0x0c(0x0c)
	struct FScreenshotViewSetting Settings; // 0x18(0x28)
};

// ScriptStruct DeadByDaylight.CharmViewSetting
// Size: 0x44 (Inherited: 0x00)
struct FCharmViewSetting {
	struct FName label; // 0x00(0x0c)
	struct FCharmDropdown CharmId; // 0x0c(0x10)
	struct FScreenshotViewSetting Settings; // 0x1c(0x28)
};

// ScriptStruct DeadByDaylight.CharmCategorySetting
// Size: 0x38 (Inherited: 0x00)
struct FCharmCategorySetting {
	struct FName label; // 0x00(0x0c)
	enum class ECharmCategory CharmCategory; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FScreenshotViewSetting Settings; // 0x10(0x28)
};

// ScriptStruct DeadByDaylight.OutfitViewSetting
// Size: 0x48 (Inherited: 0x00)
struct FOutfitViewSetting {
	struct FName label; // 0x00(0x0c)
	struct FOutfitDropdown OutfitDropdown; // 0x0c(0x14)
	struct FScreenshotViewSetting Settings; // 0x20(0x28)
};

// ScriptStruct DeadByDaylight.CharacterViewSetting
// Size: 0x3c (Inherited: 0x00)
struct FCharacterViewSetting {
	struct FName label; // 0x00(0x0c)
	struct FCharacterDropdown CharacterDropdown; // 0x0c(0x08)
	struct FScreenshotViewSetting Settings; // 0x14(0x28)
};

// ScriptStruct DeadByDaylight.GenderViewSetting
// Size: 0x44 (Inherited: 0x00)
struct FGenderViewSetting {
	struct FName label; // 0x00(0x0c)
	struct FRoleItemCategoryDropdown RoleItemCategory; // 0x0c(0x0c)
	enum class EGender gender; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FScreenshotViewSetting Settings; // 0x1c(0x28)
};

// ScriptStruct DeadByDaylight.RoleGenderViewSetting
// Size: 0x38 (Inherited: 0x00)
struct FRoleGenderViewSetting {
	struct FName label; // 0x00(0x0c)
	struct FRoleDropdown RoleDropdown; // 0x0c(0x02)
	enum class EGender gender; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct FScreenshotViewSetting Settings; // 0x10(0x28)
};

// ScriptStruct DeadByDaylight.ScreenshotToolOverrideInfo
// Size: 0x1c (Inherited: 0x00)
struct FScreenshotToolOverrideInfo {
	int16_t PriorityHit; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName RowName; // 0x04(0x0c)
	struct FName TargetLabel; // 0x10(0x0c)
};

// ScriptStruct DeadByDaylight.ScreenshotToolCustomizationInfo
// Size: 0x14 (Inherited: 0x00)
struct FScreenshotToolCustomizationInfo {
	int32_t characterId; // 0x00(0x04)
	struct FName ID; // 0x04(0x0c)
	enum class ECustomizationCategory category; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct DeadByDaylight.ScreenshotPreviewAction
// Size: 0x98 (Inherited: 0x00)
struct FScreenshotPreviewAction {
	bool SkyboxEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<enum class ECharacterToolItemType, struct FIntPoint> FrameSizes; // 0x08(0x50)
	uint16_t RenderResolution; // 0x58(0x02)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TSoftObjectPtr<UTextureRenderTarget2D> RenderTarget; // 0x60(0x30)
	struct UScreenshotPreviewWidget* EditorWidgetClass; // 0x90(0x08)
};

// ScriptStruct DeadByDaylight.ScreenshotExportAction
// Size: 0x18 (Inherited: 0x00)
struct FScreenshotExportAction {
	bool ExportOnce; // 0x00(0x01)
	bool IncludeDLCFolder; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FString> Directories; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.ScreenshotToolPathInfo
// Size: 0x18 (Inherited: 0x00)
struct FScreenshotToolPathInfo {
	bool IncludeDLCFolder; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Path; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.ScreenshotVFXCharmHookCharm
// Size: 0xc8 (Inherited: 0x00)
struct FScreenshotVFXCharmHookCharm {
	struct FCharmDropdown Charm; // 0x00(0x10)
	struct FScreenshotVFXCharmHookCharmData Data; // 0x10(0xb8)
};

// ScriptStruct DeadByDaylight.ScreenshotVFXCharmHookCharmData
// Size: 0xb8 (Inherited: 0x00)
struct FScreenshotVFXCharmHookCharmData {
	struct TSoftObjectPtr<UFXSystemAsset> TargetSystem; // 0x00(0x30)
	float VFXWarmupTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TSoftObjectPtr<UMaterialInterface> TargetMaterial; // 0x38(0x30)
	struct TMap<struct FName, float> MaterialScalarParameters; // 0x68(0x50)
};

// ScriptStruct DeadByDaylight.CharacterCameraTag
// Size: 0x18 (Inherited: 0x00)
struct FCharacterCameraTag {
	struct ACameraActor* Camera; // 0x00(0x08)
	struct TArray<struct FCharacterCamera> Characters; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.CharacterCamera
// Size: 0x10 (Inherited: 0x00)
struct FCharacterCamera {
	struct FName label; // 0x00(0x0c)
	struct FSimpleCharacterDropdown Data; // 0x0c(0x04)
};

// ScriptStruct DeadByDaylight.SimpleCharacterDropdown
// Size: 0x04 (Inherited: 0x00)
struct FSimpleCharacterDropdown {
	int32_t characterId; // 0x00(0x04)
};

// ScriptStruct DeadByDaylight.RoleGenderCharacterRotation
// Size: 0x14 (Inherited: 0x00)
struct FRoleGenderCharacterRotation {
	struct FName label; // 0x00(0x0c)
	struct FRoleDropdown Role; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
	float Rotation; // 0x10(0x04)
};

// ScriptStruct DeadByDaylight.SeenStoreItemsSaved
// Size: 0x30 (Inherited: 0x10)
struct FSeenStoreItemsSaved : FSaveDataBase {
	struct FString NewStoreItemsStartDate; // 0x10(0x10)
	struct TArray<struct FString> SeenNewStoreItems; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.ShopTransactionCustomData
// Size: 0x40 (Inherited: 0x00)
struct FShopTransactionCustomData {
	struct FShopTransactionProducts productsReceived; // 0x00(0x20)
	struct FString transactionName; // 0x20(0x10)
	struct FString TransactionType; // 0x30(0x10)
};

// ScriptStruct DeadByDaylight.ShopTransactionProducts
// Size: 0x20 (Inherited: 0x00)
struct FShopTransactionProducts {
	struct TArray<struct FShopTransactionVirtualCurrency> virtualCurrencies; // 0x00(0x10)
	struct TArray<struct FShopTransactionItem> Items; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.ShopTransactionItem
// Size: 0x28 (Inherited: 0x00)
struct FShopTransactionItem {
	struct FShopTransactionItemParameters Item; // 0x00(0x28)
};

// ScriptStruct DeadByDaylight.ShopTransactionItemParameters
// Size: 0x28 (Inherited: 0x00)
struct FShopTransactionItemParameters {
	int32_t itemAmount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ItemName; // 0x08(0x10)
	struct FString ItemType; // 0x18(0x10)
};

// ScriptStruct DeadByDaylight.ShopTransactionVirtualCurrency
// Size: 0x28 (Inherited: 0x00)
struct FShopTransactionVirtualCurrency {
	struct FShopTransactionVirtualCurrencyParameters virtualCurrency; // 0x00(0x28)
};

// ScriptStruct DeadByDaylight.ShopTransactionVirtualCurrencyParameters
// Size: 0x28 (Inherited: 0x00)
struct FShopTransactionVirtualCurrencyParameters {
	int32_t virtualCurrencyAmount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString virtualCurrencyName; // 0x08(0x10)
	struct FString virtualCurrencyType; // 0x18(0x10)
};

// ScriptStruct DeadByDaylight.ShopTransactionCurrencyCustomData
// Size: 0x30 (Inherited: 0x00)
struct FShopTransactionCurrencyCustomData {
	struct FShopTransactionCurrencyProducts productsReceived; // 0x00(0x10)
	struct FString transactionName; // 0x10(0x10)
	struct FString TransactionType; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.ShopTransactionCurrencyProducts
// Size: 0x10 (Inherited: 0x00)
struct FShopTransactionCurrencyProducts {
	struct TArray<struct FShopTransactionVirtualCurrency> virtualCurrencies; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.ShopTransactionItemCustomData
// Size: 0x30 (Inherited: 0x00)
struct FShopTransactionItemCustomData {
	struct FShopTransactionItemProducts productsReceived; // 0x00(0x10)
	struct FString transactionName; // 0x10(0x10)
	struct FString TransactionType; // 0x20(0x10)
};

// ScriptStruct DeadByDaylight.ShopTransactionItemProducts
// Size: 0x10 (Inherited: 0x00)
struct FShopTransactionItemProducts {
	struct TArray<struct FShopTransactionItem> Items; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.ShopWalletUpdate
// Size: 0x18 (Inherited: 0x00)
struct FShopWalletUpdate {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct DeadByDaylight.SkillCheckDefinition
// Size: 0x28 (Inherited: 0x00)
struct FSkillCheckDefinition {
	float SuccessZoneStart; // 0x00(0x04)
	float SuccessZoneEnd; // 0x04(0x04)
	float BonusZoneLength; // 0x08(0x04)
	float BonusZoneStart; // 0x0c(0x04)
	float ProgressRate; // 0x10(0x04)
	float StartingTickerPosition; // 0x14(0x04)
	bool IsDeactivatedAfterResponse; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float WarningSoundDelay; // 0x1c(0x04)
	bool IsAudioMuted; // 0x20(0x01)
	bool IsJittering; // 0x21(0x01)
	bool IsSuccessZoneMirrorred; // 0x22(0x01)
	bool IsInsane; // 0x23(0x01)
	bool IsLocallyPredicted; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct DeadByDaylight.SkillCheckResponse
// Size: 0x20 (Inherited: 0x00)
struct FSkillCheckResponse {
	float ChargeChange; // 0x00(0x04)
	bool IsTriggeredByInput; // 0x04(0x01)
	bool IsSuccessful; // 0x05(0x01)
	bool IsBonus; // 0x06(0x01)
	bool IsInsane; // 0x07(0x01)
	bool IsTriggeringLoudNoise; // 0x08(0x01)
	bool FailedCountedAsGood; // 0x09(0x01)
	enum class ESkillCheckCustomType Type; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct UChargeableInteractionDefinition* Interaction; // 0x10(0x08)
	uint32_t VerificationKey; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct DeadByDaylight.SpawnPopulationHandler
// Size: 0xc8 (Inherited: 0x00)
struct FSpawnPopulationHandler {
	char pad_0[0xb8]; // 0x00(0xb8)
	struct TArray<struct USceneComponent*> _allAvailableSpawners; // 0xb8(0x10)
};

// ScriptStruct DeadByDaylight.GiftSpecialActionData
// Size: 0x40 (Inherited: 0x08)
struct FGiftSpecialActionData : FDBDTableRowBase {
	enum class EGiftSpecialAction ActionType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<UMediaSource> VideoSource; // 0x10(0x30)
};

// ScriptStruct DeadByDaylight.SpecialBehaviourPopulation
// Size: 0x98 (Inherited: 0x08)
struct FSpecialBehaviourPopulation : FDBDTableRowBase {
	struct FName _name; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<enum class EGameplayElementType> _spawnerTypes; // 0x18(0x10)
	struct TArray<enum class ETileSpawnPointType> _spawnPointTypes; // 0x28(0x10)
	struct TSoftClassPtr<UObject> _actor; // 0x38(0x30)
	struct TSoftClassPtr<UObject> IterativeWeightAdjustmentStrategyClass; // 0x68(0x30)
};

// ScriptStruct DeadByDaylight.SpecialEventData
// Size: 0x1c8 (Inherited: 0x08)
struct FSpecialEventData : FDBDTableRowBase {
	struct FName EventId; // 0x08(0x0c)
	enum class ECurrencyType CurrencyType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FText EventName; // 0x18(0x18)
	struct FString EventBannerLabel; // 0x30(0x10)
	struct FString EventThemeLabel; // 0x40(0x10)
	bool IsTrackedOnline; // 0x50(0x01)
	bool UseSpecialEventLoadingScreen; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct FSpecialEventObjectiveData> Objectives; // 0x58(0x10)
	struct FColor ObjectOutlineColour; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString LobbyName; // 0x70(0x10)
	struct FString ShopName; // 0x80(0x10)
	struct TArray<struct FString> AdditionalLobbyNames; // 0x90(0x10)
	struct FName AudioStateSpecialEvent; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FSpecialBehaviourSpawnableComponent> SpawnableComponents; // 0xb0(0x10)
	enum class ESpecialEventGameMode GameMode; // 0xc0(0x01)
	bool UseEventEntryScreen; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct FSpecialEventEntryPopupData EventEntryData; // 0xc8(0x50)
	enum class ESpecialEventDependency EventDependency; // 0x118(0x01)
	bool UseMarketDiscount; // 0x119(0x01)
	struct FSpecialEventBloodwebData Bloodweb; // 0x11a(0x01)
	char pad_11B[0x5]; // 0x11b(0x05)
	struct FSpecialEventOfferingSequenceData OfferingSequence; // 0x120(0x60)
	struct FSpecialEventSplashScreenData SplashScreen; // 0x180(0x38)
	struct FSpecialEventUiTakeoverData UiTakeoverData; // 0x1b8(0x05)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	struct UCommentatorAudioData* CommentatorAudioData; // 0x1c0(0x08)
};

// ScriptStruct DeadByDaylight.SpecialEventUiTakeoverData
// Size: 0x05 (Inherited: 0x00)
struct FSpecialEventUiTakeoverData {
	bool UseRoleSelectionTakeover; // 0x00(0x01)
	bool UseEventEntryPopupTakeover; // 0x01(0x01)
	bool UseArchivesTakeover; // 0x02(0x01)
	bool UseStoreShrineTakeover; // 0x03(0x01)
	bool UseLobbyTakeover; // 0x04(0x01)
};

// ScriptStruct DeadByDaylight.SpecialEventSplashScreenData
// Size: 0x38 (Inherited: 0x00)
struct FSpecialEventSplashScreenData {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Delay; // 0x04(0x04)
	struct TSoftClassPtr<UObject> DBDLogoClass; // 0x08(0x30)
};

// ScriptStruct DeadByDaylight.SpecialEventOfferingSequenceData
// Size: 0x60 (Inherited: 0x00)
struct FSpecialEventOfferingSequenceData {
	struct TSoftClassPtr<UObject> CardClass; // 0x00(0x30)
	struct TSoftClassPtr<UObject> ManagerClass; // 0x30(0x30)
};

// ScriptStruct DeadByDaylight.SpecialEventBloodwebData
// Size: 0x01 (Inherited: 0x00)
struct FSpecialEventBloodwebData {
	enum class ESpecialEventBloodwebChestCondition EventChestCondition; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.SpecialEventEntryPopupData
// Size: 0x50 (Inherited: 0x00)
struct FSpecialEventEntryPopupData {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct TArray<struct FName> AdditionalStoreEventsIds; // 0x30(0x10)
	struct TArray<struct FName> AdditionalStoreItemIds; // 0x40(0x10)
};

// ScriptStruct DeadByDaylight.SpecialEventObjectiveData
// Size: 0xe0 (Inherited: 0x00)
struct FSpecialEventObjectiveData {
	struct FName ObjectiveId; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FString IconPath; // 0x40(0x10)
	struct FString ObjectiveFrameLabel; // 0x50(0x10)
	struct FText CompletedTitle; // 0x60(0x18)
	struct FText CompletedDescription; // 0x78(0x18)
	struct FName RewardId; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString LockedRewardGenericIconPath; // 0xa0(0x10)
	struct FString UnlockedRewardGenericIconPath; // 0xb0(0x10)
	enum class EPlayerRole PlayerRole; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FString StatName; // 0xc8(0x10)
	uint32_t Sections; // 0xd8(0x04)
	uint32_t MaxValue; // 0xdc(0x04)
};

// ScriptStruct DeadByDaylight.LoadingTextContentData
// Size: 0x18 (Inherited: 0x00)
struct FLoadingTextContentData {
	struct TArray<struct FSpecialEventLoadingTextData> LoadingText; // 0x00(0x10)
	bool LoadingText_isset; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct DeadByDaylight.SpecialEventLoadingTextData
// Size: 0x68 (Inherited: 0x00)
struct FSpecialEventLoadingTextData {
	struct FName EventId; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Title; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FString IconPath; // 0x30(0x10)
	struct FString SpecialBehaviourId; // 0x40(0x10)
	struct FString ID; // 0x50(0x10)
	bool isPreviousSpecial; // 0x60(0x01)
	bool isPreviousSpecial_IsSet; // 0x61(0x01)
	bool isNextSpecial; // 0x62(0x01)
	bool isNextSpecial_IsSet; // 0x63(0x01)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct DeadByDaylight.SpecialEventContent
// Size: 0x28 (Inherited: 0x00)
struct FSpecialEventContent {
	struct TArray<struct FSpecialEventsContentData> SpecialEvents; // 0x00(0x10)
	struct TArray<struct FSpecialEventsData> SpecialEventsData; // 0x10(0x10)
	bool SpecialEventsData_IsSet; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct DeadByDaylight.SpecialEventsData
// Size: 0x88 (Inherited: 0x00)
struct FSpecialEventsData {
	struct FString EventId; // 0x00(0x10)
	struct TArray<struct FSpecialEventMiscRewards> MiscRewards; // 0x10(0x10)
	bool MiscRewards_IsSet; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FRewardResponseItem> OwnerRewards; // 0x28(0x10)
	bool OwnerRewards_IsSet; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FScoreEventRewards> ScoreEventRewards; // 0x40(0x10)
	bool ScoreEventRewards_IsSet; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FSpecialEventMilestoneRewards> MilestoneRewards; // 0x58(0x10)
	bool MilestoneRewards_IsSet; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FEventPeriod> EventPeriods; // 0x70(0x10)
	bool EventPeriods_IsSet; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct DeadByDaylight.EventPeriod
// Size: 0x40 (Inherited: 0x00)
struct FEventPeriod {
	struct FString ID; // 0x00(0x10)
	struct FString StartDate; // 0x10(0x10)
	struct FString EndDate; // 0x20(0x10)
	char pad_30[0x10]; // 0x30(0x10)
};

// ScriptStruct DeadByDaylight.SpecialEventMilestoneRewards
// Size: 0x18 (Inherited: 0x00)
struct FSpecialEventMilestoneRewards {
	int32_t PointsCost; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRewardResponseItem> Rewards; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.ScoreEventRewards
// Size: 0x18 (Inherited: 0x00)
struct FScoreEventRewards {
	int32_t Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRewardResponseItem> Rewards; // 0x08(0x10)
};

// ScriptStruct DeadByDaylight.SpecialEventMiscRewards
// Size: 0x20 (Inherited: 0x00)
struct FSpecialEventMiscRewards {
	struct FString ID; // 0x00(0x10)
	struct TArray<struct FRewardResponseItem> Rewards; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.SpecialEventsContentData
// Size: 0xf8 (Inherited: 0x00)
struct FSpecialEventsContentData {
	struct FString EventId; // 0x00(0x10)
	struct FString starttime; // 0x10(0x10)
	struct FString MainEndTime; // 0x20(0x10)
	struct FString PostEndTime; // 0x30(0x10)
	char pad_40[0xb8]; // 0x40(0xb8)
};

// ScriptStruct DeadByDaylight.StatusEffectInitializationData
// Size: 0x28 (Inherited: 0x00)
struct FStatusEffectInitializationData {
	struct ADBDPlayer* originatingPlayer; // 0x00(0x08)
	bool HasOriginatingPlayer; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UGameplayModifierContainer* originatingEffect; // 0x10(0x08)
	bool HasOriginatingEffect; // 0x18(0x01)
	enum class EStatusEffectType StatusEffectType; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float customParam; // 0x1c(0x04)
	float InitializationLifeTime; // 0x20(0x04)
	bool AuthorityDataSet; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct DeadByDaylight.StatusEffectProperties
// Size: 0x240 (Inherited: 0x1f8)
struct FStatusEffectProperties : FItemData {
	struct TArray<struct FName> Tags; // 0x1f8(0x10)
	struct TSoftClassPtr<UObject> StatusEffectBlueprint; // 0x208(0x30)
	enum class EStatusEffectType StatusEffectType; // 0x238(0x01)
	enum class EExternalEffectSource ExternalEffectSource; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
};

// ScriptStruct DeadByDaylight.StatusEffectSlotData
// Size: 0x48 (Inherited: 0x00)
struct FStatusEffectSlotData {
	struct FString ID; // 0x00(0x10)
	struct FString IconFilePath; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString Description; // 0x30(0x10)
	enum class EStatusEffectType StatusEffectType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t Level; // 0x44(0x04)
};

// ScriptStruct DeadByDaylight.StatusViewProperties
// Size: 0xc8 (Inherited: 0x08)
struct FStatusViewProperties : FDBDTableRowBase {
	struct FName _statusViewID; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText _description; // 0x18(0x18)
	struct FText _displayName; // 0x30(0x18)
	struct TSoftClassPtr<UObject> _statusViewBlueprint; // 0x48(0x30)
	enum class EStatusEffectType _statusType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString _iconFilePath; // 0x80(0x10)
	struct TSoftObjectPtr<UTexture2D> _iconAsset; // 0x90(0x30)
	bool _playIntroAnimation; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// ScriptStruct DeadByDaylight.StatusViewSource
// Size: 0x2c (Inherited: 0x00)
struct FStatusViewSource {
	struct FName _sourceID; // 0x00(0x0c)
	bool _isActive; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float _remainingTime; // 0x10(0x04)
	float _percentageFill; // 0x14(0x04)
	int32_t _level; // 0x18(0x04)
	enum class EInventoryItemType _sourceType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t _sourceIconIndex; // 0x20(0x04)
	int32_t _sourceLevel; // 0x24(0x04)
	bool _isVisuallyInfinite; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct DeadByDaylight.StoreBannersData
// Size: 0xa0 (Inherited: 0x08)
struct FStoreBannersData : FDBDTableRowBase {
	struct FName BannerId; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FStoreFeaturedBannerData BannerData; // 0x18(0x80)
	bool UseAsDefault; // 0x98(0x01)
	enum class EStoreBannerLocation DefaultLocation; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct DeadByDaylight.StoreFeaturedBannerData
// Size: 0x80 (Inherited: 0x00)
struct FStoreFeaturedBannerData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct FText Subtitle; // 0x20(0x18)
	struct FString ImagePath; // 0x38(0x10)
	struct FString AssociatedDlcId; // 0x48(0x10)
	struct FString AssociatedCombinedItemId; // 0x58(0x10)
	struct FString AssociatedCombinedOutfitId; // 0x68(0x10)
	enum class ETextBannerPosition TextPosition; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct DeadByDaylight.StoredInteraction
// Size: 0x60 (Inherited: 0x00)
struct FStoredInteraction {
	struct TWeakObjectPtr<struct UInteractionDefinition> _interaction; // 0x00(0x08)
	enum class EInputInteractionType _inputType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FInteractionPlayerProperties _playerProperties; // 0x0c(0x50)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct DeadByDaylight.StoreFeaturedBannerUIData
// Size: 0xc0 (Inherited: 0x00)
struct FStoreFeaturedBannerUIData {
	struct FName BannerId; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FStoreFeaturedBannerData BannerData; // 0x10(0x80)
	bool IsNew; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString LimitedTimeBannerText; // 0x98(0x10)
	struct FString LimitedTimeDiscountText; // 0xa8(0x10)
	bool IsOwned; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct DeadByDaylight.StorefrontCustomizationPayloadData
// Size: 0x0c (Inherited: 0x01)
struct FStorefrontCustomizationPayloadData : FPromoPackItemPayloadData {
	char pad_1[0xb]; // 0x01(0x0b)
};

// ScriptStruct DeadByDaylight.StorefrontStateData
// Size: 0x01 (Inherited: 0x00)
struct FStorefrontStateData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct DeadByDaylight.StreamerModePlayerData
// Size: 0x08 (Inherited: 0x00)
struct FStreamerModePlayerData {
	bool IsAnonymousMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t AnonymousSuffix; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.StreamVideoUIData
// Size: 0xe0 (Inherited: 0x00)
struct FStreamVideoUIData {
	struct FString VideoURL; // 0x00(0x10)
	struct FString Language; // 0x10(0x10)
	bool HasAudio; // 0x20(0x01)
	char pad_21[0xb]; // 0x21(0x0b)
	int32_t ZOrderWidget; // 0x2c(0x04)
	struct TSoftClassPtr<UObject> StreamVideoWidgetAsset; // 0x30(0x30)
	struct TSoftObjectPtr<UMediaPlayer> MediaPlayerAsset; // 0x60(0x30)
	char pad_90[0x50]; // 0x90(0x50)
};

// ScriptStruct DeadByDaylight.SubscriptionUIData
// Size: 0xe8 (Inherited: 0x08)
struct FSubscriptionUIData : FDBDTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TMap<struct FName, struct FText> PlatformDetails; // 0x38(0x50)
	struct TSoftObjectPtr<UTexture2D> TitleTexture; // 0x88(0x30)
	struct TSoftObjectPtr<UTexture2D> PortraitBorderTexture; // 0xb8(0x30)
};

// ScriptStruct DeadByDaylight.SubscriptionRewardTypeData
// Size: 0x30 (Inherited: 0x00)
struct FSubscriptionRewardTypeData {
	struct TSoftClassPtr<UObject> RewardItemWidget; // 0x00(0x30)
};

// ScriptStruct DeadByDaylight.SubtitlesDescription
// Size: 0x50 (Inherited: 0x08)
struct FSubtitlesDescription : FDBDTableRowBase {
	struct FText SubtitlesText; // 0x08(0x18)
	struct TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0x20(0x30)
};

// ScriptStruct DeadByDaylight.SurvivorActivity
// Size: 0x28 (Inherited: 0x00)
struct FSurvivorActivity {
	bool ShouldDisplayProgress; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FGameplayTag> TagsAssociatedWithAction; // 0x08(0x10)
	struct FGameplayTag ActivityType; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.SurvivorActivityUIRowData
// Size: 0x48 (Inherited: 0x08)
struct FSurvivorActivityUIRowData : FDBDTunableRowBase {
	struct FGameplayTag ActivityType; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftObjectPtr<UTexture2D> IconAsset; // 0x18(0x30)
};

// ScriptStruct DeadByDaylight.PlayerHitCosmeticParams
// Size: 0x14 (Inherited: 0x00)
struct FPlayerHitCosmeticParams {
	struct TWeakObjectPtr<struct APawn> Attacker; // 0x00(0x08)
	struct TWeakObjectPtr<struct ACamperPlayer> Target; // 0x08(0x08)
	enum class EAttackType attackType; // 0x10(0x01)
	bool CausedKO; // 0x11(0x01)
	bool IsWeaponHit; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
};

// ScriptStruct DeadByDaylight.SurvivorHookTimer
// Size: 0x38 (Inherited: 0x00)
struct FSurvivorHookTimer {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct DeadByDaylight.SurvivorSleepiness
// Size: 0x08 (Inherited: 0x00)
struct FSurvivorSleepiness {
	float _sleepiness; // 0x00(0x04)
	float _sleepThreshold; // 0x04(0x04)
};

// ScriptStruct DeadByDaylight.TallyItemChangedData
// Size: 0x380 (Inherited: 0x00)
struct FTallyItemChangedData {
	struct FInventorySlotData Item; // 0x00(0x128)
	struct FInventorySlotData addon1; // 0x128(0x128)
	struct FInventorySlotData addon2; // 0x250(0x128)
	bool isSet; // 0x378(0x01)
	enum class EEnergyTypeEnum EnergyType; // 0x379(0x01)
	char pad_37A[0x2]; // 0x37a(0x02)
	float EnergyLevel; // 0x37c(0x04)
};

// ScriptStruct DeadByDaylight.TallyPlayerResultData
// Size: 0x2f0 (Inherited: 0x00)
struct FTallyPlayerResultData {
	struct FName CharacterIconPath; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString playerID; // 0x10(0x10)
	struct FString PlatformAccountId; // 0x20(0x10)
	struct FString MirrorsId; // 0x30(0x10)
	struct FString playerName; // 0x40(0x10)
	struct FString characterName; // 0x50(0x10)
	int32_t PlayerScore; // 0x60(0x04)
	int32_t PlayerRank; // 0x64(0x04)
	enum class EGameState PlayerStatus; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FInventorySlotData OfferingData; // 0x70(0x128)
	struct TArray<struct FInventorySlotData> PerksData; // 0x198(0x10)
	struct FInventorySlotData ItemData; // 0x1a8(0x128)
	struct TArray<struct FInventorySlotData> AddonsData; // 0x2d0(0x10)
	struct FPrestigeData PrestigeData; // 0x2e0(0x08)
	bool IsReported; // 0x2e8(0x01)
	bool IsSlasher; // 0x2e9(0x01)
	bool IsMyScore; // 0x2ea(0x01)
	bool IsOffNetwork; // 0x2eb(0x01)
	bool ShowPortraitBorder; // 0x2ec(0x01)
	bool IsABot; // 0x2ed(0x01)
	char pad_2EE[0x2]; // 0x2ee(0x02)
};

// ScriptStruct DeadByDaylight.TallyScorePipsData
// Size: 0x30 (Inherited: 0x00)
struct FTallyScorePipsData {
	float Threshold; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> PipThresholds; // 0x08(0x10)
	struct TArray<struct FEmblemSlotData> Scores; // 0x18(0x10)
	int32_t PipsDelta; // 0x28(0x04)
	bool IsSlasher; // 0x2c(0x01)
	bool IsCustomMatch; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct DeadByDaylight.TeachableTooltipData
// Size: 0xd8 (Inherited: 0x98)
struct FTeachableTooltipData : FBaseTooltipData {
	enum class EItemRarity ItemRarity; // 0x98(0x01)
	enum class EInventoryItemType ItemType; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FString characterName; // 0xa0(0x10)
	struct FString AvailabilityMessage; // 0xb0(0x10)
	struct FString EffectMessage; // 0xc0(0x10)
	bool UseInCharacterSelectionScreen; // 0xd0(0x01)
	enum class ETeachableStatus TeachableStatus; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
};

// ScriptStruct DeadByDaylight.ArrayOfATile
// Size: 0x10 (Inherited: 0x00)
struct FArrayOfATile {
	struct TArray<struct ATile*> ArrayOfTiles; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.ArrayOfInt32
// Size: 0x10 (Inherited: 0x00)
struct FArrayOfInt32 {
	struct TArray<int32_t> value; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.QuadrantInfo
// Size: 0x20 (Inherited: 0x00)
struct FQuadrantInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct DeadByDaylight.SelectableTileSpawnPoint
// Size: 0x30 (Inherited: 0x00)
struct FSelectableTileSpawnPoint {
	struct FComponentReference ComponentReference; // 0x00(0x30)
};

// ScriptStruct DeadByDaylight.TransactionEventData
// Size: 0x88 (Inherited: 0x00)
struct FTransactionEventData {
	struct FString TransactionType; // 0x00(0x10)
	struct FString TransactionSource; // 0x10(0x10)
	struct FString SourceID; // 0x20(0x10)
	int32_t SourceTier; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString CurrencyType; // 0x38(0x10)
	int32_t CurrencyAmount; // 0x48(0x04)
	int32_t CurrencyBalance; // 0x4c(0x04)
	int32_t LevelAchieved; // 0x50(0x04)
	int32_t Prestige; // 0x54(0x04)
	struct FString ItemIDAcquired; // 0x58(0x10)
	int32_t Rank; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString SelectedCharacter; // 0x70(0x10)
	bool TransactionTriggeredLevelUp; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct DeadByDaylight.PerPlatformTunable
// Size: 0x20 (Inherited: 0x08)
struct FPerPlatformTunable : FDBDTableRowBase {
	struct FPerPlatformFloat value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Description; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.TunableValue
// Size: 0x20 (Inherited: 0x08)
struct FTunableValue : FDBDTunableRowBase {
	float value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Description; // 0x10(0x10)
};

// ScriptStruct DeadByDaylight.TutorialObjective
// Size: 0x28 (Inherited: 0x08)
struct FTutorialObjective : FDBDTableRowBase {
	struct FText Description; // 0x08(0x18)
	bool IsCompletionAnalyticEnabled; // 0x20(0x01)
	enum class EInteractionPromptType InteractionPromptType; // 0x21(0x01)
	enum class ETutorialObjectivePlayerActionMapping PlayerAction; // 0x22(0x01)
	enum class EInteractionPromptType SecondaryInteractionPromptType; // 0x23(0x01)
	enum class ETutorialObjectivePlayerActionMapping SecondaryPlayerAction; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct DeadByDaylight.FriendWidgetList
// Size: 0x10 (Inherited: 0x00)
struct FFriendWidgetList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.WidgetFriendData
// Size: 0x10 (Inherited: 0x00)
struct FWidgetFriendData {
	char pad_0[0x8]; // 0x00(0x08)
	struct UUMGBaseFriendListElement* CorrespondingWidget; // 0x08(0x08)
};

// ScriptStruct DeadByDaylight.AtlantaSettingMenuData
// Size: 0x30 (Inherited: 0x08)
struct FAtlantaSettingMenuData : FDBDTableRowBase {
	enum class EOverlayTabs OverlayTab; // 0x08(0x01)
	enum class EOverlayMode OverlayMode; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText DisplayName; // 0x10(0x18)
	enum class EAtlantaSettingMenuType MenuType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct DeadByDaylight.EventItemsContentTypeUIData
// Size: 0x90 (Inherited: 0x00)
struct FEventItemsContentTypeUIData {
	enum class EEventItemContentType ContentType; // 0x00(0x01)
	bool NeedRemoveRarityBackground; // 0x01(0x01)
	bool UseDefaultRarityBackgroundColor; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FSlateColor DefaultRarityBackgroundColor; // 0x08(0x28)
	struct TSoftObjectPtr<UTexture2D> BackgroundTexture; // 0x30(0x30)
	struct TSoftObjectPtr<UTexture2D> RarityBackgroundTexture; // 0x60(0x30)
};

// ScriptStruct DeadByDaylight.HtmlTagConvertRow
// Size: 0x28 (Inherited: 0x08)
struct FHtmlTagConvertRow : FTableRowBase {
	struct FString HtmlTag; // 0x08(0x10)
	struct FString RichTextTag; // 0x18(0x10)
};

// ScriptStruct DeadByDaylight.InteractButtonInfo
// Size: 0x300 (Inherited: 0x08)
struct FInteractButtonInfo : FTableRowBase {
	struct FName InteractButtonID; // 0x08(0x0c)
	struct FName InteractionID; // 0x14(0x0c)
	enum class EPlayerRole PlayerRole; // 0x20(0x01)
	enum class EInputInteractionType interactionInputType; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FSlateBrush Icon; // 0x28(0x90)
	enum class EButtonType CancelButtonType; // 0xb8(0x01)
	enum class EButtonType SecondaryActionButtonType; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct FSlateBrush AttackIcon; // 0xc0(0x90)
	struct FSlateBrush AbilityIcon; // 0x150(0x90)
	struct FSlateBrush ThumbJoystickUnpressedIcon; // 0x1e0(0x90)
	struct FSlateBrush ThumbJoystickPressedIcon; // 0x270(0x90)
};

// ScriptStruct DeadByDaylight.InboxMessageElapsedTime
// Size: 0x08 (Inherited: 0x00)
struct FInboxMessageElapsedTime {
	int32_t ElapsedTime; // 0x00(0x04)
	enum class EInboxMessageTimeUnit TimeUnit; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct DeadByDaylight.InboxMessageUIData
// Size: 0x60 (Inherited: 0x00)
struct FInboxMessageUIData {
	struct FString MessageId; // 0x00(0x10)
	struct FDateTime ReceivedTime; // 0x10(0x08)
	enum class EInboxMessageUIType MessageType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString MessageTitle; // 0x20(0x10)
	struct FString MessageBody; // 0x30(0x10)
	enum class EInboxMessageUIState MessageState; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FClaimableInboxMessage AttachedClaimable; // 0x48(0x18)
};

// ScriptStruct DeadByDaylight.CustomizedHudPlayerWrapperIdMapContainer
// Size: 0x10 (Inherited: 0x00)
struct FCustomizedHudPlayerWrapperIdMapContainer {
	struct TArray<struct FGameplayTag> Ids; // 0x00(0x10)
};

// ScriptStruct DeadByDaylight.RewardLayoutWidgetToGenerate
// Size: 0x90 (Inherited: 0x00)
struct FRewardLayoutWidgetToGenerate {
	struct TSoftClassPtr<UObject> CharacterRewardWidget; // 0x00(0x30)
	struct TSoftClassPtr<UObject> CurrencyRewardWidget; // 0x30(0x30)
	struct TSoftClassPtr<UObject> SpacerWidget; // 0x60(0x30)
};

// ScriptStruct DeadByDaylight.RichTextRewardRow
// Size: 0x450 (Inherited: 0x08)
struct FRichTextRewardRow : FTableRowBase {
	struct FTextBlockStyle TextStyle; // 0x08(0x288)
	struct FMargin TextMargin; // 0x290(0x10)
	struct FSlateBrush Brush; // 0x2a0(0x90)
	struct FSlateBrush TintsBrush; // 0x330(0x90)
	struct FSlateBrush BackgroundBrush; // 0x3c0(0x90)
};

// ScriptStruct DeadByDaylight.PlayerInfoData
// Size: 0x58 (Inherited: 0x00)
struct FPlayerInfoData {
	struct FString characterName; // 0x00(0x10)
	struct FString CharacterIconPath; // 0x10(0x10)
	int32_t CharacterLevel; // 0x20(0x04)
	int32_t PrestigeLevel; // 0x24(0x04)
	bool CanPrestige; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString playerName; // 0x30(0x10)
	int32_t PlayerLevel; // 0x40(0x04)
	int32_t DevotionLevel; // 0x44(0x04)
	int32_t PlayerRank; // 0x48(0x04)
	int32_t ActivePips; // 0x4c(0x04)
	int32_t NumPipsToNextRank; // 0x50(0x04)
	bool Ready; // 0x54(0x01)
	bool IsSlasher; // 0x55(0x01)
	bool ShowPortraitBorder; // 0x56(0x01)
	bool HasActiveSubscription; // 0x57(0x01)
};

// ScriptStruct DeadByDaylight.ScoreCategoryUIExtraData
// Size: 0x28 (Inherited: 0x00)
struct FScoreCategoryUIExtraData {
	struct FText ScoreCategoryName; // 0x00(0x18)
	struct UTexture2D* ScoreCategoryAsset; // 0x18(0x08)
	int32_t ScoreValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct DeadByDaylight.EmblemQualityImages
// Size: 0x120 (Inherited: 0x00)
struct FEmblemQualityImages {
	struct FSlateBrush HighlightImage; // 0x00(0x90)
	struct FSlateBrush DarkImage; // 0x90(0x90)
};

// ScriptStruct DeadByDaylight.VariationData
// Size: 0x30 (Inherited: 0x08)
struct FVariationData : FDBDTableRowBase {
	struct FGameplayTag Tag; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
};

// ScriptStruct DeadByDaylight.ArchivesJournal
// Size: 0x40 (Inherited: 0x18)
struct FArchivesJournal : FDBDTableRowBaseWithId {
	struct FText Title; // 0x18(0x18)
	struct TArray<struct FArchivesVignettes> Vignettes; // 0x30(0x10)
};

// ScriptStruct DeadByDaylight.ArchivesVignettes
// Size: 0x68 (Inherited: 0x08)
struct FArchivesVignettes : FDBDTableRowBase {
	struct FString VignetteId; // 0x08(0x10)
	struct FText Title; // 0x18(0x18)
	struct FText Subtitle; // 0x30(0x18)
	struct TArray<struct FArchivesVignetteEntry> Entries; // 0x48(0x10)
	struct TArray<struct TSoftObjectPtr<UMediaSource>> CinematicPaths; // 0x58(0x10)
};

// ScriptStruct DeadByDaylight.ArchivesVignetteEntry
// Size: 0x78 (Inherited: 0x08)
struct FArchivesVignetteEntry : FDBDTableRowBase {
	struct FText Title; // 0x08(0x18)
	struct FText Text; // 0x20(0x18)
	bool HasAudio; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TSoftObjectPtr<UTexture2D> RewardImage; // 0x40(0x30)
	float PreviewTextureOffset; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct DeadByDaylight.WalesCypherEventData
// Size: 0x30 (Inherited: 0x00)
struct FWalesCypherEventData {
	struct FString EnteredSequence; // 0x00(0x10)
	struct FString ExpectedSequence; // 0x10(0x10)
	int32_t TimeoutThreshold; // 0x20(0x04)
	bool success; // 0x24(0x01)
	bool TIMEOUT; // 0x25(0x01)
	bool CharmGranted; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	int32_t ValidCharacterSelcted; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct DeadByDaylight.WalletUpdateTracker
// Size: 0x50 (Inherited: 0x00)
struct FWalletUpdateTracker {
	struct TMap<struct FString, int32_t> _walletChangeMap; // 0x00(0x50)
};

// ScriptStruct DeadByDaylight.WeightBasedItemData
// Size: 0x14 (Inherited: 0x00)
struct FWeightBasedItemData {
	struct FItemIdDropdown ItemId; // 0x00(0x10)
	float Weight; // 0x10(0x04)
};

// ScriptStruct DeadByDaylight.VaultData
// Size: 0x38 (Inherited: 0x00)
struct FVaultData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct DeadByDaylight.XpBonusData
// Size: 0x18 (Inherited: 0x00)
struct FXpBonusData {
	struct FString Name; // 0x00(0x10)
	int32_t XpValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

