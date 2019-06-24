#pragma once
#include <list>



class Damage
{
private:
	int _attackDamage;
	int _defenseDamage;

public:
	Damage(int attackDamage, int defenseDamage);
	int getattackDamage() { return _attackDamage; }
	int getdefenseDamage() { return _defenseDamage; }

};

