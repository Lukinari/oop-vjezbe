#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

class card {
  public:
    unsigned int number;
  string zog;
  card(const unsigned int & num, const string & zogm): number(0), zog("") {
    this -> number = num;
    this -> zog = zogm;
  }~card() {}
};
class mac {
  vector < int > deck;
  public:
    mac(vector < int > & deck): deck(0) {
      for (int i = 0; i < 40; i++) {
        deck.push_back(i);
      }
      this -> deck = deck;
    }~mac() {}
};
class player {
  public:
    string name;
  int points;
  vector < int > hand;
  player(string name, int points, vector < int > hand): name(""), points(0), hand(0) {
    this -> name = name;
    this -> points = points;
    this -> hand = hand;
  }~player() {}
};
card print(class card k) {
  cout << k.zog << ' ' << k.number << endl;
  return k;
}
void cardreader(int number, int & num, string & zog) {
  num = number % 10;
  if (num > 6)
    num += 4;
  else
    num += 1;
  if (number / 10 == 0)
    zog = "Kupe";
  else if (number / 10 == 1)
    zog = "Bate";
  else if (number / 10 == 2)
    zog = "Spade";
  else
    zog = "Dinari";
}
void fillhand(vector < int > & hand, int & j, vector < int > deck) {
  int limit = j + 10;
  for (int i = 0; j < limit; j++, i++) {
    hand[i] = deck[j];
  }
  cout << endl;
}
void akuza(player & plr) {
  int onepoint = 0;
  int twopoint = 0;
  int threepoint = 0;
  for (int i = 0; i < 10; i++) {
    if (plr.hand[i] % 10 == 0)
      onepoint++;
    else if (plr.hand[i] % 10 == 1)
      twopoint++;
    else if (plr.hand[i] % 10 == 2)
      threepoint++;
  }
  if (onepoint > 2) {
    if (onepoint > twopoint && onepoint > threepoint)
      plr.points = onepoint;
  }
  if (twopoint > 2) {
    if (twopoint > onepoint && twopoint > threepoint)
      plr.points = twopoint;
  }
  if (threepoint > 2) {
    if (threepoint > onepoint && threepoint > twopoint)
      plr.points = threepoint;
  }
}
void napolitana(player & plr) {
  int track = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 10; j++) {
      if (plr.hand[j] / 10 == i) {
        if (plr.hand[j] % 10 == 0)
          track += 1;
        else if (plr.hand[j] % 10 == 1)
          track += 1;
        else if (plr.hand[j] % 10 == 2)
          track += 1;
      }
    }
    if (track > 2)
      plr.points += track;
    track = 0;
  }
}
int main() {
  int j = 0;
  int num, pnum;
  string zog, nameone, nametwo, namethree, namefour;
  vector < int > deck;
  vector < int > hand(10);
  mac start(deck);
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  shuffle(deck.begin(), deck.end(), default_random_engine(seed));
  cout << "Enter the number of players(2-4): ";
  cin >> pnum;
  cout << endl;
  if (pnum == 2) {
    cout << "Enter name(player 1): ";
    cin >> nameone;
    cout << "Enter name(player 2): ";
    cin >> nametwo;
    fillhand(hand, j, deck);
    sort(hand.begin(), hand.end());
    player one(nameone, 0, hand);
    cout << "Player 1: " << one.name << endl;
    for (int i = 0; i < 10; i++) {
      cardreader(one.hand[i], num, zog);
      card k(num, zog);
      print(k);
    }
    akuza(one);
    napolitana(one);
    cout << "Number of points: " << one.points << endl;
    fillhand(hand, j, deck);
    sort(hand.begin(), hand.end());
    player two(nametwo, 0, hand);
    cout << "Player 2: " << two.name << endl;
    for (int i = 0; i < 10; i++) {
      cardreader(two.hand[i], num, zog);
      card k(num, zog);
      print(k);
    }
    akuza(two);
    napolitana(two);
    cout << "Number of points: " << two.points << endl;
    cout << endl;
  } else if (pnum == 4) {
    cout << "Enter name(player 1): ";
    cin >> nameone;
    cout << "Enter name(player 2): ";
    cin >> nametwo;
    cout << "Enter name(player 3): ";
    cin >> namethree;
    cout << "Enter name(player 4): ";
    cin >> namefour;
    cout << endl;
    fillhand(hand, j, deck);
    sort(hand.begin(), hand.end());
    player one(nameone, 0, hand);
    cout << "Player 1: " << one.name << endl;
    for (int i = 0; i < 10; i++) {
      cardreader(one.hand[i], num, zog);
      card k(num, zog);
      print(k);
    }
    akuza(one);
    napolitana(one);
    cout << "Number of points: " << one.points << endl;
    fillhand(hand, j, deck);
    sort(hand.begin(), hand.end());
    player two(nametwo, 0, hand);
    cout << "Player 2: " << two.name << endl;
    for (int i = 0; i < 10; i++) {
      cardreader(two.hand[i], num, zog);
      card k(num, zog);
      print(k);
    }
    akuza(two);
    napolitana(two);
    cout << "Number of points: " << two.points << endl;
    fillhand(hand, j, deck);
    sort(hand.begin(), hand.end());
    player three(namethree, 0, hand);
    cout << "Player 3: " << three.name << endl;
    for (int i = 0; i < 10; i++) {
      cardreader(three.hand[i], num, zog);
      card k(num, zog);
      print(k);
    }
    akuza(three);
    napolitana(three);
    cout << "Number of points: " << three.points << endl;
    fillhand(hand, j, deck);
    sort(hand.begin(), hand.end());
    player four(namefour, 0, hand);
    cout << "Player 4: " << four.name << endl;
    for (int i = 0; i < 10; i++) {
      cardreader(four.hand[i], num, zog);
      card k(num, zog);
      print(k);
    }
    akuza(four);
    napolitana(four);
    cout << "Number of points: " << four.points << endl;
  } else {
    cout << "You have entered an incorrect amount." << endl;
  }
}
