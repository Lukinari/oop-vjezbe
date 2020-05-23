#include <iostream>
#include <string>
#include <vector>
#include "Book.hpp"

#ifndef HARD_COPY_BOOK_H 
#define HARD_COPY_BOOK_H

class HardCopyBook : public Book {
	int broj_str;
public:
	HardCopyBook(std::string author, std::string title, int br_str) :
		Book(author, title), broj_str(br_str) {
	}
	virtual void getBook();
};
#endif