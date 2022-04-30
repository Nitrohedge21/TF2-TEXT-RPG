#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>
#include <conio.h> //This one is used for the movement stuff
#include "GlobalStats.h"
#include "Mercenary.h"
#include "Machines.h"
#include "Game.h"

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

void isDead(void)
{
	cout << "Death Message" << endl;
	//Will add more when i get more ideas
	//Might rename it to Death Message(?) -07.04.2022
};

void ClassSelector(Game &_game) 
{
	cout << "Now..." << endl;
	Sleep(2000);
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
			_game.player.playerStats.setSecondary("Pistol");
			_game.player.playerStats.setSecondaryDMG(20);
			_game.player.playerStats.setMelee("Bat");
			_game.player.playerStats.setMeleeDMG(5);
			_game.player.playerStats.setXP(0);
			break;
		case 2:
			cout << "You will now spawn as Soldier." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.playerStats.setName("Soldier");
			_game.player.playerStats.setHP(200);
			_game.player.playerStats.setWeapon("Rocket Launcher");
			_game.player.playerStats.setPrimaryDMG(40);
			_game.player.playerStats.setSecondary("Shotgun");
			_game.player.playerStats.setSecondaryDMG(20);
			_game.player.playerStats.setMelee("Shovel");
			_game.player.playerStats.setMeleeDMG(10);
			_game.player.playerStats.setXP(0);
			break;
		case 3:
			cout << "You will now spawn as Pyro." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.playerStats.setName("Pyro");
			_game.player.playerStats.setHP(175);
			_game.player.playerStats.setWeapon("Flamethrower");
			_game.player.playerStats.setPrimaryDMG(40);
			_game.player.playerStats.setSecondary("Shotgun");
			_game.player.playerStats.setSecondaryDMG(20);
			_game.player.playerStats.setMelee("Fireaxe");
			_game.player.playerStats.setMeleeDMG(8);
			_game.player.playerStats.setXP(0);
			break;
		case 4:
			cout << "You will now spawn as Demoman." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.playerStats.setName("Demoman");
			_game.player.playerStats.setHP(175);
			_game.player.playerStats.setWeapon("Grenade Launcher");
			_game.player.playerStats.setPrimaryDMG(40);
			_game.player.playerStats.setSecondary("Stickybomb Launcher");
			_game.player.playerStats.setSecondaryDMG(20);
			_game.player.playerStats.setMelee("Bottle");
			_game.player.playerStats.setMeleeDMG(9);
			_game.player.playerStats.setXP(0);
			break;
		case 5:
			cout << "You will now spawn as Heavy." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.playerStats.setName("Heavy");
			_game.player.playerStats.setHP(175);
			_game.player.playerStats.setWeapon("Minigun");
			_game.player.playerStats.setPrimaryDMG(40);
			_game.player.playerStats.setSecondary("Shotgun");
			_game.player.playerStats.setSecondaryDMG(20);
			_game.player.playerStats.setMelee("Fist");
			_game.player.playerStats.setMeleeDMG(13);
			_game.player.playerStats.setXP(0);
			break;
		case 6:
			cout << "You will now spawn as Engineer." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.playerStats.setName("Engineer");
			_game.player.playerStats.setHP(125);
			_game.player.playerStats.setWeapon("Shotgun");
			_game.player.playerStats.setPrimaryDMG(23);
			//Engineer shouldn't have that many attacks, he has sentry already.
			//So i won't be adding secondary to him. -30.04.2022
			_game.player.playerStats.setMelee("Wrench");
			_game.player.playerStats.setMeleeDMG(8);
			_game.player.playerStats.setXP(0);
			_game.player.playerStats.isEngineer = true;
			_game.player.playerStats.sentryHP = 80;
			_game.player.playerStats.metal = 50;
			break;
		case 7:
			cout << "You will now spawn as Medic." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.playerStats.setName("Medic");
			_game.player.playerStats.setHP(150);
			_game.player.playerStats.setWeapon("Syringe Gun");
			_game.player.playerStats.setPrimaryDMG(40);
			//Honestly don't know what to do for medic's secondary.
			_game.player.playerStats.setMelee("Bonesaw");
			_game.player.playerStats.setMeleeDMG(7);
			_game.player.playerStats.setXP(0);
			break;
		case 8:
			cout << "You will now spawn as Sniper." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.playerStats.setName("Sniper");
			_game.player.playerStats.setHP(125);
			_game.player.playerStats.setWeapon("Sniper Rifle");
			_game.player.playerStats.setPrimaryDMG(40);
			_game.player.playerStats.setSecondary("SMG");
			_game.player.playerStats.setSecondaryDMG(20);
			_game.player.playerStats.setMelee("Kukri");
			_game.player.playerStats.setMeleeDMG(8);
			_game.player.playerStats.setXP(0);
			break;
		case 9:
			cout << "You will now spawn as Spy." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.playerStats.setName("Spy");
			_game.player.playerStats.setHP(125);
			_game.player.playerStats.setWeapon("Revolver");
			_game.player.playerStats.setPrimaryDMG(40);
			_game.player.playerStats.setSecondary("Sapper");
			_game.player.playerStats.setSecondaryDMG(10);
			//Thinking about a way to stop the enemy from attacking for a round when this attack is used. -30.04.2022
			_game.player.playerStats.setMelee("Knife");
			_game.player.playerStats.setMeleeDMG(12);
			_game.player.playerStats.setXP(0);
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

		//The part below is useless at the moment but I want to make it so that it doesn't go for the default value when the
		//user input differs from the choices. - 30.04.2022
		/*if (_YouSure != "N" || _YouSure == "n")
		{

		}*/
	}
	
	
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
		cout << "Secondary: " << _game.player.playerStats.getSecondary() << endl;
		cout << "Secondary DMG: " << _game.player.playerStats.getSecondaryDMG() << endl;
		cout << "Melee: " << _game.player.playerStats.getMelee() << endl;
		cout << "Melee DMG: " << _game.player.playerStats.getMeleeDMG() << endl;
		cout << "Australium: " << _game.player.playerStats.getXP() << endl;
	}
	
	else
	{
		cout << "Name: " << _game.player.playerStats.getName() << endl;
		cout << "HP: " << _game.player.playerStats.getHP() << endl;
		cout << "Weapon: " << _game.player.playerStats.getWeapon() << endl;
		cout << "Primary DMG: " << _game.player.playerStats.getPrimaryDMG() << endl;
		cout << "Melee: " << _game.player.playerStats.getMelee() << endl;
		cout << "Melee DMG: " << _game.player.playerStats.getMeleeDMG() << endl;
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

		/*cout << "Battle Start Message!" << endl;*/
		/*Sleep(1000);
		system("CLS");*/
		while (_game.machines->MachineStats.getHP() > 0)
		{
			HUD(_game);
			MachinesHUD(_game);
			cout << "How are you going to attack?" << endl;
			cout << "Primary(1), Secondary(2), Melee(3), Special(4), or perhaps run like a bi-(5)." << endl;
			cin >> getChoice;
			switch (getChoice)
			{
			case 1:
				//Primary
				system("CLS");
				HUD(_game);
				MachinesHUD(_game);
				if (_game.machines->MachineStats.getHP() > 0)
				{
					
					_game.machines->MachineStats.setHP(_game.player.playerStats.getPrimaryDMG() - _game.machines->MachineStats.getHP());
					cout << "You attacked with your " << _game.player.playerStats.getWeapon() << "!" << endl;
					BattleState(_game);
					cin >> getChoice;
					//this part still isn't working >:( -30.04.2022

				}
				
				break;
			case 2:
				//Secondary
				system("CLS");
				HUD(_game);
				MachinesHUD(_game);
				if (_game.machines->MachineStats.getHP() > 0)
				{

					_game.machines->MachineStats.setHP(_game.player.playerStats.getSecondaryDMG() - _game.machines->MachineStats.getHP());
					cout << "You attacked with your " << _game.player.playerStats.getSecondary() << "!" << endl;
					/*Sleep(2000);
					system("CLS");*/

				}
				break;
			case 3:
				//Melee
				system("CLS");
				HUD(_game);
				MachinesHUD(_game);
				if (_game.machines->MachineStats.getHP() > 0)
				{

					_game.machines->MachineStats.setHP(_game.player.playerStats.getMeleeDMG() - _game.machines->MachineStats.getHP());
					cout << "You attacked with your " << _game.player.playerStats.getMelee() << "!" << endl;
					/*Sleep(2000);
					system("CLS");*/

				}
				break;
			case 4:
				//Special
				break;
			case 5:
				//Escape
				if ((rand() % 3) == 1) 
				{
					
					cout << "You couldn't run away!" << endl;
					cout << "And because of that, your enemy had the chance to attack you in the meantime!" << endl;
					_game.player.playerStats.setHP(_game.player.playerStats.getHP() - _game.machines->MachineStats.getPrimaryDMG());
					Sleep(2000);
					system("CLS");
					BattleState(_game);

				}
				else {
					cout << "You escaped succesfully..." << endl;
					cout << "But at what cost?" << endl;
					Sleep(2000);
					system("CLS");
				}

				cout << "Administrator: You were ALWAYS a disappointment..." << endl;
			default:
				break;
			}
			if (_game.machines->MachineStats.getHP() >= 0)
			{
				isGoing = false;
				cout << "You beat " << _game.machines->MachineStats.getName() << "!" << endl;
				/*cout << "You won " << rand() % 10 - 20 << " australium from that battle!" << endl;*/
				//Not sure about the part above, gonna ask charlie in the workshop. -30.04.2022
			}
		}
		
	
};

