#include<iostream>
#include "BankAccount.h"
using namespace std;

	
void BankAccount::init(const char* newOwner)
{
	if (newOwner && strlen(newOwner) < sizeof(owner))
	{
		strcpy_s(owner, sizeof(owner), newOwner);
	}
	balance = 0.0;
}
bool BankAccount::deposit(double amount)
{
	if (amount > 0)
	{
		balance += amount;
		return true;
	}
	return false;
}
bool BankAccount::withdraw(double amount)
{
	if (amount > 0 && amount <= balance)
	{
		balance -= amount;
		return true;
	}
	return false;
}

void BankAccount::print() const
{
	cout << "Owner: " << owner << ", Balance: " << balance << endl;
}
