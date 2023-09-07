// Enum DBDSharedTypes.EPlayerRole
enum class EPlayerRole : uint8 {
	VE_None = 0,
	VE_Slasher = 1,
	VE_Camper = 2,
	VE_Observer = 3,
	Max = 4,
	EPlayerRole_MAX = 5
};

// Enum DBDSharedTypes.ECurrencyType
enum class ECurrencyType : uint8 {
	None = 0,
	BloodPoints = 1,
	FearTokens = 2,
	Cells = 3,
	HalloweenCoins = 4,
	LunarNewYearCoins = 5,
	HalloweenEventCurrency = 6,
	ECurrencyType_MAX = 7
};

// Enum DBDSharedTypes.EItemRarity
enum class EItemRarity : uint8 {
	Common = 0,
	Uncommon = 1,
	Rare = 2,
	VeryRare = 3,
	UltraRare = 4,
	Artifact = 5,
	Spectral = 6,
	Teachable = 7,
	SpecialEvent = 8,
	Legendary = 9,
	Epic = 10,
	SuperEpic = 11,
	UltraEpic = 12,
	Count = 13,
	None = 14,
	EItemRarity_MAX = 15
};

// Enum DBDSharedTypes.EProgressionType
enum class EProgressionType : uint8 {
	None = 0,
	Stars = 1,
	ArchiveRiftPass = 2,
	EProgressionType_MAX = 3
};

// Enum DBDSharedTypes.ECharacterDifficulty
enum class ECharacterDifficulty : uint8 {
	VE_None = 0,
	VE_Easy = 1,
	VE_Intermediate = 2,
	VE_Hard = 3,
	VE_VeryHard = 4,
	VE_MAX = 5
};

// Enum DBDSharedTypes.ERewardType
enum class ERewardType : uint8 {
	None = 0,
	Character = 1,
	Currency = 2,
	Customization = 3,
	Progression = 4,
	ERewardType_MAX = 5
};

// Enum DBDSharedTypes.EQuestProgressionType
enum class EQuestProgressionType : uint8 {
	None = 0,
	Action = 1,
	Percentage = 2,
	Time = 3,
	EQuestProgressionType_MAX = 4
};

// Enum DBDSharedTypes.EStoryNodeState
enum class EStoryNodeState : uint8 {
	Unavailable = 0,
	AvailableDefault = 1,
	AvailableActive = 2,
	AvailablePaused = 3,
	Completed = 4,
	Claimed = 5,
	None = 255,
	EStoryNodeState_MAX = 256
};

// Enum DBDSharedTypes.EArchiveNodeType
enum class EArchiveNodeType : uint8 {
	Narrative = 0,
	Task = 1,
	Challenge = 2,
	Contextual = 3,
	Reward = 4,
	None = 255,
	EArchiveNodeType_MAX = 256
};

// Enum DBDSharedTypes.EArchiveMenuState
enum class EArchiveMenuState : uint8 {
	None = 0,
	CurrentTome = 1,
	EventTome = 2,
	PastTome = 3,
	Rift = 4,
	Compendium = 5,
	EArchiveMenuState_MAX = 6
};

// Enum DBDSharedTypes.EHelpType
enum class EHelpType : uint8 {
	General = 0,
	Survivor = 1,
	Killer = 2,
	EHelpType_MAX = 3
};

// Enum DBDSharedTypes.EPopupButtonType
enum class EPopupButtonType : uint8 {
	Regression = 0,
	Progression = 1,
	Alternative = 2,
	EPopupButtonType_MAX = 3
};

// Enum DBDSharedTypes.ELoadoutSlot
enum class ELoadoutSlot : uint8 {
	SKIN = 0,
	ITEM_POWER = 1,
	ADD_ON_2 = 2,
	ADD_ON_3 = 3,
	PERK_2 = 4,
	PERK_3 = 5,
	PERK_4 = 6,
	PERK_5 = 7,
	FAVOR = 8,
	COUNT = 9,
	ELoadoutSlot_MAX = 10
};

// Enum DBDSharedTypes.EControlMode
enum class EControlMode : uint8 {
	MOUSE_KB = 0,
	XBOX = 1,
	PS = 2,
	VITA = 3,
	SWITCH = 4,
	SWITCH_PRO = 5,
	ATLANTA = 6,
	UNDEFINED = 7,
	EControlMode_MAX = 8
};

// Enum DBDSharedTypes.EGameState
enum class EGameState : uint8 {
	VE_Active = 0,
	VE_Killed = 1,
	VE_Escaped = 2,
	VE_EscapedInjured = 3,
	VE_Sacrificed = 4,
	VE_None = 5,
	VE_Disconnected = 6,
	VE_ManuallyLeftMatch = 7,
	VE_BledOut = 8,
	VE_MAX = 9
};

