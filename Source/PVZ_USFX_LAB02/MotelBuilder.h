// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MotelBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMotelBuilder : public UInterface
{
	GENERATED_BODY()
};

/*
 
  */

class PVZ_USFX_LAB02_API IMotelBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildSwimmingPool() = 0;
	virtual void BuildLobbyArea() = 0;
	virtual void BuildRooms() = 0;
	virtual void BuildRestaurants() = 0;
	virtual class ALodging* GetLodging() = 0;
};
