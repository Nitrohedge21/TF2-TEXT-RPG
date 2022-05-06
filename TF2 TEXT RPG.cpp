#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>
#include <conio.h> //This one is used for the movement stuff
//#include "GlobalStats.h"
#include "Mercenary.h"
#include "Machines.h"
#include "Game.h"

using namespace std;


//Topic 3 shows the classes, use it for machines' array
int escaped;
int posX;
int posY;
char key_input;
int ascii_value;
int movement_counter;
int getChoice;
int _classChoice;
string _YouSure;
bool isGoing;

int randomnumber = 0;

void isDead(void)
{
	cout << "Death Message" << endl;
	//Will add more when i get more ideas
	//Might rename it to Death Message(?) -07.04.2022
};

void ClassSelector(Game& _game) 
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
			_game.player.name = "Scout";
			_game.player.HP = 125;
			_game.player.weapon = "Scattergun";
			_game.player.PrimaryDMG = 25;
			_game.player.secondary = "pistol";
			_game.player.SecondaryDMG = 20;
			_game.player.melee = "Bat";
			_game.player.MeleeDMG = 5;
			_game.player.XP = 0;
			break;
		case 2:
			cout << "You will now spawn as Soldier." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.name = "Soldier";
			_game.player.HP = 200;
			_game.player.weapon = "Rocket Launcher";
			_game.player.PrimaryDMG = 40;
			_game.player.secondary = "Shotgun";
			_game.player.SecondaryDMG = 20;
			_game.player.melee = "Shovel";
			_game.player.MeleeDMG = 10;
			_game.player.XP = 0;
			break;
		case 3:
			cout << "You will now spawn as Pyro." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.name = "Pyro";
			_game.player.HP = 175;
			_game.player.weapon = "Flamethrower";
			_game.player.PrimaryDMG = 40;
			_game.player.secondary = "Shotgun";
			_game.player.SecondaryDMG = 20;
			_game.player.melee = "Fireaxe";
			_game.player.MeleeDMG = 8;
			_game.player.XP = 0;
			break;
		case 4:
			cout << "You will now spawn as Demoman." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.name = "Demoman";
			_game.player.HP = 175;
			_game.player.weapon = "Grenade Launcher";
			_game.player.PrimaryDMG = 40;
			_game.player.secondary = "Stickybomb Launcher";
			_game.player.SecondaryDMG = 20;
			_game.player.melee = "Bottle";
			_game.player.MeleeDMG = 9;
			_game.player.XP = 0;
			break;
		case 5:
			cout << "You will now spawn as Heavy." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.name = "Heavy";
			_game.player.HP = 300;
			_game.player.weapon = "Minigun";
			_game.player.PrimaryDMG = 40;
			_game.player.secondary = "Shotgun";
			_game.player.SecondaryDMG = 20;
			_game.player.melee = "Fist";
			_game.player.MeleeDMG = 13;
			_game.player.XP = 0;
			break;
		case 6:
			cout << "You will now spawn as Engineer." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.name = "Engineer";
			_game.player.HP = 125;
			_game.player.weapon = "Shotgun";
			_game.player.PrimaryDMG = 23;
			//Engineer shouldn't have that many attacks, he has sentry already.
			//So i won't be adding secondary to him. -30.04.2022
			_game.player.melee = "Wrench";
			_game.player.MeleeDMG = 8;
			_game.player.XP = 0;
			_game.player.isEngineer = true;
			_game.player.sentryHP = 80;
			_game.player.sentryDMG = rand() % 50;
			_game.player.metal = 50;
			break;
		case 7:
			cout << "You will now spawn as Medic." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.name = "Medic";
			_game.player.HP = 150;
			_game.player.weapon = "Syringe Gun";
			_game.player.PrimaryDMG = 40;
			_game.player.secondary = "Shotgun";
			_game.player.SecondaryDMG = 20;
			_game.player.melee = "Bonesaw";
			_game.player.MeleeDMG = 7;
			_game.player.XP = 0;
			break;
		case 8:
			cout << "You will now spawn as Sniper." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.name = "Sniper";
			_game.player.HP = 125;
			_game.player.weapon = "Sniper Rifle";
			_game.player.PrimaryDMG = 40;
			_game.player.secondary = "SMG";
			_game.player.SecondaryDMG = 20;
			_game.player.melee = "Kukri";
			_game.player.MeleeDMG = 8;
			_game.player.XP = 0;
			break;
		case 9:
			cout << "You will now spawn as Spy." << endl;
			Sleep(3000);
			system("CLS");
			_game.player.name = "Spy";
			_game.player.HP = 125;
			_game.player.weapon = "Revolver";
			_game.player.PrimaryDMG = 40;
			_game.player.secondary = "Sapper";
			_game.player.SecondaryDMG = 10;
			_game.player.melee = "Knife";
			_game.player.MeleeDMG = 12;
			_game.player.XP = 0;
			//Thinking about a way to stop the enemy from attacking for a round when this attack is used. -30.04.2022
		
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
	if (_game.player.isEngineer == false) 
	{
		cout << "Name: " << _game.player.name << endl;
		cout << "HP: " << _game.player.HP << endl;
		cout << "Weapon: " << _game.player.weapon << endl;
		cout << "Primary DMG: " << _game.player.PrimaryDMG << endl;
		cout << "Secondary: " << _game.player.secondary << endl;
		cout << "Secondary DMG: " << _game.player.SecondaryDMG << endl;
		cout << "Melee: " << _game.player.melee << endl;
		cout << "Melee DMG: " << _game.player.MeleeDMG << endl;
		cout << "Sandwiches: " << _game.player.sandwichCount << endl;
		cout << "Australium: " << _game.player.XP << endl;
	}
	
	else
	{
		cout << "Name: " << _game.player.name << endl;
		cout << "HP: " << _game.player.HP << endl;
		cout << "Weapon: " << _game.player.weapon << endl;
		cout << "Primary DMG: " << _game.player.PrimaryDMG << endl;
		cout << "Melee: " << _game.player.melee << endl;
		cout << "Melee DMG: " << _game.player.MeleeDMG << endl;
		cout << "Sentry HP: " << _game.player.sentryHP << endl;
		cout << "Sentry DMG: " << _game.player.sentryDMG << endl;
		cout << "Sandwiches: " << _game.player.sandwichCount << endl;
		cout << "Metal: " << _game.player.metal << endl;
		cout << "Australium: " << _game.player.XP << endl;
	}
	
}
void MachinesHUD(Game& _game)
{
	cout << "=====================" << endl;
	cout << "Name: " << _game.machines[randomnumber].mname << endl;
	cout << "HP: " << _game.machines[randomnumber].mHP << endl;
	cout << "Weapon: " << _game.machines[randomnumber].mweapon << endl;
	cout << "Primary DMG: " << _game.machines[randomnumber].mprimaryDMG << endl;
	cout << "Melee: " << _game.machines[randomnumber].mMelee << endl;
	cout << "Melee DMG: " << _game.machines[randomnumber].mMeleeDMG << endl;
	cout << "=====================" << endl;
}

