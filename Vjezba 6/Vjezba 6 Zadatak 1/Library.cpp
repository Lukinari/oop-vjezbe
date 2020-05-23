#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include"Library.hpp"
using namespace std;

void Library::set_lib(Book* book)
{
	bookshelf.push_back(book);
}

void Library::print_lib()
{
	for (int i = 0; i < (int)bookshelf.size(); i++)
	{
		bookshelf[i]->getBook();
		cout << endl;
		for (int j = 0; j < 60; j++)
			cout << "\\";
		cout << endl << endl;
	}
}

void Library::title(string& author)
{
	cout << "Svi naslovi autora " << author << ": " << endl << endl;
	vector<string> titles;
	for (int i = 0; i < (int)bookshelf.size(); i++)
	{
		string tmp = bookshelf[i]->getAuthor();
		if (tmp.find(author) != string::npos)
			cout << bookshelf[i]->getTitle() << endl;
	}
	cout << endl;
}

float Library::pdf_size(string& author)
{
	float mb_sum = 0;
	for (int i = 0; i < (int)bookshelf.size(); i++)
	{
		string tmp = bookshelf[i]->getAuthor();
		if (tmp.find(author) != string::npos)
			mb_sum += bookshelf[i]->getSize();
	}
	cout << "Ukupna velicina njegovih knjiga: ";
	return mb_sum;
}

void Library::search(string& search)
{
	for (int i = 0; i < (int)bookshelf.size(); i++)
	{
		string tmp = bookshelf[i]->getTitle();
		if (tmp.find(search) != string::npos)
		{
			bookshelf[i]->getBook();
			cout << endl;
			for (int j = 0; j < 60; j++)
				cout << "\\";
			cout << endl << endl;
		}
	}
}

Library::~Library()
{
	for (int i = 0; i < (int)bookshelf.size(); i++)
	{
		if (bookshelf[i] != NULL)
		{
			delete bookshelf[i];
			bookshelf[i] = 0;
		}
	}
}