// Enum DBDSharedTypes.EAttackType
enum class EAttackType : uint8 {
	VE_None = 0,
	VE_Slash = 1,
	VE_Pounce = 2,
	VE_Chainsaw = 3,
	VE_Blink = 4,
	VE_LFChainsaw = 5,
	VE_Ambush = 6,
	VE_Frenzy = 7,
	VE_GhostCrouch = 8,
	VE_QatarDash = 9,
	VE_OniBasicAttack = 10,
	VE_OniDemonBasicAttack = 11,
	VE_OniDemonPowerAttack = 12,
	VE_OniDemonDashAttack = 13,
	VE_ExecutionerTormentAttack = 14,
	VE_BlightDash = 15,
	VE_TwinJump = 16,
	VE_K24WhipAttack = 17,
	VE_K33TailAttack = 18,
	VE_MAX = 19
};

// Enum DBDSharedTypes.EDetectionZone
enum class EDetectionZone : uint8 {
	VE_None = 0,
	VE_Slash = 1,
	VE_Pounce = 2,
	VE_Chainsaw = 3,
	VE_Obstructed = 4,
	VE_Interruption = 5,
	VE_ChainsawLockExtended = 6,
	VE_Damage = 7,
	VE_ChainsawObstruction = 8,
	VE_Blink = 9,
	VE_ChainsawDamageExtended = 10,
	VE_Stalker = 11,
	VE_Lunge = 12,
	VE_PowerAttack = 13,
	VE_Max = 14,
	VE_Max = 15
};

// Enum DBDSharedTypes.EStunType
enum class EStunType : uint8 {
	VE_None = 0,
	VE_Pallet = 1,
	VE_BearTrap = 2,
	VE_Flashlight = 3,
	VE_WiggleFree = 4,
	VE_EvilWithin = 5,
	VE_Kicked = 6,
	VE_Closet = 7,
	VE_HarpoonRifle = 8,
	VE_GeneratorTrap = 9,
	VE_MAX = 10
};

// Enum DBDSharedTypes.EInputInteractionType
enum class EInputInteractionType : uint8 {
	VE_None = 0,
	VE_Interact = 1,
	VE_ItemUse = 2,
	VE_FastInteract = 3,
	VE_AttackInteract = 4,
	VE_ItemInteract = 5,
	VE_Rush = 6,
	VE_AbilityUse = 7,
	VE_ActivatablePerk01 = 8,
	VE_ActivatablePerk02 = 9,
	VE_ActivatablePerk03 = 10,
	VE_ActivatablePerk04 = 11,
	VE_Run = 12,
	VE_ItemDrop = 13,
	VE_InteractMash = 14,
	VE_Struggle = 15,
	VE_AbilityTwo = 16,
	VE_EventAbility = 17,
	VE_Action = 18,
	VE_Crouch = 19,
	VE_ActionKiller = 20,
	VE_CancelCharge = 21,
	VE_WiggleLeft = 22,
	VE_WiggleRight = 23,
	VE_SecondaryAction = 24,
	VE_Gesture01 = 25,
	VE_Gesture02 = 26,
	VE_Gesture03 = 27,
	VE_Gesture04 = 28,
	VE_ExternalChainBlink = 29,
	VE_ExternalRequestClosetExitFast = 30,
	VE_ExternalRequestClosetStun = 31,
	VE_ExternalRequestDestroyWithPowerAttack = 32,
	VE_ExternalRequestDrop = 33,
	VE_ExternalRequestDropBySkillCheck = 34,
	VE_ExternalRequestDropByStunning = 35,
	VE_ExternalRequestDropByStunningWithFlashlight = 36,
	VE_ExternalRequestDropByStunningByPallet = 37,
	VE_ExternalRequestDropByWiggleFree = 38,
	VE_ExternalRequestEscape = 39,
	VE_ExternalRequestFlashlightStunUncloak = 40,
	VE_ExternalRequestGeneratorTrapStun = 41,
	VE_ExternalRequestHarpoonRifleStun = 42,
	VE_ExternalRequestKickStun = 43,
	VE_ExternalRequestKillerCaughtInBearTrap = 44,
	VE_ExternalRequestPalletStun = 45,
	VE_ExternalRequestPalletStunUncloak = 46,
	VE_ExternalRequestPutToSleepStun = 47,
	VE_ExternalRequestRBTExecute = 48,
	VE_ExternalRequestRBTExecuteAtExit = 49,
	VE_ExternalRequestSacrifice = 50,
	VE_ExternalRequestSlashedOutOfTrap = 51,
	VE_ExternalRequestStun = 52,
	VE_ExternalRequestStunBySkillCheck = 53,
	VE_ExternalRequestStunEvilWithin = 54,
	VE_ExternalRequestStunUncloak = 55,
	VE_ExternalRequestK32TeleportToSurvivor = 56,
	VE_Count = 57,
	VE_MAX = 58
};

