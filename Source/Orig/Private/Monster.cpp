// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster.h"

UMonster::UMonster()
{
	// stats_ = new UMonsterStats();
}

UMonster::~UMonster()
{
	// delete stats_;
	// delete moveSet_;
}

bool UMonster::isAlive()
{
	return (*stats_).currentHealth_ > 0;
}

/*
bool UMonster::dealDamage(int damage)
{
	return (*stats_).dealDamage(damage);
}

void UMonster::heal(int heal)
{
	(*stats_).heal(heal);
}*/

/*
MonsterStats* UMonster::getStats()
{
	return stats_;
}

UMoveSet* UMonster::getMoveSet()
{
	return moveSet_;
}
*/