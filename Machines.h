#pragma once
#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>
#include <conio.h> 

using namespace std;
//#include "GlobalStats.h"

class Machines
{
public:
	string mname;
	int mHP;
	string mweapon;
	int mprimaryDMG;
	string mMelee;
	int mMeleeDMG;
	/*GlobalStats MachineStats;*/
	Machines();
	//Not sure whether if it's a good idea to either add public globalstats or just create a globalstats object inside -18.04.2022
	
	Machines(string _mName, int _mHP, string _mWeapon, int _mDamage, string _mMelee, int mMeleeDMG);
	
};

