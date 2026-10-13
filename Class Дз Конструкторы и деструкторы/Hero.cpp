
#include "Hero.h"

using namespace std;

void Hero::SetName(const char* newName)
{
	if (newName == nullptr)
	{
		return;
	}
	delete[] name;
	name = new char[strlen(newName) + 1];
	strcpy_s(
		name,
		strlen(newName) + 1,
		newName
	);
}

bool Hero::SetHealth(int newHealth)
{
	if (newHealth >= 0 && newHealth <= 100)
	{
		health = newHealth;
		return true;
	}
	return false;
}

bool Hero::SetAttack(int newAttack)
{
	if (newAttack >= 1 && newAttack <= 50)
	{
		attack = newAttack;
		return true;
	}
	return false;
}

bool Hero::isAlive()const
{
	{
		if (health > 0)
			return true;
		else
			return false;
	}

}

int Hero::takeDamage(int damage)
{
	health -= damage;
	if (health < 0)
	{
		health = 0;
	}
	return 0;
}
