#pragma once
#include <string>
#include <list>
#include "Damage.h"

using namespace std;

class Item
{
private:
	string _name;
	int _amount;
	int _cost;
	list<Damage> _damages;

public:
	Item(string name, int amount, int cost);

	string getName() { return _name; }
	int getAmount() { return _amount; }
	int getCost() { return _cost; }
	int decreaseAmount() { return _amount--; }
	void damageStats(Damage damages);
	void damageInventory();
	void addItem(Item newItem) { _amount++; };
	
};

