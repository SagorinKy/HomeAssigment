/* Kirill Sagorin st128530@student.spbu.ru
third project */
#ifndef ARMOR_CLASS
#define ARMOR_CLASS

class Armor

{
private:
	int durability;
	int capacity;
public:
	Armor();
	Armor(int capacity, int durability);
	int getDur();
	void setDur(int durability);
	int getCap();
	void setCap(int capacity);
	~Armor();

};

#endif
