#include "DecepticonClass.h"

Decepticon::Decepticon() : Transformer::Transformer()
{
	regiment = "star";
	rank = 1;
}

int Decepticon::getRank()
{
	return this->rank;
}
void Decepticon::setRank(int rank)
{
	this->rank = rank;
}

std::string Decepticon::getRegiment()
{
	return this->regiment;
}
void Decepticon::setRegiment(std::string regiment)
{
	this->regiment = regiment;
}

bool Decepticon::isOnWar()
{
	return true;
}

Decepticon::~Decepticon()
{ }

