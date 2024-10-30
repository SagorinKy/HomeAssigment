#include "ArmorClass.h"

Armor::Armor()
{
	durability = 100;
	capacity = 100;
}
Armor::Armor(int dur, int cap)
{
durability = dur;
	capacity = cap;
}
int Armor::getDur()
{
	return durability;
}
void Armor::setDur(int durability)
{
	this->durability = durability;
}

int Armor::getCap()
{
	return capacity;
}
void Armor::setCap(int capacity)
{
	this->capacity = capacity;
}


Armor::~Armor()
{ }
  
