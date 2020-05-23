#include<iostream>
#include<string>
#include<vector>
#include"Book.hpp"
#include"EBook.hpp"

using namespace std;

void EBook::getBook()
{
	cout << "Autor: " << author << endl;
	cout << "Naslov: " << title << endl;
	cout << "PDF: " << pdf << endl;
	cout << "Velicina: " << mb << "MB" << endl;
}

