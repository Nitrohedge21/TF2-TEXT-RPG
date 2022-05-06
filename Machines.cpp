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

Machines::Machines(string _mName, int _mHP, string _mWeapon, int _mDamage, string _mMelee, int _mMeleeDMG)
{
	
	//This part is really problematic, need to get help asap.
	mname = _mName;
	mHP = _mHP;
	mweapon = _mWeapon;
	mprimaryDMG = _mDamage;
	mMelee = _mMelee;
	mMeleeDMG = _mMeleeDMG;
	
	//This is the reason why I get the default values on the battlestate, it is causing it to get the default values of global stats.
	//because the game isn't being referenced

}