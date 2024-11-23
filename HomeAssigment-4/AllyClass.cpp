/* Kirill Sagorin st128530@student.spbu.ru
third project */
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
bool Ally::isFriend(std::string* names, int n)
{
	for(int i = 0; i < n; i++)
		if(names[i] == name)
			return true;
	return false;
}
Ally::~Ally()
{}
