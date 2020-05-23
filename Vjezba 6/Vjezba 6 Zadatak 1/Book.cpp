#include"Book.hpp"
#include<iostream>
#include<string>
#include<vector>
#include <iterator>
#include <sstream>
#include <ctype.h>
using namespace std;

void Book::getBook()
{
	cout << "Autor: " << author << endl;
	cout << "Naslov knjige: " << title << endl;
}

string Book::getAuthor()
{
	return author;
}

string Book::getTitle()
{
	return title;
}