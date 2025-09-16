#include "Monster.h"
#include "EnemyData.h"

float Monster::Attack1()
{
	printf("[% s]가 공격했습니다.", Name.c_str());
	return AttackPower;
}

void Monster::TakeDamage1(float Amount)
{
	Health -= Amount;
}
