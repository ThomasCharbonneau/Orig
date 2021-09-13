// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MonsterStats.h"
#include "MoveSet.h"
#include "Types.h"
#include "Monster.generated.h"

/**
 * 
 */
UCLASS(DefaultToInstanced, Blueprintable, BlueprintType)
class ORIG_API UMonster: public UObject
{
	GENERATED_BODY()
public:
	UMonster();
	~UMonster();

	/*bool dealDamage(int damage);
	void heal(int healValue);*/

	UFUNCTION(BlueprintCallable, Category = "My Functions")
	bool isAlive();

	/*
	// Getters
	MonsterStats* getStats();
	UMoveSet* getMoveSet();
	*/
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	uint8 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	ETypes type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	UMonsterStats* stats_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	UMoveSet* moveSet_;
};