// Enum DBDSharedTypes.EInteractionAnimation
enum class EInteractionAnimation : uint8 {
	VE_None = 0,
	VE_Generator = 1,
	VE_PullDownLeft = 2,
	VE_PullDownRight = 3,
	VE_Hiding = 4,
	VE_SearchCloset = 5,
	VE_HealingOther = 6,
	VE_OpenEscape = 7,
	VE_StruggleFree = 8,
	VE_HealOther = 9,
	VE_HealSelf = 10,
	VE_PickedUp = 11,
	VE_Unused01 = 12,
	VE_Dropped = 13,
	VE_Unused02 = 14,
	VE_BeingHooked = 15,
	VE_Sabotage = 16,
	VE_ChargeBlink = 17,
	VE_ThrowFirecracker = 18,
	VE_WakeUpOther = 19,
	VE_RemoveReverseBearTrap = 20,
	VE_DestroyPortal = 21,
	VE_OniDash = 22,
	VE_PickUpAnniversaryCrown = 23,
	VE_InteractWithGlyph = 24,
	VE_InteractWithUnstableRift = 25,
	VE_OpenChest = 26,
	VE_MAX = 27
};

// Enum DBDSharedTypes.EPawnType
enum class EPawnType : uint8 {
	VE_None = 0,
	VE_Killer = 1,
	VE_Survivor = 2,
	VE_Sidekick = 3,
	VE_MAX = 4
};

// Enum DBDSharedTypes.EPlayerTeam
enum class EPlayerTeam : uint8 {
	VE_None = 0,
	VE_Killer = 1,
	VE_Survivor = 2,
	VE_MAX = 3
};

// Enum DBDSharedTypes.EAnimNotifyType
enum class EAnimNotifyType : uint8 {
	VE_None = 0,
	VE_Pickup = 1,
	VE_Release = 2,
	VE_MAX = 3
};

// Enum DBDSharedTypes.EAttackSubstate
enum class EAttackSubstate : uint8 {
	VE_None = 0,
	VE_Open = 1,
	VE_Hitting = 2,
	VE_HitSucceed = 3,
	VE_HitMiss = 4,
	VE_HitObstructed = 5,
	VE_Done = 6,
	VE_MAX = 7
};

// Enum DBDSharedTypes.ECamperState
enum class ECamperState : uint8 {
	VE_None = 0,
	VE_Navigate = 1,
	VE_Interact = 2,
	VE_MAX = 3
};

// Enum DBDSharedTypes.ELoadoutPartState
enum class ELoadoutPartState : uint8 {
	None = 0,
	Default = 1,
	InProgress = 2,
	Ready = 3,
	Active = 4,
	Vanished = 5,
	ELoadoutPartState_MAX = 6
};

// Enum DBDSharedTypes.EItemAvailability
enum class EItemAvailability : uint8 {
	Available = 0,
	Disabled = 1,
	Retired = 2,
	EItemAvailability_MAX = 3
};

// Enum DBDSharedTypes.EStatusEffectType
enum class EStatusEffectType : uint8 {
	None = 0,
	Buff = 1,
	Debuff = 2,
	Count = 3,
	EStatusEffectType_MAX = 4
};

// Enum DBDSharedTypes.EInventoryItemType
enum class EInventoryItemType : uint8 {
	None = 0,
	Item = 1,
	ItemAddOn = 2,
	CamperPerk = 3,
	Power = 4,
	PowerAddOn = 5,
	SlasherPerk = 6,
	Favor = 7,
	Customization = 8,
	IridescentShardsPack = 9,
	AuricCellsPack = 10,
	BloodPointsPack = 11,
	FreeTicket = 12,
	Chest = 13,
	SuperChest = 14,
	EntityBox = 15,
	Count = 16,
	EInventoryItemType_MAX = 17
};

// Enum DBDSharedTypes.EKillerAbilities
enum class EKillerAbilities : uint8 {
	VE_None = 0,
	VE_SpawnTraps = 1,
	VE_Cloak = 2,
	VE_Chainsaw = 3,
	VE_Blink = 4,
	VE_PhantomTrap = 5,
	VE_Stalker = 6,
	VE_Killer07Ability = 7,
	VE_Killer08Ability = 8,
	VE_LFChainsaw = 9,
	VE_InduceDreams = 10,
	VE_ReverseBearTrap = 11,
	VE_GasBomb = 12,
	VE_PhaseWalk = 13,
	VE_Frenzy = 14,
	VE_Vomit = 15,
	VE_GhostStalker = 16,
	VE_GroundPortals = 17,
	VE_DemonMode = 18,
	VE_HarpoonRifle = 19,
	VE_TormentMode = 20,
	VE_K21Power = 21,
	VE_K22Power = 22,
	VE_ThrowingKnives = 23,
	VE_K24Power = 24,
	VE_Zombies = 25,
	VE_K25Power = 26,
	VE_K26Power = 27,
	VE_OnryoPower = 28,
	VE_K28Power = 29,
	VE_K29Power = 30,
	VE_K30Power = 31,
	VE_K31Power = 32,
	VE_K32Power = 33,
	VE_K33Power = 34,
	VE_MAX = 35
};

