/* Kirill Sagorin st128530@student.spbu.ru
fourth project */
#include "DecepticonClass.h"

Decepticon::Decepticon() : Transformer::Transformer()
{
    regiment = "star";
    rank = 1;
}
Decepticon::Decepticon(int rank, std::string regiment, Transformer& t) : Transformer::Transformer(t)
{
    this->regiment = regiment;
    this->rank = rank;
}

int Decepticon::getRank() const
{
    return this->rank;
}
void Decepticon::setRank(int rank)
{
    this->rank = rank;
}

std::string Decepticon::getRegiment() const
{
    return this->regiment;
}
void Decepticon::setRegiment(std::string regiment)
{
    this->regiment = regiment;
}

std::ostream& operator<<(std::ostream& os, const Decepticon& D)
{
    os << "Hello World! I'm Decepticon " << D.getName() << "!";
    return os;
}
bool Decepticon::operator<(const Decepticon& D)
{
    if(this->rank != D.rank)
        return this->rank < D.rank;
    return static_cast<Transformer>(*this) < static_cast<Transformer>(D);
}
bool Decepticon::operator>(const Decepticon& D)
{
    if(this->rank != D.rank)
        return this->rank > D.rank;
    return static_cast<Transformer>(*this) > static_cast<Transformer>(D);
}

bool Decepticon::isOnWar()
{
    return true;
}

Decepticon::~Decepticon()
{ }

