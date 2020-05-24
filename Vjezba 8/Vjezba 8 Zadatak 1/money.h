#ifndef MONEY_H

#include <iostream>
#define MONEY_H
class money 
{
	int kn, lp;
public:
	money(int kuna = 0, int lipa = 0) { kn = kuna; lp = lipa; }
	~money(){}
	money operator+(const money& a);
	money operator-(const money& a);
	money operator-=(const money& a);
	money operator+=(const money& a);
	friend std::ostream& operator<<(std::ostream& os, const money & a);

};
#endif // !MONEY_H