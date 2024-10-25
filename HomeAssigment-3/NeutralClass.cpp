#include "DecepticonClass.h"

class Nuetral: private Transformer
{
private:
	float kindness;
	int motorTemp;
public:
	Nuetral()
	{
		kindness = 0.6;
		motorTemp = 37;
	}

	int getTemp()
	{
		return motorTemp;
	}
	void setTemp(int motorTemp)
	{
		this->motorTemp = motorTemp;
	}

	float getKindness()
	{
		return kindness;
	}
	void setKindness(float kindness)
	{
		this->kindness = kindness;
	}

	bool isKind()
	{
		if(motorTemp >= 0.5)
			return true;
		else 
			return false;
	}

	~Nuetral()
	{ }
};

