#include"HardCopyBook.hpp"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void HardCopyBook::getBook()
{
	cout << "Autor: " << author << endl;
	cout << "Naslov: " << title << endl;
	cout << "Broj stranica: " << broj_str << endl;

}
