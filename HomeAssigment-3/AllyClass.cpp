#include "AllyClass.h"

Ally::Ally()
{
	age = 21;
	name = "Nick";
}
Ally::Ally(std::string name, int age)
{
	this->age = age;
	this->name = name;
}
int Ally::getAge()
{
	return age;
}
void Ally::setAge(int age)
{
	this->age = age;
}
void Ally::addAge()
{
	age++;
}

std::string Ally::getName()
{
	return name;
}
void Ally::setName(std::string name)
{
	this->name = name;
}
Ally::~Ally()
{}
