#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "Mac_Class.hpp"
using namespace std;
mac::mac(vector < int > & deck){
    for (int i = 0; i < 40; i++) {
        deck.push_back(i);
        //cout << deck[i] << " ";
      }
      this -> deck = deck;
      cout << "mac" << endl;
};
void mac::setdeck(vector <int> & deckm){
    for (int i = 0; i < 40; i++) {
        deck[i]=deckm[i];
        //cout << deckm[i] << " ";
      }
    cout << "sDeck" << endl;
};
vector<int> mac::getdeck(){
    cout << "gDeck" << endl;
    return deck;
};
mac::~mac(){
    deck.erase(deck.begin(),deck.end());
    cout << "~mac" << endl;
};
