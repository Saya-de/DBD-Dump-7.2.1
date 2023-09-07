// Class StandinActor.StandInMeshActor
// Size: 0x238 (Inherited: 0x230)
struct AStandInMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x230(0x08)
};

// Class StandinActor.StandinProxyContainer
// Size: 0x40 (Inherited: 0x30)
struct UStandinProxyContainer : UObject {
	struct TArray<struct FStandinProxyEntry> Standins; // 0x30(0x10)
};

