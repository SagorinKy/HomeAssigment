#include <iostream>
#include "headTb.h"

int main()
{
	std::string name = "poland.txt";
//	std::cout<<0<<std::endl;
	int size = FileSize(name);
	std::cout<<size<<std::endl;
	char* arr;
	std::cout<<0<<std::endl;
	arr = ReadFile(name);
//	std::cout<<"jjjjjj"<< std::endl;
	for(int i = 0; i < size; i++)
		std::cout<<arr[i];
	std::cout<<std::endl;
	std::cout<<"poland() - begins"<<std::endl;
	int result = Poland(arr, size);
//std::cout<<2<<std::endl;
	std::cout << result << std::endl;

	delete[] arr;
}
