#include <iostream>
#include "headTb.h"

int main()
{
	std::string name = "poland.txt";
	int size = FileSize(name);
	char* arr = new char[size];
//std::cout<<0;
	arr = ReadFile(name);
//std::cout<<1;
	int result = Poland(arr, size);
//std::cout<<2<<std::endl;
	std::cout << result << std::endl;

	delete[] arr;
}
