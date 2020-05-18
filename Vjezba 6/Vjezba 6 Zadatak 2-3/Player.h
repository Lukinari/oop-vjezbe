#pragma once
#include <string>
#include <iostream>
class Player
{
protected:
	std::string name;
	bool call;
	int hand;
	int points;
public:
	Player();
	~Player();
	virtual std::string getname();
	virtual void setname(std::string vname);
	virtual int gethand();
	virtual void sethand(int vhand);
	virtual bool getcall();
	virtual void setcall(bool vcall);
	virtual int getpoints();
	virtual void setpoints(int vpoints);
	
};