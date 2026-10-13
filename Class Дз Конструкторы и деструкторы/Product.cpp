#include <iostream>
#include <cstring>
#include "Product.h"
using namespace std;

void Product::setName(const char* newName)
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

void Product::setPrice(double newPrice)
{
	price = newPrice;


}

bool Product::setDiscount(int newDiscount)
{
	if (newDiscount > 0 && newDiscount < 50)
	{
		discount = newDiscount;
		return true;
	}
	return false;

}

double Product::getFinalPrice()const
{


	return price - (price * discount / 100);
}

bool Product::isOnSale()const
{
	if (discount > 0)
	{
		return true;
	}
	return false;
}
//- Метод print() — виводить :
//назву,
//вагу у форматі «1 кг 250 г»(кілограми : weight / 1000, грами : weight % 1000),
//звичайну ціну,
//а якщо isOnSale() повертає true — ще й ціну зі знижкою та позначку «АКЦІЯ».

void Product::print()const
{
	cout << "Product:" << name << endl;
	cout << "Weight:" << weight/1000<<"kg"<<weight%1000<<"g" << endl;
	cout << "Price:" << (isOnSale() ?  getFinalPrice() : price);
	cout << (isOnSale() ? "  Action" : "") << endl;
	
	


}
