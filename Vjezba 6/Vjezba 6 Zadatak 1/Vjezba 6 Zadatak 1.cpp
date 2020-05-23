#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include "Book.hpp"
#include "EBook.hpp"
#include "HardCopyBook.hpp"
#include "Library.hpp"

using namespace std;

void fill(std::vector<std::string>& text, Library& lib)
{
	string author, title, pdf;
	int brstr;
	float mb;
	for (int i = 0; i < (int)text.size(); i++)
	{
		size_t semicolon = count(text[i].begin(), text[i].end(), ';');
		size_t pos = 0;
		string temp;
		string delimiter = "; ";
		int boundary = 0;
		if (semicolon == 2)
		{
			while ((pos = text[i].find(delimiter)) != std::string::npos)
			{
				temp = text[i].substr(0, pos);
				text[i].erase(0, pos + delimiter.length());
				if (boundary == 0)
				{
					author = temp;
				}
				else if (boundary == 1)
				{
					title = temp;
				}
				boundary++;
			}
			temp = text[i].substr(0, pos);
			if (boundary == 2)
			{
				brstr = stoi(temp);
			}
			lib.set_lib(new HardCopyBook(author, title, brstr));
			boundary = 0;
		}
		else if (semicolon == 3)
		{
			while ((pos = text[i].find(delimiter)) != std::string::npos)
			{
				temp = text[i].substr(0, pos);
				text[i].erase(0, pos + delimiter.length());
				if (boundary == 0)
				{
					author = temp;
				}
				else if (boundary == 1)
				{
					title = temp;
				}
				else if (boundary == 2)
				{
					pdf = temp;
				}
				boundary++;
			}
			temp = text[i].substr(0, pos);
			if (boundary == 3)
			{
				temp.erase(temp.end() - 2, temp.end());
				mb = stof(temp);
			}
			boundary = 0;
			lib.set_lib(new EBook(author, title, pdf, mb));
		}
	}
}

int main()
{
	ifstream fin("knjige.txt");
	vector<string> v;
	string line;
	while (getline(fin, line))
		v.push_back(line);
	Library lib;
	fill(v, lib);
	string author = "Allen Holub";
	lib.title(author);
	cout << lib.pdf_size(author) << "MB" << endl << endl;
	string search = "";
	lib.search(search);
}