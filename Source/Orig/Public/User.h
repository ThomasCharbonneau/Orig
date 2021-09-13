// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MonsterTeam.h"
#include "User.generated.h"

/**
 * 
 */
UCLASS(DefaultToInstanced, Blueprintable, BlueprintType)
class ORIG_API UUser: public UObject
{
	GENERATED_BODY()
public:
	UUser();
	~UUser();

	/*UMonsterTeam* getMonsterTeam();*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	UMonsterTeam* team_;
};
