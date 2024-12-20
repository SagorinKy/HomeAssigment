/* Kirill Sagorin st128530@student.spbu.ru
forth project */
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
int Armor::getDur() const
{
    return durability;
}
void Armor::setDur(int durability)
{
    this->durability = durability;
}

int Armor::getCap() const
{
    return capacity;
}
void Armor::setCap(int capacity)
{
    this->capacity = capacity;
}


Armor::~Armor()
{ }

