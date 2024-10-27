#include "AutobotClass.h"

Autobot::Autobot()
{
	colour = "red";
	socialRating = 100;
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
Autobot::~Autobot()
{}

