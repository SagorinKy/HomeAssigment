/* Kirill Sagorin st128530@student.spbu.ru
Home Assigment 2b */

#include "headTb.h"
#include <iostream>

char* ReadFile(std::string name)
{
	std::filesystem::path mypath = name;
	int n = std::filesystem::file_size(mypath) - 1;
	char* arr = new char[n];
	std::ifstream file;
	file.open(mypath, std::ios::in | std::ios::binary);
	file.read(arr, n);
	file.close();
	return arr;
}

int FileSize(std::string name)
{
	return (int)std::filesystem::file_size(name) - 1;
}

int CountInt(const char* arr, int n)
{
	int k = 1;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == ' ')
			k++;
		else if(arr[i] == '*' || arr[i] == '/' || arr[i] == '+' || arr[i] == '-')
			k--;
	}
	return k;       
}

int GetInt(const char* arr, int* num)
{
	int k = 0;
	while(arr[*num] != ' ')
	{
		k *= 10;
		k += arr[*num] - '0';
		(*num)++;
	}
	return k;
}

float Poland(const char* arr, int size)
{
	int n = CountInt(arr, size);
	float* stack = new float[n];
	int stackind = 0;
	for(int i = 0; i < size; i++)
	{
		if(arr[i] != '*' && arr[i] != '/' && arr[i] != '+' && arr[i] != '-' && arr[i] != ' ')
		{
			stack[stackind] = static_cast<float>(GetInt(arr, &i));
			stackind++;
		}
		else if(arr[i] != ' ')
		{
			if(arr[i] == '*')
			{
				stack[stackind - 2] *= stack[stackind - 1];
				stack[stackind - 1] = 0;
				stackind--;
			}
			if(arr[i] == '/')
                        {
				stack[stackind - 2] /= stack[stackind - 1];
				stack[stackind - 1] = 0;
				stackind--;
			}
			if(arr[i] == '+')
                        {
				stack[stackind - 2] += stack[stackind - 1];
				stack[stackind - 1] = 0;
				stackind--;
			} 
			if(arr[i] == '-')
                        {
                                stack[stackind - 2] -= stack[stackind - 1];
                                stack[stackind - 1] = 0;
                                stackind--;
                        }
		}
	}
	float res = stack[0];
	delete[] stack;
	return res;
}
		
	
