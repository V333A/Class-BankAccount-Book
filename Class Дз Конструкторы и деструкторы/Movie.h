#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Movie
{
	
	char* title;
	int year;
	int duration;
	double rating;

public:
	Movie(const char* newTitle, int newYear, int newDuration, double newRating) :title(nullptr), year(newYear), duration(0), rating(0)
	{
		setTitle(newTitle);
		setDuration(newDuration);
		setRating(newRating);
	}
	Movie(const char* newTitle, int newYear) :Movie(newTitle, newYear, 90, 0) {};




		bool islong(int duration) const
	{
			if (duration > 120)
			{
				
				return true;
			}
		
				return false;
			
	}
	void setRating(double newRating)
	{
		if (newRating < 0 || newRating > 10)
		{
			return;
		}
		rating = newRating;
	}
	void setDuration(int newDuration)
	{
		if (newDuration < 0)
		{
			return;
		}
		duration = newDuration;
	}

	void setTitle(const char* newTitle);

	void print() const;


	~Movie()
	{
		delete[] title;
	}

};

