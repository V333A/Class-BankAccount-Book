#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
	char* name;
	int level;
	int health;
	int attack;
public:
	Hero(const char* newName, int newLevel, int newHealth, int newAttack) :name(nullptr), level(newLevel), health(0), attack(0)
	{
		SetName(newName);
		SetHealth(newHealth);
		SetAttack(newAttack);
	}
	Hero(const char* newName) :Hero(newName, 1, 100, 10) {};
	void SetName(const char* newName);
	bool SetHealth(int newHealth);
	bool SetAttack(int newAttack);
	char  GetName() const
	{
		return *name;
	}

	char  GetAttack() const
	{
		return attack;
	}
	bool isAlive()const;
	int takeDamage(int damage);
	void print() const
	{
		cout << "Name: " << name << endl;
		cout << "Level: " << level << endl;
		cout << "Attack: " << attack << endl;
		cout << "Health: " << health % 100<<"/100" << endl;
		cout  << (isAlive() ? "Live" : "Dead") << endl;
	}


};

