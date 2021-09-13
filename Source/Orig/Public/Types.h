// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Types.generated.h"
/**
 * 
 */
UENUM(BlueprintType)
enum class ETypes: uint8
{
    Fire    UMETA(DisplayName = "Fire"),
    Water   UMETA(DisplayName = "Water"),
    Grass   UMETA(DisplayName = "Grass")
};
