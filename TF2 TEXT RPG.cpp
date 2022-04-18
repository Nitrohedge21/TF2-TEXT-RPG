#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>
#include <conio.h> //This one is used for the movement stuff

using namespace std;

void BattleState(void);

//Topic 3 shows the classes, use it for machines' array
const int mapSize = 20;
int posX;
int posY;
char key_input;
int ascii_value;
int movement_counter;
int getChoice;
int _classChoice;

class GlobalStats
{
public:

	GlobalStats()
	{
		name = "default";
		HP = 10;
		weapon = "default weapon";
		PrimaryDMG = 5;
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

	int getPrimaryDMG()
	{
		return PrimaryDMG;
	};

	void setPrimaryDMG(int _PrimaryDMG)
	{
		PrimaryDMG = _PrimaryDMG;
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
	/*string melee;*/
	int XP;
	//Might change XP to australium when i add a story
	int PrimaryDMG;
	int MeleeDMG;
	
};

void isDead(void)
{
	cout << "Death Message" << endl;
	//Will add more when i get more ideas
	//Might rename it to Death Message(?) -07.04.2022
};

// The 2 Classes below are Mercenary (the player) and the machines (enemies).

class Mercenary /*: public GlobalStats*/		
{
public:
	// I was wondering why i couldn't access the stats inside the Mercenary Class but i forgot to link them

	GlobalStats playerStats;
	Mercenary()
	{
		playerStats.setName("Civilian");
		playerStats.setHP(75);
		playerStats.setWeapon("Crowbar");
		playerStats.setPrimaryDMG(25);
		playerStats.setXP(0);
		// isEngineer is set to true if the player picks Engineer class
		playerStats.isEngineer = false;
		playerStats.sentryHP = 10;
		playerStats.metal = 0;
	};
	Mercenary(string _scout)
	{
		playerStats.setName("Scout");
		playerStats.setHP(125);
		playerStats.setWeapon("Scattergun");
		playerStats.setPrimaryDMG(40);
		playerStats.setXP(0);

	}
	//tried using the part below but it said that the member function is already defined/declared. -18.04.2022

	/*Mercenary(string _engi)
	{
		playerStats.setName("Engi");
		playerStats.setHP(150);
		playerStats.setWeapon("Shotgun");
		playerStats.setPrimaryDMG(30);
		playerStats.setXP(10);
		playerStats.isEngineer = true;
		playerStats.sentryHP = 100;
		playerStats.metal = 50;
	}*/
	
private:

};
							
class Machines /*: public GlobalStats*/ 
{
public:
	GlobalStats MachineStats;
	//Not sure whether if it's a good idea to either add public globalstats or just create a globalstats object inside -18.04.2022
	Machines()
	{
		MachineStats.setName("");
		MachineStats.setHP(100);
		MachineStats.setWeapon("dummy machine weapon");
		MachineStats.setPrimaryDMG(5);

	};
};
//I was using (int _classChoice) but couldn't get it to recognize it in main
void ClassSelector(void) 
{

	cout << "Which class would you like to choose?" << endl;
	cout << "Scout (1), Soldier (2), Pyro (3), Demoman (4), Heavy (5), Engineer (6), Medic (7), Sniper (8), Spy (9)." << endl;
	cin >> _classChoice;	//This part needs work to be done.
	switch (_classChoice)
	{
	case 1:
		cout << "scout stats" << endl;
		/*Mercenary("_scout");*/
		Mercenary("").playerStats.setName("Scout");
		break;
	case 2:
		cout << "soldier stats" << endl;
		Mercenary("").playerStats.setName("Soldier");
		//Not working atm, prints out scout instead.
		//setters and getters are not working either for some reason. -18.04.2022
		break;
	case 3:
		cout << "pyro stats " << endl;
		break;
	case 4:
		cout << "demo stats" << endl;
		break;
	case 5:
		cout << "heavy stats" << endl;
		break;
	case 6:
		cout << "engi stats" << endl;
		break;
	case 7:
		cout << "medic stats" << endl;
		break;
	case 8:
		cout << "sniper stats" << endl;
		break;
	case 9:
		cout << "spy stats" << endl;
		break;
		
	default:
		ClassSelector();
		//this makes an infinite loop, gonna try to figure out how I can make it not happen -12.04.2022
		break;
	}
	//Not sure whether if this is gonna be used at all since i might try to figure out how to use switch case with getters and setters instead
};


//Gotta refresh my memory because i forgot how to do simple stuff

void BattleState(void)
{
	cout << "Battle Start Message!" << endl;
	Sleep(1000);
	system("CLS");
	cout << "What you pickin' bruv?" << endl;
	cin >> getChoice;
	switch (getChoice)
	{
	case 1:
		/*Machines().MachineStats.setHP();
		cout << Machines().MachineStats.getHP() << endl;*/

		//The part above isn't working at all, it might have a logic error.
		/*cout << "The machine's new hp is: " << Machines().MachineStats.getHP() << endl;*/
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
	string map[mapSize][mapSize];
	Mercenary player;
	Machines machines[20];

	ClassSelector();
	//This sort of works but it displays scout's stats now because of the new constructor
	//Now I gotta find a way to make it change depending on the classes. -18.04.2022
	cout << Mercenary("").playerStats.getName() << endl;
	cout << Mercenary("").playerStats.getHP() << endl;

	//THESE WILL BE MOVED INSIDE THE WHILE LOOP LATER ON. KEEPING THEM HERE TO TEST STUFF AND ETC

	/*cout << "Name: " << player.playerStats.getName() << endl;
	cout << "HP: " << player.playerStats.getHP() << endl;
	cout << "Weapon: " << player.playerStats.getWeapon() << endl;
	cout << "DMG: " << player.playerStats.getPrimaryDMG() << endl;
	cout << "XP: " << player.playerStats.getXP() << endl;*/
	//Player using an array would make no sense, i might be wrong though.

	//cout << "Primary: " << player.primary << endl;	//Trying to get it linked to DMG


	/*cout << "Enemy: " << machines[0].MachineStats.getName() << endl;
	cout << "HP: " << machines[0].MachineStats.getHP() << endl;
	cout << "Weapon: " << machines[0].MachineStats.getWeapon() << endl;
	cout << "DMG: " << machines[0].MachineStats.getPrimaryDMG() << endl;*/
	/*machines[0].name = "";*/
	//the array range depends on the amount of custom machines i'll make



	// FUNCTION TESTING AREA (functions are here to be tested)

	/*BattleState();*/

	//The main while loop that keeps the game going
	while (player.playerStats.getHP() > 0)
	{

		while (!BattleState)
		{
			cout << " " << endl;

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
				cout << "Your current position of x = " << posX << " and y = " << posY << endl;
				/*cout << map[mapSize][mapSize] << endl;*/
				//The mapsize thing is pointless, might cut this and the map for loop -16.04.2022

			}

		};

		//Gonna put this inside another while loop so that player doesn't move while in the battle.
		// Did it! I was trying to use while not which was supposed to be used like: "while (!"x state").
		// ! turns the while loop into while not loop. -16.04.2022

		/*for (size_t i = 0; i < mapSize; i++)
		{
			for (size_t j = 0; j < mapSize; j++)
			{
				map[i][j] = "Nothing here";

			}
		}*/

		
		//Game loop will be here

		//Testing something
		if (posX == 69)
		{
			cout << "the funny number" << endl;
			/*BattleState();*/
		}

	   /*player.setHP(0);*/
	   //Tested the isDead function by setting the player's HP to 0.

		if (player.playerStats.getHP() <= 0)
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
