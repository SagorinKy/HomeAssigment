#include "DecepticonClass.h"

class Decepticon: private Transformer
{
private:
	std::string regiment;
	int rank;
public:
	Decepticon()
	{
		regiment = "star";
		rank = 1;
	}

	int getRank()
	{
		return rank;
	}
	void setRank(int rank)
	{
		this->rank = rank;
	}

	std::string getRegiment()
	{
		return regiment;
	}
	void setRegiment(std::string colour)
	{
		this->colour = regiment;
	}

	bool isOnWar()
	{
		return true;
	}

	~Decepticon()
	{ }
};
