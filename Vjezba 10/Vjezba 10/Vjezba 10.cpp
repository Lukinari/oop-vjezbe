#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
int zad3(vector<int> v)
{
	int counter = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > 500)
		{
			counter++;
		}
	}
	return counter;
}
void zad4(vector<int> v, int& min, int& max)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > max)
			max = v[i];
		if (v[i] < min)
			min = v[i];
	}
}
bool heart_hundred(int& n)
{
	if (n < 300)
		return true;
	return false;
}
bool comp(int& a, int& b)
{
	if (a > b)
		return true;
	return false;
}

int main()
{
	try {
		ifstream f("numbers.txt");
		if (f.good())
		{
			vector<int> v;
			istream_iterator<int> is(f), eos;
			copy(is, eos, back_inserter(v));
			int min = v[7], max = v[7];
			cout << "Numbers bigger than 500: " << zad3(v) << endl;
			zad4(v, min, max);
			cout << "Min: " << min << endl << "Max: " << max << endl;
			v.erase(remove_if(v.begin(), v.end(), heart_hundred), v.end());
			cout << "Numbers smaller than 300: " << v.size() << endl;
			sort(v.begin(), v.end(), comp);
			ostream_iterator<int> os(cout, " ");
			copy(v.begin(), v.end(), os);
		}
		else
			throw 404;
	}
	catch (int c) { cout << "Error 404, file not found" << endl; }
}