//void valueRandomizer(void)
//{
//	int maxNumber;
//	int minNumber;
//	(rand() % (maxNumber - minNumber) + minNumber);
//}	//This was suggested on discord but I can't think how this could be used in my case.
//void CheckBattle(Game& _game)
//{
//	if (isGoing == false)
//	{
//		_game.machines[randomnumber].mHP = 0;
//	}
//}
void BattleState(Game& _game)
{

	srand(time(NULL));
	randomnumber = rand() % 5;
	//if (escaped >= !1)
	//{
	//	isGoing = true;
	//}
	//else if (escaped = 0)
	//{
	//	isGoing = false;
	//}
	
	isGoing = true;

	while (_game.machines[randomnumber].mHP > 0 && isGoing == true)
	{

		HUD(_game);
		MachinesHUD(_game);
		cout << "How are you going to attack?" << endl;
		cout << "Primary(1), Secondary(2), Melee(3), Heal(4), or perhaps run like a coward(5)." << endl;
		cin >> getChoice;
		switch (getChoice)
		{
		case 1:
			//Primary
			system("CLS");
			HUD(_game);
			MachinesHUD(_game);
			//Realized that the "if" statements in the attacking options were a bad idea -02.06.2022

			_game.machines[randomnumber].mHP = _game.machines[randomnumber].mHP - _game.player.PrimaryDMG;
			cout << "You attacked with your " << _game.player.weapon << "!" << endl;
			Sleep(2000);
			cout << "The machine attacks with " << _game.machines[randomnumber].mweapon << "!" << endl;
			_game.player.HP = _game.player.HP - _game.machines[randomnumber].mprimaryDMG;
			Sleep(2000);
			system("CLS");

			//this part still isn't working >:( -30.04.2022


			break;
		case 2:
			//Secondary
			system("CLS");
			HUD(_game);
			MachinesHUD(_game);

			if (_game.player.isEngineer = false)
			{
				_game.machines[randomnumber].mHP = _game.machines[randomnumber].mHP - _game.player.SecondaryDMG;
				cout << "You attacked with your " << _game.player.secondary << "!" << endl;
				Sleep(2000);
				cout << "The machine attacks with " << _game.machines[randomnumber].mweapon << "!" << endl;
				_game.player.HP = _game.player.HP - _game.machines[randomnumber].mprimaryDMG;
				Sleep(2000);
				system("CLS");
			}
			else
			{
				cout << "You attacked with your sentry!" << endl;
				_game.player.metal = _game.player.metal - rand() % 10;
				_game.machines[randomnumber].mHP = _game.machines[randomnumber].mHP - _game.player.sentryDMG;
				Sleep(2000);
				cout << "The machine attacks with " << _game.machines[randomnumber].mweapon << "!" << endl;
				_game.player.HP = _game.player.HP - _game.machines[randomnumber].mprimaryDMG;
				Sleep(2000);
				system("CLS");
			}



			break;
		case 3:
			//Melee
			system("CLS");
			HUD(_game);
			MachinesHUD(_game);


			_game.machines[randomnumber].mHP = _game.machines[randomnumber].mHP - _game.player.MeleeDMG;
			cout << "You attacked with your " << _game.player.melee << "!" << endl;
			Sleep(2000);

			if (_game.machines[randomnumber].mname == "Black Box Soldier")
			{
				cout << _game.machines[randomnumber].mname << " has stolen some of your HP!" << endl;
				_game.player.HP = _game.player.HP - rand() % 5; _game.machines[randomnumber].mHP = _game.machines[randomnumber].mHP + rand() % 7;
				Sleep(2000);
				system("CLS");
			}
			else
			{
				cout << "The machine attacks back!" << endl;
				_game.player.HP = _game.player.HP - _game.machines[randomnumber].mprimaryDMG;
				Sleep(2000);
				system("CLS");
			}


			break;
		case 4:
			//Special

			if (_game.player.sandwichCount <= 0)
			{
				cout << "You have no sandwiches left!" << endl;
				Sleep(2000);
				system("CLS");

			}
			else
			{
				cout << "You ate a sandwich and regained some of your HP back." << endl;
				_game.player.HP = _game.player.HP + rand() % 15 + 5;
				_game.player.sandwichCount = _game.player.sandwichCount - 1;
				Sleep(2000);
				system("CLS");
			}

			break;
		case 5:
			//Escape
			if ((rand() % 3) == 1)
			{

				cout << "You couldn't run away!" << endl;
				cout << "And because of that, your enemy had the chance to attack you in the meantime!" << endl;
				_game.player.HP = _game.player.HP - _game.machines->mprimaryDMG;
				Sleep(2000);
				system("CLS");


			}
			else {

				cout << "You escaped succesfully..." << endl;
				cout << "But at what cost?" << endl;
				Sleep(2000);
				system("CLS");
				cout << "Administrator: You were ALWAYS a disappointment..." << endl;
				Sleep(2000);
				isGoing = false;
				/*CheckBattle(_game);*/
			}

			break;



		default:
			break;
		}
		//Actually wanted it to be like %10 of the enemy's overall HP. - 02.05.2022
		/*cout << "You won " << rand() % 10 - 20 << " australium from that battle!" << endl;*/
		//Not sure about the part above, gonna ask charlie in the workshop. -30.04.2022
		if (_game.machines[randomnumber].mHP <= 0)
		{

			cout << "You beat " << _game.machines[randomnumber].mname << "!" << endl;
			_game.player.XP = _game.player.XP + rand() % 10;

			Sleep(2000);
			if (_game.player.isEngineer = true)
			{
				cout << "You collected some metal from the machine's scraps" << endl;
				_game.player.metal = _game.player.metal + rand() % 15 + 10; // This makes it so that player collects metal in range between 10-15
				//Totally didn't get the idea from discord :)
				_game.player.sandwichCount = _game.player.sandwichCount + rand() % 2 + 1;
				Sleep(3000);
				system("CLS");


			}
			else
			{
				cout << "You found some sandwiches" << endl;
				_game.player.sandwichCount = _game.player.sandwichCount + rand() % 3 + 1;
				Sleep(3000);
				system("CLS");
			}
		}


	}
}

