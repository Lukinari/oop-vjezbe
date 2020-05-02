#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "Card_Class.hpp"
using namespace std;
card::card(const int & num, const string & zogm) {
    this -> number = num;
    this -> zog = zogm;
    cout << "Card" << endl;
}
void card::setnum(const int& num){
    number = num;
    cout << "sNum" << endl;
}
void card::setzog(const string& zogm){
    zog = zogm;
    cout << "sZog" << endl;
}
int card::getnum(){
    cout << "gNum" << endl;
    return number;
}
string card::getzog(){
    cout << "gZog" << endl;
    return zog;
}

card::~card(){
    number = 0;
    zog = "";
    cout << "~card" << endl;
    //cout << number << zog << endl;
}
