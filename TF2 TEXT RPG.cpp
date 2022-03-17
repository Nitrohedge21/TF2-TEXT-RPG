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

class Mercenary : public GlobalStats		
{
public:
	// I was wondering why i couldn't access the stats inside the Mercenary Class but i forgot to link them

	/*GlobalStats playerStats;*/
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

class Machines : public GlobalStats
{
public:
	/*GlobalStats MachineStats;*/
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
	Sleep(5000);
	system("CLS");

};
void isAlive(void)
{
	//Player HP is above 50
}

int main()
{
	Mercenary player;
	Machines machines[20];
	
	//THESE WILL BE MOVED INSIDE THE WHILE LOOP LATER ON. KEEPING THEM HERE TO TEST STUFF AND ETC

	cout << player.name << endl;
	//Player using an array would make no sense, i might be wrong though.
	cout << machines[0].name << endl;
	/*machines[0].name = "";*/
	//the array range depends on the amount of custom machines i'll make



	// FUNCTION TESTING AREA (functions are here to be tested)

	/*BattleState();*/
	

	while (player.HP > 0)
	{
		 //Game loop will be here

		player.HP = 0;
		//Tested the isDead function by setting the player's HP to 0.

		if (player.HP <= 0)
		{
			system("CLS");
			isDead();
			// When the player's hp goes below 0, Death function is called and etc.
		}
	};
}


//CUT STUFF

//The part below was made when I was trying to fix the linking issue between the parent and child classes.

/*player.playerStats.name = "";*/
	/*cout << player.playerStats.name << endl;*/

/*cout << machines[0].MachineStats.name << endl;*/