//bool checkbattle(Game& _game)
//{
//	if (isGoing = false)
//	{
//		return true;
//	}
//}

void ProgressCheck10(Game& _game)
{
	if (_game.player.XP < 10 && (posX >= 20 && posY >= 20)) /*|| _game.player.playerStats.getXP() < 10 && (posX = -20 && posY = -20)*/
	{
		cout << "Administrator: You can't go there yet! Go get some more australium!" << endl;
		posX = 20;
		posY = 20;
		//Getting a warning in this part, telling me that I should use == instead but
		//that isn't changing the actual value when i use it. - 30.04.2022
		
	}
}

void ProgressCheck30(Game& _game)
{
	if (_game.player.XP < 30 && (posX >= 50 && posY >= 50))
	{
		cout << "Administrator: You can't go there yet! Go get some more australium!" << endl;
		posX = 50;
		posY = 50;
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
	

	//The main while loop that keeps the game going
	while (game.isOver == false || isGoing == false)
	{
		/*if (isGoing = false)*/
		//Can't get this to work properly, causes an infinite loop - 30.04.2022
		//Don't remember when I fixed it but yes I fixed the issue. -06.05.2022

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

				if (movement_counter >= 6)
				{
					movement_counter = 0;
					cout << "Looks like we have a challenger!" << endl;
					Sleep(3000);
					system("CLS");
					BattleState(game);
					//Need to find a way to make it reset the HP of the enemy after the battlestate funcion ends
					/*game.machines->MachineStats.setHP(Machines(_HP));*/

					/*srand(BattleState(game));*/
					//Randomizer to make it so that player is able to encounter enemies after a few moves.
					//Not really familiar with rand or srand, gonna need help. -30.04.2022
				}

				system("CLS");
				HUD(game);
				cout << "Your current position of x = " << posX << " and y = " << posY << endl;
				ProgressCheck10(game);
				ProgressCheck30(game);


			}
		//Gonna put this inside another while loop so that player doesn't move while in the battle.
		// Did it! I was trying to use while not which was supposed to be used like: "while (!"x state").
		// ! turns the while loop into while not loop. -16.04.2022

		//I was wrong about the part above because it was stopping the player from moving and it's not a good idea to have a while loop inside another. - 22.04.2022

		//Game loop will be here

		//Testing something
		if (posX == 69 || posX == 420 || posY == 69 || posY == 420)
		{
			cout << "the funny number" << endl;
			/*BattleState();*/
		}

		if (game.player.HP <= 0)
		{
			system("CLS");
			isDead();
			game.isOver = true;
			// When the player's hp goes below 0, Death function is called and etc.
		}
	};
}

//Testing stuff

/*player.setHP(0);*/
//Tested the isDead function by setting the player's HP to 0.

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

/*while (game.machines[0].MachineStats.getHP() > 0)
	{
		BattleState(game);
	}*/
// Seriously don't even know what I was thinking when I wrote the part above. 30.04.2022