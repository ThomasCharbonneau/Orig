// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MonsterStats.generated.h"

/**
 * 
 */
UCLASS(DefaultToInstanced, Blueprintable, BlueprintType)
class ORIG_API UMonsterStats : public UObject
{
	GENERATED_BODY()
public:
	UMonsterStats();
	~UMonsterStats();

	/*
	bool dealDamage(int damage);
	void heal(int healValue);
	*/

	/*
	// Getters
	int getHealth();
	int getPhysicalDefense();
	int getMagicDefense();
	int getPhysicalDamage();
	int getMagicDamage();
	int getSpeed();
	float getCriticalChance();
	float getCriticalDamage();
	*/

	// Attributes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	int currentHealth_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	int maxHealth_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	float physicalDefense_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	float magicDefense_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	float physicalDamage_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	float magicDamage_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	int speed_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	int criticalChance_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	float criticalDamage_;
};
