// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterStats.h"
#include "..\Public\MonsterStats.h"

UMonsterStats::UMonsterStats()
{
	maxHealth_ = 100;
	currentHealth_ = 100;
	physicalDefense_ = 10;
	magicDefense_ = 10;
	physicalDamage_ = 10;
	magicDamage_ = 10;
	speed_ = 10;
	criticalChance_ = 0.01;
	criticalChance_ = 2;
}

UMonsterStats::~UMonsterStats()
{
}

/*

bool MonsterStats::dealDamage(int damage)
{
	health_ -= damage;
	return health_ <= 0;
}

void MonsterStats::heal(int healValue)
{
	health_ += healValue;
}

int MonsterStats::getHealth()
{
	return health_;
}

int MonsterStats::getPhysicalDefense()
{
	return physicalDefense_;
}

int MonsterStats::getMagicDefense()
{
	return magicDefense_;
}

int MonsterStats::getPhysicalDamage()
{
	return physicalDamage_;
}

int MonsterStats::getMagicDamage()
{
	return magicDamage_;
}

int MonsterStats::getSpeed()
{
	return speed_;
}

float MonsterStats::getCriticalChance()
{
	return criticalChance_;
}

float MonsterStats::getCriticalDamage()
{
	return criticalDamage_;
}

*/
