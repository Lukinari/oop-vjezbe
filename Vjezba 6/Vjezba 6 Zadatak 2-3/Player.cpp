#include "Player.h"
Player::Player()
{

}

Player::~Player()
{

}

std::string Player::getname()
{
	//std::cout << name << std::endl;
	return name;
}
void Player::setname(std::string vname)
{
	this->name = vname;
}
int Player::gethand()
{
	//std::cout << hand << std::endl;
	return hand;
}

void Player::sethand(int vhand)
{
	this->hand = vhand;
}

bool Player::getcall()
{
	//std::cout << call << std::endl;
	return call;
}

void Player::setcall(bool vcall)
{
	this->call = vcall;
}

int Player::getpoints()
{
	return points;
}

void Player::setpoints(int vpoints)
{
	this->points = vpoints;
}
