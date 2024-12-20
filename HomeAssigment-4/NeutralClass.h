/* Kirill Sagorin st128530@student.spbu.ru
third project */
#ifndef NEUTRAL_CLASS
#define NEUTRAL_CLASS
#include "TransformerClass.h"

class Neutral: private Transformer
{
	friend std::ostream& operator<< (std::ostream& os, const Neutral& N);
private:
	float kindness;
	int motorTemp;
public:
	Neutral();

	float getKindness();
	void setKindness(float kindness);

	int getTemp();
	void setTemp(int temperature);
	
	bool isKind();
	bool operator<=(const Neutral& N);

	~Neutral();
};

#endif
