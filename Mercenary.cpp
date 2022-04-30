#include "Mercenary.h"

Mercenary::Mercenary()
{
	playerStats.setName("Civilian");
	playerStats.setHP(75);
	playerStats.setWeapon("Default Primary");
	playerStats.setPrimaryDMG(40);
	playerStats.setSecondary("Default Secondary");
	playerStats.setSecondaryDMG(20);
	playerStats.setMelee("Crowbar");
	playerStats.setMeleeDMG(25);

	playerStats.setXP(0);
	// isEngineer is set to true if the player picks Engineer class
	playerStats.isEngineer = false;
	playerStats.sentryHP = 10;
	playerStats.metal = 0;
}