#ifndef ALLY_CLASS
#define ALLY_CLASS

#include <string>

class Ally
{
private:
	std::string name;
	int age;
	int numberOfFrindrs;
	Transformer* friends;
public:
	Ally();
	Ally(std::string name, int age);
	int getAge();
	void setAge(int age);
	void addAge();
	std::string getName();
	void setName(std::string name);
	~Ally();

};
	
#endif
