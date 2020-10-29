#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main ()
{
	string a;
	getline(cin, a);
	for(int j = 0; j < a.size(); j++)
	{
		if((a[j-1] == ' ' && a[j] <= 122 && a[j] >= 97) || ((j == 0)  && a[j] <= 122 && a[j] >= 97))
		{
			a[j] -= 32;
			//cout << "000";
		}
	}
	puts(a.c_str());
}
