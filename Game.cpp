#include "Game.h"

Game::Game()
{
	isOver = false;

	machines[0] = Machines("Captain Punch", 300, "Cap's Shotgun", rand() % 15 + 5, "Fists of Steel", rand () % 10 + 6);
	machines[1] = Machines("Force-A-Nature Scout", 120, "Force-A-Nature", rand() % 15 + 2, "Sandman", rand () % 10 + 4);
	machines[2] = Machines("Heavyweight Champ", 300, "The Panic Attack", rand() % 15 + 5, "Gloves of Running Urgently", rand() % 10 + 4);
	machines[3] = Machines("Demoknight", 200, "Chargin' Targe", rand() % 8 + 5 ,"Eyelander", rand() % 10 + 5);
	machines[4] = Machines("Black Box Soldier", 200, "Black Box", rand() % 17 + 10, "Shovel", rand() % 15 + 5);

	//Just gonna copy and paste them to make the array bigger because the enemies die and I don't know how to 
	//reset their stats everytime. - 06.05.2022
	
	machines[5] = Machines("Sniper Bot", 120, "Sniper Rifle", rand() % 15 + 2, "Kukri", rand() % 10 + 5);
	machines[6] = Machines("Force-A-Nature Scout", 120, "Force-A-Nature", rand() % 15 + 2, "Sandman", rand() % 10 + 4);
	machines[7] = Machines("Minor League Scout", 120, "Force-A-Nature", rand() % 15 + 2, "Sandman", rand() % 10 + 4);
	machines[8] = Machines("Pyro Bot", 170, "Scorch Shot", rand() % 15 + 2, "Fireaxe", rand() % 10 + 5);
	machines[9] = Machines("Soldier Bot", 180, "Rocket Launcher", rand() % 15 + 10, "Shovel", rand() % 10 + 5);
	machines[10] = Machines("Sniper Bot", 120, "Sniper Rifle", rand() % 15 + 2, "Kukri", rand() % 10 + 5);
	machines[11] = Machines("Force-A-Nature Scout", 120, "Force-A-Nature", rand() % 15 + 2, "Sandman", rand() % 10 + 4);
	machines[12] = Machines("Minor League Scout", 120, "Force-A-Nature", rand() % 15 + 2, "Sandman", rand() % 10 + 4);
	machines[13] = Machines("Pyro Bot", 170, "Scorch Shot", rand() % 15 + 2, "Fireaxe", rand() % 10 + 5);
	machines[14] = Machines("Soldier Bot", 180, "Rocket Launcher", rand() % 15 + 10, "Shovel", rand() % 10 + 5);
	machines[15] = Machines("Sniper Bot", 120, "Sniper Rifle", rand() % 15 + 2, "Kukri", rand() % 10 + 5);
	machines[16] = Machines("Force-A-Nature Scout", 120, "Force-A-Nature", rand() % 15 + 2, "Sandman", rand() % 10 + 4);
	machines[17] = Machines("Minor League Scout", 120, "Force-A-Nature", rand() % 15 + 2, "Sandman", rand() % 10 + 4);
	machines[18] = Machines("Pyro Bot", 170, "Scorch Shot", rand() % 15 + 2, "Fireaxe", rand() % 10 + 5);
	machines[19] = Machines("Soldier Bot", 180, "Rocket Launcher", rand() % 15 + 10, "Shovel", rand() % 10 + 5);
	machines[20] = Machines("Sniper Bot", 120, "Sniper Rifle", rand() % 15 + 2, "Kukri", rand() % 10 + 5);
	machines[21] = Machines("Force-A-Nature Scout", 120, "Force-A-Nature", rand() % 15 + 2, "Sandman", rand() % 10 + 4);
	machines[22] = Machines("Minor League Scout", 120, "Force-A-Nature", rand() % 15 + 2, "Sandman", rand() % 10 + 4);
	machines[23] = Machines("Pyro Bot", 170, "Scorch Shot", rand() % 15 + 2, "Fireaxe", rand() % 10 + 5);
	machines[24] = Machines("Soldier Bot", 180, "Rocket Launcher", rand() % 15 + 10, "Shovel", rand() % 10 + 5);

}