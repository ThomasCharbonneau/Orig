// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AttackTypes.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EAttackTypes: uint8
{
    Physical    UMETA(DisplayName = "Physical"),
    Magical   UMETA(DisplayName = "Magical")
};
