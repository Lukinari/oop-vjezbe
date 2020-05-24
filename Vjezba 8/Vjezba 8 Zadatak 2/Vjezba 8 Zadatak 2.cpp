#include <iostream>
#include "double.h"
using namespace std;

int main()
{
	doubconv intnum(3);
	double num = intnum;
	cout << num << endl << "Type: " << typeid(num).name();
}