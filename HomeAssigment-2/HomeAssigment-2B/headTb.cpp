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
		k += (int)arr[*num];
		(*num)++;
	}
	return k;
}

int Poland(const char* arr, int size)
{
	int n = CountInt(arr, size);
	int* stek = new int[n];
	int stekind = 0;
	for(int i = 0; i < size; i++)
	{
		if(arr[i] != '*' && arr[i] != '/' && arr[i] != '+' && arr[i] != '-' && arr[i] != ' ')
		{
			stek[stekind] = GetInt(arr, &i);
			stekind++;
		}
		else if(arr[i] != ' ')
		{
			if(arr[i] == '*')
			{
				stek[stekind - 2] *= stek[stekind - 1];
				stek[stekind - 1] = 0;
				stekind--;
			}
			if(arr[i] == '/')
                        {
				stek[stekind - 2] /= stek[stekind - 1];
				stek[stekind - 1] = 0;
				stekind--;
			}
			if(arr[i] == '+')
                        {
				stek[stekind - 2] += stek[stekind - 1];
				stek[stekind - 1] = 0;
				stekind--;
			} 
			if(arr[i] == '-')
                        {
                                stek[stekind - 2] -= stek[stekind - 1];
                                stek[stekind - 1] = 0;
                                stekind--;
                        }
		}
	}
	int res = stek[0];
	delete[] stek;
	return res;
}
		
	
