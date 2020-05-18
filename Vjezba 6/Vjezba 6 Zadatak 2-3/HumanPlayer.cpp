#include "HumanPlayer.h"

HumanPlayer::HumanPlayer()
{
	using namespace std;
	string parnepar;
	cout << "Unesite ime: ";
	cin >> this->name;
	cout << endl;
	this->points = 0;

}

HumanPlayer::~HumanPlayer()
{

}