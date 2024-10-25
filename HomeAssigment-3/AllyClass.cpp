#include "AllyClass.h"

class Ally
{
private:
        std::string name;
        int age;
        int numberOfFrindrs;
        Transformer* friends;
public:
        Ally()
	{
		age = 21;
		numberOfFriends = 0;
		name = "Nick"
	}
        Ally(std::string name, int age)
	{
		this->age = age;
		this->name = name;
		numberOfFriends = 0;
	}
	int getAge()
	{
		return age;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	void addAge()
	{
		age++;
	}

	std::string getName()
	{
		return name;
	}
	void setName(std::string name)
	{
		this->name = name;

	~Ally()
	{
		if(friends != NULL)
			delete[] friends;
	}

};