// Enum DBDSharedTypes.ESkillCheckCustomType
enum class ESkillCheckCustomType : uint8 {
	VE_None = 0,
	VE_OnPickedUp = 1,
	VE_OnAttacked = 2,
	VE_DecisiveStrikeWhileWiggling = 3,
	VE_GeneratorOvercharge1 = 4,
	VE_GeneratorOvercharge2 = 5,
	VE_GeneratorOvercharge3 = 6,
	VE_BrandNewPart = 7,
	VE_Struggle = 8,
	VE_OppressionPerkGeneratorKicked = 9,
	VE_SoulChemical = 10,
	VE_Wiggle = 11,
	VE_YellowGlyph = 12,
	VE_K27P03Continuous = 13,
	VE_MAX = 14
};

// Enum DBDSharedTypes.ELoadoutItemType
enum class ELoadoutItemType : uint8 {
	None = 0,
	Medkit = 1,
	Toolbox = 2,
	Flashlight = 3,
	Key = 4,
	Map = 5,
	Firecracker = 6,
	Flashbang = 7,
	Count = 8,
	ELoadoutItemType_MAX = 9
};

// Enum DBDSharedTypes.ELeanState
enum class ELeanState : uint8 {
	NotLeaning = 0,
	LeanLeft = 1,
	LeanRight = 2,
	ELeanState_MAX = 3
};

// Enum DBDSharedTypes.EDirectionalMinigameResult
enum class EDirectionalMinigameResult : uint8 {
	VE_SUCCESS = 0,
	VE_FAILED = 1,
	VE_CANCELLED = 2,
	VE_MAX = 3
};

// Enum DBDSharedTypes.EDirectionalMiniGameType
enum class EDirectionalMiniGameType : uint8 {
	None = 0,
	SkullMerchant = 1,
	Wormhole = 2,
	EDirectionalMiniGameType_MAX = 3
};

// Enum DBDSharedTypes.EDirectionalInputKey
enum class EDirectionalInputKey : uint8 {
	VE_INVALID = 0,
	VE_UP = 1,
	VE_DOWN = 2,
	VE_RIGHT = 3,
	VE_LEFT = 4,
	VE_MAX = 5
};

// Enum DBDSharedTypes.EAntiAliasingMode
enum class EAntiAliasingMode : uint8 {
	Off = 0,
	TAA = 2,
	Default = 2,
	EAntiAliasingMode_MAX = 3
};

// Enum DBDSharedTypes.EQuestOperationType
enum class EQuestOperationType : uint8 {
	EQ = 0,
	GEQ = 1,
	LEQ = 2,
	G = 3,
	L = 4,
	None = 255,
	EQuestOperationType_MAX = 256
};

// Enum DBDSharedTypes.EArchivesEventStyle
enum class EArchivesEventStyle : uint8 {
	None = 0,
	Halloween = 1,
	EArchivesEventStyle_MAX = 2
};

// Enum DBDSharedTypes.EArchivesStoryLevelAnimationType
enum class EArchivesStoryLevelAnimationType : uint8 {
	Completed = 0,
	Mastered = 1,
	EArchivesStoryLevelAnimationType_MAX = 2
};

// Enum DBDSharedTypes.EArchivesStoryLevelStatus
enum class EArchivesStoryLevelStatus : uint8 {
	Locked = 0,
	Unavailable = 1,
	Available = 2,
	Completed = 3,
	Mastered = 4,
	EArchivesStoryLevelStatus_MAX = 5
};

// Enum DBDSharedTypes.EArchiveNodeStatus
enum class EArchiveNodeStatus : uint8 {
	Closed = 0,
	Completed = 1,
	Open = 2,
	Paused = 3,
	Waiting = 4,
	Error = 5,
	EArchiveNodeStatus_MAX = 6
};

// Enum DBDSharedTypes.EKillerMatchResult
enum class EKillerMatchResult : uint8 {
	EntityDispleased = 0,
	BrutalKiller = 1,
	RuthlessKiller = 2,
	MercilessKiller = 3,
	EKillerMatchResult_MAX = 4
};

// Enum DBDSharedTypes.EDailyRitualTileState
enum class EDailyRitualTileState : uint8 {
	None = 0,
	Dismissed = 1,
	Claimed = 2,
	EDailyRitualTileState_MAX = 3
};

