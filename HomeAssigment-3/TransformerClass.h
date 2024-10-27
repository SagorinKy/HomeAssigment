#ifndef TRANSFORMER_CLASS
#define TRANSFORMER_CLASS

#include <string>
#include "ArmorClass.h"
#include "AllyClass.h"


class Transformer
{
private:
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

	void addFriend(Ally ally);
	int getNumber();
	std::string* getFriendsNames();
};
#endif

