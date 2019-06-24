#include "Item.h"
#include <iostream>
using namespace std;


Item::Item(string name, int amount, int cost)
{
	_name = name;
	_amount = amount;
	_cost = cost;
}

void Item::damageStats(Damage damages)
{
	_damages.push_back(damages);
}

void Item::damageInventory()
{
	list<Damage>::iterator dit;

	for (dit = _damages.begin(); dit != _damages.end(); dit++)
	{
		cout << "ATTACK: " << (*dit).getattackDamage() << " DEFENSE: " << (*dit).getdefenseDamage() << endl;
	}
}