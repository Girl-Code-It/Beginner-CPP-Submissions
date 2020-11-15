#include <iostream>
#include <string.h>
using namespace std;
int main() //in this we have to count the total no of vowels in a string .
{
	char s[1000];
	int i, j, ctr = 0, t;
	cin >> t;
	while (t--)
	{
		cin >> s;
		//so we are traversing the whole string and checking if it contains a, e, i, o, u.
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
				ctr++; //if yes then count it .
		}
		cout << ctr << endl; //after counting all the vowels print it after the loop.
		ctr = 0;			 //and also initialise count =0 again to count no of vowels in another string.
	}
}
