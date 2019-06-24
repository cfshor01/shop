#pragma once

#include <iostream>
#include <string>
#include <list>
#include "Item.h"

using namespace std;

class Player
{
private:
	string _name;
	int _money;
	list<Item> _items;


public:
	Player(string name, int money);
	string getName() { return _name; }
	int getMoney() { return _money; }
	void addItem(Item addItem);
	void printItems();
	void initPlayer(string name, int money);
};

