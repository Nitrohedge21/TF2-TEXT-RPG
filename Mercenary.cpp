#include "Mercenary.h"

Mercenary::Mercenary()
{
	name = "Civilian";
	HP = 75;
	weapon = "Default Primary";
	PrimaryDMG = 40;
	secondary = "Default Secondary";
	SecondaryDMG = 20;
	melee = "Crowbar";
	MeleeDMG = 25;

	XP = 0;
	// isEngineer is set to true if the player picks Engineer class
	isEngineer = false;
	sentryHP = 10;
	metal = 0;
}