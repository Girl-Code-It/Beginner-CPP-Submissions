#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string s;
	int t;
	cin >> t;
	cin.ignore(); //to remove the buffer idk what is buffer

	for(int i=0; i<t; i++)
	{	
		getline(cin, s);
		int len = s.length()-1;

		for(int j=len; j>=0; j--)
		{
			cout << s[j];
		}
		cout << endl;
	}
}
