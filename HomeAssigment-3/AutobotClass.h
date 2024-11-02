#ifndef AUTOBOT_CLASS
#define AUTOBOT_CLASS
#include "TransformerClass.h"

class Autobot: private Transformer
{
private:
	std::string colour;
	int socialRating;
public:
	Autobot();

	int getRating();
	void setRating(int rating);

	std::string getColour();
	void setColour(std::string colour);
	
	bool sleep();

	~Autobot();
};

#endif
