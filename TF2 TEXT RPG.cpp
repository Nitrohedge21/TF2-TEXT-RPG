#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void isDead(void);
void setName(void);
void setHP(void);
void setWeapon(void);
void setDMG(void);
void setXP(void);

void BattleState(void);

//Topic 3 shows the classes, use it for machines' array

class GlobalStats
{
public:

	GlobalStats()
	{
		name = "default";
		HP = 10;
		weapon = "default weapon";
		DMG = 5;
		XP = 0;
		//The 3 variables below are only used by the engineer class
		isEngineer = false;
		sentryHP = 10;
		metal = 0;
		
		//Default values are being set in here.
	};
	
	string name;
	int HP;
	string weapon;
	int XP;
	//Might change XP to australium when i add a story
	int DMG;
	bool isEngineer;
	int sentryHP;
	//Not sure if it would be hard but maybe I could add the ability to repair the sentry
	int metal;

protected:
	//Will try to move them in either here or private

private:

};

void isDead(void)
{
	cout << "Death Message" << endl;
	//Will add more when i get more ideas
	
};

// The 2 Classes below are Mercenary (the player) and the machines (enemies).

class Mercenary : GlobalStats		// I was wondering why i couldn't access the stats inside the Mercenary Class but i forgot to link them
{
public:
	Mercenary()
	{
		name = "Civilian";
		HP = 75;
		weapon = "Crowbar";
		DMG = 25;
		XP = 0;
		// isEngineer is set to true if the player picks Engineer class
		isEngineer = false;
		sentryHP = 10;
		metal = 0;
	};
	

private:

};

class Machines : GlobalStats
{
public:
	Machines()
	{
		name = "dummy machine";
		HP = 10;
		weapon = "dummy machine weapon";
		DMG = 5;

	};
};

void ClassSelector(void) 
{
	//Not sure whether if this is gonna be used at all since i might try to figure out how to use switch case with getters and setters instead
};

void setHP(void) 
{
	
};

void setDMG(void)
{

};

void setWeapon(void)
{

};

void setName(void)
{

};

void setXP(void)
{

};

//Gotta refresh my memory because i forgot how to do simple stuff

void BattleState(void)
{
	cout << "Battle Start Message" << endl;
	Sleep(500);
	system("CLS");

};
void isAlive(void)
{
	//Player HP is above 50
}

int main()
{
	Mercenary player;
	/*player.name = "";*/
	//Player using an array would make no sense, i might be wrong though.
	Machines machines[20];
	/*machines[0].name = "";*/
	//the array range depends on the amount of custom machines i'll make

	BattleState();
	

	//while (isAlive)
	//{
	//	 Game loop will be here


	//	/*if (player.hp < 0)
	//	{
	//		isDead();
	//	}*/
	//};
}

