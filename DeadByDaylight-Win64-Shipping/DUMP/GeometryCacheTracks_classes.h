// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size: 0x138 (Inherited: 0xf0)
struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	struct FMovieSceneGeometryCacheParams Params; // 0xf0(0x48)
};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0xa0(0x10)
};

