#include "NeutralClass.h"

Neutral::Neutral()
{
	kindness = 0.6;
	motorTemp = 37;
}

int Neutral::getTemp()
{
	return motorTemp;
}
void Neutral::setTemp(int motorTemp)
{
	this->motorTemp = motorTemp;
}

float Neutral::getKindness()
{
	return kindness;
}
void Neutral::setKindness(float kindness)
{
	this->kindness = kindness;
}

bool Neutral::isKind()
{
	if(motorTemp >= 0.5)
		return true;
	else 
		return false;
}

Neutral::~Neutral()
{ }

