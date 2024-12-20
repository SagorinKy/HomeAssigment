/* Kirill Sagorin st128530@student.spbu.ru
third project */
#include "TransformerClass.h"

Transformer::Transformer() : tank(1000), numberOfFriends(0), name("bob"), ammunition(15), friends(nullptr), armor()
{
	this->fuel = 1000;
}
Transformer::Transformer(std::string name, int tank, int ammunition, int armorCap, int armorDur) : tank(tank), numberOfFriends(0), friends(nullptr)
{
	this->name = name;
	this->fuel = tank;
	this->ammunition = ammunition;
	this->armor = Armor(armorCap, armorDur);
}

std::ostream& operator<<(std::ostream& os, const Transformer& T)
{
	os << "Hello world! I'm Transformer " << T.name <<"!";
	return os;
}
bool Transformer::operator<=(const Transformer& T)
{
	int a = T.armor.getCap();
	return !(armor.getCap() * ammunition > T.armor.getCap() * T.ammunition);
}


int Transformer::getFuel()
{
	return fuel;
}
void Transformer::setFuel(int fuel)
{
	if(fuel < tank)
		this->fuel = fuel;
	else
		this->fuel = tank;
}

int Transformer::getTank()
{
	return tank;
}

std::string Transformer::getName()
{
	return name;
}
void Transformer::setName(std::string name)
{
	this->name = name;
}
bool Transformer::isOn()
{
	return true;
}

Transformer::~Transformer()
{
	if (friends != NULL)
		delete[] friends;
}

void Transformer::addFriend(Ally ally)
{
	Ally* allies;
	numberOfFriends++;
	allies = new Ally[numberOfFriends];
	for(int i = 0; i < numberOfFriends - 1; i++)
		allies[i] = friends[i];
	allies[numberOfFriends - 1] = ally;
	if(friends!=nullptr)
		delete[] friends;
	friends = allies;
}
int Transformer::getNumber()
{
	return numberOfFriends;
}
std::string* Transformer::getFriendsNames()
{
	if(numberOfFriends > 0)
	{
		std::string* names = new std::string[numberOfFriends];
		for(int i = 0; i < numberOfFriends; i++)
			names[i] = friends[i].getName();
		return names;
	}
	return nullptr;
}
