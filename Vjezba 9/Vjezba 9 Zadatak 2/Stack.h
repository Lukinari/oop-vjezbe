#include <iostream>
#ifndef STACK_H
#define STACK_H
template <typename second>
class Stack
{
	second* starr;
	int spos;
	int maxsize;
public:
	Stack(int size);
	~Stack();
	void push(second pvar);
	void pop();
	bool is_empty();
	void print();
};

template <typename second>
Stack<second>::Stack(int size)
{
	starr = new second[size];
	maxsize = size;
	spos = 0;
}

template <typename second>
Stack<second>::~Stack()
{
	delete starr;
	starr = 0;
}

template <typename second>
void Stack<second>::push(second pvar)
{
	starr[spos] = pvar;
	if (spos < maxsize - 1)
		spos++;
}

template <typename second>
void Stack<second>::pop()
{
	if (spos > 0)
	{
		starr[spos] = NULL;
		spos--;
	}
}

template <typename second>
bool Stack<second>::is_empty()
{
	if (spos == 0)
		return true;
	else
		return false;
}

template <typename second>
void Stack<second>::print()
{
	using namespace std;
	if (is_empty())
		cout << "Array is empty!";
	else
	{
		for (int i = 0; i < spos + 1; i++)
		{
			cout << starr[i] << " ";
		}
	}
	cout << endl;
}

#endif