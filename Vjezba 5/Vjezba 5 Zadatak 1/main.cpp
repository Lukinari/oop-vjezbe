#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "Card_Class.hpp"
#include "Mac_Class.hpp"
#include "pclass.hpp"
using namespace std;
int main() {
    vector<int> hand(10);
    vector<int> deck;
    card c(3,"Kupe");
    mac deckob(deck);
    player handob("string",4,hand);
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(deck.begin(), deck.end(), default_random_engine(seed));
    deckob.setdeck(deck);
    copy(deck.begin(),deck.begin()+10,hand.begin());
    handob.sethand(hand);
    vector<int> dprint;
    vector<int> hprint;
    hprint = handob.gethand();
    deckob.getdeck();
    handob.setpoints(7);
    cout << handob.getpoints() << endl;
    /*for(int j = 0; j < 40;j++)
    {
        cout << dprint[j] << " ";
    }*/
    for(int k = 0; k < 10;k++)
    {
        cout << hprint[k] << " ";
    }
    cout << endl;
    handob.setname("PlayerName");
    cout << handob.getname() << endl;
    c.setnum(6);
    c.getnum();
    c.setzog("notazog");
    c.getzog();
}
