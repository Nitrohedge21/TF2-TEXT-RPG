#include "Game.h"

Game::Game()
{
	isOver = false;

	machines[0] = Machines("Captain Punch", 450, "Fists of Steel", rand() % 10);
	machines[1] = Machines("Force-A-Nature Scout", 120, "Force-A-Nature", rand() % 15);
	machines[2] = Machines("Heavyweight Champ", 300, "Gloves of Running Urgently", rand() % 20);
	machines[3] = Machines("Demoknight", 200, "Persian Persuader", rand() % 15);
	machines[4] = Machines("Black Box Soldier", 200, "Black Box", rand() % 17);
	

}