// Enum DBDSharedTypes.EDailyRitualState
enum class EDailyRitualState : uint8 {
	Assigned = 0,
	DismissedReplacement = 1,
	ClaimedReplacement = 2,
	EDailyRitualState_MAX = 3
};

// Enum DBDSharedTypes.EGameType
enum class EGameType : uint8 {
	Online = 0,
	KillYourFriends = 1,
	Tutorial = 4,
	TutorialBotMatch = 5,
	SecretBotMatch = 6,
	None = 7,
	EGameType_MAX = 8
};

// Enum DBDSharedTypes.EGender
enum class EGender : uint8 {
	VE_Male = 0,
	VE_Female = 1,
	VE_Multiple = 2,
	VE_NotHuman = 3,
	VE_Undefined = 4,
	VE_MAX = 5
};

// Enum DBDSharedTypes.EAttackSuccess
enum class EAttackSuccess : uint8 {
	VE_None = 0,
	VE_Success = 1,
	VE_Failure = 2,
	VE_Obstructed = 3,
	VE_MAX = 4
};

// Enum DBDSharedTypes.EBlindType
enum class EBlindType : uint8 {
	VE_None = 0,
	VE_Flashlight = 1,
	VE_SacrificeSuspended = 2,
	VE_Firecracker = 3,
	VE_MAX = 4
};

// Enum DBDSharedTypes.EDBDScoreCategory
enum class EDBDScoreCategory : uint8 {
	DBD_CamperScoreCat_Objectives = 0,
	DBD_CamperScoreCat_Survival = 1,
	DBD_CamperScoreCat_Altruism = 2,
	DBD_CamperScoreCat_Boldness = 3,
	DBD_SlasherScoreCat_Brutality = 4,
	DBD_SlasherScoreCat_Deviousness = 5,
	DBD_SlasherScoreCat_Hunter = 6,
	DBD_SlasherScoreCat_Sacrifice = 7,
	DBD_CamperScoreCat_Untracked = 8,
	DBD_CamperScoreCat_Streak = 9,
	DBD_ScoreCat_SpecialEvents = 10,
	DBD_ScoreCat_Bonus = 11,
	DBD_ScoreCat_MatchIncentive = 12,
	DBD_ScoreCat_BonusEvents = 13,
	Count = 14,
	EDBDScoreCategory_MAX = 15
};

// Enum DBDSharedTypes.EEventObjectiveItemState
enum class EEventObjectiveItemState : uint8 {
	Inactive = 0,
	Active = 1,
	Usable = 2,
	Cooldown = 3,
	Rewarded = 4,
	Lost = 5,
	EEventObjectiveItemState_MAX = 6
};

// Enum DBDSharedTypes.ELoadingTransitionType
enum class ELoadingTransitionType : uint8 {
	TravelToMainMenu = 0,
	TravelToInGame = 1,
	TravelToSplash = 2,
	ELoadingTransitionType_MAX = 3
};

// Enum DBDSharedTypes.EFPSLimit
enum class EFPSLimit : uint8 {
	Off = 0,
	Limit30 = 30,
	Limit59 = 59,
	Limit60 = 60,
	Limit90 = 90,
	Limit120 = 120,
	Default = 60,
	EFPSLimit_MAX = 121
};

// Enum DBDSharedTypes.EFriendshipStatus
enum class EFriendshipStatus : uint8 {
	None = 0,
	RequestSent = 1,
	RequestReceived = 2,
	Friend = 3,
	EFriendshipStatus_MAX = 4
};

// Enum DBDSharedTypes.EFriendSuggestionType
enum class EFriendSuggestionType : uint8 {
	None = 0,
	Facebook = 1,
	Google = 2,
	EFriendSuggestionType_MAX = 3
};

// Enum DBDSharedTypes.EMatchingStatusEffectType
enum class EMatchingStatusEffectType : uint8 {
	None = 0,
	Buff = 1,
	Debuff = 2,
	Any = 3,
	Count = 4,
	EMatchingStatusEffectType_MAX = 5
};

// Enum DBDSharedTypes.EBarColor
enum class EBarColor : uint8 {
	Default = 0,
	Yellow = 1,
	Red = 2,
	EBarColor_MAX = 3
};

// Enum DBDSharedTypes.EHudScreenIndicatorType
enum class EHudScreenIndicatorType : uint8 {
	None = 0,
	LoudNoise = 1,
	StealthBroken = 2,
	Objective = 3,
	TerrorRadiusVisualFeedback = 4,
	K33NoiseDetection = 5,
	EHudScreenIndicatorType_MAX = 6
};

// Enum DBDSharedTypes.EHudParentContainerType
enum class EHudParentContainerType : uint8 {
	Widget = 0,
	Outer = 1,
	Spectate = 2,
	EHudParentContainerType_MAX = 3
};

