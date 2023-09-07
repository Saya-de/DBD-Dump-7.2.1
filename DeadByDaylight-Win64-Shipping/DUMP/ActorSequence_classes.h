// Class ActorSequence.ActorSequence
// Size: 0x90 (Inherited: 0x68)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x68(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x70(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0xe0 (Inherited: 0xb8)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb8(0x14)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct UActorSequence* Sequence; // 0xd0(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0xd8(0x08)
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x4f0 (Inherited: 0x4f0)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

