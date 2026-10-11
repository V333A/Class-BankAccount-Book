#include<iostream>
#include "Book.h"

using namespace std;
void Book::setTitle(const char* newTitle)
{
	if (newTitle && strlen(newTitle) < sizeof(title))
	{
		strcpy_s(title, sizeof(title), newTitle);
	}


}

void Book::setAuthor(const char* newAuthor)
{
	if (newAuthor && strlen(newAuthor) < sizeof(author))
	{
		strcpy_s(author, sizeof(author), newAuthor);
	}
}

bool Book::setPages(int newPages)
{
	if (newPages > 1 && newPages < 5000)
	{
		pages = newPages;
		return true;
	}
	cout << "Invalid number of pages. Please enter a number between 1 and 5000." << endl;
	return false;
}

bool Book::setYear(int newYear)
{
	
	if (newYear >= 1450 && newYear <= 2026)
	{
		year = newYear;
		return true;
	}
	cout << "Invalid year. Please enter a year between 1450 and 2026." << endl;
	return false;
}

void Book::print() const
{
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Pages: " << pages << endl;
	cout << "Year: " << year << endl;
	if (isThick())
	{
		cout << "This is a thick book." << endl;
	}

}
