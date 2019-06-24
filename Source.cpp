#include <iostream>
#include <list>
#include <string>
#include "Item.h"
#include "Player.h"

using namespace std;

void initShopItems(list<Item> &items, list<Damage> &damages);
void printShopItems(list<Item> &items, list<Damage> &damages, list<Player> &playerl, bool &viewingItem, Player &player);
void initPlayerItems(Player &player);
void printPlayerItems(list<Item> &items, Player &player);

int main()
{
	string response;
	bool finished = false;
	bool viewingItem = false;
	list<Player> playerl;
	list<Item> items;
	list<Damage> damages;
	Player player("VOID",0);

	initPlayerItems(player);
	printPlayerItems(items, player);




	system("pause");
	return 0;
}

void initShopItems(list<Item> &items, list<Damage> &damages)
{
	Item obj("VOID",0,0);
	items.push_back(Item("Sword", 10, 100));
	items.back().damageStats(Damage(50, 50));

	items.push_back(Item("Bow", 25, 50));
	items.back().damageStats(Damage(70, 10));
	
}

void initPlayerItems(Player &player)
{
	player.addItem(Item("Sword", 1, 25));
}

void printPlayerItems(list<Item> &items, Player &player)
{
	list<Item>::iterator it;
	player.printItems();
}

void printShopItems(list<Item> &items, list<Damage> &damages, list<Player> &playerl, bool &viewingItem, Player &player)
{
	char answer;
	Damage d(0,0);
	string itemname;
	int i = 1;
	list<Item>::iterator it;

	for (it = items.begin(); it != items.end(); it++)
	{
		cout << i << ". " << (*it).getName() << endl;
		i++;
	}
	i = 1;
	
	cout << "Select item to view more(Quit to exit): " << endl;
	cin >> itemname;

	for (it = items.begin(); it != items.end(); it++)
	{
		if ((*it).getName() == itemname)
		{
			cout << (*it).getName() << " X " << (*it).getAmount() << " PRICE: " << (*it).getCost() << endl;
			cout << "ATTRIBUTES" << endl;
			(*it).damageInventory();
			cout << "Would you like to buy item (y,n)";
			cin >> answer;
			if (answer == 'y')
			{
				(*it).decreaseAmount();
				cout << "You have bought this item" << endl;
				break;
			}
		}
	}
	return;
}
