#include "classes.h"
#include <iostream>

bool Class1::bar(int a, std::vector<float>& vec)
{
	return a > 0;
}
bool Class2::bar(int a, std::vector<float>& vec)
{
	return !vec.empty();
}
bool Class3::bar(int a, std::vector<float>& vec)
{
	int b = vec.size();
	return b == -1 * a;
}
int Class1::c_1_1()
{
	return 1;
}
float Class1::c_1_2()
{
	return 1.0 / 3 * 3;
}
void Class1::c_1_3()
{
	std::cout << "class 1" << std::endl;
}
int Class2::c_2_1()
{
	return 2;
}
float Class2::c_2_2()
{
	return 2.0 / 3 * 3;
}
void Class2::c_2_3()
{
	std::cout << "class 2" << std::endl;
}
int Class3::c_3_1()
{
	return 3;
}
float Class3::c_3_2()
{
	return 3.0 / 3 * 3;
}
void Class3::c_3_3()
{
	std::cout << "class 3" << std::endl;
}
