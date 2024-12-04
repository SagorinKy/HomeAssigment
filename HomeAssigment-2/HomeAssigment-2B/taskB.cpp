/* Kirill Sagorin st128530@student.spbu.ru
Home Assigment 2b */

#include <iostream>
#include "headTb.h"

int main()
{
	std::string name = "poland.txt";
	int size = FileSize(name);
	char* arr;
	arr = ReadFile(name);
	int result = Poland(arr, size);
	std::cout << result << std::endl;

	delete[] arr;
}
