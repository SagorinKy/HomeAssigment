/* Kirill Sagorin st128530@student.spbu.ru
Home Assigment 2a */

#include "headTa.h"
#include <iostream>
#include <string>

int main()
{
	std::string name;
	name = "binary.txt";

	char* arr;
	arr = ReadFileInArray(name);

	int n = GetFileSize(name);
	ChangeDirrection(arr, n);

	for(int i = 0; i < n; i++)
		std::cout<<arr[i] << " ";
}

