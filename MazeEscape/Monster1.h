#pragma once
#include "Actor.h"
class Monster1 : public Actor
{
public:
	Monster1()
		:Actor("∏ÛΩ∫≈Õ", 30.0f, 5.0f) {}
	Monster1(const char* InName)
		:Actor(InName, 30.0f, 5.0f) {}
	Monster1(const char* InName, float InHealth, float InAttackPower)
		: Actor(InName, InHealth, InAttackPower)
	{
	}

	inline int GetDropGold() const { return DropGold; }

protected:
	int DropGold = 10;
};

