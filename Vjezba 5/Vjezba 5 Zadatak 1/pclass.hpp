#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#ifndef _player
#define _player
using namespace std;
class player {
    string name;
    int points;
    vector<int> hand;
public:
    player(string name, int points, vector<int> hand);
    void setname(string name);
    string getname();
    void setpoints(int points);
    int getpoints();
    void sethand(vector<int> hand);
    vector<int> gethand();
    ~player();
};
#endif
