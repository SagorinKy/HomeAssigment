#include "ArmorClass.h"

class Armor

{
private:
	int durability;
	int capacity;
public:
	Armor()
	{
		durability = 200;
		capacity = 100;
	}
	Armor(int capacity, int durability)
	{
		this->capacity = capacity;
		this->durability = durability;
	}

	int getDur()
	{
		return durability;
	}
	void setDur(int durability)
	{
		this->durability = durability;
	}
	int getCap()
        {
		return capacity;
        }
	void setCap(int capacity)
        {
		this->capacity = capacity;
        }
	~Armor();

};

