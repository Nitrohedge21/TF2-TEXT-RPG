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
	bool isOver;
	Mercenary player;
	Machines machines[5];


	Game();


private:

};

