#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	string s;
	cin >> t;

	for(int i=0; i<t; i++)
	{
		cin >> s;
		int vowels=0;
		for(int j=0; s[j] != '\0'; j++)
		{
			if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
			{
				vowels++;
			}
		}
		cout << vowels << endl;
	}
}
