#include "money.h"

using namespace std;

money money::operator+(const money& a)
{
    money temp;
    temp.kn = this->kn + a.kn;
    if ((this->lp + a.lp) > 100)
    {
        temp.kn++;
        temp.lp = (this->lp + a.lp) % 100;
    }
    else
        temp.lp = this->lp + a.lp;
    return temp;
}

money money::operator-(const money& a)
{
    money temp;
    temp.kn = this->kn - a.kn;
    if ((this->lp - a.lp) < 0)
    {
        temp.kn--;
        temp.lp = (this->lp - a.lp) + 100;
    }
    else
        temp.lp = this->lp - a.lp;
    return temp;
}

money money::operator-=(const money& a)
{
    this->kn -= a.kn;
    if ((this->lp - a.lp) < 0)
    {
        this->kn--;
        this->lp = (this->lp - a.lp) + 100;
    }
    else
        this->lp -= a.lp;
    return *this;
}

money money::operator+=(const money& a)
{
    this->kn += a.kn;
    if ((this->lp + a.lp) > 100)
    {
        this->kn++;
        this->lp = (this->lp + a.lp) % 100;
    }
    else
        this->lp += a.lp;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const money & a)
{
    os << "Kuna: " << a.kn << endl << "Lipa: " << a.lp;
    return os;
}
