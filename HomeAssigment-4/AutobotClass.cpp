/* Kirill Sagorin st128530@student.spbu.ru
forth project */
#include "AutobotClass.h"

Autobot::Autobot()
{
    colour = "red";
    socialRating = 100;
}
Autobot::Autobot(int socialRating, std::string colour, Transformer& t) : Transformer::Transformer(t)
{
    this->socialRating = socialRating;
    this->colour = colour;
}

int Autobot::getRating()
{
    return socialRating;
}
void Autobot::setRating(int rating)
{
    socialRating = rating;
}

std::string Autobot::getColour()
{
    return colour;
}
void Autobot::setColour(std::string colour)
{
    this->colour = colour;
}

bool Autobot::sleep()
{
    return true;
}

std::ostream& operator<<(std::ostream& os, const Autobot& A)
{
    os << "Hello World! I'm Autobot " << A.getName() << "!";
    return os;
}

bool Autobot::operator<(const Autobot& A)
{
    if(this->socialRating != A.socialRating)
        return this->socialRating < A.socialRating;
    return static_cast<Transformer>(*this) < static_cast<Transformer>(A);
}bool Autobot::operator>(const Autobot& A)
{
    if(this->socialRating != A.socialRating)
        return this->socialRating > A.socialRating;
    return static_cast<Transformer>(*this) > static_cast<Transformer>(A);
}
Autobot::~Autobot()
{}

