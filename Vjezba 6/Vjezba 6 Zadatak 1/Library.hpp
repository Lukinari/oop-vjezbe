#include <iostream>
#include <string>
#include <vector>
#include "Book.hpp"

#ifndef LIBRARY_HPP
#define LIBRARY_HPP

class Library : public Book
{
	std::vector<Book*> bookshelf;
public:
	Library() {}
	~Library();
	void set_lib(Book* book);
	void print_lib();
	void title(std::string& author);
	float pdf_size(std::string& author);
	void search(std::string& search);
};
#endif
