#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#ifndef _card
#define _card
using namespace std;

class card {
    int number;
    string zog;
public:
    card(const int & num, const string & zogm);
    void setnum(const int & num);
    void setzog(const string & zogm);
    int getnum();
    string getzog();
    ~card();
};
#endif
