#include "AutobotClass.h"

class Autobot: private Transformer
{
private:
	std::string colour;
	int socialRating;
public:
	Autobot()
	{
		colour = "red";
		socialRating = 100;
	}

	int getRating()
	{
		return socialRating;
	}
	void setRating(int rating)
	{
		socialRating = rating;
	}

	std::string getColour()
	{
		return colour;
	}
	void setColour(std::string colour)
	{
		this->colour = colour;
	}

	bool sleep()
	{
		return true;
	}

	~Autobot()
	{ }
};

