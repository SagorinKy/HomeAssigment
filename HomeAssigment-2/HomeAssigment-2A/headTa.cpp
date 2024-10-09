/* Kirill Sagorin st128530@student.spbu.ru
Home Assignment 2a */

#include "headTa.h"

void ChangeDirrection(char* array, int size)
{
	char a;
	for(int i = 0; i < size - 1; i++)
	{
		a = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = a;
	}
}
