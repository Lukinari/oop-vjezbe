#pragma once
#include "Player.h"
#include "ComputerPlayer.h"
#include "HumanPlayer.h"
class Game
{

public:
	Game(HumanPlayer hpl, ComputerPlayer cpl, int target);
	Game(ComputerPlayer cpl1, ComputerPlayer cpl2, int target);
	~Game();
};