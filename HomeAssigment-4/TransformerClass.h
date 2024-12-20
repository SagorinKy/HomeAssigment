/* Kirill Sagorin st128530@student.spbu.ru
third project */
#ifndef TRANSFORMER_CLASS
#define TRANSFORMER_CLASS

#include <string>
#include <iostream>
#include "ArmorClass.h"
#include "AllyClass.h"


class Transformer
{
	friend std::ostream& operator<<(std::ostream& os, const Transformer& T);
protected:
	const int tank;
	int numberOfFriends;
	std::string name;
	int fuel;
	int ammunition;
	Ally* friends;
	Armor armor;
public:
	Transformer();
	Transformer(std::string name, int tank, int ammunition, int armorCap, int armorDur);
	~Transformer();
	int getFuel();
	void setFuel(int fuel);
	int getTank();
	std::string getName();
	void setName(std::string name);
	bool isOn();

	bool operator<=(const Transformer& T); 

	void addFriend(Ally ally);
	int getNumber();
	std::string* getFriendsNames();
};
#endif

