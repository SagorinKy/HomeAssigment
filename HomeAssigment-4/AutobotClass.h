/* Kirill Sagorin st128530@student.spbu.ru
third project */
#ifndef AUTOBOT_CLASS
#define AUTOBOT_CLASS
#include "TransformerClass.h"

class Autobot: private Transformer
{
	friend std::ostream& operator<< (std::ostream& os, const Autobot& A);
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
	bool operator<=(const Autobot& A);
	~Autobot();
};

#endif
