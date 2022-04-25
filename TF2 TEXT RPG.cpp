#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>
#include <conio.h> //This one is used for the movement stuff

using namespace std;


//Topic 3 shows the classes, use it for machines' array

int posX;
int posY;
char key_input;
int ascii_value;
int movement_counter;
int getChoice;
int _classChoice;
string _YouSure;
bool isGoing;




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

	
	//Mercenary()
	//{
	//	setName("Civilian");
	//	setHP(75);
	//	setWeapon("Crowbar");
	//	setPrimaryDMG(25);
	//	setXP(0);
	//	// isEngineer is set to true if the player picks Engineer class
	//	isEngineer = false;
	//	sentryHP = 10;
	//	metal = 0;
	//};
	
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
	
	

private:

};
							
class Machines /*: public GlobalStats */
{
public:
	GlobalStats MachineStats;
	//Not sure whether if it's a good idea to either add public globalstats or just create a globalstats object inside -18.04.2022
	Machines()
	{
		MachineStats.setName("dummy machine name");
		MachineStats.setHP(100);
		MachineStats.setWeapon("dummy machine weapon");
		MachineStats.setPrimaryDMG(5);

	};
};

class Game
{
public:
	bool isOver;
	Mercenary player;
	Machines machines[20];
	/*GlobalStats stats;*/


	Game()
	{
		isOver = false;
	}


private:

};

//I was using (int _classChoice) but couldn't get it to recognize it in main
void ClassSelector(Game &_game) 
{
	

	cout << "Which class would you like to choose?" << endl;
	cout << "Scout (1), Soldier (2), Pyro (3), Demoman (4), Heavy (5), Engineer (6), Medic (7), Sniper (8), Spy (9)." << endl;
	cin >> _classChoice;
	cout << "Are you sure? Y/N" << endl;
	cin >> _YouSure;
	if (_YouSure == "Y" || _YouSure == "y")
	{

		switch (_classChoice)
		{
		case 1:
			cout << "You will now spawn as Scout." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.playerStats.setName("Scout");
			_game.player.playerStats.setHP(125);
			_game.player.playerStats.setWeapon("Scattergun");
			_game.player.playerStats.setPrimaryDMG(25);
			_game.player.playerStats.setXP(0);
			

			break;
		case 2:
			cout << "soldier stats" << endl;
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
			cout << "You will now spawn as Engineer." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.playerStats.setName("Engineer");
			_game.player.playerStats.setHP(125);
			_game.player.playerStats.setWeapon("Shotgun");
			_game.player.playerStats.setPrimaryDMG(23);
			_game.player.playerStats.setXP(0);
			_game.player.playerStats.isEngineer = true;
			_game.player.playerStats.sentryHP = 80;
			_game.player.playerStats.metal = 50;

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
			// I feel so dumb, why did i not think of asking for input again omfg -23.04.2022
			cout << "please choose a class that exists" << endl;
			// not working at all. 25.04.2022
			ClassSelector(_game);
			/*ClassSelector();*/
			//this makes an infinite loop, gonna try to figure out how I can make it not happen -12.04.2022
			break;
		}
	}
	else if (_YouSure == "N" || _YouSure == "n")
	{
		system("CLS");
		cout << "Ok then, here are the options again." << endl;
		Sleep(3000);
		system("CLS");
		ClassSelector(_game);
	}
	
	//Not sure whether if this is gonna be used at all since i might try to figure out how to use switch case with getters and setters instead
};


//Gotta refresh my memory because i forgot how to do simple stuff

void HUD(Game& _game)
{
	if (_game.player.playerStats.isEngineer == false)
	{
		cout << "Name: " << _game.player.playerStats.getName() << endl;
		cout << "HP: " << _game.player.playerStats.getHP() << endl;
		cout << "Weapon: " << _game.player.playerStats.getWeapon() << endl;
		cout << "Primary DMG: " << _game.player.playerStats.getPrimaryDMG() << endl;
		cout << "Australium: " << _game.player.playerStats.getXP() << endl;
	}
	
	else
	{
		cout << "Name: " << _game.player.playerStats.getName() << endl;
		cout << "HP: " << _game.player.playerStats.getHP() << endl;
		cout << "Weapon: " << _game.player.playerStats.getWeapon() << endl;
		cout << "Primary DMG: " << _game.player.playerStats.getPrimaryDMG() << endl;
		cout << "Australium: " << _game.player.playerStats.getXP() << endl;
		cout << "Sentry HP: " << _game.player.playerStats.sentryHP << endl;
		cout << "Ammo: " << _game.player.playerStats.metal << endl;
	}
	
}
void MachinesHUD(Game& _game)
{
	cout << "=====================" << endl;
	cout << "Name: " << _game.machines->MachineStats.getName() << endl;
	cout << "HP: " << _game.machines->MachineStats.getHP() << endl;
	cout << "Weapon: " << _game.machines->MachineStats.getWeapon() << endl;
	cout << "Primary DMG: " << _game.machines->MachineStats.getPrimaryDMG() << endl;
	cout << "=====================" << endl;
}

