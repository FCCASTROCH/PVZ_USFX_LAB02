// Fill out your copyright notice in the Description page of Project Settings.


#include "GunAdapter.h"
#include "Gun.h"
// Sets default values
AGunAdapter::AGunAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGunAdapter::BeginPlay()
{
	
	//Spawn the Weapon
	Weapon = GetWorld()->SpawnActor<AGun>(AGun::StaticClass());

}

// Called every frame
void AGunAdapter::Tick(float DeltaTime)
{


}

void AGunAdapter::Sling()
{
	//Fire the Weapon
	Weapon->Fire();
}

