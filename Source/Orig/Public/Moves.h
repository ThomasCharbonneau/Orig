// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Types.h"
#include "AttackTypes.h"
#include "Moves.generated.h"

/**
 * 
 */
UCLASS(DefaultToInstanced, Blueprintable, BlueprintType)
class ORIG_API UMoves: public UObject
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	FString description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	uint8 capacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	uint8 remainingUses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	uint8 damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	ETypes type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	EAttackTypes DamageType;

	/*UFONCTION()
	void AddMove()*/
		
	UMoves();
	UMoves(uint8 test);
	~UMoves();


};
