#include<iostream>
#include<string>

using namespace std;

int main()
{
	//remove duplicate

	string s;
	int d[26] = {0};

	getline(cin, s);
	for(int i=0; s[i] != '\0'; i++)
	{
		if(d[s[i]-'a'] == 0)
			cout << s[i];
		
		d[s[i]-'a']++;
	}
}
