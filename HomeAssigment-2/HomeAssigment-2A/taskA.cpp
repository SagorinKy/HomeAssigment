/* Kirill Sagorin st128530@student.spbu.ru
Home Assigment 2a */

#include "headTa.h"

int main()
{
	std::string name;
	name = "binary.txt";

	char* arr;
	arr = ReadFileInArray(name);

	int n = GetFileSize(name);
	ChangeDirrection(arr, n);

	std::string outname =  "output.txt";
	WriteFile(arr, n, outname);
}

