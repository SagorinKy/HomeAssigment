/* Kirill Sagorin st128530@student.spbu.ru
first test project */

#include <iostream>
#include "utiltity.h"

using namespace std;

int main()
{
	printhell();
	string s;
	while(true)
	{
		cout << "insert your names or type \"exit\": ";
		cin >> s;
		if(s!="exit")
			printhell(s);
		else 
			break;
	}
	cout << "goodbye!" << endl;
	return 0;
}
