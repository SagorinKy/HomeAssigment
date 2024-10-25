#ifndef NUETRAL_CLASS
#define NUETRAL_CLASS
#include "TransformerClass.h"

class Nuetral: private Transformer
{
private:
	float kindness;
	int motorTemp;
public:
	Nuetral();

	float getKindness();
	void setKindness(float kindness);

	int getTemp();
	void setTemp(int temperature);
	
	bool isKind();

	~Nuetral();
};

#endif

