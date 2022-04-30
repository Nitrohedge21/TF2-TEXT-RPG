#include "Machines.h"

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
	_name = MachineStats.getName();
	_HP = MachineStats.getHP();
	_weapon = MachineStats.getWeapon();
	_damage = MachineStats.getPrimaryDMG();

}