// Enum DBDSharedTypes.EInteractionLayer
enum class EInteractionLayer : uint8 {
	VE_Camper = 0,
	VE_Slasher = 1,
	VE_MAX = 2
};

// Enum DBDSharedTypes.EOnboardingTutorialType
enum class EOnboardingTutorialType : uint8 {
	TutorialLevel = 0,
	BotMatchLevel = 1,
	FinalReward = 2,
	GoToMainMenu = 3,
	EOnboardingTutorialType_MAX = 4
};

// Enum DBDSharedTypes.EOnboardingTutorialButtonStyle
enum class EOnboardingTutorialButtonStyle : uint8 {
	Default = 0,
	Survivor = 1,
	Killer = 2,
	Reward = 3,
	GoToMainMenu = 4,
	EOnboardingTutorialButtonStyle_MAX = 5
};

// Enum DBDSharedTypes.EOnboardingStepStatus
enum class EOnboardingStepStatus : uint8 {
	Unavailable = 0,
	Open = 1,
	Completed = 2,
	EOnboardingStepStatus_MAX = 3
};

// Enum DBDSharedTypes.EConnectionQuality
enum class EConnectionQuality : uint8 {
	Good = 0,
	Bad = 1,
	Awful = 2,
	EConnectionQuality_MAX = 3
};

// Enum DBDSharedTypes.EPlayerProfileFilter
enum class EPlayerProfileFilter : uint8 {
	Wallet = 0,
	PlayerName = 1,
	PlayerLevel = 2,
	PlayerRank = 3,
	EPlayerProfileFilter_MAX = 4
};

// Enum DBDSharedTypes.EPlayerStateChangeType
enum class EPlayerStateChangeType : uint8 {
	None = 0,
	Negative = 1,
	Neutral = 2,
	Positive = 3,
	EPlayerStateChangeType_MAX = 4
};

// Enum DBDSharedTypes.ESicknessLevel
enum class ESicknessLevel : uint8 {
	Off = 0,
	InProgress = 1,
	Full = 2,
	ESicknessLevel_MAX = 3
};

// Enum DBDSharedTypes.EAfflictionLevel
enum class EAfflictionLevel : uint8 {
	Off = 0,
	Level1 = 1,
	Level2 = 2,
	Level3 = 3,
	EAfflictionLevel_MAX = 4
};

// Enum DBDSharedTypes.EBloodDisplayType
enum class EBloodDisplayType : uint8 {
	Hidden = 0,
	Bottom = 1,
	Top = 2,
	EBloodDisplayType_MAX = 3
};

// Enum DBDSharedTypes.EPlayerStatus
enum class EPlayerStatus : uint8 {
	Default = 0,
	Hook = 1,
	Trap = 2,
	Dead = 3,
	Escaped = 4,
	Injured = 5,
	Carried = 6,
	Crawling = 7,
	Sacrificed = 8,
	Disconnected = 9,
	InDeathBed = 10,
	EPlayerStatus_MAX = 11
};

// Enum DBDSharedTypes.EReverseBearTrapUIState
enum class EReverseBearTrapUIState : uint8 {
	Off = 0,
	Stage1 = 1,
	Stage2 = 2,
	EReverseBearTrapUIState_MAX = 3
};

// Enum DBDSharedTypes.ESleepingUIState
enum class ESleepingUIState : uint8 {
	Off = 0,
	FallingAsleep = 1,
	Asleep = 2,
	ESleepingUIState_MAX = 3
};

// Enum DBDSharedTypes.EObsessionUIState
enum class EObsessionUIState : uint8 {
	Off = 0,
	Target = 1,
	Chased = 2,
	Dead = 3,
	EObsessionUIState_MAX = 4
};

// Enum DBDSharedTypes.EThemeColorId
enum class EThemeColorId : uint8 {
	Invalid = 0,
	Blue = 1,
	Green = 2,
	Yellow = 3,
	EThemeColorId_MAX = 4
};

// Enum DBDSharedTypes.ESubtitlesSize
enum class ESubtitlesSize : uint8 {
	Small = 0,
	Default = 1,
	Large = 2,
	Huge = 3,
	ESubtitlesSize_MAX = 4
};

// Enum DBDSharedTypes.ESubtitlesBackgroundOpacity
enum class ESubtitlesBackgroundOpacity : uint8 {
	None = 0,
	Default = 1,
	High = 2,
	Opaque = 3,
	ESubtitlesBackgroundOpacity_MAX = 4
};

// Enum DBDSharedTypes.ESubtitlesPosition
enum class ESubtitlesPosition : uint8 {
	HUD = 0,
	Menus = 1,
	Cinematics = 2,
	ESubtitlesPosition_MAX = 3
};

