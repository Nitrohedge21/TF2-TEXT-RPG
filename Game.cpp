#include "Game.h"

Game::Game()
{
	isOver = false;

	machines[0] = Machines("Captain Punch", 1000, "Fists of Steel", rand() % 60);
	machines[1] = Machines("Force-A-Nature Scout", 120, "Force-A-Nature", rand() % 15);
	machines[2] = Machines("Heavyweight Champ", 300, "Gloves of Running Urgently", rand() % 35);
	machines[3] = Machines("Demoknight", 200, "Persian Persuader", rand() % 30);
	machines[4] = Machines("Black Box Soldier", 200, "Black Box", rand() % 35);
	

}