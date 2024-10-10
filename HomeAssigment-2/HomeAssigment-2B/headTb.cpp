#include "headTb.h"

char* ReadFile(std::string name)
{
	std::filesystem::path mypath = name;
	int n = std::filesystem::file_size(mypath) - 1;
	char* arr = new char(n);

	std::ifstream file;
	file.open(mypath, std::ios::in | std::ios::binary);
	file.read(arr, n);

	file.close();
	return arr;
}

int FileSize(std::string name)
{
	return (int)std::filesystem::file_size((std::filesystem::path) name) - 1;
}

int CountInt(char* arr, int n)
{
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == ' ')
			k++;
		else if(arr[i] == '*' || arr[i] == '/' || arr[i] == '+' || arr[i] == '-')
			k--;
	}
	return k;
}

int GetInt(char* arr, int num)
{
	int k = 0;
	while(arr[num] != ' ')
	{
		k *= 10;
		k += arr[num];
		num++;
	}
	return k;
}
		