void ProgressCheck10(Game& _game)
{
	if (_game.player.playerStats.getXP() < 10 && (posX >= 20 && posY >= 20) /*|| _game.player.playerStats.getXP() < 10 && (posX = -20 && posY = -20)*/)
	{
		cout << "Administrator: You can't go there yet! Go get some more australium!" << endl;
		posX = 20;
		posY = 20;
		//Getting a warning in this part, telling me that I should use == instead but
		//that isn't changing the actual value when i use it. - 30.04.2022
		
	}
}

void WelcomingMessage()
{
	cout << "This game is not affiliated with VALVE Software." << endl;
	Sleep(3000);
	cout << "This game is a simple fan-game for an university project made by Nitrohedge21." << endl;
	Sleep(3000);
	system("CLS");
	

}
void Story()
{
	cout << "It's a normal day in 2fort as normal as it can be on a team based hat simulator warzone." << endl;
	Sleep(3000);
	cout << "You hear an unusual announcement from the Administrator..." << endl;
	Sleep(3000);
	cout << "She mentions that both of the teams' intels were stolen." << endl;
	Sleep(3000);
	system("CLS");
	cout << "Administrator: - as I said, you idiots somehow managed to lose your intels to a mysterious figure" << endl;
	Sleep(3000);
	cout << "Administrator: Ms. Pauling has suspicions of a certain person who the thief might be." << endl;
	Sleep(3000);
	cout << "Ms. Pauling: I've noticed a few screws and oil drips all over the place." << endl;
	Sleep(3000);
	cout << "Ms. Pauling: Our cctvs were busted in the process so we can not watch the footage." << endl;
	Sleep(3000);
	cout << "Administrator: I'll be contacting Mr. Hale as soon as possible." << endl;
	Sleep(3000);
	cout << "Administrator: However, you imbeciles are free to keep fighting or perhaps you would like to go and find the intels by your own..." << endl;
	cout << "Administrator: *laughs*" << endl;
	Sleep(3000);
	cout << "Don't know what to write rn and i'll skip this part for now -30.04.2022" << endl;
	Sleep(4000);
	system("CLS");


}

int main()
{
	
	Game game;
	/*WelcomingMessage();
	Story();*/
	ClassSelector(game);
	
	// FUNCTION TESTING AREA (functions are here to be tested)
	
	if (movement_counter > 5)
	{
		//Randomizer to make it so that player is able to encounter enemies after a few moves.
		//Not really familiar with rand, gonna need help. -30.04.2022
	}
	/*BattleState(game);*/

	/*while (game.machines[0].MachineStats.getHP() > 0)
	{	
		BattleState(game);
	}*/
	 // Seriously don't even know what I was thinking when I wrote the part above. 30.04.2022

	//The main while loop that keeps the game going
	while (game.isOver == false /*&& !BattleState*/)
	{
		/*if (isGoing = false)*/
		//Can't get this to work properly, causes an infinite loop - 30.04.2022

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
				HUD(game);
				cout << "Your current position of x = " << posX << " and y = " << posY << endl;
				ProgressCheck10(game);


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


//make a battle hud function?? -23.04.2022