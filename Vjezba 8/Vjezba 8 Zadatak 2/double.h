#pragma once
#include <iostream>
#ifndef DOUBLE_H
#define DOUBLE_H

class doubconv
{
	int num;
public:
	doubconv(int num) 
	{
		this->num = num;
	};
	~doubconv() {}
	operator double();
};
#endif