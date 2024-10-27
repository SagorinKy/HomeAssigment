#include "DecepticonClass.h"

Decepticon::Decepticon()
{
	regiment = "star";
	rank = 1;
}

int Decepticon::getRank()
{
	return rank;
}
void Decepticon::setRank(int rank)
{
	this->rank = rank;
}

std::string Decepticon::getRegiment()
{
	return regiment;
}
void Decepticon::setRegiment(std::string colour)
{
	this->regiment = regiment;
}

bool Decepticon::isOnWar()
{
	return true;
}

Decepticon::~Decepticon()
{ }

