/* Kirill Sagorin st128530@student.spbu.ru
third project */
#ifndef DECEPTICON_CLASS
#define DECEPTICON_CLASS
#include "TransformerClass.h"

class Decepticon: public Transformer
{
	friend std::ostream& operator<< (std::ostream& os, const Decepticon& D);
private:
	std::string regiment;
	int rank;
public:
	Decepticon();

	int getRank() const;
	void setRank(int rank);
	
	std::string getRegiment() const;
	void setRegiment(std::string regiment);
	
	bool isOnWar();
	bool operator<=(const Decepticon& D);

	~Decepticon();
};

#endif
