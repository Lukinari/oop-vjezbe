#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "pclass.hpp"
using namespace std;
player::player(string name, int points, vector<int> hand):name("default"),points(0),hand(0) {
    this -> name = name;
    this -> points = points;
    this -> hand = hand;
    cout << "Player" << endl;
};
void player::setname(string name) {
    cout << "sName" << endl;
    this -> name = name;
};
string player::getname() {
    cout << "gName" << endl;
    return name;
};
void player::setpoints(int points) {
    cout << "sPoints" << endl;
    this -> points = points;
};
int player::getpoints() {
    cout << "gPoints" << endl;
    return points;
};
void player::sethand(vector < int > handm) {
    for (int i = 0; i < 10; i++) {
        hand[i]=handm[i];
        //cout << handm[i] << " ";
    }
    cout << "sHand" << endl;
};
vector<int> player::gethand() {
    cout << "gHand" << endl;
    return hand;
};
player::~player(){
    hand.erase(hand.begin(),hand.end());
    name.erase(name.begin(),name.end());
    points = 0;
    cout << "~player" << endl;
};