// Enum DBDSharedTypes.ETutorialObjectivePlayerActionMapping
enum class ETutorialObjectivePlayerActionMapping : uint8 {
	None = 0,
	Action_Camper = 1,
	Interact_Camper = 2,
	Interact_Slasher = 3,
	Run_Camper = 4,
	Attack_Slasher = 5,
	SecondaryAction_Camper = 6,
	AbilityTwo_Camper = 7,
	ItemUse_Camper = 8,
	Crouch = 9,
	ItemDrop_Camper = 10,
	ItemUse_Slasher = 11,
	ItemDrop_Slasher = 12,
	Mash_Camper = 13,
	FastInteract_Camper = 14,
	SecondaryAction_Slasher = 15,
	Action_Slasher = 16,
	Struggle = 17,
	MoveAxes = 18,
	LookAxes = 19,
	Count = 20,
	ETutorialObjectivePlayerActionMapping_MAX = 21
};

// Enum DBDSharedTypes.EChatType
enum class EChatType : uint8 {
	None = 0,
	PreGame = 1,
	PostGame = 2,
	Party = 3,
	EChatType_MAX = 4
};

// Enum DBDSharedTypes.EStickerType
enum class EStickerType : uint8 {
	None = 0,
	Emoji = 1,
	Text = 2,
	EStickerType_MAX = 3
};

// Enum DBDSharedTypes.ELobbyState
enum class ELobbyState : uint8 {
	Searching = 0,
	Joined = 1,
	Offering = 2,
	Fog = 3,
	ELobbyState_MAX = 4
};

// Enum DBDSharedTypes.EPopupPriority
enum class EPopupPriority : uint8 {
	ErrorSystem = 0,
	ErrorGameHigh = 1,
	ErrorGameLow = 2,
	InfoHigh = 3,
	InfoLow = 4,
	ErrorUIThreshold = 2,
	LowestPriority = 4,
	EPopupPriority_MAX = 5
};

// Enum DBDSharedTypes.EHudComponent
enum class EHudComponent : uint8 {
	ACTION_PROMPT = 0,
	ACTION_PROGRESS_BAR = 1,
	GENERATOR_ICON = 2,
	HATCH_ICON = 3,
	EXIT_ICON = 4,
	LOCAL_PLAYER_STATUS = 5,
	OTHER_PLAYER_STATUSES = 6,
	SURVIVOR_HOOK_COUNT = 7,
	CROUCH_BUTTON = 8,
	CENTER_INTERACT_BUTTON = 9,
	DIRECTIONAL_STICK = 10,
	WIGGLE_BUTTONS = 11,
	STRUGGLE_BUTTONS = 12,
	POWER_BUTTON = 13,
	ATTACK_BUTTON = 14,
	OBJECTIVES = 15,
	LOUD_NOISE_INDICATOR = 16,
	SECOND_ABILITY_BUTTON = 17,
	ACTION_BUTTON = 18,
	CANCEL_BUTTON = 19,
	DROP_SURVIVOR_BUTTON = 20,
	LOOK_BACK_BUTTON = 21,
	CENTER_ITEM_CONTAINER = 22,
	MOVEMENT_LOCK = 23,
	EHudComponent_MAX = 24
};

// Enum DBDSharedTypes.ETestBuildType
enum class ETestBuildType : uint8 {
	None = 0,
	PublicTestBuild = 1,
	PaxBuild = 2,
	ConsolePreAlphaBuild = 3,
	ETestBuildType_MAX = 4
};

