#ifndef DECEPTICON_CLASS
#define DECEPTICON_CLASS
#include "TransformerClass.h"

class Decepticon: private Transformer
{
private:
	std::string regiment;
	int rank;
public:
	Decepticon();

	int getRank();
	void setRank(int rank);

	std::string getRegiment();
	void setRegiment(std::string regiment);
	
	bool isOnWar();

	~Decepticon();
};

#endif
