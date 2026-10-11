#pragma once
class BankAccount
{
	double balance;
	char owner[50];
public:
	void init(const char* newOwner);
	const char* getOwner() const { return owner; }
	double getBalance() const { return balance; }
	bool deposit(double amount);
	bool withdraw(double amount);
	void print() const;
	


};