// ScriptStruct DBDSharedTypes.DirectionalMiniGameDefinition
// Size: 0x20 (Inherited: 0x00)
struct FDirectionalMiniGameDefinition {
	int32_t KeysPerSequenceCount; // 0x00(0x04)
	bool IsSequenceRandom; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<enum class EDirectionalInputKey> Sequence; // 0x08(0x10)
	enum class EDirectionalMiniGameType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct DBDSharedTypes.ArchiveTomeSkinUIDataRow
// Size: 0x58 (Inherited: 0x18)
struct FArchiveTomeSkinUIDataRow : FDBDTableRowBaseWithId {
	enum class EArchiveMenuState menuState; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FArchiveTomeSkinData ArchiveSkinData; // 0x20(0x38)
};

// ScriptStruct DBDSharedTypes.ArchiveTomeSkinData
// Size: 0x38 (Inherited: 0x00)
struct FArchiveTomeSkinData {
	struct UMaterialInterface* ArchiveTitleBarSkinMaterial; // 0x00(0x08)
	struct UMaterialInterface* ArchiveSideNavSkinMaterial; // 0x08(0x08)
	struct UMaterialInterface* ArchiveSideNavSmokeSkinMaterial; // 0x10(0x08)
	struct UMaterialInterface* ArchiveTabsSkinMaterial; // 0x18(0x08)
	struct UMaterialInterface* ArchiveProgressPanelSmokeSkinMaterial; // 0x20(0x08)
	struct FLinearColor ArchiveSkinColor; // 0x28(0x10)
};

// ScriptStruct DBDSharedTypes.ProgressionUIDataRow
// Size: 0xd0 (Inherited: 0x08)
struct FProgressionUIDataRow : FDBDTableRowBase {
	enum class EProgressionType ProgressionType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FCurrencyProgressionUIData CurrencyProgressionUIData; // 0x10(0xc0)
};

// ScriptStruct DBDSharedTypes.CurrencyProgressionUIData
// Size: 0xc0 (Inherited: 0x00)
struct FCurrencyProgressionUIData {
	struct FText TooltipTitle; // 0x00(0x18)
	struct FText TooltipDescription; // 0x18(0x18)
	struct TSoftObjectPtr<UMaterialInterface> TooltipHeaderMaterial; // 0x30(0x30)
	struct TSoftObjectPtr<UMaterialInterface> RewardBackgroundMaterial; // 0x60(0x30)
	struct TSoftObjectPtr<UTexture2D> RewardIcon; // 0x90(0x30)
};

// ScriptStruct DBDSharedTypes.CurrencyUIDataRow
// Size: 0xd0 (Inherited: 0x08)
struct FCurrencyUIDataRow : FDBDTableRowBase {
	enum class ECurrencyType CurrencyType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FCurrencyProgressionUIData CurrencyProgressionUIData; // 0x10(0xc0)
};

// ScriptStruct DBDSharedTypes.EventProgressionData
// Size: 0x14 (Inherited: 0x00)
struct FEventProgressionData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct DBDSharedTypes.FriendData
// Size: 0x60 (Inherited: 0x00)
struct FFriendData {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct DBDSharedTypes.HelpCategoryData
// Size: 0x50 (Inherited: 0x08)
struct FHelpCategoryData : FDBDTableRowBase {
	enum class EHelpType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct TArray<struct FName> TopicIds; // 0x40(0x10)
};

// ScriptStruct DBDSharedTypes.HelpContextMappingData
// Size: 0x28 (Inherited: 0x08)
struct FHelpContextMappingData : FDBDTableRowBase {
	struct FString ContextName; // 0x08(0x10)
	struct TArray<struct FName> TopicIds; // 0x18(0x10)
};

// ScriptStruct DBDSharedTypes.HelpTopicData
// Size: 0x98 (Inherited: 0x08)
struct FHelpTopicData : FDBDTableRowBase {
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FString ImagePath; // 0x38(0x10)
	struct FString IconPath; // 0x48(0x10)
	struct FString VideoId; // 0x58(0x10)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x68(0x30)
};

// ScriptStruct DBDSharedTypes.TooltipEventSkinUIDataRow
// Size: 0x20 (Inherited: 0x08)
struct FTooltipEventSkinUIDataRow : FTableRowBase {
	struct FString EventBannerLabel; // 0x08(0x10)
	struct UTexture2D* HeaderDecorationTexture; // 0x18(0x08)
};

// ScriptStruct DBDSharedTypes.RarityMaterialDataRow
// Size: 0x28 (Inherited: 0x08)
struct FRarityMaterialDataRow : FDBDTableRowBase {
	enum class EItemRarity Rarity; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FRarityMaterialData RarityData; // 0x10(0x18)
};

// ScriptStruct DBDSharedTypes.RarityMaterialData
// Size: 0x18 (Inherited: 0x00)
struct FRarityMaterialData {
	struct UMaterialInterface* LoadoutPartMaterial; // 0x00(0x08)
	struct UMaterialInterface* CustomizationMaterial; // 0x08(0x08)
	struct UMaterialInterface* TooltipHeaderMaterial; // 0x10(0x08)
};

// ScriptStruct DBDSharedTypes.ReportFeedbackData
// Size: 0x40 (Inherited: 0x00)
struct FReportFeedbackData {
	struct FDateTime BanTimestamp; // 0x00(0x08)
	struct FText Reason; // 0x08(0x18)
	struct TArray<int64_t> MessageIds; // 0x20(0x10)
	struct FString RecipientId; // 0x30(0x10)
};

// ScriptStruct DBDSharedTypes.ScreenIndicatorViewData
// Size: 0x38 (Inherited: 0x00)
struct FScreenIndicatorViewData {
	struct FString ID; // 0x00(0x10)
	enum class EHudScreenIndicatorType IndicatorType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector2D ViewportSize; // 0x14(0x08)
	bool IsInFront; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FVector2D ScreenPosition; // 0x20(0x08)
	float distance; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UObject* AdditionalData; // 0x30(0x08)
};

