/* Kirill Sagorin st128530@student.spbu.ru
Home Assigment 2a */

#include "headTa.h"
#include <iostream>

int main()
{
	char* arr;
	arr = new char[5];
	arr[0] = 'z'; arr[1] = 'x'; arr[2] = 'c'; arr[3] = 'v'; arr[4] = 'b';
	ChangeDirrection(arr, 5);
	for(int i = 0; i < 5; i++)
		std::cout<<arr[i]<<" ";
}
