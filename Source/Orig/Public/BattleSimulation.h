// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "User.h"
#include "BattleSimulation.generated.h"

/**
 * 
 */
UCLASS(DefaultToInstanced, Blueprintable, BlueprintType)
class ORIG_API UBattleSimulation : public UObject
{
	GENERATED_BODY()
public:
	UBattleSimulation();
	~UBattleSimulation();

	UFUNCTION(BlueprintCallable, Category = "My Functions")
	void SimulateBattle(UMonster* playerMonster, UMonster* opponentMonster, UMoves* playerSelectedMove);

};
