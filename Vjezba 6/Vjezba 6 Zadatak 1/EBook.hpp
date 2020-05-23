#include <iostream>
#include <string>
#include <vector>
#include "Book.hpp"

#ifndef EBOOK_HPP
#define EBOOK_HPP

class EBook : public Book {
	std::string pdf;
	float mb;
public:
	EBook(std::string author, std::string title, std::string pdf, float mb) :
		Book(author, title), pdf(pdf), mb(mb) {
	}
	virtual void getBook();
	virtual float getSize() { return mb; }
};
#endif
