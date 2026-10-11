#pragma once
class Book
{
	int pages= 0;
	int year= 0;
	char title[100];
	char author[100];
public:
	void setTitle(const char* newTitle);
	void setAuthor(const char* newAuthor);
	bool setPages(int newPages);
	bool setYear(int newYear);
	int  getPages() const { return pages; }
	int  getYear() const { return year; }
	const char* getTitle() const { return title; }
	const char* getAuthor() const { return author; }
	bool isThick() const { return pages > 500; }
	void print() const;

};

