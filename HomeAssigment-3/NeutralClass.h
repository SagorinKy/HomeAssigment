#ifndef NEUTRAL_CLASS
#define NEUTRAL_CLASS
#include "TransformerClass.h"

class Neutral: private Transformer
{
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

	~Neutral();
};

#endif