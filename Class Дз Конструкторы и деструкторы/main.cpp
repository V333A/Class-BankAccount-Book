#include <iostream>
#include <cstring>
#include "Movie.h"
#include "Hero.h"
#include"Product.h"

using namespace std;










int main()
{
	//Movie movie1("Inception", 2010, 148, 8.8);
	//movie1.print();
	//Movie movie3("The Godfather", 1972, 175, 9.2);
	//movie3.print();
	//Movie movie2("The Shawshank Redemption", 1994);
	//movie2.print();



	//Hero hero1("Archer", 5, 80, 15);
	//Hero hero2("Warrior");
	//hero2.takeDamage(hero1.GetAttack());
	//hero2.print(); cout << endl;
	//hero2.takeDamage(hero1.GetAttack());
	//hero2.print(); cout << endl;
	//hero2.takeDamage(hero1.GetAttack());
	//hero2.print(); cout << endl;

	//Hero hero3("Mage", 3, 150, 20);
	//hero3.print();



	//- У main :
//створіть два товари головним конструктором(один зі знижкою) і один делегуючим;
//спробуйте створити товар зі знижкою 70 — переконайтеся, що знижка залишилася 0;
//виведіть усі товари.

	Product banan("Banan", 15, 2256, 0);
	Product apple("Apple", 26, 3000, 26);
	Product orange("Orange", 9);
	Product kiwi("Kiwi", 20, 1000, 70);
	banan.print();
	cout << endl;
	apple.print();
	cout << endl;
	orange.print();
	cout << endl;
	kiwi.print();
	

	return 0;
}