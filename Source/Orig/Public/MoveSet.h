// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Moves.h"
#include <vector> 
#include "MoveSet.generated.h"

using namespace std;
/**
 * 
 */
UCLASS(DefaultToInstanced, Blueprintable, BlueprintType)
class ORIG_API UMoveSet: public UObject
{
	GENERATED_BODY()
public:

	// Constants
	static const int MAX_MOVE_NUMBER = 4;
	static const int MIN_MOVE_NUMBER = 1;

	// Constructor / Destructor
	UMoveSet();
	~UMoveSet();

	// vector<Move*> getMoves();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Switch Components")
	TArray<UMoves*> moves_;
};
