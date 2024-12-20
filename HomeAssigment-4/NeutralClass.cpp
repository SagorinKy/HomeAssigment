/* Kirill Sagorin st128530@student.spbu.ru
forth project */
#include "NeutralClass.h"

Neutral::Neutral()
{
    kindness = 0.6;
    motorTemp = 37;
}
Neutral::Neutral(int motorTemp, float kindness, Transformer& t) : Transformer::Transformer(t)
{
    this->motorTemp = motorTemp;
    this->kindness = kindness;
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

std::ostream& operator<<(std::ostream& os, const Neutral& N)
{
    os << "Hello World! I'm Neutral " << N.getName() << "!";
    return os;
}

bool Neutral::operator<=(const Neutral& N)
{
    float difKind = this->kindness - N.kindness;
    if(difKind < -0.1)
        return true;
    if(difKind > 0.1)
        return false;
    return static_cast<Transformer>(*this) <= static_cast<Transformer>(N);
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