void BattleState(Game &_game)
{
	isGoing = true;

		cout << "Battle Start Message!" << endl;
		Sleep(1000);
		system("CLS");
		while (_game.machines->MachineStats.getHP() > 0)
		{
			HUD(_game);
			MachinesHUD(_game);
			cout << "What you pickin' bruv?" << endl;
			cout << "Primary(1), Secondary(2), Melee(3), Special(4), or perhaps run like a bi-(5)." << endl;
			cin >> getChoice;
			switch (getChoice)
			{
			case 1:
				system("CLS");
				HUD(_game);
				MachinesHUD(_game);
				if (_game.machines->MachineStats.getHP() > 0)
				{
					
					_game.machines->MachineStats.setHP(_game.player.playerStats.getPrimaryDMG() - _game.machines->MachineStats.getHP());
					cout << "You attacked with your " << _game.player.playerStats.getWeapon() << "!" << endl;
					/*Sleep(2000);
					system("CLS");*/

					

				}
				//make a battle hud function?? -23.04.2022

				else
				{
					cout << "You beat the " << _game.machines->MachineStats.getName() << "!" << endl;
				}

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
			if (_game.machines->MachineStats.getHP() >= 0)
			{
				isGoing = false;
			}
		}
		
	
};




int main()
{
	
	Game game;
	ClassSelector(game);
	/*cout << Mercenary::Mercenary().getName() << endl;*/
	
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
	

	while (game.machines->MachineStats.getHP() > 0)
	{	
		//This needs some work. The loop is broken but the game in general is fixed.
		HUD(game);
		BattleState(game);
	}
	

	//The main while loop that keeps the game going
	while (game.isOver == false /*&& !BattleState*/)
	{
		
		/*HUD(game);*/
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
				system("CLS");
				cout << "Your current position of x = " << posX << " and y = " << posY << endl;
				
				

			}

		

		//Gonna put this inside another while loop so that player doesn't move while in the battle.
		// Did it! I was trying to use while not which was supposed to be used like: "while (!"x state").
		// ! turns the while loop into while not loop. -16.04.2022

		//I was wrong about the part above because it was stopping the player from moving and it's not a good idea to have a while loop inside another. - 22.04.2022

		//Game loop will be here

		//Testing something
		if (posX == 69)
		{
			cout << "the funny number" << endl;
			/*BattleState();*/
		}

	   /*player.setHP(0);*/
	   //Tested the isDead function by setting the player's HP to 0.

		if (game.player.playerStats.getHP() <= 0)
		{
			system("CLS");
			isDead();
			game.isOver = true;
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

//This was my first try on overloaded constructor - 22.04.2022
// 
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

// my second try on the constructor but i tried to call it differently-

//Mercenary(string _scout)
//{
//	playerStats.setName("Scout");
//	playerStats.setHP(125);
//	playerStats.setWeapon("Scattergun");
//	playerStats.setPrimaryDMG(40);
//	playerStats.setXP(0);
//
//}

// -the issue with that was;

//cout << Mercenary("").playerStats.getName() << endl;
//cout << Mercenary("").playerStats.getHP() << endl;

//This sort of works but it displays scout's stats now because of the new constructor
////Now I gotta find a way to make it change depending on the classes. -18.04.2022

//so i had to scrap it. -22/04/2022


/*for (size_t i = 0; i < mapSize; i++)
		{
			for (size_t j = 0; j < mapSize; j++)
			{
				map[i][j] = "Nothing here";

			}
		}*/

//string map[mapSize][mapSize];
/*cout << map[mapSize][mapSize] << endl;*/
//The mapsize thing is pointless, might cut this and the map for loop -16.04.2022

//these were taken from island adventure but it's not required in my code. -22.04.2022

/*cout << Mercenary().Scout().playerStats.getName() << endl;
Mercenary().Scout().playerStats.setName("testinggg");
cout << Mercenary().Scout().playerStats.getName() << endl;*/

/*Mercenary Scout()
{
	playerStats.setName("Scout");

	return void;
};*/

//Been stuck on this part for a while. - 23.04.2022
//Tried using Mercenary::GlobalStats player; but it gave an error saying that mercenary is not a spacetype name or something like that :/

/*GlobalStats stats;
Mercenary player;
Machines machines[20];*/

//	playerStats.setWeapon("Scattergun");
		//	playerStats.setPrimaryDMG(40);
		//	playerStats.setXP(0);

			/*cout << Game().player.playerStats.getHP() << endl;
			Game().player.playerStats.setHP(21481248);
			cout << Game().player.playerStats.getHP() << endl;*/

/*cout << Mercenary().playerStats.getHP() << endl;
Mercenary().playerStats.setHP(312012842);
cout << Mercenary().playerStats.getHP() << endl;
Mercenary::Mercenary().playerStats.setName("scad");
cout << Mercenary::Mercenary().playerStats.getName() << endl;
cout << Mercenary::Mercenary().playerStats.getHP() << endl;*/

// this seems to be working but it's still not changing the player stats >:( -23.04.2022

//Game::Game().player.setHP(4211);
//classSelector.player.playerStats.setName("Scout");
//cout << _classSelector.player.playerStats.getName();

/*_game.machines.playerStats.setHP(42214);*/
		//The part above isn't working at all, it might have a logic error.
		/*cout << "The machine's new hp is: " << Machines().MachineStats.getHP() << endl;*/

//The part below is remains of the madness -23.04.2022 
//Alexander literally saved my ass and my made day, can't thank him enough.
