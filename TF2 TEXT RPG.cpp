#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>
#include <conio.h> //This one is used for the movement stuff

using namespace std;

void BattleState(void);

//Topic 3 shows the classes, use it for machines' array

int posX;
int posY;
char key_input;
int ascii_value;
int movement_counter;
int getChoice;

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
	
	bool isEngineer;
	int sentryHP;
	//Not sure if it would be hard but maybe I could add the ability to repair the sentry
	int metal;

	// THE PART BELOW NEEDS TO BE MOVED TO PRIVATE AFTER CREATING GETTERS AND SETTERS
	
	//I seriously can't think of how i could use primary melee and special with DMG.
	//Special is gonna have its own thing and so is escape.
	string primary;
	string melee;
	string special;		//Still thinking about this one 07.04.2022
	string escape; //This is probably a stupid thing to do but i'm too tired to think about whether if this is the right way or not. - 07.04.2022
	// Escaping option is gonna be just like the one in pokemon


	string getName()
	{
		return name;
	};

	void setName(string _name)
	{
		name = _name;
	};

	int getHP()
	{
		return HP;
	};

	void setHP(int _HP)
	{
		HP = _HP;
	};

	string getWeapon()
	{
		return weapon;
	};

	void setWeapon(string _weapon)
	{
		weapon = _weapon;
	};

	int getDMG()
	{
		return DMG;
	};

	void setDMG(int _DMG)
	{
		DMG = _DMG;
	};

	int getXP()
	{
		return XP;
	};

	void setXP(int _XP)
	{
		XP = _XP;
	};


protected:
	//Will try to move them in either here or private

private:
	string name;
	int HP;
	string weapon;
	int XP;
	//Might change XP to australium when i add a story
	int DMG;
	
};

void isDead(void)
{
	cout << "Death Message" << endl;
	//Will add more when i get more ideas
	//Might rename it to Death Message(?) -07.04.2022
};

// The 2 Classes below are Mercenary (the player) and the machines (enemies).

class Mercenary : public GlobalStats		
{
public:
	// I was wondering why i couldn't access the stats inside the Mercenary Class but i forgot to link them

	/*GlobalStats playerStats;*/
	Mercenary()
	{
		setName("Civilian");
		setHP(75);
		setWeapon("Crowbar");
		setDMG(25);
		setXP(0);
		// isEngineer is set to true if the player picks Engineer class
		isEngineer = false;
		sentryHP = 10;
		metal = 0;
	};
	/*Mercenary(string testClass)
	{
		setName("test");
		setHP(100);
		setWeapon("testing overloaded constructors");
		setDMG(69);
		setXP(420);
		isEngineer = false;
		sentryHP = 10;
		metal = 0;
	}*/

	// It's gonna be something like this but i'm still too far away from the thing
	// Check overloaded contructors for the other classes instead of using setters in main

private:

};

class Machines : public GlobalStats
{
public:
	/*GlobalStats MachineStats;*/
	Machines()
	{
		setName("Dummy Machine");
		setHP(10);
		setWeapon("dummy machine weapon");
		setDMG(5);

	};
};

void ClassSelector(void) 
{
	//Not sure whether if this is gonna be used at all since i might try to figure out how to use switch case with getters and setters instead
};


//Gotta refresh my memory because i forgot how to do simple stuff

void BattleState(void)
{
	cout << "Battle Start Message" << endl;
	Sleep(5000);
	system("CLS");
	cout << "What you pickin' bruv?" << endl;
	cin >> getChoice;
	switch (getChoice)
	{
	case 1:
		//Primary
		break;
	case 2:
		//Secondary
		break;
	case 3:
		//Melee
		break;
	case 4:
		//Special
		break;
	case 5:
		//Escape
	default:
		break;
	}


};


int main()
{
	Mercenary player;
	Machines machines[20];

	//THESE WILL BE MOVED INSIDE THE WHILE LOOP LATER ON. KEEPING THEM HERE TO TEST STUFF AND ETC

	cout << "Name: " << player.getName() << endl;
	cout << "HP: " << player.getHP() << endl;
	cout << "Weapon: " << player.getWeapon() << endl;
	cout << "DMG: " << player.getDMG() << endl;
	cout << "XP: " << player.getXP() << endl;
	//Player using an array would make no sense, i might be wrong though.

	//cout << "Primary: " << player.primary << endl;	//Trying to get it linked to DMG


	cout << "Enemy: " << machines[0].getName() << endl;
	cout << "HP: " << machines[0].getHP() << endl;
	cout << "Weapon: " << machines[0].getWeapon() << endl;
	cout << "DMG: " << machines[0].getDMG() << endl;
	/*machines[0].name = "";*/
	//the array range depends on the amount of custom machines i'll make



	// FUNCTION TESTING AREA (functions are here to be tested)

	/*BattleState();*/

	//The main while loop that keeps the game going
	while (player.getHP() > 0)
	{

		/*while (not ((BattleState())
		{

		};*/

		//Gonna put this inside another while loop so that player doesn't move while in the battle.
		if (_getch() != NULL)
		{
			key_input = _getch();
			ascii_value = key_input;
			switch (ascii_value)
			{
			case 87://integer value of "W"
				posX--;
				movement_counter++;
				break;
			case 119://integer value of "w"
				posX--;
				movement_counter++;
				break;
			case 83://integer value of "S"
				posX++;
				movement_counter++;
				break;
			case 115://integer value of "s"
				posX++;
				movement_counter++;
				break;
			case 68:// integer value of "D"
				posY++;
				movement_counter++;
				break;
			case 100://integer value of "d"
				posY++;
				movement_counter++;
				break;
			case 65:// integer value of "A"
				posY--;
				movement_counter++;
				break;
			case 97:// integer value of "a"
				posY--;
				movement_counter++;
				break;
			
			}
		}
		//Game loop will be here

	   /*player.setHP(0);*/
	   //Tested the isDead function by setting the player's HP to 0.

		if (player.getHP() <= 0)
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

//void isAlive(void)
//{
//	//Player HP is above 50
//}

//The function below was pointless lmfao


//void isDead(void);
//void setName(void);
//void setHP(void);
//void setWeapon(void);
//void setDMG(void);
//void setXP(void);

//Previous setter functions from planning phase