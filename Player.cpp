#include "Player.h"



Player::Player(string name, int money)
{
	_name = name;
	_money = money;
}

void Player::printItems()
{
	list<Item>::iterator it;

	for (it = _items.begin(); it != _items.end(); it++)
	{
		cout << (*it).getName() << endl;
	}
}

void Player::addItem(Item addItem)
{
	_items.push_back(addItem);
}

void Player::initPlayer(string name, int money)
{
	_name = name;
	_money = money;
}