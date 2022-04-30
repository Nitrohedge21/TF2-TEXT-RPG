#include "Game.h"

Game::Game()
{
	machines[1] = Machines("test", 100, "test weapon", 10);
	machines[2] = Machines("test 2", 100, "test weapon 2", 10);
	isOver = false;
}