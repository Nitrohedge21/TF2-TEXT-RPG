#include "Game.h"

Game::Game()
{
	isOver = false;

	machines[0] = Machines("Captain Punch", 450, "Cap's Shotgun", rand() % 15 + 5, "Fists of Steel", rand () % 10 + 6);
	machines[1] = Machines("Force-A-Nature Scout", 120, "Force-A-Nature", rand() % 10 + 2, "Sandman", rand () % 10 + 4);
	machines[2] = Machines("Heavyweight Champ", 300, "The Panic Attack", rand() % 10 + 5, "Gloves of Running Urgently", rand() % 10 + 4);
	machines[3] = Machines("Demoknight", 200, "Chargin' Targe", rand() % 5 + 5 ,"Eyelander", rand() % 10 + 5);
	machines[4] = Machines("Black Box Soldier", 200, "Black Box", rand() % 17 + 10, "Shovel", rand() % 5 + 5);

	//Just gonna copy and paste them to make the array bigger because the enemies die and I don't know how to 
	//reset their stats everytime. - 06.05.2022
	

}