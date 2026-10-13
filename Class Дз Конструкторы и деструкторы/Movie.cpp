#include <iostream>
#include <cstring>
#include "Movie.h"

using namespace std;
void Movie::print() const
{

		cout << "Title: " << title << endl;
		cout << "Year: " << year << endl;
		cout << "Duration: " << duration/60 << ":" << duration%60 << endl;
		cout << "Rating: " << rating << endl;
		cout << "Is long: " << (islong(duration) ? "Yes" : "No") << endl;
	
}
void Movie::setTitle(const char* newTitle)
{
	if (newTitle == nullptr)
	{
		return;
	}

	delete[] title;

	title = new char[strlen(newTitle) + 1];

	strcpy_s(
		title,
		strlen(newTitle) + 1,
		newTitle
	);
}