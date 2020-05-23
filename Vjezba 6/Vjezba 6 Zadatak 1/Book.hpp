#include <iostream>
#include <string>
#include <vector>

#ifndef BOOK_H
#define BOOK_H

class Book
{
protected:
	std::string author;
	std::string title;
	int year;
public:
	Book(std::string author, std::string title)
	{
		this->author = author;
		this->title = title;
	}
	Book()
	{
		this->author;
		this->title;
	}
	~Book() {};
	virtual void getBook();
	std::string getAuthor();
	std::string getTitle();
	virtual float getSize() { return 0; }
};
#endif