#pragma once
#include<string>


class Actor
{
public:
	Actor() = default;
	Actor(const char* InName, float InHealth, float InAttackPower)
		: Name(InName), Health(InHealth),MaxHealth(InHealth), AttackPower(InAttackPower)
	{
	}

	/// <summary>
	/// Target���� �����ϴ� �Լ�
	/// </summary>
	/// <param name="Target">���� �޴� ���</param>
	void Attack(Actor* InTarget);


	/// <summary>
	/// ������ ���ط���ŭ ���ο��� ���ظ� ����
	/// </summary>
	/// <param name="InDamage">������ ���ط�</param>
	void TakeDamage(float InDamage);

	/// <summary>
	/// �� Actor�� ���� ���θ� �˷��ִ� �Լ�
	/// </summary>
	/// <returns>true�� ����ִ�. false�� �׾���.</returns>
	inline bool IsAlive() { return Health > 0; }

protected:
	inline void SetHealth(float InHealth)
	{
		if (InHealth > MaxHealth)
		{
			Health = MaxHealth;
		}
		else
		{
			Health = InHealth;
		}
	}

	std::string Name= "����";
	float Health = 100.0f;
	float MaxHealth = 100.0f;
	float AttackPower = 10.0f;
	
};

