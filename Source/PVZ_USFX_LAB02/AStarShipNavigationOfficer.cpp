#include "AStarShipNavigationOfficer.h"
// Sets default values
AStarShipNavigationOfficer::AStarShipNavigationOfficer()
{
	// Set this actor to call Tick() every frame. You can turn this off toimprove performance if you don't need it.
		PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void AStarShipNavigationOfficer::BeginPlay()
{
	Super::BeginPlay();
}
// Called every frame
void AStarShipNavigationOfficer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AStarShipNavigationOfficer::Duty()
{
	//Print Duty string
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s navigates the ship."),
			*CrewTitle()));
}
FString AStarShipNavigationOfficer::CrewTitle()
{
	//Return title
	return "The Nav Officer";
}


