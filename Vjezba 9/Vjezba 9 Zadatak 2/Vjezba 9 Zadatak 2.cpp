#include <iostream>
#include <vector>
#include <string>
#include "Stack.h"
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int size = 7;
	Stack <int> s(size);
	for (int i = 0; i < size; ++i)
	{
		s.push(rand() % (size + 1));
	}
	cout << "Original array: ";
	s.print();
	s.pop();
	cout << "  Popped array: ";
	s.print();
}