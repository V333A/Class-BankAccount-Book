#include<iostream>
#include"BankAccount.h"
#include "Book.h"
using namespace std;






int main()
{
	BankAccount account;
	account.init("John Doe");
	account.deposit(1000);
	account.withdraw(500);
	account.print();
	cout << endl;
	Book book1;
	book1.setTitle("The Great Gatsby");
	book1.setAuthor("F. Scott Fitzgerald");
	book1.setPages(5061);
	book1.setYear(3000);
	book1.print();
	cout << endl;
	Book book2;
	book2.setTitle("To Kill a Mockingbird");
	book2.setAuthor("Harper Lee");
	book2.setPages(281);
	book2.setYear(1960);
	book2.print();
	return  0;

}