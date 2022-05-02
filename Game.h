#pragma once
#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>
#include <conio.h> 

using namespace std;
#include "GlobalStats.h"
#include "Mercenary.h"
#include "Machines.h"

class Game
{
public:
	/*int i;
	i = 3;*/
	//Was trying to make it use the integer instead of putting a number inside machines[] -02.05.2022
	bool isOver;
	Mercenary player;
	Machines machines[5];


	Game();


private:

};

