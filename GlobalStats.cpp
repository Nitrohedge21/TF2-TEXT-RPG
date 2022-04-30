#include "GlobalStats.h"

GlobalStats::GlobalStats()
{
	name = "default";
	HP = 10;
	weapon = "default weapon";
	PrimaryDMG = 5;
	SecondaryDMG = 10;
	MeleeDMG = 5;
	XP = 0;
	//The 3 variables below are only used by the engineer class
	isEngineer = false;
	sentryHP = 10;
	metal = 0;

	//Default values are being set in here.
}