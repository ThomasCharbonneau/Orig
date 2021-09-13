// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Monster.h"
#include "MonsterTeam.generated.h"

using namespace std;

/**
 * 
 */
UCLASS(DefaultToInstanced, Blueprintable, BlueprintType)
class ORIG_API UMonsterTeam: public UObject
{
	GENERATED_BODY()
public:
	UMonsterTeam();
	~UMonsterTeam();

	/*vector<UMonster*> getMonsters();*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	TArray<UMonster*> monsters_;
};
