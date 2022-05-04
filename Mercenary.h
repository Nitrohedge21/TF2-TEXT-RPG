#pragma once
#include <Windows.h>
#include <string>
#include <iostream>
#include <time.h>
#include <conio.h> 

using namespace std;
//#include"GlobalStats.h"

class Mercenary
{
public:
	bool isEngineer;
	int sentryHP;
	int sentryDMG;
	//Not sure if it would be hard but maybe I could add the ability to repair the sentry
	int metal;
	string name;
	int HP;
	string weapon;
	string secondary;
	string melee;
	int XP;
	//Might change XP to australium when i add a story
	int PrimaryDMG;
	int SecondaryDMG;
	int MeleeDMG;

	Mercenary();

	

private:
	
};


//string getName()
//{
//	return name;
//};
//
//void setName(string _name)
//{
//	name = _name;
//};
//
//int getHP()
//{
//	return HP;
//};
//
//void setHP(int _HP)
//{
//	HP = _HP;
//};
//
//string getWeapon()
//{
//	return weapon;
//};
//
//void setWeapon(string _weapon)
//{
//	weapon = _weapon;
//};
//
//string getSecondary()
//{
//	return secondary;
//};
//
//void setSecondary(string _secondary)
//{
//	secondary = _secondary;
//};
//
//string getMelee()
//{
//	return melee;
//};
//
//void setMelee(string _melee)
//{
//	melee = _melee;
//};
//
//int getPrimaryDMG()
//{
//	return PrimaryDMG;
//};
//
//void setPrimaryDMG(int _PrimaryDMG)
//{
//	PrimaryDMG = _PrimaryDMG;
//};
//
//int getSecondaryDMG()
//{
//	return SecondaryDMG;
//};
//
//void setSecondaryDMG(int _SecondaryDMG)
//{
//	SecondaryDMG = _SecondaryDMG;
//};
//
//int getMeleeDMG()
//{
//	return MeleeDMG;
//};
//
//void setMeleeDMG(int _MeleeDMG)
//{
//	MeleeDMG = _MeleeDMG;
//};
//
//int getXP()
//{
//	return XP;
//};
//
//void setXP(int _XP)
//{
//	XP = _XP;
//};
