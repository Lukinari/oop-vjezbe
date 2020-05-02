#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#ifndef _mac
#define _mac
using namespace std;
class mac {
    vector < int > deck;
public:
    mac(vector < int > & deck);
    void setdeck(vector < int > & deck);
    vector<int> getdeck();
    ~mac();
};
#endif
