#include "Monster.h"
#include "EnemyData.h"

float Monster::Attack1()
{
	printf("[% s]�� �����߽��ϴ�.", Name.c_str());
	return AttackPower;
}

void Monster::TakeDamage1(float Amount)
{
	Health -= Amount;
}
