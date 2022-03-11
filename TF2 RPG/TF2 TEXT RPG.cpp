#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

bool isDead(void);
void setName(void);
void setHP(void);
void setWeapon(void);
void setDMG(void);
void setXP(void);

void BattleState(void);


class GlobalStats
{
public:

	GlobalStats()
	{
		name = "Civilian";
		HP = 75;
		weapon = "Crowbar";
		DMG = 25;
		XP = 0;
		//Default values are being set in here.
	};
	
	string name;
	int HP;
	string weapon;
	int XP;
	//Might change XP to australium when i add a story
	int DMG;

protected:
	//Will try to move them in either here or private

private:

};

bool isDead(void)
{
	cout << "Death Message" << endl;
	//Will add more when i get more ideas
	return 0;
};

class Mercenary
{
public:
	Mercenary()
	{
		/*hp*/
	};
	

private:

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

int main()
{
	BattleState();

	while (isDead == false)
	{
		// Game loop will be here


		/*if (Mercenary.GlobalStats.HP = 0)
		{

		}*/
	}
}

