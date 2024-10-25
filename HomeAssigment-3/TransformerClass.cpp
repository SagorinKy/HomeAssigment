#include "TransformerClass.h"

class Transformer
{
private:
        std::string name;
        int fuel;
        int tank;
        int ammunition;
	Ally* friends;
	Armor armor;
public:
        Transfomer()
	{
		this->fuel = 1000;
		this->tank = 1000;
	}
        Transformer(std::string name, int tank, int ammunition, int armorCap, int armorDur)
	{
		this->name = name;
		this->tank = tank;
		this->fuel = tank;
		this->ammunition = ammunition;
		this->armor.Armor(armorCap, armorDur);
	}

	int getFuel()
	{
		return fuel;
	}
	void setFuel(int fuel)
	{
		if(fuel < tank)
			this->fuel = fuel;
		else
			this->fuel = tank;
	}

	int getTank()
	{
		return tank;
	}

	std::string getName()
	{
		return name;
	}
	void setName(std::string name)
	{
		this->name = name;
	}
	bool isOn()
	{
		return true;
	}

	~Transformer()
	{
		if (friends != NULL)
			delete[] friends;
	}
};

