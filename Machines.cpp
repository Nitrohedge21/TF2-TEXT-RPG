#include "Machines.h"
#include "Game.h"


Machines::Machines()
{
	/*MachineStats.setName("dummy machine name");
	MachineStats.setHP(100);
	MachineStats.setWeapon("dummy machine weapon");
	MachineStats.setPrimaryDMG(5);*/
	
	//As i said when i recently had started on the code, i'll make an array of enemies.
	
}

Machines::Machines(string _name, int _HP, string _weapon, int _damage)
{

	//This part is really problematic, need to get help asap.
	MachineStats.setName(_name);
	MachineStats.setHP(_HP);
	MachineStats.setWeapon(_weapon);
	MachineStats.setPrimaryDMG(_damage);
	
	//This is the reason why I get the default values on the battlestate, it is causing it to get the default values of global stats.
	//because the game isn't being referenced

}