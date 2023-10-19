// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunAdapter.generated.h"
#include "SlingShot.h"
UCLASS()
class AGun;
class PVZ_USFX_LAB02_API AGunAdapter : public AActor, public ISlingShot
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	UPROPERTY()
	AGun* Weapon;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Fire the Weapon
	void Sling() override;

};
