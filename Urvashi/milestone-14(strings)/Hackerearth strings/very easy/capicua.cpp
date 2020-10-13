//question:- In this program we have to simply find the reverse of a no and have to check the no is palindrome
// or not, if its a palindrome then print yes else no.

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[100000];
	long long int t;
	cin >> t;
	while (t--)
	{
		int x = 0;
		cin >> s;
		for (int i = 0; i < strlen(s) / 2; i++) //so for it we have run a for loop from 0 to half of the length of the string
		{
			//here we are checking that the starting and the last character tof the string arre equal or not .
			if (s[i] != s[strlen(s) - i - 1])
				x = 1;
		}
		if (x != 1) //if equal printing yes.
			cout << "YES" << endl;
		else
			cout << "NO" << endl; //else printing no
	}
}
