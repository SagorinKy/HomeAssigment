#ifndef TRANSFORMER_CLASS
#define TRANSFORMER_CLASS

#include <string>

class Transformer
{
private:
	std::string name;
	int fuel;
	const int tank;
	int ammunition
	Ally* friends;
	Armor armor;
public:
	Transfomer();
	Transformer(std::string name, int tank, int ammunition);
	~Transfformer();

	int getFuel();
	void setFuel(int fuel);
	int getTank();
	std::string getName();
	std::string setName(std::string name);


#endif
